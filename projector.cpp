#include "projector.h"

Projector::Projector(QString description, DvdPlayer *dvdPlayer){

    this->description = description;
    this->dvdPlayer = dvdPlayer;
}

void Projector::on(){

    cout << description.toStdString() << " ON" << endl;
}

void Projector::off(){

    cout << description.toStdString() << " OFF" << endl;
}

void Projector::wideScreenMode(){

    cout << description.toStdString() << " 16x9 size" << endl;
}

void Projector::tvMode(){

    cout << description.toStdString() << " 4x3 size" << endl;
}

QString Projector::toString(){

    return description;
}

