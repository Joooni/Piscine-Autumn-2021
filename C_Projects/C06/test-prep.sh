#!bin/bash/

echo ===ex00===
gcc -Wall -Wextra -Werror ex00/ft*.c && ./a.out
echo ===ex01===
gcc -Wall -Wextra -Werror ex01/ft*.c && ./a.out test1 test2 test3
echo ===ex02===
gcc -Wall -Wextra -Werror ex02/ft*.c && ./a.out test1 test2 test3
echo ===ex03===
gcc -Wall -Wextra -Werror ex03/ft*.c && ./a.out test5 Test4 A-test3 \!Test1 +Test2
