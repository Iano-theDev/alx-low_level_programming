#!/usr/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c -fPIC *.c -shared -o liball.so *.o
