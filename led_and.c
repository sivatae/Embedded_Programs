#include <AT89S52.h>
#define LED P2_0
#define ON 0           
#define OFF  1
#define SW1 P3_0 
#define SW2 P3_1
void main(){
 LED=OFF;
while(1){
  
   if(SW1==ON && SW2==ON)
   LED=ON;
   else
   LED=OFF;
  }
}