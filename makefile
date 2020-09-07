CC=gcc 
OPTION=-std=c99 -Wall -g
MATH_FLAG=-lm
BIG_NUMBER=bigNumber
HUFFMAN=huffman
PRIME=primeNumber
BIGSRC=$(BIG_NUMBER)/square.c
HUFFMANSRC=$(HUFFMAN)/poj3253.c
all: bigN huff prime
bigN: $(BIGSRC)
	$(CC) $(OPTION) $(BIGSRC) -o $(BIG_NUMBER)/main
huff : $(HUFFMANSRC)
	$(CC) $(OPTION) $(HUFFMANSRC) -o $(HUFFMAN)/main
primeObjects= $(PRIME)/main.c  $(PRIME)/prime.o    
prime: $(primeObjects)
	$(CC)  -o $(PRIME)/$@ $^  $(MATH_FLAG)
clean:
	rm -f $(BIG_NUMBER)/main  $(HUFFMAN)/main
