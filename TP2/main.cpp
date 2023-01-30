// Fichier main.cpp

#include <iostream> 
#include "Point.hpp"

int main(int, char**) {
  Point p;
  Point p1;
  Point p2(5.,5.);
  Point p3{};
  Point p4{2.,2.};
  Point * pp = new Point(10.,10.);

  std::cout << p.getX()<<std::endl;
  std::cout << p.getY()<<std::endl;
  p.deplacerVers(2.,2.);
  std::cout << p.getX()<<std::endl;
  std::cout << p.getY()<<std::endl;

  std::cout << p1.getX()<<std::endl;
  std::cout << p1.getY()<<std::endl;
  p1.deplacerVers(2.,2.);
  std::cout << p1.getX()<<std::endl;
  std::cout << p1.getY()<<std::endl;

  std::cout << p2.getX()<<std::endl;
  std::cout << p2.getY()<<std::endl;
  p2.deplacerVers(2.,2.);
  std::cout << p2.getX()<<std::endl;
  std::cout << p2.getY()<<std::endl;

  std::cout << p3.getX()<<std::endl;
  std::cout << p3.getY()<<std::endl;
  p3.deplacerVers(2.,2.);
  std::cout << p3.getX()<<std::endl;
  std::cout << p3.getY()<<std::endl;

  std::cout << p4.getX()<<std::endl;
  std::cout << p4.getY()<<std::endl;
  p4.deplacerVers(2.,2.);
  std::cout << p4.getX()<<std::endl;
  std::cout << p4.getY()<<std::endl;

  std::cout<<pp->getX()<<std::endl;
  std::cout<<pp->getY()<<std::endl;
  p4.deplacerVers(2.,2.);
  std::cout<<pp->getX()<<std::endl;
  std::cout<<pp->getY()<<std::endl;

  delete pp;
  
  return 0;
}
//#include "fic "允许你包括当前目录下的一个fic文件。
//#include <fic>允许你从一个标准目录
//（通常是/usr/[local]/include或由-I选项（大写i）给出的路径）中包含一个文件。

//g++ -o main main.cpp Point.cpp

/*
6.95322e-310
4.65908e-310
2
2
3.16202e-321
2.12203e-314
2
2
6.95322e-310
4.65908e-310
2
2
1.4822e-323
4.65908e-310
2
2
6.90974e-310
4.65908e-310
2
2
0
0
0
0
*/