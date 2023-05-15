#pragma once
#include <Imagine/Graphics.h>
#include <Imagine/Images.h>
using namespace Imagine;
#include <cmath>
#include <QImage>
#include <cstdlib>
#include <ctime>
#include<iostream>
#include <string>
#include <vector>
using namespace std;
//Définition des constantes des éléments
int wFlappont = 30;
int hFlappont = 30;
int wTuyau = 50;
int hTuyau = 250;
class GEMtity{
    //attributs
    string chemin_image;
    double pos[2];
    double speed[2];
    double acc[2];
    Image <Color> image;



    public:
    QVector<QPointF> hitbox;
    //méthodes
    bool collision (GEMtity *entity);
    void setImage(string chemin);
    void setBehaviour(double new_pos[2],  double new_speed[2], double new_acc[2]);
    void setPos(double new_pos[2]);
    void setSpeed(double new_speed[2]);
    void setAcc(double new_acc[2]);
    GEMtity(string path, double new_pos[2], double new_speed[2], double new_acc[2]);  //constructeur
    ~GEMtity();  //destructeur


};
