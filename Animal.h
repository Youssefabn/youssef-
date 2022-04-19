#ifndef animal_h;
#define animal_h;
#include<iostream>;
Usinf std :: cout;
Class Animal {
Private :
        Int name;
        Int age ;
Public:
        Animal(int , int );
        ~Animal();
   }
Virtuel void print(){
Cout <<" Animal print/n";}
Virtuel void getOwner()=0;
} 
#endif;
