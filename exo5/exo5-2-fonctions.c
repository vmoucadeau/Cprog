#include <stdio.h> 
#include "exo5-2-fonctions.h" 
#include <stdlib.h>

/* variables globales pour le moment */ 
struct c *pile=NULL; 
struct c *file=NULL; 

/**
 * \fn int empiler(int valeur) 
 * \brief Fonction d'empilage d'une valeur sur une pile en global 
 *
 * \param valeur la valeur a empiler 
 * \return 1 si OK, 0 si erreur 
 */ 
int empiler(int valeur) 
{
    struct c *new_element = malloc(sizeof(struct c));
    if(new_element == NULL)
        return 0;
    new_element->valeur = valeur;
    new_element->suivant = pile;
    pile = new_element;
    return 1;
}

/**
 * \fn int depiler(int *valeur) 
 * \brief Fonction de depilage d'une valeur sur une pile en global 
 *
 * \param pointeur vers la valeur a depiler 
 * \return 1 si OK, 0 si erreur 
 */ 
int depiler(int *valeur) 
{
    if(pile == NULL)
        return 0;
    struct c *new_pile = pile->suivant;
    *valeur = pile->valeur;
    free(pile);
    pile = new_pile;
    return 1;
}

/**
 * \fn int enfiler(int valeur) 
 * \brief Fonction d'enfilage d'une valeur sur une file en global 
 *
 * \param valeur la valeur a enfiler 
 * \return 1 si OK, 0 si erreur 
 */ 
int enfiler(int valeur)
{
    struct c *new_element = malloc(sizeof(struct c));
    if(new_element == NULL)
        return 0;
    new_element->valeur = valeur;
    new_element->suivant = file;
    file = new_element;
    return 1;
}

/**
 * \fn int defiler(int *valeur) 
 * \brief Fonction de defilage d'une valeur sur une file en global 
 *
 * \param pointeur vers la valeur a depiler 
 * \return 1 si OK, 0 si erreur 
 */ 
int defiler(int *valeur) 
{
    struct c *actual_element = pile;
    while(*actual_element != NULL) {
        *actual_element = actual_element->suivant
    }
}


