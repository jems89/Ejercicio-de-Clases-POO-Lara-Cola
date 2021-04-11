#include <iostream>
#include"class1.h"
#include <stdlib.h>
#include<stdio.h>
#include <cstring>
#include "rlutil.h"



using namespace std;
botella lara;

int main()

{


    while(true)
    {
system("cls");

rlutil::setBackgroundColor(rlutil::RED);
rlutil::setColor(rlutil::BLACK);
cout <<"\t""\t""\t""\t""\t""\t""\t"" LC |BIENVENDIDOS A LARA COLA COMPANY| LC " << endl;rlutil::setBackgroundColor(rlutil::BLACK);rlutil::setColor(rlutil::WHITE);
cout<<endl;
cout <<"\t""CAPACIDAD ACTUAL DE LA BOTELLA ES:";
 lara.GetCapacidad();
cout <<"\t""\t""SU CONTENIDO ES DE:";
lara.getcontenido();
cout <<"\t""\t""PARA INGRESAR :";
lara.GetActual();
cout <<"\t""\t""LA BOTELLA ESTA :";
lara.getEstado();
cout<<endl;
cout<<endl;
  cout <<"\t""\t""\t""\t""\t""\t""\t""\t""1-CARGAR BOTELLA" << endl;
  cout <<"\t""\t""\t""\t""\t""\t""\t""\t""2-DESCARGAR BOTELLA" << endl;
  cout <<"\t""\t""\t""\t""\t""\t""\t""\t""3-TAPAR BOTELLA " << endl;
  cout <<"\t""\t""\t""\t""\t""\t""\t""\t""4-DESTAPAR BOTELLA " << endl;
  cout <<"\t""\t""\t""\t""\t""\t""\t""\t""5-VACIAR BOTELLA COMPLETA" << endl;
  cout <<"\t""\t""\t""\t""\t""\t""\t""\t""6-VER EL CONTENIDO" << endl;
  cout <<"\t""\t""\t""\t""\t""\t""\t""\t""7-CAPACIDAD DE LA BOTELLA" << endl;
  cout <<"\t""\t""\t""\t""\t""\t""\t""\t""8-SALIR" << endl;
  cout<<endl;
  cout <<"\t""\t""\t""\t""\t""\t""\t""\t""INGRESE LA OPCION ";

  int opc;
  cin>>opc;


bool tapa;

  switch (opc)
  {
 case 1 :system("cls"); cout<<"COLOQUE SU CONTENIDO "; float cargar;
          cin>>cargar;lara.CargarBotella(cargar );
    break;

 case 2 : system("cls");cout<<"CUANTO QUIERE DESCARGAR "; float des;
          cin>>des;lara.DescargarBotella(des );
    break;

case 3 :    system("cls");tapa=lara.TaparBotella();  if(tapa==true){cout<<" TAPADO ";cout<<endl;} system("pause");
    break;

 case 4 :  system("cls");tapa=lara.DestaparBotella();if(tapa==false){cout<<" DESTAPADO ";cout<<endl;} system("pause");
    break;

case 5 :  system("cls");lara.VaciarBotella();
    break;

 case 6 :    system("cls"); lara.mostrarCarga();cout<<endl;
             system("pause");
    break;

case 7 :      system("cls");cout<<"COLOQUE SU CAPACIDAD "; float cap;
              lara.SetCapacidad(cap);cout<<endl;
    break;
case 8 :      return 0;
    break;
default : cout<<"INGRESE UN NUMERO ENTRE 1 Y 8"<<endl;system("pause");
  }

}

}


