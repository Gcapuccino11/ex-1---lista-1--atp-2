#include <stdio.h>

int main() {
    int num;

    // Abre o arquivo para leitura e escrita ("r+" modo)
    FILE *arquivo = fopen("teste.txt", "r+");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // Lê o número inteiro do arquivo
    fscanf(arquivo, "%d", &num);
    printf("Numero lido: %d\n", num);

    // Move o ponteiro de volta para o início do arquivo
    fseek(arquivo, 0, SEEK_SET);

    // Escreve o número consecutivo no arquivo
    fprintf(arquivo, "%d", num + 1);

    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}
