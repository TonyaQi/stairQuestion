#include <iostream>
#include <string>
using namespace std;
int total=0;
void fun(string ans,int num){
if(num<0)
{
    printf("stop");
    return;
}
if(num==1)
{
    string b = "1";
    ans = ans +" "+b;
    cout << ans <<endl;
    total++;
    return;
}else if(num ==0){
   cout << ans <<endl;
   total++;
   return;
}
for(int i=1;i<=2;i++)
{
    string p;
    if(i==1)
        p=ans+" "+"1";
    else
        p=ans+" "+"2";
    fun(p,num-i);
}
}
int main(){
    fun("",10);
}
