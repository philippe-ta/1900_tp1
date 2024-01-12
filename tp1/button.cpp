#include <avr/io.h> 
#include <util/delay.h>

int main(){
    //mettre port A comme entree, les autres comme sortie
    DDRA = 0xFF;
    DDRB = 0xFF;
    DDRC = 0xFF;

    DDRD = 0x00; 

    PORTB = 0x00;

    while(true){
        if(PIND & 0x04){
            _delay_ms(10);
            if(PIND & 0x04){
                PORTB = 0x01;
            }
        }
        else{
            PORTB = 0x00;
        }

    }
}