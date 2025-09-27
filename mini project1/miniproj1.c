#include <stdio.h>
#include <string.h>
char titre[50][100];//Titre du liver
char auteur[50][100];//auteur du livre
float prix[100];
int  quantitie[100];
int  n ;
int A=0 ;


void mese_ajour(){
    char mesetitre[100];
    int B=0;
    int novo_quantity;
    printf("Enter le  title de livre pour mesejouri : ");
    scanf(" %[^\n]", mesetitre);
    for (int i = 0; i < A; i++) {
        if (strcmp(titre[i], mesetitre) == 0) {
            printf("Enter la nouvIEL quantity de livre%d  :",i+1);
            scanf("%d", &novo_quantity);
            quantitie[i] = novo_quantity;
            printf("la quantite de livre  a ete corrigee \n");
          B=1;
        }}if(B==0)
        printf("le livre n existe pas a stoq");
}
void supprimer(){
    char sup_titre[100];
    int B=0 ;
    printf("Enter Le titre de livre pour supprimer: ");
    scanf(" %[^\n]", sup_titre);
    for (int i = 0; i <A; i++) {
        if (strcmp(titre[i], sup_titre) == 0) {
            A--;
            for(int j=i;j<A;j++){
            strcpy(titre[i],titre[i+1]);
            strcpy(auteur[j],auteur[j+1]);
            prix[j]=prix[j+1];
            quantitie[j]=quantitie[j+1];
            B=1;
            
              
            }
          
        }  if(B==0)
         printf("le livre n existe pas a stoq");
    }
}
void aficher() {
    int sommequantittie=0 ;
    printf("le nombre total de livres en stock  :  %d\n",A);
    for(int i=0 ;i<A;i++){
        printf("la quantitie de livre de titre %s est %d\n",titre[i],quantitie[i]);
        sommequantittie+=quantitie[i]  ;
    }

printf("la quantitie de tous les livres en stock  :  %d\n",sommequantittie);

}   
    

void ajout(){
  
    
    printf("\n entrez le nomber des livre different pour ajouti en stock : ");
    scanf("%d",&n );
    for (int i = 0; i < n; i++){
       printf("\n________________________veuillez saisir le formation dun livre  %d:_________________________",i+1);
        printf("\nveuillez saisir le titre de livre   %d:      ___",i+1);
    
        scanf(" %[^\n]",titre[A]);
    
        printf("\nveuillez saisir lauteur de livre    %d:      ___",i+1);
       
        scanf(" %[^\n]",auteur[A]);
    
        printf("\nveuillez saisir le prix de livre  %d :     ___",i+1);
        scanf("%f",&prix[A]);
        printf("\nveuillez sasir la nombre quantite de meme livre %d en stock      __",i+1);
        scanf("%d",&quantitie[A]);
       
        A++;
        
    }   
}    



void  afficher(){
    printf("\n_______________________vouala la liste de liver disbonile _________________________");
    for (int i = 0; i<A ; i++){
      
        printf("\n               ~~~~~~~~~~~~~~~~le livre %d~~~~~~~~~~~~~~              \n",i+1);
        
        printf("\nle titre de livre   %s",titre[i]);
    
      
        printf("\nlateur de livre   %s", auteur[i]);
  
       
        printf("\nle prix de livre    %.2f",prix[i]);
    
        printf("\nla contite en stock %d",quantitie[i]);
    
       
    }

    
}
void recherche(){
    int B=0;
    char recherch[20];
    printf("\nentre le titre de livre pour recherch : ");
    scanf(" %[^\n]", recherch);

    for(int i = 0 ; i<A;i++){

        if(strcmp(recherch,titre[i])==0 ){
             printf("\n               ~~~~~~~~~~~~~~~~le nomre de livre et %d~~~~~~~~~~~~~~              \n",i+1);
        
         printf("\nle titre de livre   %s",titre[i]);
    
      
         printf("\nlateur de livre   %s", auteur[i]);
  
       
         printf("\nle prix de livre    %.2f",prix[i]);
    
         printf("\nla contite en stock %d",quantitie[i]);
         B=1 ;
        
        }  
    }
    if(B==0)
         printf("Le live en egsiste pas en stoq");
}


int main()
{
    int choix;
    do{
    printf("\n____________________________________ menu __________________________________\n");
    printf("1_Ajouter un livre au stock.\n");
    printf("2_Afficher tous les livres disponibles.\n");
    printf("3_Rechercher un livre par son titre.\n");
    printf("4_Mettre a jour la quantite d un livre.\n");
    printf("5_Supprimer un livre du stock.\n");
    printf("6_Afficher le nombre total de livres en stock.\n");
    printf("7_Quitter") ;
    do {
        printf("\nveuillez saisir votre choix le nomber entre 1 et 6:\n   ");
        scanf("%d",&choix);
    }while(choix<0 || choix>8 );

    switch (choix)
    {
        case 1 : ajout();break;
        case 2 : afficher();break;
        case 3 : recherche();break;
        case 4 : mese_ajour();break;
        case 5 : supprimer();break;
        case 6 : aficher();break;
    }
    
    }while(choix!=7);
}