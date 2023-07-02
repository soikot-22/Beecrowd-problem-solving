#include<stdio.h>
int main(){
    int R,r,L,VolumeOfBalloon;
    scanf("%d %d",&r,&L);
    R = r*r*r;
     VolumeOfBalloon=1.333333333 * 3.1415 * R;
    printf("%d\n",L/VolumeOfBalloon);

    return 0;
}
