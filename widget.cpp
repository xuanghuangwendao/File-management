#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
	string title = "文档统计管理系统";
	setWindowTitle(QString::fromLocal8Bit(title.data()));
	setWindowIcon(QIcon("my.ico"));
	QPalette palette(this->palette());

	palette.setBrush(backgroundRole(), QPixmap("background.jpg"));
	this->setPalette(palette);

    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    MainWindow1 *fun1 = new MainWindow1;
	string title = "文档统计管理系统";
	fun1->setWindowTitle(QString::fromLocal8Bit(title.data()));
    fun1->show();
    this->close();
}

void Widget::on_pushButton_2_clicked()
{
    MainWindow2 *fun2 = new MainWindow2;
	string title = "文档统计管理系统";
	fun2->setWindowTitle(QString::fromLocal8Bit(title.data()));
    fun2->show();
    this->close();
}

void Widget::on_pushButton_3_clicked()
{
    MainWindow3 *fun3 = new MainWindow3;
	string title = "文档统计管理系统";
	fun3->setWindowTitle(QString::fromLocal8Bit(title.data()));
    fun3->show();
    this->close();
}

void Widget::on_pushButton_4_clicked()
{
    delete this;
}


void Widget::slot1() {
	mainwindow4 *fun4 = new mainwindow4;
	string title = "文档统计管理系统";
	fun4->setWindowTitle(QString::fromLocal8Bit(title.data()));
	fun4->show();
	this->close();


}