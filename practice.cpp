

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

