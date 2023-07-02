int main(){
    int X[1000],N,i;
    scanf("%d",&N);
    if(1<N && N<1000){
        for(i=0;i<N;i++){
        scanf("%d",&X[i]);
        }
    }
    int min=X[0],index;
    for(i=1;i<N;i++){
       if(min>X[i])
        min=X[i];
    }
    for(i=0;i<N;i++){
       if(min==X[i])
        index=i;
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",index);

    return 0;
}
