#ifndef SAVE_UNPACKED_H
#define SAVE_UNPACKED_H

#include "ruby_sapphire.h"
#include "emerald.h"
#include "firered_leafgreen.h"

union save_unpacked_t {
    struct save_ruby_sapphire_t rusa;
    struct save_emerald_t emer;
    struct save_firered_leafgreen_t frlg;
};

#endif
