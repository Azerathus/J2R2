#ifndef LAUNCHBOX_H
#define LAUNCHBOX_H

#include <QDialog>

namespace Ui {
    class LaunchBox;
}

class LaunchBox : public QDialog
{
    Q_OBJECT

    public:
        explicit LaunchBox(QWidget *parent = 0);
        ~LaunchBox();

    signals:
        void sgnGMModeChoosen();
        void sgnPlayerModeChoosen();

    private slots:
        void on_pbnGM_clicked();

        void on_pbnPlayer_clicked();

private:
        Ui::LaunchBox *ui;
};

#endif // LAUNCHBOX_H
