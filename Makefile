OBJS = $(patsubst %.c,%.o,$(wildcard *.c))
CC = gcc
EXECNAME = networker
RM = rm

%.o: %.c
	$(CC) -c $<

all: $(OBJS)
	@$(CC) $(OBJS) -o $(EXECNAME)
	@echo $(PATH)
	@echo $(DIKOBRAZ)

clean:
	$(RM) *.o $(EXECNAME)
