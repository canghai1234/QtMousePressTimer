#include "myQApplication.h"

myQApplication::myQApplication(int &argc, char **argv) :  QApplication(argc,argv)
{
    timer = new QTimer();
    timer->setInterval(1000);
    timer->start();
}

bool myQApplication::notify(QObject *obj, QEvent *e)
{
    if(e->type() == QEvent::MouseButtonPress)
    {
        timer->stop();
    }
    else
    {
        if (!timer->isActive())
        {
            timer->start();
        }
    }
    return QApplication::notify(obj,e);
}

void myQApplication::setUpdate(Widget* widget)
{
    connect(timer,SIGNAL(timeout()),widget,SLOT(updateTime()),Qt::UniqueConnection);
}
