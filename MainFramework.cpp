#include "MainFramework.h"

MainFramework::MainFramework(QObject *parent) :
    QObject(parent)
{
    m_lbxMain = new LaunchBox;
}

MainFramework::~MainFramework()
{
    delete m_lbxMain;
}


void MainFramework::Start()
{
    m_lbxMain->show();
    connect(m_lbxMain, SIGNAL(sgnGMModeChoosen()), this, SLOT(sltStartGMMode()));
    connect(m_lbxMain, SIGNAL(sgnPlayerModeChoosen()), this, SLOT(sltStartPlayerMode()));
}


void MainFramework::sltStartGMMode()
{

}

void MainFramework::sltStartPlayerMode()
{

}
