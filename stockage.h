#pragma once
#include "pch.h"
#include "objet2D.h"

class stockage{

private:
    objet2D** tab;
    int taille;
    int index;

public:
    stockage(int tmptaille);
    ~stockage();
    void add(objet2D* tmpObj);
    void add(objet2D* tmpObj, int tmpindex);
    void to_string();
};