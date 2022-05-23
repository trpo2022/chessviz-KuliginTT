CC=gcc
CFLAGS=-Wall -Wextra
CPPFLAGS=-MMD

.PHONY: clean

./bin/chess: ./obj/src/chessviz/main.o ./obj/src/libchessviz/libchessviz.a
	$(CC) $(CFLAGS) -o $@ $^

./obj/src/chessviz/main.o: ./srс/chessviz/main.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

./obj/src/libchessviz/libchessviz.a: ./obj/src/libchessviz/board.o ./obj/src/chessviz/chess_move.o
	ar rcs $@ $^

./obj/src/libchessviz/board.o: ./srс/libchessviz/board.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

./obj/src/chessviz/chess_move.o: ./srс/chessviz/chess_move.c
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

clean:
	rm ./obj/src/chessviz/chess_move.d
	rm ./obj/src/chessviz/main.d
	rm ./obj/src/libchessviz/board.d
	rm ./obj/src/chessviz/chess_move.o
	rm ./obj/src/chessviz/main.o
	rm ./obj/src/libchessviz/board.o

-include chess_move.d board.d main.d

