
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



double daraje1(double a,double b)
{
    return (-1*b)/a;
}
void daraje2(double a,double b,double c)
{
    int delta=(b*b)-4*a*c;
    if(a==0)
    {
        cout<< (-1*c)/b;
    }
    else if((a!=0 && b==0 && c<0 && delta>0) ||(a<0 && b==0 && c>0 && delta>0) )
    {
        cout<< (-1*b+sqrt(delta))/2*a << " " << (-1*b-sqrt(delta))/2*a ;

    }
    else if(a!=0 && b!=0 && c==0 && delta>0)
    {
        cout<<(-1*b+sqrt(delta))/2*a << " " << (-1*b-sqrt(delta))/2*a ;
    }
    else if(delta<0 && a!=0  )
    cout<<"no root";
    else if(delta==0)
    cout<<(-1*b)/2*a;
    else if(a!=0 && b!=0 && c!=0 && delta >0)
    cout<< (-1*b+sqrt(delta))/2*a << " " << (-1*b-sqrt(delta))/2*a ;
    else
    cout<<"no root";
}
int function1()
{   int a,b,c;
    int n;
    cin >> n;
    if(n==1)
    {
    cin >> a >> b;
    cout<<daraje1(a,b);
    }
    else if(n==2)
    {
        cin >> a >> b >> c;
        daraje2(a,b,c);
    }

    return 0;

}
      int KMM(int n,int m){
        for(int i=1;;i++){
          for(int j=1;;j++){
            if(n*i==m*j) return n*i;
            if(n*i<m*j) break;
          }
        }

      }

int Bmm()
{
int x,y;
cin>>x>>y;
int min=x;
int bmm;
if(y<min)
min=y;
for(int i=0;i<min;i++)
{
if( x%i==0 && y%i==0)
bmm=i;
}
cout<<bmm;
return 0;


}
int entekhab(int k , int n){
    int a = 1;
    for (int i = n; i> n- k; i--){
        a*=i;
    }
    for (int i = k; i>1; i--){
        a/=i;
    }
    return a;
}
//third function


