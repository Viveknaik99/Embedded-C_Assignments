#include<reg51.h>																	 #include<reg51.h>
sbit LED =P2^7;
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
    TMOD = 0x02;
	TH1  = 0X48;
	TL1  = 0X00;
    TR1=1;
	while(TF1==0);
	TR1=0;
	TF1=0;
	}