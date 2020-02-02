OBJS = $(patsubst %.c,%.o,$(wildcard *.c))
CC = gcc
EXECNAME = networker
RM = rm

%.o: %.c
	@$(CC) -c $<

all: $(OBJS)
	@$(CC) $(OBJS) -o $(EXECNAME)

clean:
	@$(RM) *.o $(EXECNAME)
