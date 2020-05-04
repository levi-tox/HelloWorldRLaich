#include <avr\io.h>
#include <Atmega328P.h>
#include <avrlib.h>
#include <RegisterAccess.h>
#define F_CPU 16000000
#include <util\delay.h>
#include <inttypes.h>
#include <avr/interrupt.h>


int main(void)
{
    Usart_Init(250000); // higher is to fast; cannot be consumed reliably anymore!

    TRACE("hello world 1");



    //LedConfigurePin();
    //Bool status = True;
    while (True)
    {
        TRACE("hello world 1");
        /*UpdateRegister(PortB.PORT, (PIN_3, status));
        status = !status;*/
        _delay_ms(1000);
    }
    return 0;
}