#include<stdio.h>

int main()
{int n,m,i,j, k, c, A=0, B=0;


printf("Enter height n and width m\n");
scanf("%d %d",&n,&m);
int a[n][m];
for(i=0;i<=n-1;i++){
    for(j=0;j<=m-1;j++){
        printf("Enter a[%d][%d]\n",i,j);
        scanf("%d",&a[i][j]);
    }
}

for(i=0;i<=n*m-1;i++){if((i-1)/m<i/m){ printf("\n"); }; printf("%d ", a[i/m][i%m]); }
printf("\n\n");

for(i=0;i<m-1; i++) {
for(j=0;j<m-1-i;j++){
for(k=0;k<=n-1;k++){
A+=a[k][j];
B+=a[k][j+1];
}
if(A>B){
    for(k=0;k<=n-1;k++){
    c = a[k][j];
    a[k][j] = a[k][j+1] ;
    a[k][j+1] = c;
    }
}
A=0;B=0;}}

for(i=0;i<=n*m-1;i++){if((i-1)/m<i/m){ printf("\n"); }; printf("%d ", a[i/m][i%m]); }

    return 0;
}
