cplay:
	gcc -std=c17 -Wall -Wextra cplay.c -o cplay

run: cplay
	./cplay

runv: cplay
	valgrind ./cplay

clean:
	rm -rf cplay
