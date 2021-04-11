#ifndef CLASS1_H_INCLUDED
#define CLASS1_H_INCLUDED


/*Llenar (float): Debe permitir aumentar la ocupación del recipiente pero nunca por encima de su capacidad.
Vaciar(float): Debe permitir disminuir la ocupación del recipiente pero nunca por debajo de 0.
Vaciar(): Debe vaciar por completo la ocupación del recipiente.
Tapar(): Debe tapar la botella.
Destapar(): Debe destapar la botella.
Hacer métodos que permitan obtener la capacidad,
la ocupación y la disponibilidad de la botella(esto último representa cuánto tiene disponible aún para cargar).
Al crear un objeto Botella se puede suministrar la capacidad del mismo. Si no se indica, debe ser 100 por defecto.
 En cualquier caso, la ocupación será inicialmente de 0.

Todos los métodos que consideren necesarios deben limitarse a que la botella se encuentre destapada.
De lo contrario, no podrán realizarse. Ejemplo: No se puede vaciar una botella tapada.
 */
#include "rlutil.h"
#include <iostream>
#include"class1.h"
#include <stdlib.h>
#include<stdio.h>
#include <cstring>

using namespace std;

class botella{
    private:
           float capacidad=100 ; ///100mml
           bool tapa=false;       ///Tiene tapa si o no?//
           float CONT=0; /// tiene agua si o no?//
    public: ///metodos y comportamiento

        void GetActual();

        void SetCapacidad(float);
        void getcontenido();
        float GetCapacidad();
        void CargarBotella(float);
        void DescargarBotella(float);
        float getcapacidad();
        bool TaparBotella();
        bool DestaparBotella( );
        void VaciarBotella();
        void getEstado();

        void mostrarCarga();

};





#endif // CLASS1_H_INCLUDED
