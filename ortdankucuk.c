#include <stdio.h>
#define dizi 5

int ortdankucuk(int matris[dizi])
{
    double ort = 0;
    for (int i = 0; i < dizi; i++)
    {
        ort = ort + matris[i];
    }
    ort = ort / dizi;

    int count = 0;
    for (int i = 0; i < dizi; i++)
    {
        if (matris[i] > ort)
        {
            count++;
        }
    }
    return count;
}
int main(void)
{
    int x[dizi] = {1, 2, 5, 7, 6};
    int a = ortdankucuk(x);
    printf("%d", a);
}