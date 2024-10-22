#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(0));
    int sayi = (rand()%100) + 1;
    int hak = 5;
    int tahmin;
    
    nokta:
    if(hak > 0){
        hak--;
        printf("Sayi tahmininizi yapiniz: ");
        scanf("%d", &tahmin);
        if (tahmin > sayi){
            printf("Yok ebesinin!\n");
        }
        else if (tahmin < sayi){
            printf("Buyuk beyinler kucuk dusunmez.\n");
        }
        else{
            printf("Kedi olali bi fare yakaladin!");
            return 0;
        }
    }
    else{
        printf("O kadar zor degildi be reis, iste sayimiz: ");
        printf("%d",sayi);
        return 0;
    }

    goto nokta;

    return 0;
}