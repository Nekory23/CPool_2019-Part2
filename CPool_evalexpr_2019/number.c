#include <stdio.h>

int convert_int(char *nbr)
{
    int number = 0;
    int count = 0;
    int times = 1;

    while (nbr[count] != '\0')
        count = count + 1;
    count = count - 1;
    for(count; count != 0; count = count - 1) {
        number = number + (nbr[count] - '0') * times;
        times = times * 10;
    }
}

int main(char *nbr)
{
    int number = convert_int("4000");
    printf("%d", number);
}
