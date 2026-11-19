#ifndef PILE_DYNAMIC_H
#define PILE_DYNAMIC_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct DynamicStack{
    int data; 
    struct DynamicStack * next;
} DynamicStack;

//Tester si la pile est vide
 bool empty(DynamicStack*pile);

//Inserer une données dans la pile 
DynamicStack * push(DynamicStack*pile, int data);

//Récuperer une données en haut de la pile
int peek (DynamicStack*pile);

//Supprimer la valeur en haut de la pile
DynamicStack * pop (DynamicStack*pile);

//Vider la pile 
DynamicStack * clear (DynamicStack*pile);

// afficher le contenu de la pile
void showPile(DynamicStack*pile);


#endif //PILE_DYNAMIC_H