#include <stdio.h>
// klavyeden kaç tane asal sayı listeleneceğini iste ve ekrana yazdır.Örneğin 3 için output: 2,3,5 olur

int main()

{ 
    
 int sayac = 0;
 int n = 2; // asal sayılar 2'den başlar.
 int k;	
 int i;
 	
 printf("kac tane asal sayi istiyorsunuz?: ");	
 scanf("%d",&k);  
 	                                                                           
 while(sayac < k)                             

 {
  	
  int asal = 1;	// asal kabul et
  	
  for(i = 2 ; i < n ; i++)
  {
   if(n % i == 0)	                                                         
   {
    asal = 0;  // sayı asal değil                                                
   }	
  }	
  	 
  if(asal == 1)                               
  {
   printf("%d\n",n);                                                                                   
   sayac++;	                                                                           
  }
  	
  n++;	                                                          
  	
 }
 
 return 0;
  
}