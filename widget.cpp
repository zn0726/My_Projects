#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QSqlTableModel>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QSqlTableModel *model = new QSqlTableModel();
    model = new QSqlTableModel(this);
    model->setTable("student");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select(); //选取整个表的所有行

    //不显示name属性列,如果这时添加记录，则该属性的值添加不上
    // model->removeColumn(1);

    ui->tableView->setModel(model);
    //qDebug()<<ui->tableView->model()->rowCount();
}

Widget::~Widget()
{
    delete ui;
}
