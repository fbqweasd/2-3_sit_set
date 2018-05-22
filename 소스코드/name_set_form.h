#ifndef NAME_SET_FORM_H
#define NAME_SET_FORM_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>

namespace Ui {
class name_set_form;
}

class name_set_form : public QWidget
{
    Q_OBJECT

public:
    name_set_form(QWidget *parent,QString * class_name,bool * flog);
    ~name_set_form();

     QLabel * num_labal[20];
     QLineEdit * name_line[20];

private slots:
    void on_Setting_Bt_clicked();

    void on_can_Bt_clicked();

private:
    Ui::name_set_form *ui;
};

#endif // NAME_SET_FORM_H
