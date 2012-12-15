CC=gcc
SDLFLAGS=$(shell sdl-config --cflags --libs)

all : initializing-sdl.c direct-pixel-drawing-sdl.c
	$(CC) initializing-sdl.c -o test-init $(SDLFLAGS)
	$(CC) direct-pixel-drawing-sdl.c -o pixel-draw $(SDLFLAGS)

init : initializing-sdl.c
	$(CC) initializing-sdl.c -o test-init $(SDLFLAGS)

pixel : direct-pixel-drawing-sdl.c
	$(CC) direct-pixel-drawing-sdl.c -o pixel-draw $(SDLFLAGS)

.PHONY : clean

clean :
	rm -rf test-init pixel-draw
