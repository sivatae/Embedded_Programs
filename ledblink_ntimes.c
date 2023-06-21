#include <AT89S52.h>
#define LED P2_0  
#define ON 0           
#define OFF 1   
void wait(int);    
void main(){
  char c;
 LED=OFF;
 
for(c=0;c<=5;c++){
    LED=OFF;
    wait(3);
    LED=ON;
    wait(2);
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