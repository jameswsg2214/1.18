// Example program
#include <iostream>
#include <string>
using namespace std;
class sample
{
    public:
    int a;
    int calc()
{
    int i,b;
    for(i=0;i<=a;i++)
    {
      
       b=b+i;
    }
    cout<<b<<endl;
}
};
int main()
{
  sample s;
  cout << "Enter the no of times ";
  cin>>s.a;
  s.calc();
}
