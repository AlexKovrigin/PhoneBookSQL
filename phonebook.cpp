#include "phonebook.h"
#include "phonebook.h"
#include "ui_phonebook.h"
#include <QMessageBox>
#include <create.h>
#include <QSqlDatabase>


class PixmapLabel : public QLabel{
public:
    explicit PixmapLabel(QWidget* parent=nullptr):QLabel(parent){
        //By default, this class scales the pixmap according to the label's size
        setScaledContents(true);
    }
    ~PixmapLabel(){}

protected:
    void paintEvent(QPaintEvent* event);
private:
    //QImage to cache the pixmap()
    //to avoid constructing a new QImage on every scale operation
    QImage cachedImage;
    //used to cache the last scaled pixmap
    //to avoid calling scale again when the size is still at the same
    QPixmap scaledPixmap;
    //key for the currently cached QImage and QPixmap
    //used to make sure the label was not set to another QPixmap
    qint64 cacheKey{0};
};

//based on the implementation of QLabel::paintEvent
void PixmapLabel::paintEvent(QPaintEvent *event){
    //if this is assigned to a pixmap
    if(pixmap() && !pixmap()->isNull()){
        QStyle* style= PixmapLabel::style();
        QPainter painter(this);
        drawFrame(&painter);
        QRect cr = contentsRect();
        cr.adjust(margin(), margin(), -margin(), -margin());
        int align= QStyle::visualAlignment(layoutDirection(), alignment());
        QPixmap pix;
        if(hasScaledContents()){ //if scaling is enabled
            QSize scaledSize= cr.size() * devicePixelRatioF();
            //if scaledPixmap is invalid
            if(scaledPixmap.isNull() || scaledPixmap.size()!=scaledSize
                    || pixmap()->cacheKey()!=cacheKey){
                //if cachedImage is also invalid
                if(pixmap()->cacheKey() != cacheKey){
                    //reconstruct cachedImage
                    cachedImage= pixmap()->toImage();
                }
                QImage scaledImage= cachedImage.scaled(
                            scaledSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
                scaledPixmap= QPixmap::fromImage(scaledImage);
                scaledPixmap.setDevicePixelRatio(devicePixelRatioF());
            }
            pix= scaledPixmap;
        } else { // no scaling, Just use pixmap()
            pix= *pixmap();
        }
        QStyleOption opt;
        opt.initFrom(this);
        if(!isEnabled())
            pix= style->generatedIconPixmap(QIcon::Disabled, pix, &opt);
        style->drawItemPixmap(&painter, cr, align, pix);
    } else { //otherwise (if the label is not assigned to a pixmap)
        //call base paintEvent
        QLabel::paintEvent(event);
    }
}





/*/////////////////////////////////////////////////////////////////////////////////////////
                                            ^
                                            |
                       The Border of boring code and code made by Шурик


/////////////////////////////////////////////////////////////////////////////////////////*/



void PhoneBook::clearT()
{
    int r = ui->tablePhones->rowCount();
    for(int i = 0; i < r; i++)
        ui->tablePhones->removeRow(0);
}
void PhoneBook::update()
{
    clearT();
    QSqlQuery query;
    query.exec("select name, email, phone, birthday, pix, id from book");
    photoarray.clear();
    ids.clear();
    while (query.next())
    {
        //int id = query.value(0).toInt();
        int row = ui->tablePhones->currentRow();
        ui->tablePhones->insertRow(row + 1); // ���������
        ui->tablePhones->setItem(row + 1, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tablePhones->setItem(row + 1, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tablePhones->setItem(row + 1, 2, new QTableWidgetItem(query.value(2).toString()));
        ui->tablePhones->setItem(row + 1, 3, new QTableWidgetItem(query.value(3).toString()));
        photoarray.push_back(query.value(4).toByteArray());
        ids.push_back(query.value(0).toInt());
    }
}

PhoneBook::PhoneBook(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PhoneBook)
{
    ui->setupUi(this);
    //TODO default.txt, авто-загрузка при запуске программы и авто-сохранение при выходе
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC3");
    db.setDatabaseName("DRIVER={SQL Server};Server=.;Database=AlexBD;Uid=alex;Port=1433;Pwd=hydrogen;WSID=.");
    db.open(); // �����������
    update();
}

PhoneBook::~PhoneBook()
{
    db.close();
    delete ui;
}

void PhoneBook::importPB()
{
    /*Import y;
    y.exec();
    if(!y.success)
        return;*/
    // TODO проверить работу программы на 1000000 элементах.

}
void PhoneBook::on_btnAdd_clicked()
{
    Create z; // ������
    z.exec();
    if(!(z.success))
        return;
    if(z.path == "")
        z.path = ":/man.ico";
    QFile mFile(z.path);
    if(!mFile.open(QFile::ReadOnly))
        return;
    QByteArray in;
    in = mFile.readAll();
    mFile.close();
    QSqlQuery query; // ������
    //QPixmap s(i);
    //s.loadFromData(i, "png");
    query.prepare("insert into book(name, phone, email, birthday, pix) values('"+ z.fio + "', '"+ z.phone + "','"+ z.email + "','"+ z.birthday + "', :image)");
    //query.prepare("insert into eduimage(image) values (:image)");
    query.bindValue(":image", in, QSql::In | QSql::Binary);
    query.exec();
    // select @@IDENTITY
    update();
    //ui->tablePhones->clear();
}

void PhoneBook::on_btnDel_clicked()
{
    int row;
    if(ui->tablePhones->currentRow() == -1)
        row = ui->tablePhones->rowCount() - 1;
    else
        row = ui->tablePhones->currentRow();
    QSqlQuery query;
    query.prepare("delete from book where id = :num"); // Help! Not working!!! :(
    query.bindValue(":num", ids[row - 1], QSql::Out);
    query.exec();
    update();
}


void PhoneBook::on_txtSearch_textChanged()
{ // TODO пересмотреть поиск, быстрая работа
    //importPB(path);
    ui->tablePhones->clearSelection();
    QString search;
    search = ui->txtSearch->toPlainText();
    if(search == "")
        return;
    int row = ui->tablePhones->rowCount();
    //QString* l = new string[row];
    ui->tablePhones->setSelectionMode(QAbstractItemView::MultiSelection);
    for(int i = 0; i < row; i++)
    {
        for (int j = 0; j < ui->tablePhones->columnCount(); j++)
        {
            if (ui->tablePhones->item(i,j)->text().contains(search, Qt::CaseInsensitive)) {
                ui->tablePhones->selectRow(i);
                break;
            }
        }
    }
    ui->tablePhones->setSelectionMode(QAbstractItemView::SingleSelection);
}

void PhoneBook::on_actionImport_triggered()
{
    importPB();
}

void PhoneBook::on_actionExport_triggered()
{}

void PhoneBook::on_actionAbout_us_triggered()
{
    About a;
    a.exec();
}

void PhoneBook::on_btnDelAll_clicked()
{
    QSqlQuery query;
    query.exec("delete FROM [AlexBD].[dbo].[book]"); // �������
    update();

}

void PhoneBook::on_pushButton_clicked()
{
    lbl = new PixmapLabel();
    lbl->setPixmap(pix);
    //lbl->setAlignment(Qt::AlignCenter);
    //lbl->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    lbl->setMinimumSize(320, 240);
    lbl->show();
}

void PhoneBook::on_tablePhones_clicked(const QModelIndex &index)
{
    int i = index.row();
    //pix.load(photoarray[i]);
    //QPixmap pix2;
    pix.loadFromData(photoarray[i]);
    ui->label_2->setPixmap(pix);
 //   ui->label_2->setBakkgroundRole(QPalette::Base); // Specialy made errors
    ui->label_2->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    ui->label_2->setScaledContents(true);
}
