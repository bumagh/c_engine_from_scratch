set render=src\engine\render\render.c src\engine\render\render_init.c src\engine\render\render_util.c
set io=src\engine\io\io.c
set input=src\engine\input\input.c
set time=src\engine\time\time.c
set config=src\engine\config\config.c
set files=src\glad.c src\main.c src\engine\global.c %render% %io% %config% %input% %time%
set libs=C:\1env\c_game_engine_env\libs
gcc -I C:\1env\c_game_engine_env\include %files% -L %libs% -lmingw32 -lSDL2main -lSDL2 -o main.exe -Dmain=SDL_main  -Wl,--dynamicbase -Wl,--nxcompat -Wl,--high-entropy-va -lm -ldinput8 -ldxguid -ldxerr8 -luser32 -lgdi32 -lwinmm -limm32 -lole32 -loleaut32 -lshell32 -lsetupapi -lversion -luuid