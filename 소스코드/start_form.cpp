#include "start_form.h"
#include "ui_start_form.h"

Start_Form::Start_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Start_Form)
{
    ui->setupUi(this);
}

Start_Form::~Start_Form()
{
    delete ui;
}
