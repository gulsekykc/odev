#include <stdio.h>
#define dizi 5
int dahaBuyuklerinOrtalamasi(int matris[dizi], int sayi)
{
    int toplam = 0;
    for (int i = 0; i < dizi; i++)
    {
        if(sayi < matris[i])
        {
            toplam = toplam + matris[i];
        }
    }
    float ort = toplam / (float)dizi;
    return ort;
}

int main(void)
{
    int x[dizi] = {1, 2, 3, 4, 6};
    int a = dahaBuyuklerinOrtalamasi(x);
    printf("%d", a);
}