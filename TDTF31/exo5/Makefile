OBJS	= source.o
SOURCE	= source.c
HEADER	= 
OUT	= exo5
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = -lm

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

source.o: source.c
	$(CC) $(FLAGS) source.c 


clean:
	rm -f $(OBJS) $(OUT)
