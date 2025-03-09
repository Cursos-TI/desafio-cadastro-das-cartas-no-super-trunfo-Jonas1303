#include <stdio.h>

int main() {
     
    char estado; 
    char codigo [10]; 
    char cidade [20]; 
    int população; 
    float area; 
    float pib; 
    int turismo; 

    printf("Digite a letra do Estado:"); 
    scanf("%s", &estado); 
    printf("A sigla do estado é: %s\n", estado);
    
    printf("Digite o codigo da carta:");
    scanf("%s", &codigo);
    printf("O codigo é: %s\n", codigo); 
    
    return 0; 

}
