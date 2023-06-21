#include <AT89S52.h>
#define LED P2_0  
#define ON 0           
#define OFF 1       
#define SW P3_3 
void wait(int);
void main(){
	LED=ON;
	while(1){
		if(SW==OFF){
		LED=!LED;
		wait(1);
		}
		else{
		LED=OFF;
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