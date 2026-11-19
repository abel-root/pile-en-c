#include "../inc/pile_dynamic.h"

//Tester si la pile est vide
 bool empty(DynamicStack*pile){
    return pile==NULL?true:false;
 }

//Inserer une données dans la pile 
DynamicStack * push(DynamicStack*pile, int data){
    DynamicStack *newNode = malloc(sizeof(DynamicStack));
    newNode->data = data;
    newNode->next = pile;
    return newNode;
}

//Récuperer une données en haut de la pile
int peek (DynamicStack*pile){
    if(empty(pile)){
        return -1;
    }
    return pile->data;
}

//Supprimer la valeur en haut de la pile
DynamicStack * pop (DynamicStack*pile){
    if(empty(pile)){
        return NULL;
    }
    DynamicStack * temporary = pile;
    pile = pile->next;
    free(temporary);
    return pile; 
}

//Vider la pile 
DynamicStack * clear (DynamicStack*pile){
    if(empty(pile)){
        return NULL;
    }
    DynamicStack * current;
    while(pile!=NULL){
        current = pile;
        pile    = pile->next;
        free(current);
    }
    return pile;
}

// afficher le contenu de la pile
void showPile(DynamicStack*pile){
    if(empty(pile)){
        printf("Pile est vide.\n");
        return ;
    }
    while(pile!=NULL){
        printf("(%d)->",pile->data);
        pile = pile->next;
    }
    printf("NULL\n");
}
