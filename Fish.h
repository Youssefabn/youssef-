#ifndef fish_h ;
#define fish_h;
#include<iostream>;
Using std :: cout;
Class Fish :: public Animal {
Private :
        Int GillCapacity;
        Int SwimSpeed ;
Public :
 Fish( int , int , int , int ) ;
~fish(); 
Virtuel void getOwner(){
Cout<<" /nOwner:Fish/n/n " ; }
