#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char item[100];
    /*
    char item1[]="suco de laranja";
    char item2[]="morango fresco";
    char item3[]="mamao";
    char item4[]="goiaba vermelha";
    char item5[]="manga";
    char item6[]="laranja";
    char item7[]="brocolis";
    */
    int amount,n,i,TotalVitamin;
    while(scanf("%d",&n)){
        TotalVitamin=0;
        for(i=0; i<n; i++){
            scanf("%d",&amount);
            fgets(item,100,stdin);

            if(item=="suco de laranja"){
                TotalVitamin+= (amount*120);
            }
            else if(item=="morango fresco"){
                TotalVitamin+= (amount*85);
            }
            else if(item=="mamao"){
                TotalVitamin+= (amount*85);
            }
            else if(item=="goiaba vermelha"){
                TotalVitamin+= (amount*70);
            }
            else if(item=="manga"){
                TotalVitamin+= (amount*56);
            }
            else if(item=="laranja"){
                TotalVitamin+= (amount*50);
            }
            else if(item=="brocolis"){
                TotalVitamin+= (amount*34);
            }

        }
        if(TotalVitamin>=110 && TotalVitamin<=130){
                printf("%d mg\n",TotalVitamin);
        }
        else if(TotalVitamin<110){
                printf("Mais %d mg\n",110-TotalVitamin);
        }
        else if(TotalVitamin>130){
                printf("Menos %d mg\n",TotalVitamin-130);
        }
    }

return 0;
}

