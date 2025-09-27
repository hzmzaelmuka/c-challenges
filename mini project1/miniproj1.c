#include <stdio.h>
char titre[50][100];//Titre du liver
char auteur[50][100];//auteur du livre
int prix[100];
int  quantite[100];
int  n ;
int A=0 ;

void recherche(){

}
void mese_ajour(){

}
void supprimer(){

}
void aficher() {

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
        scanf("%d",&quantite[A]);
       
        A++;
        
    }   
}    



void  afficher(){
    printf("\n_______________________vouala la liste de liver disbonile _________________________");
    for (int i = 0; i<A ; i++){
      
        printf("\n               ~~~~~~~~~~~~~~~~le livre %d~~~~~~~~~~~~~~              \n",i+1);
        
        printf("\nle titre de livre   %s",titre[i]);
    
      
        printf("\nlateur de livre   %s", auteur[i]);
  
       
        printf("\nle prix de livre    %d",prix[i]);
    
        printf("\nla contite en stock %d",quantite[i]);
    
       
    }

    
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
        printf("\nveuillez saisir votre choix le nomber entre 1 et 6: ");
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