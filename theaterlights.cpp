#include "theaterlights.h"

TheaterLights::TheaterLights(QString description){

    this->description = description;
}

void TheaterLights::on(){

    cout << description.toStdString() << "ON" << endl;
}

void TheaterLights::off(){

    cout << description.toStdString() << "OFF" << endl;
}

void TheaterLights::dim(int level){

    cout << description.toStdString() << "zatemnenie na " << level  << "%" << endl;
}

QString TheaterLights::toString(){

    return description;
}
