#include "GEMPage.h"
#include "gemtity.h"
#include <Imagine/Graphics.h>
using namespace Imagine;
#include <cmath>
#include <cstdlib>
#include <ctime>
#include<iostream>
#include <string>
using namespace std;

// Méthodes de priorTity
priorTity::priorTity(){

}
priorTity::~priorTity(){

}
int priorTity::getSize(){
    return entities.size();
}

double priorTity::add(GEMtity* entity, double layer){
    int i=entities.size() - 1;
    while(i>=0 && layers[i]>layer)
        --i;
    entities.insert(next(entities.begin(),i),entity);
    layers.insert(next(layers.begin(),i),layer);
}

double priorTity::del(GEMtity* entity){
    entities.erase(next(entities.begin(),find_index(entity)));
}


double priorTity::getLayer(GEMtity* entity){
    return layers[find_index(entity)];
}


int priorTity::find_index(GEMtity* entity){
    int res=0;
    while(entities[res]!=entity && res<entities.size())
        ++res;
    return (res==entities.size() ? -1:res);
}



// Méthodes de la classe GEMpage
void GEMpage::refresh(){

}
void GEMpage::addEntity(GEMtity *entity, int layer){
    file_entities.add(entity,layer);
}

bool GEMpage::deleteEntity(GEMtity *entity){
    file_entities.del(entity);
}

void GEMpage::show(GEMtity *entity, bool etat){

}

// Constructeur de la classe GEMpage
GEMpage::GEMpage(vector<double> dim){

}
