#include <AT89S52.h>
void wait(int);
void main()
 {
	P2_0=0;
	while(1)
	{
	   P2_0=1;
	   wait(5);
           P2_0=0;
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