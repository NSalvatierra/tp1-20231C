#include "tp1.h"

#include "pokemon.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct _hospital_pkm_t {
	pokemon_t **pokemones;
	size_t cantidad_pokemon;
	size_t cantidad_entrenadores;
};

char *leer_linea(FILE* archivo)
{
    char *vector = malloc(1*sizeof(char));
    if(vector == NULL)
        return NULL;
    
    int leidos = 0;
    int caracter = 0;

    while((caracter = fgetc(archivo)) != "," && caracter != EOF){
        *(vector+leidos) = caracter;
        leidos++;
        char *nuevo_vector = realloc(vector , (leidos+1)*sizeof(char));
        if(nuevo_vector == NULL){
            free(vector);
            return NULL;
        }
        vector = nuevo_vector;
    }
    if (leidos == 0){
        free(vector);
        return NULL;
    }

    vector[leidos] = 0;
    return vector;
}



hospital_t *hospital_crear_desde_archivo(const char *nombre_archivo)
{
	hospital_t *hospital_de_pokemones = malloc(sizeof(hospital_t));
	if(hospital_de_pokemones == NULL)
		return NULL;
	FILE* nombre_archivo = fopen("archivo_pokemones.csv","r");
    if(nombre_archivo == NULL)
        return NULL;
	char *linea;
	int tamaño = sizeof(linea);
	int tamaño_ideal = 4;
    while((linea = leer_linea(nombre_archivo)) == NULL || tamaño != tamaño_ideal){
            return ERROR;
            free(linea);
	}
	
	return hospital_de_pokemones;
	fclose(nombre_archivo);
}

size_t hospital_cantidad_pokemones(hospital_t *hospital)
{
	return 0;
}

size_t hospital_a_cada_pokemon(hospital_t *hospital,
			       bool (*funcion)(pokemon_t *p, void *aux),
			       void *aux)
{
	return 0;
}

int hospital_aceptar_emergencias(hospital_t *hospital,
				 pokemon_t **pokemones_ambulancia,
				 size_t cant_pokes_ambulancia)
{
	return ERROR;
}

pokemon_t *hospital_obtener_pokemon(hospital_t *hospital, size_t prioridad)
{
	return NULL;
}

void hospital_destruir(hospital_t *hospital)
{
}
