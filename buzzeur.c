#include <buzzeur.h>
#include <C:\Users\bacem\Desktop\recherche\rtc16Mhz\sound.c>
void main()
{

   while(TRUE)
   {
         if(input(PIN_A0)==1)
   {
      generate_tone(1900, 200);  
     // return 1;
   }  
   else if(input(PIN_A1)==1)
   {
      generate_tone(2900, 150);  
     // return 2;                  
   } 
   else
   {
     // return 0;
   }
   }

}
