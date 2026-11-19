#include <stdio.h>

#include "../inc/pile_dynamic.h"
#include "../inc/pile_static.h"

int main(){

    /*dynamic with liste*/
    printf("\n\n----------dynamic----------\n");
    DynamicStack * pile = NULL;

    pile =push(pile,20);
    pile =push(pile,40);
    pile =push(pile,10);
    pile =push(pile,50);
    pile =push(pile,80);

    printf("Afficher après push\n");
    showPile(pile);
    printf("sommet = %d\n",peek(pile)) ;

    pile = pop (pile);

    printf("Supprimer la valeur au sommet\n");
    showPile(pile);
    printf("sommet = %d\n",peek(pile)) ;

    pile = clear(pile);

    printf("vider la pile\n");
    showPile(pile);
    printf("sommet = %d\n",peek(pile)) ;

    /*Static with table*/
    printf("\n\n----------static----------\n");
    StaticStack p ;
    int out;
     s_initialize(&p);
     s_push(&p, 10);
     s_push(&p, 100);
     s_push(&p, 50);
     s_push(&p, 30);
     s_push(&p, 8);
     s_push(&p, 18);

    printf("Afficher après push\n");
    s_showPile(&p);
   if(s_peek(&p,&out)) printf("sommet = %d\n",out) ;
    
   s_pop(&p);
   printf("Supprimer la valeur au sommet\n");
    s_showPile(&p);
    if(s_peek(&p,&out)) printf("sommet = %d\n",out) ;

    s_clear(&p);
    printf("vider la pile\n");
    s_showPile(&p);
    if(s_peek(&p,&out)) printf("sommet = %d\n",out) ;

    return 0;
}