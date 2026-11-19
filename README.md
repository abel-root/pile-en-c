# UNE PILE 
 est un structure de données qui permet de stocker des données. Appelé aussi LIFO( Last - In - First - Out).
 est une structure dans laquelle le dernière élement enregistre devient le premier à sortie de la pile.
 Il faut le voir comme une pile d'acciète enpiler les un à la suite des autres.

## FONCTIONS POSSILE : 
1. Tester si la pile est vide
2. Inserer un élement dans la pile (**empiler**)
3. Récuperer un élemennt en haut de la pile (**deplier**)
4. Supprimer l'élement en haut de la pile
5. Vider la pile 

## TYPE DE PILE 
- Pile contigue : créer avec un tableau static 
    ```bash 
    STRUCTURE tStack
        content : T[n]
        top     : entier
    ```
- Pile dynamique : créer avec des liste 
    ```shell
        STRUCTURE tStack
            data    : liste
            nbr_elt : entier
    ```
## STRUCTURE 
        ______
        |__*__|<--- top de la pile 
        |_____|
        |_____|
        |_____|
        |_____|
        |_____|