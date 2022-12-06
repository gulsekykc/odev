#include <stdio.h>
#define dizi 5
int ortdanbuyukler(int matris[dizi])
{
    double ort = 0;
    for (int i = 0; i < dizi; i++)
    {
        ort = ort + matris[i];
    }
    ort = ort / dizi;

    int dahabuyuk = 0;
    for (int i = 0; i < dizi; i++)
    {
        if (matris[i] > ort)
        {
            dahabuyuk++;
        }
    }
    return dahabuyuk;
}
int main(void)
{
    int x[dizi] = {1, 8, 3, 7, 6};
    int a = ortdanbuyukler(x);
    printf("%d", a);
}