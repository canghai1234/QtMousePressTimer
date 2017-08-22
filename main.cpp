#include "widget.h"
#include "myQApplication.h"

int main(int argc, char *argv[])
{
    myQApplication a(argc, argv);

    Widget w;
    w.show();

    a.setUpdate(&w);//connect signal and slot

    return a.exec();
}
