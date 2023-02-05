#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int help(int *tab, int size, int ff)
{
    int a,b,x,y;
    a = 0;
    while(a < size)
    {
        x = tab[a];
        y = tab[a + 1];
        b = a + 2;
        while(b < size)
        {
            if(y == tab[b] && x == tab[b + 1])
                ff++;
            else if(x == tab[b] && y == tab[b + 1])
                ff++;
            b+=2;
        }
        a+=2;
    }
    return ff;
}

int main()
{
    int a,x,b,d,i;
    int gg;
    int pp;
    int *tab;
    x = 1;
    d = 0;
    i = 1;
    gg = 0;
    while(x)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        if(b == 0){
            printf("%d\n", a - 1);
            return 0;
        }
        x = (b * 2) + 2;
        pp = x;
        tab = malloc(x * sizeof(int));
        x = x - 2;
        while(x != 0){
            if(i != 0)
            {
                tab[d] = a;
                tab[d + 1] = b;
                d+=2;
                i--;
            }
            scanf("%d %d", &tab[d], &tab[d + 1]);
            d+=2;
            x-=2;
        }
    }
    int vv = pp;
    pp = pp - 2;
    int ff = pp / 2;
    int ii = tab[0];
    ff = (ii - 1) - ff;
    // printf("->%d\n",ff);
    ff = help(tab+2, vv-2, ff);
    printf("%d\n",ff);
	// }
}