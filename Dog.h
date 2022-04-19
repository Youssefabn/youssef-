#ifndef dog_h;
#define dog_h;
#include<iostream>;
#include "animal.h";

Using std :: cout ;
Class dog : public Animal{
Private : 
Int breed ; 
Public : 
Dog( int , int , int );
~Dog();
Void print() {
Animal:: print ();
Cout<<" Dog print /n";}
Virtuel void getOwner() { cout<<"/nOwner: Dog"}

#endif;
