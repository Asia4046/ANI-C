exec = anic
src = $(wildcard src/*.c)
obj = $(src:.c=.o)
flags = -Wall -g -lm -ldl -fPIC -rdynamic

$(exec): $(obj)
	gcc $(obj) $(flags) -o $(exec)

%.o: %.c include/%.h
	gcc -c $(flags) $< -o $@

clean:
	rm -rf anic
	rm -rf src/*.o
	