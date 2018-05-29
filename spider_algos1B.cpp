

#include<stdio.h>
main(){
	int a[100],b[100],c[100],d=0,e=0,n,i,j,t,k;
	printf("enter total no. of entries : ");
	scanf("%d",&k);
	printf("enter the initial floor no. : ");
	scanf("%d",&n);
	for(i=0;i<k;i++)
	{
		printf("enter the floor no. \n");
		scanf("%d",&a[i]);

	}
	for(i=0;i<k-1;i++)
	{
		for(j=i+1;j<k;j++)
	{
		if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
		}
	}
	    printf("%d ",n);
	for(i=k-1,j=0;i>=0;i--)
    {
        if(n<=a[i])
        {
            b[j]=a[i];
            printf("%d ",a[i]);
            j++;
        }
    }

    for(i=0;i<k;i++)
    {
        if(n>a[i])
        {
            b[j]=a[i];
            printf("%d ",a[i]);
            j++;
        }
    }
    c[k-1]=b[0]-n;
    printf("  %d  ",c[k-1]);
    for(i=0;a[0]>b[i];i++)
    {
        c[d]=b[i+1]-b[i];
        d++;
        printf("  %d  ",c[i]);
    }
    for(i=d;i<k-1;i++)
    {
        c[i]=b[i]-b[i+1];
        printf("  %d  ",c[i]);
    }
    for(i=0;i<k;i++)
    {
        e=e+c[i];
    }
    printf("   %d",e);
}
