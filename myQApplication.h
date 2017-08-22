#ifndef MYQAPPLICATION_H
#define MYQAPPLICATION_H

#include <QApplication>
#include <QTimer>
#include "widget.h"

class myQApplication : public QApplication
{
    Q_OBJECT
public:
    explicit myQApplication(int & argc, char ** argv);

    bool notify(QObject *, QEvent *);
    void setUpdate(Widget* widget);

private:
    QTimer *timer;

};

#endif // MYQAPPLICATION_H
