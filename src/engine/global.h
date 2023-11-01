#ifndef global_h
#define global_h

#include "render/render.h"

typedef struct global
{
    Render_state render;
} Global global;
extern Global global;
#endif