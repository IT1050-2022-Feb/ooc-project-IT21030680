#include "Hotel.h";
#include "Rooms.h";
#include "TourGuide.h";
#include <iostream>
using namespace std;

int main()
{
    Hotel* Hotel1;
    Hotel1 = new Hotel();

    TourGuide* Guide1;
    Guide1 = new TourGuide();

    delete Hotel1;
    delete Guide1;
}
