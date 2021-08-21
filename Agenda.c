#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
struct cliente{
        int codigo;
        int i;
        char nome[40];
        char telefone[40];
        char email[40];
    };
    struct cliente cli[5];

void inserir(){

    printf("\n\t\t\t-----INSERIR CLIENTES-----\n\n");
    int i=0;
    for (i=1; i<6; i++){
        printf("\n\t\t\tCodigo:%d\n",i);
        printf("\n\t\t\tNome do cliente:.... ");
        fgets(cli[i].nome,30,stdin);
        printf("\n\t\t\tTelefone do cliente:.... ");
        fgets(cli[i].telefone,20,stdin);
        printf("\n\t\t\tEmail do cliente:.... ");
        fgets(cli[i].email,25,stdin);
    }
    printf("\n\t\t\tAGENDA LOTADA!\n\n");
}
void mostrar(){

        printf("\n\n\t\t\t-----DADOS CLIENTES-----\n\n");
        int i=0;
        for (i=1; i<6; i++){
            printf("\n\n\t\t\t------------------------\n\n");
            printf("\n\t\t\tCodigo : %d,\n",i);
            printf("\n\t\t\tNome : %s,\n", cli[i].nome);
            printf("\n\t\t\tTelefone : %s,\n", cli[i].telefone);
            printf("\n\t\t\tEmail : %s,\n", cli[i].email);

        }
    }
void sair(){
    printf("t\t\t\tPressione qualquer tecla pra sair...\n");
}
int main(){
    int opcao;
    do
    {
        printf("\n\t\t\t----AGENDA MADSON-VS-BETA----\n\n");
        printf("\t\t\t1 - Inserir Cadastro\n");
        printf("\t\t\t2 - Mostrar Cadastros\n");
        printf("\t\t\t0 - Encerrar\n");
        scanf("%d", &opcao);
        system("cls || clear");
        switch(opcao){
            case 1:
                system("cls");
                inserir();
                system("pause");
                break;
            case 2:
                system("cls");
                mostrar();
                system("pause");
                break;
            case 0:
                system("cls");
                sair();
                break;
            default:
                printf("\t\t\tErro: Opcao Invalida!\n");

        }
    }while(opcao!=0);
}