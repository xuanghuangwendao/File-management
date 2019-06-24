#include "mainwindow2.h"
#include "ui_mainwindow2.h"

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
	string title = "�ĵ�ͳ�ƹ���ϵͳ";
	setWindowTitle(QString::fromLocal8Bit(title.data()));

	QPalette palette(this->palette());

	palette.setBrush(backgroundRole(), QPixmap("background.jpg"));
	this->setPalette(palette);

    ui->setupUi(this);
}

MainWindow2::~MainWindow2()
{
    delete ui;
}

void MainWindow2::on_pushButton_clicked()
{
	setWindowIcon(QIcon("my.ico"));
    Widget *main_ui = new Widget;
	string title = "�ĵ�ͳ�ƹ���ϵͳ";
	main_ui->setWindowTitle(QString::fromLocal8Bit(title.data()));
    main_ui->show();
    delete this;
}

void MainWindow2::func() {
	QString root_name = ui->root_name->toPlainText();
	QString key_word = ui->key_word->toPlainText();
	string root = root_name.toStdString();
	string key = key_word.toStdString();
	vector<File> vec;
	cout << root << endl;
	getAllFiles(root, key, vec, 2);
	string output;
	int all_len = 0;
	int all_word = 0;
	output += ("�����ļ�" +  to_string(vec.size()) + "��" + "\n");
	for (File file : vec) {
		all_len += file.len;
		all_word += file.word;
	}
	output += ("����" + to_string(all_len) + "�д���" + "\n");
	output += ("����" + to_string(all_word) + "�ֽ�" + "\n");
	ui->textBrowser->setText(QString::fromLocal8Bit(output.data()));
	ui->textBrowser->show();

	vec.clear();
}