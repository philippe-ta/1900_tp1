#include <avr/io.h> 
#include <util/delay.h>

int main(){
    //mettre port D comme entree, les autres comme sorties

    DDRA = 0x00;
    DDRB = 0x00;
    DDRC = 0x00;
    DDRD = 0x00;

    //DDRA = 0xFF;
    //DDRB = 0xFF;
    //DDRC = 0xFF;

    DDRB |= (1 << PB0) | (1 << PB1);
    DDRD &= ~(1 << PD2);

    //DDRD = 0x00; 

    PORTB = 0x00;

    while(true){
        //if(PIND & 0x04){
        if(PIND & (1 << PD2)){
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