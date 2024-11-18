 #pragma once

#include "rectangle.h"

class carre :  public rectangle{

public:
    carre();
    carre(int tcote);

    int getPerimetre();
    int getAire();
    int getCote();

    std::string afficheInfo();
};