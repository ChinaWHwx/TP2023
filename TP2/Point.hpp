// Fichier Point.hpp
// Il manque les gardiens mais je vous laisse les ajouter,
// c'est comme en C et le pragma once c'est nul
#ifndef _Point_hpp_
#define _Point_hpp_
class Point {
   // par défaut, tout est privé dans une "class"  
   double x;
   double y;
   static double getComputeur();

 public:
  Point();
  Point(double,double);
  double getX(); 
  double getY();
  void setX(double);
  void setY(double);
  void deplacerDe(double,double);
  void deplacerVers(double,double);
  static int computeur;


};

#endif

//还有一种定义类的方法：可以使用struct关键字。
//类的所有成员（数据或方法）默认为私有，而结构的成员则是公共的。
