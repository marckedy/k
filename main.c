
#include <stdio.h>
#include <stdlib.h>

int main() {
    int hora, minuto, segundo;
    
    printf("Ingresa la hora, minutos y segudos\n");
    scanf("%d %d %d", &hora, &minuto, &segundo);
    
    
    printf("Despues de un segundo son las \n");
    if(segundo==59){
        if(minuto==59){
            if(hora==23){
                 segundo=0;
                 minuto=0;
                 hora=0;
                printf("%dhr con %d minutos y %d segundos\n", hora, minuto, segundo);
            }else{
                segundo=0;
                minuto=0;
                hora++;
                printf("%dhr con %d minutos y %d segundos\n", hora, minuto, segundo);    
            }
        }else{
            segundo=0;
            minuto++;
            printf("%dhr con %d minutos y %d segundos\n", hora, minuto, segundo);
        }
    }else{
        segundo++;
        printf("%dhr con %d minutos y %d segundos\n", hora, minuto, segundo);
    }
    return 0;
}

