CC = g++
CFLAGS = -std=c++11

main: main.cpp
	$(CC) $(CFLAGS) -o main main.cpp

.PHONY: clean
clean:
	rm -f main
