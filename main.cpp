#include <QCoreApplication>
#include "amplifier.h"
#include "tuner.h"
#include "projector.h"
#include "theaterlights.h"
#include "screen.h"
#include "popcornpopper.h"
#include "hometheaterfacade.h"

int main(int argc, char *argv[]){

    QCoreApplication a(argc, argv);

    Amplifier *amp = new Amplifier("Usilitel ");
    Tuner *tuner = new Tuner("AM/FM regulator ", amp);
    DvdPlayer *dvd = new DvdPlayer("DVD Player ", amp);
    CdPlayer *cd = new CdPlayer("CD Player ", amp);
    Projector *projector = new Projector("Tproector ", dvd);
    TheaterLights *lights = new TheaterLights("Svet ");
    Screen *screen = new Screen("Ecran ");
    PopcornPopper *popper = new PopcornPopper("Popcorn machine ");

    HomeTheaterFacade *homeTheater =
            new HomeTheaterFacade(amp, tuner, dvd, cd,
                    projector, lights, screen, popper);

    homeTheater->watchMovie("Over super mega movie!");
    homeTheater->endMovie();

    return a.exec();
}
