OBJS	= source.o
SOURCE	= source.c
HEADER	= 
OUT	= exo2
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

source.o: source.c
	$(CC) $(FLAGS) source.c 


clean:
	rm -f $(OBJS) $(OUT)
