#include "class_sit.h"
#include "ui_class_sit.h"
#include <cstdlib>
#include <ctime>

Class_sit::Class_sit(QWidget *parent) :QWidget(parent),ui(new Ui::Class_sit)
{
    ui->setupUi(this);
}

Class_sit::~Class_sit()
{
    delete ui;
}

int List_sit[20] = {0,}; // 중복검사 리스트 or 자리 배치

bool name_num = false;


void Class_sit::on_sit_set_BT_clicked()
{
    QPushButton * Button[20] = {
      ui->Sit_1,ui->Sit_2,ui->Sit_3,ui->Sit_4,ui->Sit_5,ui->Sit_6,ui->Sit_7,ui->Sit_8,ui->Sit_9,ui->Sit_10,
      ui->Sit_11,ui->Sit_12,ui->Sit_13,ui->Sit_14,ui->Sit_15,ui->Sit_16,ui->Sit_17,ui->Sit_18,ui->Sit_19,ui->Sit_20
    };

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
    QPushButton * Button[20] = {
      ui->Sit_1,ui->Sit_2,ui->Sit_3,ui->Sit_4,ui->Sit_5,ui->Sit_6,ui->Sit_7,ui->Sit_8,ui->Sit_9,ui->Sit_10,
      ui->Sit_11,ui->Sit_12,ui->Sit_13,ui->Sit_14,ui->Sit_15,ui->Sit_16,ui->Sit_17,ui->Sit_18,ui->Sit_19,ui->Sit_20
    };

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
