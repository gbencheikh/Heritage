#include "pch.h"
#include "carre.h"

carre::carre():rectangle() {};

carre::carre(int tcote): rectangle(tcote, tcote) {};

int carre::getPerimetre() { 
    return rectangle::getPerimetre(); 
}

int carre::getAire() { 
    return rectangle::getAire(); 
}

int carre::getCote() { 
    return this->getLongueur(); 
}

std::string carre::afficheInfo() { 
    return "l'objet est un cube : Cote = " + std::to_string(this->Largeur) + ", Perimetre = " + std::to_string(getPerimetre()) + ", Aire = " + std::to_string(getAire()); 
}

 