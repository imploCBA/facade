#include "screen.h"

Screen::Screen(QString description){

    this->description = description;
}

void Screen::up(){

    cout << description.toStdString() << "podnyalsa" << endl;
}

void Screen::down(){

    cout << description.toStdString() << "opustilsa" << endl;
}


QString Screen::toString(){

    return description;
}

