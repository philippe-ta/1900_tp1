#include <avr/io.h> 
#include <util/delay_basic.h>

//TODO: finir fonction wait(tres utile dans le futur)
void wait(double sec){
    _delay_loop_1();
}

int main(){

    // Les 4 ports sont en mode sortie
    DDRA = 0xFF; 
    DDRB = 0xFF; 
    DDRC = 0xFF; 
    DDRD = 0xFF; 

    while(true){
        //alumer la lumiere a vert
        PORTB = 0xFE;

        //wait
        wait(3);

        //alumer la lumiere rouge
        PORTB = 0xFD;

        //wait
        wait(3);

        // passer rapidement entre les deux couleurs pour faire la couleur ambree pendant une periode
        for (int i = 0; i<10000; i++){
            PORTB = 0xFE;
            wait(0.01)
            PORTB = 0xFD;
        }

    }
    

    return 0;
}
