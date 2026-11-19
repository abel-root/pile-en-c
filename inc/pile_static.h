#ifndef PILE_STATIC_H
#define PILE_STATIC_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define STACK_MAX 10

typedef struct StaticStack{
     int data [STACK_MAX];
     int  top; // top = -1 si la liste est vide
}StaticStack;

void s_initialize(StaticStack *pile);
bool s_empty(const StaticStack *pile);
bool s_full(const StaticStack *pile);
bool s_push(StaticStack *pile, int data);          // false si pile pleine
bool s_peek(const StaticStack *pile, int *out);    // lit le sommet sans le retirer
bool s_pop(StaticStack *pile);                     // retire le sommet
void s_clear(StaticStack *pile);
void s_showPile(const StaticStack *pile);





#endif // PILE_STATIC_H