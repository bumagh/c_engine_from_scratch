set files=src/glad.c src/main.c
set libs=E:\env\c_game_engine_env\libs
gcc -I E:\env\c_game_engine_env\include %files% -L %libs% -lmingw32 -lSDL2main -lSDL2 -mwindows -o main.exe -Dmain=SDL_main  -Wl,--dynamicbase -Wl,--nxcompat -Wl,--high-entropy-va -lm -ldinput8 -ldxguid -ldxerr8 -luser32 -lgdi32 -lwinmm -limm32 -lole32 -loleaut32 -lshell32 -lsetupapi -lversion -luuid