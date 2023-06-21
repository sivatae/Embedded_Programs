#include <AT89S52.h> /*include the header file*/
#define LED P2_4      /*led connct at port pin p2.4*/
#define ON 0           /*logic 0 active*/
#define OFF 1       /* logic 1 inactive*/
#define SW P3_3      /*switch connct at port pin p3.3*/
#define INPUT 1    /*configure i/p as 1*/
void main()
{
  __bit status; /*intialize  a bit variable*/
  LED=OFF;      /* turn off the led*/
  SW=INPUT;
  while(1)
    {
	status=SW;
	LED=!status;      /* write logic to led*/
    }
}