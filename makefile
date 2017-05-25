prog:=Game
comp:=gcc
flags:=-Wall
tflags:=-I test -Wall
dir.o:=build/src
tdir.o:=build/test
dir.c:=src
tdir.c:=test
.PHONY:clean test

All:$(dir.o)/game.o $(dir.o)/main.o
	$(comp) $(dir.o)/game.o $(dir.o)/main.o -o bin/$(prog)

$(dir.o)/game.o:
	$(comp) $(flags) -c $(dir.c)/game.c -o $(dir.o)/game.o

$(dir.o)/main.o:
	$(comp) $(flags) -c $(dir.c)/main.c -o $(dir.o)/main.o


test:$(tdir.o)/game_test.o $(tdir.o)/Game_test.o $(tdir.o)/main.o
	$(comp) $(tdir.o)/game_test.o $(tdir.o)/Game_test.o $(tdir.o)/main.o -o bin/$(prog)-test

$(tdir.o)/game_test.o:
	$(comp) $(flags) -c $(tdir.c)/game_test.c -o $(tdir.o)/game_test.o

$(tdir.o)/Game_test.o:
	$(comp) $(flags) -c $(tdir.c)/Game_test.c -o $(tdir.o)/Game_test.o

$(tdir.o)/main.o:
	$(comp) $(flags) -c $(tdir.c)/main.c -o $(tdir.o)/main.o


clean:
	rm -rf $(dir.o)/*.o bin/* $(tdir.o)/*.o