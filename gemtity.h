#pragma once

#include <Imagine/Graphics.h>
using namespace Imagine;
#include <cmath>
#include <cstdlib>
#include <ctime>
#include<iostream>
#include <string>
#include <vector>
using namespace std;

class GEMtity{
    GEMtity(string chemin_image, vector<double> pos, vector<double> speed, vector<double> acc = {0,0});  //constructeur
    ~GEMtity();  //destructeur
    //méthodes
    public:
    bool collision (GEMtity *entity);
    void setImage(string chemin[]);
    void setBehaviour(vector<double> pos, vector<double> speed, vector<double> acc);

};
