///////////////////////////////
/////////////////////parking.c

#include <stdio.h>
int main(){
    int cantidad;
    int tiendas;
    scanf("%i", &cantidad);
    int n;
    for(n = 0; n < cantidad; n++){
    scanf("%i",&tiendas);
    int ctiendas[99];
    int i;
    for(i=0;i<tiendas;i++){
        scanf("%i", &ctiendas[i]);
    }
    int maximo = ctiendas[0];
    int minimo = ctiendas[0];
    int r;
    for (r=0;r<tiendas;r++){
        if(ctiendas[r]<minimo){
            minimo=ctiendas[r];
        }
        if(ctiendas[r]>maximo){
            maximo=ctiendas[r];
        }
    }
    int ans;
    int form = (maximo - minimo)*2;
    ans = form;
    printf("%i\n",ans);
    }
    return 0;
}

/////////////////////////////////////
//////////////////////////nlogonia.c

#include <stdio.h>
void nlogonia(){
     int veces;
     scanf("%i",&veces);
     while(veces != 0){
        int cor1, cor2, i;
        scanf("%d %d", &cor1, &cor2);
        for(i = 0; i < veces; i++){
            int corde1, corde2;
            scanf("%d %d", &corde1, &corde2);
            if (corde1 < cor1 && corde2 > cor2){
                printf("NO\n");
            } else if (corde1 < cor1 && corde2 < cor2){
                printf("SO\n");
            } else if (corde1 > cor1 && corde2 > cor2){
                printf("NE\n");  
            } else if (corde1 > cor1 && corde2 < cor2){
                printf("SE\n");
            } else {
                printf("divisa\n");
            }
        }
        scanf("%i",&veces);
     }  
}

int main(){
    nlogonia();
    return 0;
}

/////////////////////////////////////////
////////////////////////////////jumpers.c

#include <stdio.h>
#include <stdlib.h>

void jumpers() {
    int n;
    while (scanf("%i", &n) != EOF) {
        int contador = 0;
        int arreglo[n];
        for (int i = 0; i < n; ++i) {
            scanf("%i", &arreglo[i]);
        }
        for (int i = 1; i < n; ++i) {
            int formula = abs(arreglo[i-1] - arreglo[i]);
            if (formula > 0 && formula < n) {
                ++contador;
            }
        }
        if (contador == n - 1) {
            printf("Jolly\n");
        } else {
            printf("Not jolly\n");
        }
    }
}

int main() {
    jumpers();
    return 0;
}
