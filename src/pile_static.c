#include "../inc/pile_static.h"
#include <stdbool.h>

void s_initialize(StaticStack *pile){
    pile->top = -1; // pile empty
}
bool s_empty(const StaticStack *pile){
    return pile->top == -1;
}
bool s_full(const StaticStack *pile){
    return pile->top == STACK_MAX -1;
}
bool s_push(StaticStack *pile, int data){
    if(s_full(pile)) return false;
    pile->top++;
    pile->data[pile->top]=data;
    return true;
    
}          // false si pile pleine
bool s_peek(const StaticStack *pile, int *out){
    if(s_empty(pile)) return false;
    *out = pile->data[pile->top];
    return true;
}    // lit le sommet sans le retirer
bool s_pop(StaticStack *pile){
    if(s_empty(pile)) return false;
    pile->top--;
    return true;
}                     // retire le sommet
void s_clear(StaticStack *pile){
    if(s_empty(pile)) return;
    pile->top = -1;
}
void s_showPile(const StaticStack *pile){
    if(s_empty(pile)){
        printf("Pile est vide.\n");
        return ;
    }
    int  n; 
    for(n=pile->top; n>=0; n--){
        printf("(%d)->",pile->data[n]);
    }
    printf("(-1)\n");
}