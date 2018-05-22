#include "name_set_form.h"
#include "ui_name_set_form.h"
#include <QLabel>
#include <QString>
#include <QDebug>

bool * flog_bt;
QString * class_name_set;

name_set_form::name_set_form(QWidget *parent,QString * class_name,bool * flog) :
    QWidget(),
    ui(new Ui::name_set_form)
{
    ui->setupUi(this);

    flog_bt = flog; // flog 포인터 연결
    class_name_set = class_name;

    /* 번호 라벨 포인터로 연결 */

    num_labal[0] = ui->num_labal;
    num_labal[1] = ui->num_labal_2;
    num_labal[2] = ui->num_labal_3;
    num_labal[3] = ui->num_labal_4;
    num_labal[4] = ui->num_labal_5;
    num_labal[5] = ui->num_labal_6;
    num_labal[6] = ui->num_labal_7;
    num_labal[7] = ui->num_labal_8;
    num_labal[8] = ui->num_labal_9;
    num_labal[9] = ui->num_labal_10;
    num_labal[10] = ui->num_labal_11;
    num_labal[11] = ui->num_labal_12;
    num_labal[12] = ui->num_labal_13;
    num_labal[13] = ui->num_labal_14;
    num_labal[14] = ui->num_labal_15;
    num_labal[15] = ui->num_labal_16;
    num_labal[16] = ui->num_labal_17;
    num_labal[17] = ui->num_labal_18;
    num_labal[18] = ui->num_labal_19;
    num_labal[19] = ui->num_labal_20;

    /* 이름 입력 칸 포인터로 연결 */

    name_line[0] = ui->name_text;
    name_line[1] = ui->name_text_2;
    name_line[2] = ui->name_text_3;
    name_line[3] = ui->name_text_4;
    name_line[4] = ui->name_text_5;
    name_line[5] = ui->name_text_6;
    name_line[6] = ui->name_text_7;
    name_line[7] = ui->name_text_8;
    name_line[8] = ui->name_text_9;
    name_line[9] = ui->name_text_10;
    name_line[10] = ui->name_text_11;
    name_line[11] = ui->name_text_12;
    name_line[12] = ui->name_text_13;
    name_line[13] = ui->name_text_14;
    name_line[14] = ui->name_text_15;
    name_line[15] = ui->name_text_16;
    name_line[16] = ui->name_text_17;
    name_line[17] = ui->name_text_18;
    name_line[18] = ui->name_text_19;
    name_line[19] = ui->name_text_20;

    for(int i=0;i<20;i++){
        num_labal[i]->setText(QString::number(i+1)+"번 : ");
    }
}

name_set_form::~name_set_form()
{
    delete ui;
}

void name_set_form::on_Setting_Bt_clicked()
{
   for(int i=0;i<20;i++){
       class_name_set[i] = name_line[i]->text();
       qDebug() << i << "번 : "<<class_name_set;
   }
    *flog_bt = false;
    delete this;
}

void name_set_form::on_can_Bt_clicked()
{
    *flog_bt = false;
    delete this;
}
