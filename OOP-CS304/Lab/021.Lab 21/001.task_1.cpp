// #include <iostream>
// using namespace std;
// int main()
// {
//   int a, b;
//   cout<<"Enter two integer values: ";
//   cin>>a>>b;

//   try
//   {
//     if(b == 0)
//   {
//     throw b;
//   }
//   else
//   {
//     cout<<(a/b);
//   }
//   }
//     catch(int)
//   {
//     cout<<"Second value cannot be zero";
//   }
//     cout << "Outside the catch.";
// return 0;
// }
// #include <iostream>
// #include<conio.h>
// using namespace std;

// int main()
// {
// int x[3] = {-1,2};
// for(int i=0; i<2; i++)
// {
// int ex = x[i];
// try
// {
// if (ex > 0)
// // throwing numeric value as exception
// throw ex;
// else
// // throwing a character as exception
// throw 'e';
// }
// catch (int ex) // to catch numeric exceptions
// {
// cout << "Integer exception\n";
// }
// catch (char ex) // to catch character/string exceptions
// {
// cout << "Character exception\n";
// }
// }
// }
// #include <iostream>
// #include<conio.h>
// using namespace std;

// int main()
// {
// int x[3] = {-1,2};
// for(int i=0; i<2; i++)
// {
// int ex=x[i];
// try
// {
// if (ex > 0)
// throw ex;
// else
// throw 'e';
// }
// // generalised catch block
// catch (...)
// {
// cout << "Special exception\n";
// }
// }
// return 0;

// }