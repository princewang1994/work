#include <stdio.h>

int arr[1010];

int main(){

    int i,j,n,m,num;
    scanf("%d %d",&n,&m);
    for(i=0;i<=1000;i++){
        arr[i]=0;
    }
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        arr[num]++;
    }
    for(i=1;i<=m;i++){
        if(arr[i]>0){
            arr[i]--;
            if(arr[m-i]>0){
                printf("%d %d\n",i,m-i);
                return 0;
            }
        }
    }
    printf("No Solution\n");
    return 0;
}
