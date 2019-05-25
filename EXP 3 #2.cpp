#include<iostream>
using namespace std;
int
main ()
{
  int A[7], B[7], C[7], i, j;
  for (i = 0; i < 7; i++)
    {
      cout << "Provice A, Day " << i + 1 << ": ";
      cin >> A[i];
    }
  for (i = 0; i < 7; i++)
    {
      cout << "Provice B, Day " << i + 1 << ": ";
      cin >> B[i];
    }
  for (i = 0; i < 7; i++)
    {
      cout << "Provice C, Day " << i + 1 << ": ";
      cin >> C[i];
    }
  cout << endl << endl << "Displaying Values:" << endl;
  for (i = 0; i < 7; i++)
    {
      cout << "Provice A, Day " << i + 1 << ": " << A[i];
      cout << endl;
    }
  cout << endl;
  for (i = 0; i < 7; i++)
    {
      cout << "Provice B, Day " << i + 1 << ": " << B[i];
      cout << endl;
    }
  cout << endl;
  for (i = 0; i < 7; i++)
    {
      cout << "Provice C, Day " << i + 1 << ": " << C[i];
      cout << endl;
    }
  cout << endl;
  system ("pause");
  return 0;
}

