#include<avr/io.h>
#include<util/delay.h>
int main()
{
DDRC=0xff;
while(1)
{
PORTC=0x00;
_delay_ms(1000);
PORTC=0x1b;
_delay_ms(1000);
PORTC=0x2d;
_delay_ms(1000);
PORTC=0x28;
_delay_ms(1000);
PORTC=0x03;
_delay_ms(1000);
PORTC=0x1d;
_delay_ms(1000);
PORTC=0x2b;
_delay_ms(1000);
PORTC=0x0f;
_delay_ms(1000);

}
}
