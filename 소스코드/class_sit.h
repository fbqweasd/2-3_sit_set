#ifndef CLASS_SIT_H
#define CLASS_SIT_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class Class_sit;
}

class Class_sit : public QWidget
{
    Q_OBJECT

public:
    explicit Class_sit(QWidget *parent = 0);
    ~Class_sit();

    QString Class_std_name[20] = {
        "김시아","이민경","최가현","최지은","구민성","김동현","김민기","김성훈","박광복","배수한",
        "신상호","안우진","예두해","유경찬","이중무","장민석","정유한","조남현","조석호","주민기"
    };

    QPushButton * Button[20];

private slots:
    void on_sit_set_BT_clicked();

    void on_name_num_BT_clicked();

    void on_name_set_clicked();

private:
    Ui::Class_sit *ui;
};

#endif // CLASS_SIT_H
