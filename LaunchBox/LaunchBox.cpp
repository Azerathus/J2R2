#include "LaunchBox.h"
#include "ui_LaunchBox.h"

LaunchBox::LaunchBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LaunchBox)
{
    ui->setupUi(this);
}

LaunchBox::~LaunchBox()
{
    delete ui;
}


void LaunchBox::on_pbnGM_clicked()
{
    emit sgnGMModeChoosen();
    close();
}

void LaunchBox::on_pbnPlayer_clicked()
{
    emit sgnPlayerModeChoosen();
    close();
}
