#include<reg51.h>																							#include <reg51.h>
void T1M2Delay(void);
sbit mybit=P2^7;
void main(void){
unsigned char x;
while (1) {
mybit=~mybit;
T1M2Delay();
}
}
void T1M2Delay(void){
TMOD=0x20;
TH1=-184;
TR1=1;
while (TF1==0);
TR1=0;
TF1=0;
}