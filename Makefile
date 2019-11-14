cplay: libcplay.so
	gcc -std=c17 -Wall -Wextra cplay.c libcplay.so -o cplay

libcplay.so:
	gcc -std=c17 -Wall -Wextra -c cplayfunctions.c -o libcplay.so

run: cplay
	./cplay

runv: cplay
	valgrind ./cplay

clean:
	rm -rf cplay *so
