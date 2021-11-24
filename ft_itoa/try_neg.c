#include <stdio.h>

static int changeSign(int n)
{
int i;
int nb;

i = 0;

printf("original value of n: %d\n", n);
nb = -n;
printf("signed changed value of n: %d\n", nb);

return (i);
}

int main(void)
{
int i = -2147483648;
changeSign(i);
i = 212;
changeSign(i);
return 1;
}
