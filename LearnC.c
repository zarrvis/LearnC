#include<stdio.h>
#include<string.h>

float luas_lingkaran(float pi, int jari2); //Memanggil fungsi menghitung luas lingkaran
float kel_lingkaran(float pi, int jari2); //Memanggil fungsi menghitung keliling lingkaran

void main()
{

while(1)
{
    //Variabel
    int c, jari2, i, j, bil;
    char str[100], temp;
    float pi = 3.14;

    //Pilihan menu
    printf("\n\t---SELECT YOUR CHOICE---------\n");
    printf("\n\t1) MENGHITUNG LUAS $ KELILING LINGKARAN\n\t");
    printf("\n\t2) MEMBALIKKAN KATA \n\t");
    printf("\n\t3) MENENTUKAN BILANGAN GENAP ATAU GANJIL \n\t");
    printf("\n\t4) EXIT");
    printf("\n\t-------------------------------\n");
    printf("\nENTER YOUR CHOICE : ");
    scanf("%d", &c);
    printf("\n");

    switch (c)
    {
        case 1:
            /*Luas dan keliling lingkaran*/

            printf("Masukkan ukuran jari-jari lingkaran anda = ");
            scanf("%d", &jari2);

            printf("\nLuas lingkaran anda adalah = %.2f\n", luas_lingkaran(pi, jari2));
            printf("\nKeliling lingkaran anda adalah = %.2f\n", kel_lingkaran(pi, jari2));
            break;

        case 2:
            /* Membalikkan kata */

            printf("Masukkan kata yang ingin dibalik : ");

            scanf("%s",&str);

            i=0;
            j=0;
            j = strlen(str) - 1;

            while(i<j)
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                i++;
                j--;
            }

            printf("\nKata anda setelah dibalik : %s\n", str);
            break;

        case 3:
            //Mengecek bilangan ganjil dan genap
            printf("Masukkan bilangan yang akan di cek = ");
            scanf("%d", &bil);

            if(bil % 2 == 0)
                printf("\nBilangan yang anda masukkan adalah bilangan genap\n");
            else
                printf("\nBilangan yang anda masukkan adalah bilangan ganjil\n");
            break;

        case 4:
            //exit program
            printf("THANKS FOR USING THIS SOFTWARE");
            exit(1);
            break;

            //fungsi jika memilih diluar menu
        default :
            printf("YOUR CHOICE IS WRONG PLEASE TRY AGAIN");
            break;
    }
}


}

//Fungsi menghitung luas lingkaran
float luas_lingkaran(float pi, int jari2)
{
    return pi * jari2 * jari2;
}

//Fungsi menghitung keliling lingkaran
float kel_lingkaran(float pi, int jari2)
{
    return 2 * pi * jari2;
}


