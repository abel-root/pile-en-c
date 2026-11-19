# UNE PILE 
 C'est une structure de données permettant de stocker des données. Aussi appelé LIFO (Last-In, First-Out).
 C'est une structure dans laquelle le dernier élément enregistré devient le premier à sortir de la pile.
 Il faut le voir comme une pile d'assiettes empilées les unes à la suite des autres.

## FONCTIONS POSSIBLES : 
1. Tester si la pile est vide
2. Insérer un élément dans la pile (**empiler**)
3. Récupérer un élément en haut de la pile (**déplier**)
4. Supprimer l'élément en haut de la pile
5. Vider la pile 

## TYPE DE PILE 
- Pile contiguë : créer avec un tableau statique 
    ```bash 
    STRUCTURE tStack
        content : T[n]
        top     : entier
    ```
- Pile dynamique : créer avec des listes 
    ```shell
        STRUCTURE tStack
            data    : liste
            nbr_elt : entier
    ```
## STRUCTURE 
        ______
        |__*__|<--- top (sommet de la pile)
        |_____|
        |_____|
        |_____|
        |_____|
        |_____|
