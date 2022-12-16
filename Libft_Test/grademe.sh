clear
rm -f main.exe *.h *.a *.txt
make bonus -C ../src/
make clean -C ../src/
mv ../src/libft.a .
cp ../src/libft.h .
gcc test.c -L. -lft -lbsd -o main.exe
clear
./main.exe
