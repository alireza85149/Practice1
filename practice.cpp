int function2()
{
    int n;
    cin >> n;
    double a[50];
    char amalgar[50];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(i<n-1)
        cin>>amalgar[i];
    }
    for(int i=0;i<n-1;i++)
    {
     if(amalgar[i]=='*')
     {
     a[i]=a[i]*a[i+1];
     for(int j=i+1;j<n-1;j++)
     {
        a[j]=a[j+1];
        amalgar[j]=amalgar[j+1];
     }
     n--;
     i--;
    

    }
    else if(amalgar[i]=='/')
    {
        if(a[i+1]==0)
        return 0;
        a[i]=a[i]/a[i+1];
        for(int m=i+1;m<n-1;m++)
        {
        a[m]=a[m+1];
        amalgar[m]=amalgar[m+1];
        }
        n--;
        i--;
        


    }
}
    double result=0;
    for(int i=0;i<n;i++)
    result+=a[i];
    cout<<result;
    return 0;
}