#include "pokemon.h"
#include <string.h>
#include <stdio.h>
#include "pokemon_privado.h"
#define ERROR -1
#define EXITO 0


pokemon_t *pokemon_crear_desde_string(const char *string)
{  
	pokemon_t *pokemon;
    char *string;
	int tamaño = sizeof(string);
	int tamaño_ideal = 4;
    if(tamaño != tamaño_ideal)
		return NULL;
	(*pokemon).id = (char*)string[0];
	(*pokemon).nombre[MAX_NOMBRE] = (char*)string[1];
	(*pokemon).salud = (char*)string[2];
	(*pokemon).nombre_entrenador[MAX_NOMBRE] = (char*)string[3];
    return pokemon;
}

pokemon_t *pokemon_copiar(pokemon_t *poke)
{
	pokemon_t *poke = malloc(sizeof(pokemon_t));
	if(poke == NULL)
		return NULL;
	return poke;
}

bool pokemon_son_iguales(pokemon_t *pokemon1, pokemon_t *pokemon2)
{   
	if (pokemon1 == NULL || pokemon2 == NULL)
		return false;
	if (((pokemon1->id) == (pokemon2->id)) && ((pokemon1->salud) == (pokemon2->salud)) && (strcmp(pokemon1->nombre_entrenador[MAX_NOMBRE], pokemon2->nombre_entrenador[MAX_NOMBRE])))
		return true;
	return false;
}

char *pokemon_nombre(pokemon_t *pokemon)
{   
	if(pokemon == NULL)
		return NULL;
	return (*pokemon).nombre[MAX_NOMBRE];
}

char *pokemon_entrenador(pokemon_t *pokemon)
{
    if(pokemon == NULL)
		return NULL;
	return (*pokemon).nombre_entrenador[MAX_NOMBRE];
}

size_t pokemon_salud(pokemon_t *pokemon)
{
	if(pokemon == NULL)
		return 0;
	return (*pokemon).salud;
}

size_t pokemon_id(pokemon_t *pokemon)
{
	if(pokemon == NULL)
		return 0;
	return (*pokemon).id;
}

void pokemon_destruir(pokemon_t *pkm)
{
	free(pkm);
}
