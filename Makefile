cplay: libcplay.so
	gcc -std=c17 -Wall -Wextra src/cplay.c lib/libcplay.so -o build/cplay

libcplay.so:
	gcc -std=c17 -Wall -Wextra -c src/cplayfunctions.c -o lib/libcplay.so

run: cplay
	./build/cplay

runv: cplay
	valgrind ./build/cplay

clean:
	rm -rf cplay build/* lib/*
