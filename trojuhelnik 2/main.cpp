#include <iostream>

using namespace std;

int main()
{
int a, b, c;
cout<<"zadejte delku strany a: ";
cin>>a;
cout<<"zadejte delku strany b: ";
cin>>b;
cout<<"zadejte delku strany c: ";
cin>>c;

if (a+b>c & b+c>a & a+c>b) {
    if(a==b & b==c){
        cout<<"Trojuhelnik je rovnostranny"<<endl;
    }
    if(a==b | b==c | c==a) {
        cout<<"Trojuhelnik je rovnoramenny"<<endl;
    }
    if(c*c==a*a+b*b | b*b==a*a+c*c | a*a==b*b+c*c){
        cout<<"Trojuhelnik je pravouhly"<<endl;
    }
} else {
    cout<<"Neni trojuhelnik"<<endl;
}
return 0;
}