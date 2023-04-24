#include "gemtity.h"
#include <Imagine/Graphics.h>
#include <Imagine/Images.h>
using namespace Imagine;
#include <cmath>
#include <QImage>
#include <cstdlib>
#include <ctime>
#include<iostream>
#include <string>
using namespace std;

// Méthodes de la classe GEMtity
bool GEMtity::collision(GEMtity *entity){

}
void GEMtity::setImage(string chemin){
    load(image,chemin);
}
void GEMtity::setBehaviour(double new_pos[2],  double new_speed[2], double new_acc[2]){
    pos[0] = new_pos[0];
    pos[1] = new_pos[1];
    speed[0] = new_speed[0];
    speed[1] = new_speed[1];
    acc[0] = new_acc[0];
    acc[1] = new_acc[1];
}

void GEMtity::setPos(double new_pos[2]){
    setBehaviour(new_pos, speed, acc);
}
void GEMtity::setSpeed(double new_speed[2]){
    setBehaviour(pos, new_speed, acc);
}
void GEMtity::setAcc(double new_acc[2]){
    setBehaviour(pos, speed, new_acc);
}
// Constructeur de la classe GEMtity
GEMtity::GEMtity(string path, double new_pos[2], double new_speed[2], double new_acc[2]){
    chemin_image = path;
    pos[0] = new_pos[0];
    pos[1] = new_pos[1];
    speed[0] = new_speed[0];
    speed[1] = new_speed[1];
    acc[0] = new_acc[0];
    acc[1] = new_acc[1];
    Imagine::load(image, path);
}
