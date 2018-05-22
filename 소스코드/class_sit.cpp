#include "class_sit.h"
#include "ui_class_sit.h"
#include "name_set_form.h"
#include <cstdlib>
#include <ctime>

Class_sit::Class_sit(QWidget *parent) :QWidget(parent),ui(new Ui::Class_sit)
{
    ui->setupUi(this);

    Button[0] = ui->Sit_1;
    Button[1] = ui->Sit_2;
    Button[2] = ui->Sit_3;
    Button[3] = ui->Sit_4;
    Button[4] = ui->Sit_5;
    Button[5] = ui->Sit_6;
    Button[6] = ui->Sit_7;
    Button[7] = ui->Sit_8;
    Button[8] = ui->Sit_9;
    Button[9] = ui->Sit_10;
    Button[10] = ui->Sit_11;
    Button[11] = ui->Sit_12;
    Button[12] = ui->Sit_13;
    Button[13] = ui->Sit_14;
    Button[14] = ui->Sit_15;
    Button[15] = ui->Sit_16;
    Button[16] = ui->Sit_17;
    Button[17] = ui->Sit_18;
    Button[18] = ui->Sit_19;
    Button[19] = ui->Sit_20;


}

Class_sit::~Class_sit()
{
    delete ui;
}

int List_sit[20] = {0,}; // 중복검사 리스트 or 자리 배치

bool name_num = false;
bool name_set_flog = false;

void Class_sit::on_sit_set_BT_clicked()
{
    for(int i=0;i<20;i++)
        List_sit[i] = 0;

    srand((unsigned int)time(NULL));

    for(int i=0;i<20;i++){

        hi:

        int m = rand() % 20 + 1; //랜덤 번호 받아옴

        for(int j=0;j<20;j++){
            if(List_sit[j] == 0){
                break;
            } // 리스트가 비어있는 경우 탈출

            if(List_sit[j] == m){
                goto hi;
            } // 중복인 경우 반복
        }

        List_sit[i] = m;

        if(name_num)
            Button[i]->setText(Class_std_name[List_sit[i]-1]);
           else{
            Button[i]->setText(QString::number(m)+" 번");
        }
    }
}

void Class_sit::on_name_num_BT_clicked()
{
    if(List_sit[0]==0 && List_sit[1]==0)
       return;

    if(name_num){
        for(int i=0;i<20;i++){
            Button[i]->setText(QString::number(List_sit[i])+" 번");
        }
        ui->name_num_BT->setText("이름으로 변경");
        name_num = false;
    }
    else{
        for(int i=0;i<20;i++){
            Button[i]->setText(Class_std_name[List_sit[i]-1]);
        }
        ui->name_num_BT->setText("숫자로 변경");
        name_num = true;
    }
}

void Class_sit::on_name_set_clicked()
{
    if(!name_set_flog){
        QWidget * name_set = new name_set_form(this,Class_std_name,&name_set_flog);
        name_set->show();
        name_set_flog = true;
    }
    else{

    }
}
