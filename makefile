prog:=Game
comp:=gcc
flags:=-Wall
dir.o:=build
dir.c:=src
.PHONY:clean

All:$(dir.o)/game.o $(dir.o)/main.o
	$(comp) $(dir.o)/game.o $(dir.o)/main.o -o bin/$(prog)

$(dir.o)/game.o:
	$(comp) $(flags) -c $(dir.c)/game.c -o $(dir.o)/game.o


$(dir.o)/main.o:
	$(comp) $(flags) -c $(dir.c)/main.c -o $(dir.o)/main.o

clean:
	rm -rf $(dir.o)/*o bin/*