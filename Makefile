run: cplay
	./build/cplay

runv: cplay
	valgrind ./build/cplay

cplay: libcplay.so
	gcc -std=c17 -Wall -Wextra src/cplay.c lib/libcplay.so -o build/cplay

libcplay.so: structure
	gcc -std=c17 -Wall -Wextra -c src/cplayfunctions.c -o lib/libcplay.so

structure:
	if [ ! -d ./build ] && [ ! -d ./lib ]; then mkdir build lib; fi

clean:
	if [ -d ./build ] && [ -d ./lib ]; then rm -rf build lib; fi
