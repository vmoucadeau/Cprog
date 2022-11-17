#include <stdio.h> 

struct c
{
int valeur;
struct c *suivant;
};

/**
 * \fn int empiler(int valeur) 
 * \brief Fonction d'empilage d'une valeur sur une pile en global 
 *
 * \param valeur la valeur a empiler 
 * \return 1 si OK, 0 si erreur 
 */ 
int empiler(int valeur); 

/**
 * \fn int depiler(int *valeur) 
 * \brief Fonction de depilage d'une valeur sur une pile en global 
 *
 * \param pointeur vers la valeur a depiler 
 * \return 1 si OK, 0 si erreur 
 */ 
int depiler(int *valeur); 

/**
 * \fn int enfiler(int valeur) 
 * \brief Fonction d'enfilage d'une valeur sur une file en global 
 *
 * \param valeur la valeur a enfiler 
 * \return 1 si OK, 0 si erreur 
 */ 
int enfiler(int valeur);

/**
 * \fn int defiler(int *valeur) 
 * \brief Fonction de defilage d'une valeur sur une file en global 
 *
 * \param pointeur vers la valeur a depiler 
 * \return 1 si OK, 0 si erreur 
 */ 
int defiler(int *valeur); 

