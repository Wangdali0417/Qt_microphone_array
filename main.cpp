/*
// Design unit: Sound Field Acquisition - 60 Channels
//            :
// File name  : main.cpp
//            :
// Description: Reads two FIFO(FT232H) data from Hardware and create binary files,
//            : Automatically detects the channels connected to Hardware,
//            : Creates binary files of pdm data recorded for each detected channel
//
// Author     : Kishan Pethani
//            : Master Thesis Student, DFKI GmbH Kaiserslautern, Germany
//            : MSc. EMECS Student, Technical University of Kaiserslautern, Germany
//            : Kishan_Viththalbhai.Pethani@dfki.uni-kl.de
//
// Revision   : version 1.0
//
// All rights reserved by DFKI GmbH
*/

#include <QCoreApplication>
#include <QtWidgets/QApplication>
#include <windows.h>
#include "ftd2xx.h"
#include "widget.h"



//------Main function starts from here---------
int main(int argc, char *argv[])
{
    //
    /*QCoreApplication a(argc, argv);
    QThread workerThread;
    worker *w = new worker();
    w->moveToThread(&workerThread);
    QObject::connect(&workerThread, SIGNAL(finished()), w, SLOT(deleteLater()));
    QObject::connect(&workerThread, SIGNAL(started()), w, SLOT(doWork()));
    workerThread.start();

    //w->doWork();
    return a.exec();*/

    QApplication a(argc, argv);

    Widget w;
    w.show();

    return a.exec();
}

