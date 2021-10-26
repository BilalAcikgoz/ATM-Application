#include <stdio.h>
#include <stdlib.h>

/*
   1 - Bakiye goruntule
   2 - Para yatir
   3 - Para cek
   4 - Fatura ode
       - Internet
       - Elektrik
       - Su
       - Dogalgaz
       - Telefon
   5 - Cikis    
*/

int main(int argc, char *argv[]) 
{
	int secim, secim2;
	int miktar;
	int bakiye;
	int internet, elektrik, su, dogalgaz, telefon;
	int onay, onay2;
	
	srand(time(0));
	bakiye = rand();
	internet = rand() % 300;
	elektrik = rand() % 300;
	su = rand() % 300;
	dogalgaz = rand() % 300;
	telefon = rand() % 300;
	
	int i = 1;
	
	while(i)
	{
		printf("1-Bakiye Goruntule\n2-Para Yatir\n3-Para Cek\n4-Fatura Ode\n5-Cikis\n");
		printf("Lutfen seciminizi yapiniz: ");
		scanf("%d", &secim);
		
		switch(secim)
		{
			case 1:
				system("PAUSE");
				system("CLS");
				printf("Bakiyeniz: %d\n", bakiye);
				system("PAUSE");
				system("CLS");
				break;
			case 2:
				system("PAUSE");
				system("CLS");
				printf("Yatirmak istediginiz miktari giriniz: ");
				scanf("%d", &miktar);
				
				bakiye += miktar;
				
				printf("Yatirdiginiz miktar: %d\n", miktar);
				printf("Yeni bakiyeniz: %d\n", bakiye);
				system("PAUSE");
				system("CLS");
				break;
			case 3:
				system("PAUSE");
				system("CLS");
				printf("Cekmek istediginiz miktari giriniz: ");
				scanf("%d", &miktar);
				
				bakiye -= miktar;
				
				printf("Cektiginiz miktar: %d\n", miktar);
				printf("Yeni bakiyeniz: %d\n", bakiye);
				system("PAUSE");
				system("CLS");
				break;
			case 4:
				system("PAUSE");
				system("CLS");
				printf("1-Internet\n2-Elektrik\n3-Su\n4-Dogalgaz\n5-Telefon\n");
				printf("Lutfen seciminizi yapiniz: ");
	        	scanf("%d", &secim2);
	        	
	        	
	        	switch(secim2)
	        	{
	        		case 1:
	        			printf("Internet faturaniz: %d\n", internet);
	        			printf("Faturayi odemek istiyorsaniz 1'e basin: ");
	        			scanf("%d", &onay);
	        			
	        			if(onay == 1)
	        			{
	        				bakiye -= internet;
	        				printf("Faturaniz odenmistir\nKalan miktar: %d\n", bakiye);
	        				printf("Ana ekrana donuluyor.\n");
	        				
	        				
						}
	        			else
	        			{
	        				printf("Ana ekrana donuluyor.\n");
						}
						system("PAUSE");
						system("CLS");
	        			break;
	        		case 2:
	        			printf("Elektrik faturaniz: %d\n", elektrik);
	        			printf("Faturayi odemek istiyorsaniz 1'e basin: ");
	        			scanf("%d", &onay);
	        			
	        			if(onay == 1)
	        			{
	        				bakiye -= elektrik;
	        				printf("Faturaniz odenmistir\nKalan miktar: %d\n", bakiye);
	        				printf("Ana ekrana donuluyor.\n");
	        				
	        				
						}
	        			else
	        			{
	        				printf("Ana ekrana donuluyor.\n");
						}
						system("PAUSE");
						system("CLS");
	        			break;
					case 3:
						printf("Su faturaniz: %d\n", su);
						printf("Faturayi odemek istiyorsaniz 1'e basin: ");
	        			scanf("%d", &onay);
	        			
	        			if(onay == 1)
	        			{
	        				bakiye -= su;
	        				printf("Faturaniz odenmistir\nKalan miktar: %d\n", bakiye);
	        				printf("Ana ekrana donuluyor.\n");
	        				
	        				
						}
	        			else
	        			{
	        				printf("Ana ekrana donuluyor.\n");
						}
						system("PAUSE");
						system("CLS");
	        			break;
					case 4:
						printf("Dogalgaz faturaniz: %d\n", dogalgaz);
						printf("Faturayi odemek istiyorsaniz 1'e basin: ");
	        			scanf("%d", &onay);
	        			
	        			if(onay == 1)
	        			{
	        				bakiye -= dogalgaz;
	        				printf("Faturaniz odenmistir\nKalan miktar: %d\n", bakiye);
	        				printf("Ana ekrana donuluyor.\n");
	        				
	        				
						}
	        			else
	        			{
	        				printf("Ana ekrana donuluyor.\n");
						}
						system("PAUSE");
						system("CLS");
	        			break;
					case 5:
						printf("Telefon faturaniz: %d\n", telefon);
						printf("Faturayi odemek istiyorsaniz 1'e basin: ");
	        			scanf("%d", &onay);
	        			
	        			if(onay == 1)
	        			{
	        				bakiye -= telefon;
	        				printf("Faturaniz odenmistir\nKalan miktar: %d\n", bakiye);
	        				printf("Ana ekrana donuluyor.\n");
	        				
	        				
						}
	        			else
	        			{
	        				printf("Ana ekrana donuluyor.\n");
						}
						system("PAUSE");
						system("CLS");
	        			break;
					default:
						printf("Yanlis tuslama yaptiniz!!!Boyle bir fatura bulunmamaktadir...\n");
						system("PAUSE");
						system("CLS");
					    break;					
				}
				break;
			case 5:
				system("CLS");	
				printf("Cikis yapiliyor...\n");	
				system("PAUSE");
				i = 0;
				break;
			default:
				system("CLS");
				printf("Yanlis secim yaptiniz!!!\n");
				system("PAUSE");
				system("CLS");
				i = 1;
				break;		
		}		
	}
	
	return 0;
}








