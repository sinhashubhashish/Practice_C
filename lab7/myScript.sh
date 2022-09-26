rm *.o
rm exe
gcc -c linearSearch.c
gcc -c search_main.c
gcc -o search_exe linearSearch.o search_main.o
./search_exe