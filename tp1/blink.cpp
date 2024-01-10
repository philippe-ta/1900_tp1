#include <avr/io.h> 

int main(){

    // Les 4 ports sont en mode sortie
    DDRA = 0xFF; 
    DDRB = 0xFF; 
    DDRC = 0xFF; 
    DDRD = 0xFF; 

    while(true){
        //alumer la lumiere a vert

        //wait

        //alumer la lumiere rouge

        //wait

        // passer rapidement entre les deux couleurs pour faire la couleur ambree pendant une periode
        for (int i = 0; i<10000; i++){
            
        }

    }
    

    return 0;
}