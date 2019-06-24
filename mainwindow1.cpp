#include "mainwindow1.h"
#include "ui_mainwindow1.h"

MainWindow1::MainWindow1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow1)
{
	setWindowIcon(QIcon("my.ico"));
	string title = "�ĵ�ͳ�ƹ���ϵͳ";
	setWindowTitle(QString::fromLocal8Bit(title.data()));
	QPalette palette(this->palette());
	palette.setBrush(backgroundRole(), QPixmap("background.jpg"));
	this->setPalette(palette);

    ui->setupUi(this);

}

MainWindow1::~MainWindow1()
{
    delete ui;
}

void MainWindow1::on_pushButton_clicked()
{
    Widget *main_ui = new Widget;
	string title = "�ĵ�ͳ�ƹ���ϵͳ";
	main_ui->setWindowTitle(QString::fromLocal8Bit(title.data()));
    main_ui->show();
    delete this;

}

void MainWindow1::on_pushButton_2_clicked()
{
   QString root_name = ui->root_name->toPlainText();
   QString key_word = ui->key_word->toPlainText();
   string root = root_name.toStdString();
   string key = key_word.toStdString();
   vector<File> vec;
   cout<<root<<endl;
   getAllFiles(root,key,vec,1);
   string output;
   for(File file:vec){
       output+=(file.name_path + "\n");
   }
   output += (root + "��ѯ��ϡ�");
    ui->textBrowser->setText(QString::fromLocal8Bit(output.data()));
    ui->textBrowser->show();
	vec.clear();
}
