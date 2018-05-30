CC=gcc 
OPTION=-std=c11 -Wall -g
SRC=bigNumber.c
main: $(SRC)
	$(CC) $(OPTION) $(SRC) -o main
clean:
	rm -f main
