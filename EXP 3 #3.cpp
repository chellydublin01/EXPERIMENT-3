#include<iostream>
#include<cstring>
using namespace std;
int main()
{
  char text[50];
  int i;
  cout<<"Enter a text: ";
  cin>>text;
  cout<<endl<<text<<endl;
  for(i=strlen(text)-1;i>=0;i--)
    cout<<text[i];
  system("pause");
  return 0;
}
