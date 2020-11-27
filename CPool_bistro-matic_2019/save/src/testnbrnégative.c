
int my_put_nbr(int nb);
void my_putchar(char c);

int convert_int(char const *str, int i)
{
    int j = i;
    int number = 0;

    for (j; str[j] != '\0'; j++) {
        if (str[j] >= '0' && str[j] <= '9') {
            number = number * 10;
            number = number + (str[j] - '0');
        } else
            return (number);
    }
    return (number);
}

int eval_expr(char const *str)
{
    int i = 0;
    int nbr1 = convert_int(str, i);
    int nbr2;
    int nbr3;
    
    while (str[i] >= '0' && str[i] <= '9'){
        i = i + 1;
    i = i + 1;
    nbr2 = convert_int(str, i);
    if (str[i - 1] == '+') 
        nbr1 = nbr1 + nbr2;
    if (str[i -1] == '-') 
        nbr1 = nbr1 - nbr2;
    if (str[i -1] == '*') 
        nbr1 = nbr1 - nbr2;
    if (str[i -1] == '/')
        nbr1 = nbr1 - nbr2;
    }         return(nbr1);
}
int nexteval_expr(char const *str)
{
    int i = 0;
    int nbr1 = convert_int(str, i);
    int nbr2;
    int nbr3;
    {   
        nbr3 = convert_int(str, i);
        if (str[i - 2] == '+')
        nbr2 = nbr2 + nbr3;
        if (str[i -2] == '-')
            nbr2 = nbr2 - nbr3;
        if (str[i -2] == '*')
            nbr2 = nbr2 - nbr3;
    if (str[i -2] == '/')
        nbr2 = nbr2 - nbr3;
    }          return(nbr2);
}
int main(int ac, char **av)
{
    if (ac == 2) {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}


