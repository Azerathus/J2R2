#ifndef MAINFRAMEWORK_H
#define MAINFRAMEWORK_H

#include <QObject>

#include "LaunchBox/LaunchBox.h"

class MainFramework : public QObject
{
    Q_OBJECT

    public:
        explicit MainFramework(QObject *parent = 0);
        ~MainFramework();

        void Start();

    signals:

    public slots:
        void sltStartGMMode();
        void sltStartPlayerMode();

    private:
        LaunchBox *m_lbxMain;
};

#endif // MAINFRAMEWORK_H
