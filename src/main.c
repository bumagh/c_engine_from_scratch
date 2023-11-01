#include<stdio.h>
#include<stdbool.h>
#include<glad/glad.h>
#include<SDL2/SDL.h>
#undef main
int main(int argc, char *argv[]){
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        printf("SDL_init error: %s\n", SDL_GetError());
        exit(1);
    }
    SDL_Window *window = SDL_CreateWindow(
        "MyGame",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        800,
        600,
        SDL_WINDOW_OPENGL
    );
    if(!window){
        printf("failed to init window:%s\n", SDL_GetError());
        exit(1);
    }
    SDL_GL_CreateContext(window);
    if(!gladLoadGLLoader((GLADloadproc)SDL_GL_GetProcAddress)){
        printf("failed to load gl: %s\n", SDL_GetError());
        exit(1);
    }
    puts("opengl loaded");
    printf("vendor: %s\n", glGetString(GL_VENDOR));
    printf("renderer: %s\n", glGetString(GL_RENDERER));
    printf("version: %s\n", glGetString(GL_VERSION));

    printf("hello!\n");
    bool should_quit = false;
    while(!should_quit){
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_QUIT:
                should_quit = true;
                break;
            default:
                break;
            }
        }
    };
    return 0;
}