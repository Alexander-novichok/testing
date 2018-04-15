#include <stdio.h>
#include "macros.h"
#include "mathan.h"


int main() {
int d, c, b, a = 0;
    
    puts ("\nСоздание нового файла на серваке; Проверка\n");

a = SQR(5);
b = sum(5, 8, 95, 114, 223);
c = CUBE(3);
//d = average(1, 5, 12, 44, 58);
printf ("\n function SQR = %d\n", a);
printf ("Сумма чисел b = %d\n", b);
printf ("Число в кубе c = %d\n", c);
printf ("Среднее арефметическое чисел = %d\n", average(1, 5, 12, 44, 58));
return 0;
}
