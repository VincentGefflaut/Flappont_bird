#include "GEMPage.h"
#include "gemtity.h"
#include <Imagine/Graphics.h>
#include <Imagine/Images.h>
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

void priorTity::add(GEMtity* entity, double layer){
    int i=entities.size();
    while(i>0 && layers[i]>layer)
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
    for(int i=0;i<file_entities.getSize();++i){

    }
}
void GEMpage::addEntity(GEMtity *entity, int layer){
    file_entities.add(entity,layer);
}

bool GEMpage::deleteEntity(GEMtity *entity){
    file_entities.del(entity);
}

Window GEMpage::open(){
    win = openWindow(dim[0],dim[1]);
    setActiveWindow(win);
    return win;

}

void GEMpage::close(){

}

void GEMpage::show(){
    for(int i=0;i<file_entities.getSize();++i){
        cout << "TEST" << i << endl;
        file_entities[i]->display();
    }

}

// Constructeur de la classe GEMpage
GEMpage::GEMpage(int _dim[2]){
    dim[0]=_dim[0];
    dim[1]=_dim[1];
}

// Destructeur de la classe GEMpage
GEMpage::~GEMpage(){

}
