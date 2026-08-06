gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libwork.a *.o
ranlib libwork.a
rm -f *.o
