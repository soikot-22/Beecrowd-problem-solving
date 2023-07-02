#include <stdio.h>
int main(){
    char P1[20];
    char P2[20];
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%s %s",P1,P2);

         if(P1[1]=='t'){
                if(P2[1]=='e' || P2[1]=='a')printf("Jogador 1 venceu\n");
                else printf("Aniquilacao mutua\n");
            }
        else if(P1[1]=='e'){
                if(P2[1]=='a')printf("Jogador 1 venceu\n");
                else if(P2[1]=='e')printf("Sem ganhador\n");
                else printf("Jogador 2 venceu\n");
            }
        else if(P1[1]=='a'){
                if(P2[1]=='a')printf("Ambos venceram\n");
                else printf("Jogador 2 venceu\n");
        }

    }

return 0;
}
