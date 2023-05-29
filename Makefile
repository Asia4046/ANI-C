EXEC = anic
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
FLAGS = -g -Wall -lm -ldl -fPIC -rdynamic

$(EXEC): $(OBJ)
	gcc $(OBJ) $(FLAGS) -o $(EXEC)

%.o:%.c include/%.h
	gcc -c $(FLAGS) $< -o $@

clean:
	-rm anic
	-rm src/*.o

lint:
	clang-tidy src/*.c src/include/*.h

install:
	cp anic /usr/bin/anic