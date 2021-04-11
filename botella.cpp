#include <iostream>
#include "rlutil.h"
#include <stdlib.h>
#include<stdio.h>
#include <cstring>
#include"class1.h"
using namespace std;

//Getters
void botella::SetCapacidad(float capa){

    cin>>capa;
while(capa<0 || capa>100){ cout<<"ERROR "; cin>>capa;}
capacidad=capa;

}
        float botella::GetCapacidad(){


        cout<<capacidad;

}


      void botella::CargarBotella(float cargar){
        if (tapa==false){
        if (cargar>0 && cargar<101) {CONT+=cargar;}else{cout<<"ERROR";}
        if(CONT>capacidad){cout<<"ERROR , EL CONTENIDO SUPERA SU CAPACIDAD ";CONT-=cargar;system("pause");}
        }else cout<<"LA BOTELLA ESTA TAPADA";system("pause");}

        void botella::DescargarBotella(float vaciar){
            if (tapa==false){
        if (vaciar>0 && vaciar<101){CONT-=vaciar;} else{cout<<"ERROR";}
        if(CONT<0){cout<<"ERROR NO PUEDO SACARLE MAS DE SU CONTENIDO ACTUAL  "; CONT+=vaciar;system("pause");}
        }else cout<<"LA BOTELLA ESTA TAPADA";system("pause");
        }
        void botella::VaciarBotella( )
        { if (tapa==false) {cout<<"SE VACIO POR COMPLETO  ";CONT=0;cout<<CONT;} else cout<<"LA BOTELLA ESTA TAPADA";system("pause");



        }


        bool botella::TaparBotella(){
        tapa=true; return tapa;  }

        bool botella::DestaparBotella(){
        tapa=false;return tapa;}

        void botella::mostrarCarga(){
        cout<<"\t""\t""\t""\t""\t""\t""EL CONTENIDO ACTUAL DE LA BOTELLA ES DE ";
        if(CONT<0 || CONT>100){CONT=0;}
        cout<<CONT;cout<<" MM";
        }
        void botella::getcontenido(){

        cout<<CONT;

        }

void botella::getEstado(){

if(tapa==true){rlutil::setBackgroundColor(rlutil::RED);cout<<"TAPADO";rlutil::setBackgroundColor(rlutil::BLACK);} else{rlutil::setBackgroundColor(rlutil::GREEN);cout<<"DESTAPADO";rlutil::setBackgroundColor(rlutil::BLACK);}


}

void botella::GetActual(){
    float Actual;
Actual=capacidad-CONT;

cout<<Actual<<"MM";

}

