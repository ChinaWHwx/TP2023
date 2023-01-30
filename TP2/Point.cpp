// Fichier Point.cpp

#include <iostream>  // Inclusion d'un fichier standard
#include "Point.hpp" // Inclusion d'un fichier du répertoire courant

int Point::computeur = 0;
Point::Point()
{
}

Point::Point(double, double)
{
}

double Point::getX()
{
    return x;
}

void Point::setX(double px){
  x = px;
}

double Point::getY(){
  return y;
}

void Point::setY(double py){
  y = py;
}

void Point::deplacerDe(double dx,double dy){
    x+=dx;
    y+=dy;
    ++computeur;
}

void Point::deplacerVers(double px, double py){
    setX(px);
    setY(py);
}

double Point::getComputeur(){
  //cout<<getX();
  return computeur;
}
