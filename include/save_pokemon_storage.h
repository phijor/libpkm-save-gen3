#ifndef  SAVE_POKEMON_STORAGE_H
#define  SAVE_POKEMON_STORAGE_H

#include "save_pokemon.h"

union save_unpacked_t;

int save_pokemon_get_team(union save_unpacked_t* save,
                          struct save_pokemon_boxed_t* team);

#endif   /* ----- #ifndef SAVE_POKEMON_STORAGE_H----- */