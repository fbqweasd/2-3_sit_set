#ifndef START_FORM_H
#define START_FORM_H

#include <QWidget>

namespace Ui {
class Start_Form;
}

class Start_Form : public QWidget
{
    Q_OBJECT

public:
    explicit Start_Form(QWidget *parent = 0);
    ~Start_Form();

private:
    Ui::Start_Form *ui;
};

#endif // START_FORM_H
