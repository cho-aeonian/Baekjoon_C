#include <stdio.h>
int main() 
{
    int a, b, c;
    int money = 0;
    int max = 0;
    scanf("%d %d %d", &a, &b, &c);
 
    if (a == b && b == c && a == c)
        money = 10000 + a * 1000;
 
    else if (a == b || a == c)
        money = 1000 + a * 100;
 
    else if (b == c)
        money = 1000 + b * 100;
  
    else {
        if (a > b && a > c)
            max = a;
        else if (b > a && b > c)
            max = b;
        else if (c > a && c > b)
            max = c;

        money = max * 100;
    }
    printf("%d", money);
    return 0;
}