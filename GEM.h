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

class GEMpage{
    GEMpage(string name, vector<double> dim);   //constructeur
    ~GEMpage();  //destructeur
    //méthodes
    public:
    void refresh();  //rafraichit l'affichage de la page 
    void addEntity(GEMtity *entity, int layer);  //ajoute une entité à la page au niveau layer 
    bool deleteEntity(GEMtity *entity);  //supprime une entité
    void eraseEntity(GEMtity *entity);  //efface une entité de la page
    void show (GEMtity *entity, bool etat);  //affiche une entité
    //attributs
    vector<GEMtity*> entities;  //liste des entités de la page  
};
