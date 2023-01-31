#include<iostream>

using namespace std;

int main(int,char**){
    std::cout<<Bavarde(0).get()<<endl;
    Bavarde b1(3);
    Bavarde b2(4);
    Bavarde *p = new Bavarde(5);
    //fonction(b1);

    return 0;
}