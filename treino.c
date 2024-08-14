#include <stdio.h>

int main() {

    FILE *file;
    file = fopen("numeros.txt", "r");

    if(file == NULL){
        printf("arquivo nao pode ser aberto\n");
        system("pause");
        return 0;
    }

    int x, y, z;

    fscanf(file, "%d %d %d", &x, &y, &z);
    printf("%d %d %d \n", x, y, z);

    fclose(file);

    system("pause");
    return 0;
}
