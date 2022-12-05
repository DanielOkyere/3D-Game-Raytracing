#OBJS specifies which files to compile as part of the object
OBJS = hello_sdl2.cpp loadmedia.cpp loadSurface.cpp init.cpp close.cpp

#CC Compiler
CC = g++

#FLAGS
FLAGS = -W

#Linker flags
LINKER_FLAGS = -lSDL2 -lSDL2_image

#OBJ_NAME
OBJ_NAME = hello_world

#executes
all : $(OBJS)
	$(CC) $(OBJS) $(FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
