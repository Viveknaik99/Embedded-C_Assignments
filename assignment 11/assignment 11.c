#include<reg51.h>
sbit LED =P1^5;
void delay();
 void main()
 {
   while(1)
   {
   LED=1;
   delay();
   LED =0;
   delay ();
   }
   }
   void delay ()
   {
    TMOD = 0x01;
	TH1  = 0X4B;
	TL1  = 0XFD;
    TR1=1;
	while(TF1==0);
	TR1=0;
	TF1=0;
	}