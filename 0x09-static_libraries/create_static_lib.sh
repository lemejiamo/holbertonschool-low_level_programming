#bin/bash
ls -l *.c
echo this are the files to build it a library
gcc -c *.c
ar -rc liball.a *.o

