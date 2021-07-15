#include<stdio.h>

int main() {
    int i,j,k,n,m;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf(" ");
        }
        m=i+1;
        for(k=1;k<=m;k++){
            printf("%d",k);
        }
        for(k=+1;k>=1;k--){
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
