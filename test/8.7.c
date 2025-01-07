// module8 -> lesson7
// Адресная арифметика

#include <stdio.h>

int main()
{
    short int x = 10;
    short int y = 20;
    short int *px = &x;
    short int *px2 = px + 1;
    short int *py = &y;

    long long int z = 30;
    long long int *pz = &z;
    long long int w = 40;
    long long int *pw = &w;
    long long int *pw2 = pw + 1;

    printf(">  px = %p |  px2 = %p |  py = %p \n", px, px2, py);
    printf("> *px = %-14hd | *px2 = %-14hd | *py = %-14hd\n", *px, *px2, *py);
    printf("> px2 - px = %ld\n", px2 - px);

    printf("\n");

    printf(">  pw = %p |  pw2 = %p |  pz = %p \n", pw, pw2, pz);
    printf("> *pz = %-14lld | *pz2 = %-14lld | *pw = %-14lld\n", *pw, *pw2, *pz);
    printf("> pw2 - pw = %ld\n", pw2 - pw);

    return 0;
}
