#include <stdio.h>
#define dizielemansayi 5

int enbuyukikinci(int matris[dizielemansayi])
{
    int max = matris[0];
    for (int i = 0; i < dizielemansayi; i++)
    {
        if (max < matris[i])
        {
            max = matris[i];
        }
    }

    int enbuyukikinci = matris[0];
    for (int i = 0; i < dizielemansayi; i++)
    {
        if (enbuyukikinci < matris[i] && matris[i] != max)
        {
            enbuyukikinci = matris[i];
        }
    }
    return enbuyukikinci;
}

int main(void)
{
    int x[dizielemansayi] = {4, 5, 6, 14, 9};
    int a = enbuyukikinci(x);
    printf("en buyuk ikinci sayi :%d", a);
}