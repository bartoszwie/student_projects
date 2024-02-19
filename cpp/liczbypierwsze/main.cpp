#include <iostream>
#include <cstdio>

using namespace std;

int main(){
int x;
bool b;
cout<<"Podaj koniec tego przedzialu: "<<endl;
scanf("%d", &x);
for(int i=1; i < x+1; i++)
{
b = true;
for(int j=2; j<i;j++)
if(i%j==0)
b = false;
if(b==true)
printf("%d\n",i);
}

return 0;
}
