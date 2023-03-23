#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, codigoLivro, cont = 0;
    
    scanf("%d", &n);
    int livros[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &codigoLivro);
        livros[i] = codigoLivro;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(livros[j] == livros[i]){
                cont++;
            }
        }
        if(cont <= 1){
            printf("O livro %d nao possui copia e precisar ser comprado!\n", livros[i]);
        }

        cont = 0;
    }

    return 0;
}