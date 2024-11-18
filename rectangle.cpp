#include "rectangle.h"

rectangle::rectangle() : objet2D() {};

rectangle::rectangle(int tlongueur, int tlargeur) : objet2D(tlongueur,tlargeur) {}

int rectangle::getPerimetre() { 
    return (this->Longueur + this->Largeur) * 2; 
}

int rectangle::getAire() { 
    return this->Longueur * this->Largeur; 
}

std::string rectangle::to_string() { 
    return "l'objet est un rectangle : longueur = " + std::to_string(this->Longueur) + ", largeur = " + std::to_string(this->Largeur) + ", Perimetre = " + std::to_string(getPerimetre()) + ", Aire = " + std::to_string(getAire()); 
};