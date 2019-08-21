
#include<cmath>


    for (int i=0;i<T;i++)
    {
        cin>>n;
        int arr;
        int x=n;
        int temp=n;
        int a,b,temp1;
        int test=0;
        
        while (x!=0)
        {
            len++;
            x=x/10;
        }
        if (len%2==0)
        arr=(len/2)+1;
        else
        arr=(len/2);
        int count[arr];
        for(int j=0;j<arr;j++)
        {
          temp1=temp%100;
          a=temp1%10;
          b=temp/10;
          count[j]=a+b;
          temp=temp/100;
        }
        for (int k=0;k<arr-1;k++)
        {
            if(count[k]==count[k+1])
            {
                test++;
                continue;
            }
            else{
                break;
                cout<<"unlucky";
            }
        }
        if(test==(arr-1))
        cout<<"lucky";
    
    }
    
    return 0;
}
//change 1
//change 2