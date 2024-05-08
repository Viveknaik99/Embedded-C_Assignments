#include<reg51.h>
sbit LED =P2^0;
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
	TH1  = 0XA5;
	TL1  = 0XFE;
    TR1=1;
	while(TF1==0);
	TR1=0;
	TF1=0;
	}