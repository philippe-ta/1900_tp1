#include <avr/io.h> 
#include <util/delay.h>

int main(){
    const auto rouge = 0x02;
    const auto vert = 0x01;

    // Les 4 ports sont en mode sortie
    DDRA = 0xFF; 
    DDRB = 0xFF; 
    DDRC = 0xFF; 
    DDRD = 0xFF; 

    while(true){
        //alumer la lumiere a vert
        PORTB = vert;
        

        //wait
        _delay_ms(2000);

        //alumer la lumiere rouge
        PORTB = rouge;

        //wait
        _delay_ms(2000);

        // passer rapidement entre les deux couleurs pour faire la couleur ambree pendant une periode
        for (int i = 0; i<1000; i++){
            PORTB = vert;
            _delay_ms(1);
            PORTB = rouge;
            _delay_ms(1);
        }
    }
}
