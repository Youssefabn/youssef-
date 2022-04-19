#ifndef cat_h;
#define cat.h
#include<iostream>;
#include "animal.h ";
Using std :: cout; 
Class cat :: public  Animal{ 
Private : 
Int color;
Int PawSize;
Public: 
Cat(int, int , int , int );
~Cat();
Void print (){ 
Animal :: print();
Cout<<" Cat print/n";}
Virtuel void GetOwner(){ cout<<"/nOwner :cat";}
#endif;
