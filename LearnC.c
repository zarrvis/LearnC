#include<stdio.h>

float luas_lingkaran(int jari2);
int luas_persegi(int sisi1,int sisi2);
float luas_segi3(int alas, int tinggi);

void main()
{

while(1)
{
    int c, jari2, sisi1, sisi2, alas, tinggi;

    printf("\n\t---Select your choice---------\n");
    printf("\n\t1) MENGHITUNG LUAS LINGKARAN\n\t");
    printf("\n\t2) MENGHITUNG LUAS PERSEGI\n\t");
    printf("\n\t3) MENGHITUNG LUAS SEGITIGA\n\t");
    printf("\n\t4) MEMBALIKKAN KATA ATAU KALIMAT\n\t");
    printf("\n\t5). EXIT");
    printf("\n\t-------------------------------\n");
    printf("\nEnter your choice: ");
    scanf("%d", &c);
    printf("\n");

    switch (c)
    {
        case 1:
            /*luas lingkaran*/

            printf("Masukkan ukuran jari-jari lingkaran anda = ");
            scanf("%d", &jari2);

            printf("\nLuas lingkaran anda adalah = %.2f\n", luas_lingkaran(jari2));
            break;

        case 2:
            /*luas persegi*/

              /*simpan sisi pertama*/
                printf("Masukkan ukuran sisi pertama = ");
                scanf("%d", &sisi1);

              /*simpan sisi kedua*/
                printf("\nMasukkan ukuran sisi kedua = ");
                scanf("%d", &sisi2);

                printf("\nLuas nya adalah = %d\n", luas_persegi(sisi1, sisi2));
                break;

        case 3:
            /*luas segitiga*/

            printf("Masukkan ukuran alas segitiga = ");
            scanf("%d", &alas);

            printf("\nMasukkan ukuran tinggi segitiga = ");
            scanf("%d", &tinggi);

            printf("\nLuas nya adalah = %.2f\n", luas_segi3(alas, tinggi));
            break;

        case 4:
            break;

        case 5:
            printf("THANKS FOR USING THIS SOFTWARE");
            exit(1);
            break;

        default :
            printf("YOUR CHOICE IS WRONG PLEASE TRY AGAIN");
            break;
    }
}


}

float luas_lingkaran(int jari2)
{
    float pi = 3.14;
    return pi * jari2 * jari2;
}

int luas_persegi(int sisi1,int sisi2)
{
    return sisi1 * sisi2;
}

float luas_segi3(int alas, int tinggi)
{
    float r = 0.5;
    return r * alas * tinggi;
}


