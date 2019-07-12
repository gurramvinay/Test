


scanf("%d",&a);
printf("\n");
scanf("%d",&b);
printf("\n");
scanf("%d",&o);
if(a==0)
xa=0;
else
xa=convert(a);
if(b==0)
xb=0;
else
xb=convert(b);
if (o=0)
{
    printf("%d",xa+xb);
}
if (o=1)
printf("%d",xa*xb);
    return 0;
}

int convert (int x)
{
    int len=0;
    int temp=0;
    int xtemp=0;
    int pro=1;
    int sum=0;
    int y=x;
    int i;
    while (y!=0)
    {
        y=y/10;
        len++;
    }
    for(i=0;i<len;i++)
    {
        temp=z%10;
        
        if(temp==1)
        xtemp=9;
        if(temp==2)
        xtemp=8;
        if(temp==3)
        xtemp=7;
        if(temp==4)
        xtemp=6;
        if(temp==5)
        xtemp=5;
        if(temp==6)
        xtemp=4;
        if(temp==7)
        xtemp=3;
        if(temp==8)
        xtemp=2;
        if(temp==9)
        xtemp=1;
        
        z=z/10;
        if (i=0){
            sum=xtemp*pro;
            pro=pro*10;
        }
        else
        {
            sum=sum+(pro*xtemp);
            pro=pro*10;
        }
    }
    return (sum);
}
