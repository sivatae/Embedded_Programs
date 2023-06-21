#include <AT89S52.h>
#define LED1 P2_0  
#define LED2 P2_1 
#define ON 0           
#define OFF 1   
void wait(int);    
void main(){
    LED1=ON;
    LED2=ON;
    while(1){
     LED1=OFF
     LED2=ON;
     wait(2);
      LED1=ON;
      LED2=OFF;
      wait(1);
     }
    }
}
void wait(int del)
 {
   int count1,count2;
   for(count1=0;count1<del;count1++){
     for(count2=0;count2<15;count2++){
  } 
 }
 }