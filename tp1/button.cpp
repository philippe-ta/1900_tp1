#include <avr/io.h> 

int main(){
    //mettre port A comme entree, les autres comme sortie
    DDRA = 0x00;

    DDRB = 0xFF;
    DDRC = 0xFF;
    DDRD = 0xFF; 

    PORTB = 0x00;

    while(true){
        if(PINA == 0xFF){
            PORTB = 0xFF;
        }
        else{
            PORTB = 0x00;
        }

    }

    return 0;
}