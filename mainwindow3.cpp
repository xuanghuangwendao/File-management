#include "mainwindow3.h"
#include "ui_mainwindow3.h"

MainWindow3::MainWindow3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow3)
{
    ui->setupUi(this);

}

MainWindow3::~MainWindow3()
{
    delete ui;
}

void MainWindow3::on_pushButton_clicked()
{
    Widget *main_ui = new Widget;
	string title = "�ĵ�ͳ�ƹ���ϵͳ";
	main_ui->setWindowTitle(QString::fromLocal8Bit(title.data()));
    main_ui->show();
    delete this;
}

void MainWindow3::func() {
	QString root_name = ui->root_name->toPlainText();
	QString key_word = ui->key_word->toPlainText();
	string root = root_name.toStdString();
	string key = key_word.toStdString();
	vector<File> vec;
	cout << root << endl;
	getAllFiles(root, key, vec, 3);
	string output;
	for (File file : vec) {
		output += (file.name_path + "\n");
	}
	output += (root + "��ѯ��ϡ�");
	ui->textBrowser->setText(QString::fromLocal8Bit(output.data()));
	ui->textBrowser->show();

	vec.clear();

}