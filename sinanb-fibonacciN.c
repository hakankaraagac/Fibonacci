#include <stdio.h>

int main()
{
    printf("N icin bir sayi girin:");
  	int a=0, b=1, c=0, N;     //Burda N kullanicinin girdigi her hangi bir tamsayi. O sayiya kadar Fibonacci sequence hesaplaniyor
        
  	scanf("%d", &N);
    
    c=a+b;                  //Fibonacci sayilarin fonksiyonu. 1 + 1 = 2, 2 + 1 = 3, 3 + 2 = 5   ect...
    
    while (N>c)             //N sayisi c sayisindan buyuk oldugu sure asagadaki komut islenecek. Boylece program N sayisina gelince program calismayi durdurur
    {
		  printf("%d ", c);       // integerlari ekranda gostermek icin
		  a = b;                  // Boylece a sayisi, b nin degerini aliyor ki program 0+1 = 1 de bitmesin
		  b = c;              
		  c = a + b;              // Boylece Fibonacci sayisi, oncesinde gelen sayilarin toplamina esit. ornegin: 5 = 3 + 2
	  }   
    getchar();              // Programin erken kapanmasini engelliyor
}
