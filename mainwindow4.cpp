#include "mainwindow4.h"

mainwindow4::mainwindow4(QWidget *parent)
	: QWidget(parent)
{
	setWindowIcon(QIcon("my.ico"));
	QPalette palette(this->palette());

	palette.setBrush(backgroundRole(), QPixmap("background.jpg"));
	this->setPalette(palette);

	ui.setupUi(this);
}

mainwindow4::~mainwindow4()
{
}
void mainwindow4::slot1() {

	Widget *main_ui = new Widget;
	string title = "文档统计管理系统";
	main_ui->setWindowTitle(QString::fromLocal8Bit(title.data()));
	main_ui->show();
	delete this;
}

void mainwindow4::slot2() {

	
	QString root_name = ui.root_name->toPlainText();
	QString key_word = ui.key_word->toPlainText();
	string root = root_name.toStdString();
	string key = key_word.toStdString();
	root_path = key;
	if (root_path[0] == 'f'&&root_path[1] == 'i') {
		root_path = root_path.substr(8, root_path.size() - 8);
		string temp = root_path;
		root_path = "";
		for (int i = 0; i < temp.size(); i++) {
			if (temp[i] == '/') {
				root_path += "\\";

			}
			else {
				root_path += temp[i];
			}
		}
	}
	vector<File> vec;
	cout << root << endl;
	getAllFiles(root, key, vec, 4);
	string output;
	for (File file : vec) {
		output += (file.name_path + "\n");
	}
	output += (root + "文档归类完毕。");
	ui.textBrowser->setText(QString::fromLocal8Bit(output.data()));
	ui.textBrowser->show();
	vec.clear();
}