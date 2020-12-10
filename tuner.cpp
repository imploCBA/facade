#include "tuner.h"

Tuner::Tuner(QString description, Amplifier *amplifier){

    this->description = description;
}

void Tuner::on(){

    cout << description.toStdString() << "ON" << endl;
}

void Tuner::off(){

    cout << description.toStdString() << "OFF" << endl;
}

void Tuner::setFrequency(double frequency){

    cout << description.toStdString() << "chastota " << frequency << endl;
    this->frequency = frequency;
}

void Tuner::setAm(){

    cout << description.toStdString() << "AM" << endl;
}

void Tuner::setFm(){

    cout << description.toStdString() << "FM" <<endl;
}

QString Tuner::toString(){

    return description;
}
