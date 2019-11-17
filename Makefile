cplay: libcplay.so
	gcc -std=c17 -Wall -Wextra src/main.c lib/libcplay.so -o build/cplay

libcplay.so:
	if [ ! -d build ]; then mkdir build; fi
	if [ ! -d lib ]; then mkdir lib; fi
	gcc -std=c17 -Wall -Wextra -c src/functions.c -o lib/libcplay.so

clean:
	rm -rf lib build

run: cplay
	./build/cplay

runv: cplay
	valgrind ./build/cplay
