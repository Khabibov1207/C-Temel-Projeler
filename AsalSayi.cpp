#include <stdio.h>
#include <stdlib.h>

int asalsayi(int sayi){
    int sayac = 0;
     
    for(int i = 2; i < sayi; i++)
    {
        if(sayi % i == 0){
            sayac++;     
        }
    }
    if(sayac == 0){
    	printf("%d Sayisi asal sayidir.",sayi);
        return sayi;
    }
    else{
        printf("%d Sayisi asal sayi degildir.",sayi);
    }
}
int main(){
	int sayi;
	printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
     

	if(asalsayi(sayi) == sayi){
		if(asalsayi(sayi+2)==sayi+2){
			if(asalsayi(sayi+6)==sayi+6){
				printf("%d %d %d  bunlar asal ucuzdur.",sayi,sayi+2,sayi+6);
			}
		}
	}
		

}
