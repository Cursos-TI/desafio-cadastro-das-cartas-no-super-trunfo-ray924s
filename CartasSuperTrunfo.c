#include <stdio.h>

 int main (){
   char estado1[20], estado2[20];
   char cidade1[20], cidade2[20];
   char codigo1[5], codigo2[5];
   int populacao1, populacao2;
   float area1, area2;
   float pib1, pib2;
   int pontosturisticos1, pontosturisticos2;

   //códigos para a carta 1
  
   printf("Digite o nome do estado: \n");
   scanf(" %s", estado1);
   printf("Digite a cidade: \n");
   scanf("%s", cidade1);
   printf("Digite o codigo da carta: \n");
   scanf("%s", codigo1);
   printf("Digite a população da cidade: \n");
   scanf("%d", &populacao1);
   printf("Digite  a area da cidade: \n");
   scanf("%f", &area1);
   printf("Digite o pib da cidade: \n");
   scanf("%f", &pib1);
   printf("Digite os pontos turisticos da cidade: \n");
   scanf("%d", &pontosturisticos1);

   //códigos para a carta 2.

      printf("Digite o nome do estado: \n");
      scanf("%s", estado2);
      printf("Digite a cidade: \n");
      scanf("%s", cidade2);
      printf("Digite o código da carta: \n");
      scanf("%s", codigo2);
      printf("Digite a população da cidade: \n");
      scanf("%d", &populacao2);
      printf("Digite a area da cidade: \n");
      scanf("%f", &area2);
      printf("Digite o pib da cidade: \n");
      scanf("%f", &pib2);
      printf("Digite pontos turísticos da cidade: \n");
      scanf("%d", &pontosturisticos2);


     //imprimindo carta 1 e carta 2
 
         printf("Dados da Carta %s:\n", codigo1);        
         printf("População: %d habitantes\n", populacao1);
         printf("Área: %.2f km²\n", area1);
         printf("PIB: %.2f bilhões de reais\n", pib1);
         printf("Número de pontos turísticos: %d\n", pontosturisticos1);
 
         printf("\nCarta 2\n"); 
         printf("Dados da Carta %s:\n", codigo2);        
         printf("População: %d habitantes\n", populacao2);
         printf("Área: %.2f km²\n", area2);
         printf("PIB: %.2f bilhões de reais\n", pib2);
         printf("Número de pontos turísticos: %d\n", pontosturisticos2);
  



   return 0;


    
 }
