#pragma once
#include <vector>

class GEMtity{
    GEMtity GEMtity(string chemin_image, FVector pos, FVector speed, FVector acc = {0,0});  //constructeur
    GEMtity ~GEMtity();  //destructeur
    //méthodes
    public:
    bool collision (GEMtity *entity);
    void setImage(string chemin[]);
    void setBehaviour(FVector pos, FVector speed, FVector acc);

}


class GEMpage{
    GEMpage GEMpage(string name, FVector dim);   //constructeur
    GEMpage ~GEMpage();  //destructeur
    //méthodes
    public:
    void refresh();  //rafraichit l'affichage de la page 
    void addEntity(GEMtity *entity, int layer);  //ajoute une entité à la page au niveau layer 
    bool deleteEntity(GEMtity *entity);  //supprime une entité
    void eraseEntity(GEMtity *entity);  //efface une entité de la page
    void show (GEMtity *entity, bool etat);  //affiche une entité
    //attributs
    vector<GEMtity*> entities;  //liste des entités de la page  

}
