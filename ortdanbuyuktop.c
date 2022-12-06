#include <stdio.h>
#define dizi 5

int dahaBuyuklerinToplami(int matris[dizi], int sayi)
{
    int toplam = 0;
    for (int i = 0; i < dizi; i++)
    {
        if(sayi < matris[i])
        {
            toplam = toplam + matris[i];
        }
    }
    return toplam;
}

int main(void)
{
    int x[dizi] = {1, 2, 3, 4, 6};
    int a = dahaBuyuklerinToplami(x);
    printf("%d", a);
}