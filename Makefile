CC = gcc
CFLAGS = -Wall -Wextra -pthread
OBJS = stress.c killcpu.c
OUT = stress

all: $(OUT)

$(OUT): $(OBJS)
	$(CC) $(CFLAGS) -o $(OUT) $(OBJS)

clean:
	rm -f $(OUT)