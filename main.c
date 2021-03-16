#include <stdio.h>
#include "periph/gpio.h" //the GPIO librery 


int main(void){

gpio_t pin= GPIO_PIN(0,8);      // i've choosen the pin D7 of arduino which is PA8 
gpio_init(pin,GPIO_OUT);        //initilization of the pin as output 
gpio_set(pin);                  // given the HIGH status to the choosen pin

return 0;
}
