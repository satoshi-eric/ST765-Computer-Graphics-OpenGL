gcc ./src/main.c -c 
gcc main.o -o ./bin/main.exe -lfreeglut -lopengl32 -lglu32
mv main.o ./bin/