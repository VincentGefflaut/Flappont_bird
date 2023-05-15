#pragma once

#include <Imagine/Graphics.h>
using namespace Imagine;
#include <cmath>
#include <cstdlib>
#include <ctime>
#include<iostream>
#include <string>
#include <vector>
#include "gemtity.h"

using namespace std;

class priorTity{
    // File de priorité stockant les entités avec leur niveau
    // Vu le peu d'éléments (<100) stockés on ne cherche pas à optimiser la complexité comme vu en algo
public:
    priorTity();
    ~priorTity();

    int getSize();
    double add(GEMtity* entity, double layer);
    double del(GEMtity* entity);
    double getLayer(GEMtity* entity);

private:
    vector<GEMtity*> entities;
    vector<double> layers;
    int find_index(GEMtity* entity);
}


};

class GEMpage{
    GEMpage(int _dim[2]);   //constructeur
    ~GEMpage();  //destructeur
    //méthodes
    public:
    void refresh();  //rafraichit l'affichage de la page
    void addEntity(GEMtity *entity, int layer);  //ajoute une entité à la page au niveau layer
    bool deleteEntity(GEMtity *entity);  //supprime une entité
    void show (GEMtity *entity, bool etat);  //affiche une entité
    //attributs
    int dim[2];
    priorTity file_entities;
};
