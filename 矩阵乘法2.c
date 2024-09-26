#include<stdio.h>
#include<time.h>
int a[1100][1100],b[1100][1100],c[1100][1100];
clock_t st,fin;
double times;
int main()
{
    freopen("data2.out","r",stdin);
    freopen("matrix2.out","w",stdout);
    int n,m,k;
    scanf(" %d %d %d",&n,&m,&k);
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            scanf("%d",&a[i][j]);
    for(int i=1;i<=m;++i)
        for(int j=1;j<=k;++j)
            scanf("%d",&b[i][j]);
    st=clock();
    for(int i=1;i<=n;++i)
        for(int j=1;j<=k;++j)
            for(int l=1;l<=m;++l)
                c[i][j]+=a[i][l]*b[l][j];
    fin=clock();
    times=(double)(fin-st)/CLOCKS_PER_SEC;
    printf("times: %f\n",times);
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=k;++j)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}
