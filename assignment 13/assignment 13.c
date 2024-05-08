#include <reg51.h>
sbit mybit=P1^5;
sbit SW=P1^7;
void T0M1Delay(unsigned char);
void main(void){
SW=1; 
while (1) {
mybit=~mybit; 
if (SW==0) 
T0M1Delay(0);
else
T0M1Delay(1);
}
}
void T0M1Delay(unsigned char c){
TMOD=0x01;
if (c==0) {
TL1=0x67;
TH1=0xFC;
}
else {
TL1=0x9A;
TH1=0xFD;
}
TR0=1;
while (TF0==0);
TR1=0;
TF1=0;
}