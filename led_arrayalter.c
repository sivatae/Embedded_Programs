#include <AT89S52.h>
void wait(int);
void main(){
while(1){
P0=0xAA;
wait(2);
P0=0x55;
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