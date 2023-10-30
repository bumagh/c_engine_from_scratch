set files=src/glad.c src/main.c
set libs=E:\env\c_game_engine_env\libs
gcc -I E:\env\c_game_engine_env\include %files% -L %libs% -o main.exe