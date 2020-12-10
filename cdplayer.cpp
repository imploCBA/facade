#include "cdplayer.h"

CdPlayer::CdPlayer(QString description, Amplifier *amplifier){

    this->description = description;
    this->amplifier = amplifier;
}

void CdPlayer::on(){

    cout << description.toStdString() << "ON" << endl;
}

void CdPlayer::off(){

    cout << description.toStdString() << "OFF" << endl;
}

void CdPlayer::eject(){

    title = nullptr;
    cout << description.toStdString() << "diskovod otkrit" << endl;
}

void CdPlayer::play(QString title){

    this->title = title;
    currentTrack = 0;
    cout << description.toStdString() << "igrat \"" << title.toStdString() << "\"" << endl;
}

void CdPlayer::play(int track){

    if (title == nullptr) {

        cout << description.toStdString() <<  "nevozmozno vosproizvesti " << currentTrack << ", net diska" << endl;

    }
    else {

        currentTrack = track;
        cout << description.toStdString() << "igraet " << currentTrack << endl;

    }
}

void CdPlayer::stop(){

    currentTrack = 0;
    cout << description.toStdString() << " stopped" << endl;
}

void CdPlayer::pause(){

    cout << description.toStdString() << " paused \"" << title.toStdString() << "\"" << endl;
}

QString CdPlayer::toString(){

    return description;
}
