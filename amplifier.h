#ifndef AMPLIFIER_H
#define AMPLIFIER_H
#include <QString>
#include <iostream>

class Tuner;
class DvdPlayer;
class CdPlayer;

using namespace std;


class Amplifier{

private:
    QString description;
    Tuner *tuner;
    DvdPlayer *dvd;
    CdPlayer *cd;

public:
    Amplifier(QString description);

    void on();
    void off();
    void setStereoSound();
    void setSurroundSound();
    void setVolume(int level);
    void setTuner(Tuner *tuner);
    void setDvd(DvdPlayer *dvd);
    void setCd(CdPlayer *cd);

    QString toString();

};


#endif // AMPLIFIER_H
