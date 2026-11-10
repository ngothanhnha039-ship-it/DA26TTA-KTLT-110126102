#include <stdio.h>
#include <stdlib.h>



int main() { int a, b;
 int tong , hieu , tich ;
 float thuong;
        printf (" Nhap a =");
        scanf ("%d",&a);
         printf (" Nhap b =");
        scanf ("%d",&b);
          
                           
						   
			tong = a + b;			  
				  printf ("\n Tong a va b la : %d",tong);
            
            hieu = a - b;
            printf ("\n Hieu a va b la : %d",hieu);
           
          tich = a * b;  
            printf ("\n Tich a va b la : %d",tich);
           
           thuong = (float)a/b;
            printf ("\n Thuong a va b la : %.2f",thuong);
            
	return 0;
}