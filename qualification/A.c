#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// void help(int y)
// {
// }
int main()
{
    int x,a,b,c,d;
    int *tab;
    char *str;
    scanf("%d", &x);
	while(x > 0)
    {
        b = 0;
        scanf("%d", &a);
        *tab = malloc(a * sizeof(int));
        while(b < a)
        {
            scanf("%d", &c);
            tab[b] = c;
            b++;
        }
        x--;
	}
}