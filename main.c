// This program simulates a grade index


#include <stdio.h>


int main(){
    
    int const noten = 5;
    int anzahlNoten[noten];
    int durchschnittsNote;
    int mengeNote;
    
    int i;
    
    printf("Program Notenspiegel \n");
    
    
    for(i=0;i<5;i++){
        
        printf("Bitte geben Sie die Anzahl der Arbeiten mit der Note %i ein: \n",i+1);
        scanf("%i",&anzahlNoten[i]); 
        
    }
    
    printf("Anzahl der Note 1 beträgt %i \n",anzahlNoten[0]);
    printf("Anzahl der Note 2 beträgt %i \n",anzahlNoten[1]);
    printf("Anzahl der Note 3 beträgt %i \n",anzahlNoten[2]);
    printf("Anzahl der Note 4 beträgt %i \n",anzahlNoten[3]);
    printf("Anzahl der Note 5 beträgt %i \n",anzahlNoten[4]);

    
    mengeNote = anzahlNoten[0]+anzahlNoten[1]+anzahlNoten[2]+anzahlNoten[3]+anzahlNoten[4];
    
    durchschnittsNote = mengeNote/5; //Anzahl der Noten(5)
    
   
    
    printf("Der Notendurchschnitt beträgt: %i \n",durchschnittsNote);
    
    return 0;
    
}
