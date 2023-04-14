#include <stdio.h>

int main(){
    FILE *Archivo = fopen("output.txt","w");

    fprintf(Archivo, "Hello, World!\n");

    fclose(Archivo);
    return 0;
}
 