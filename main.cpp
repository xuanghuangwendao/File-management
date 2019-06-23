#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
	string title = "文档统计管理系统";
	w.setWindowTitle(QString::fromLocal8Bit(title.data()));
    w.show();
    return a.exec();
}
