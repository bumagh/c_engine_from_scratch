#include<glad/glad.h>
#include "../global.h"
#include "render.h"
#include "render_internal.h"
static Render_State_Internal state = {0};
void render_init(void);
void render_begin(void);
void render_end(void);
void render_quad(vec2 pos, vec2 size, vec4 color);