/*Please enter the number of coins:
# of quarters: 20
# of dimes: 4
# of nickels: 13
# of pennies: 17
The total is 6 dollars and 22 cents*/
#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char* argv[])

{ int Qv,Dv,Nv,Pv;
  int Q,D,N,P;
  int DOLLARS, CENTS, TOTAL_CENTS; 

  //Q = atoi(argv[1]);
  cout << "Please enter the number of coins:"<<endl;
  // Number of quarters 
  cout << "# of quarters: ";
  cin >> Q;
  //number of dimes 
  cout << "# of dimes: " ;
  cin >> D;
  //nickels 
    cout << "# of nickels: " ;
  cin >> N;
  // pennies
  cout << "# of pennies: " ;
  cin >> P;
  //calculate value in pennies
  Qv = 25 * Q;
  Dv = 10 * D;
  Nv = 5 * N;

  TOTAL_CENTS = Qv + Dv + Nv + P;
  DOLLARS = TOTAL_CENTS/100;
  CENTS = TOTAL_CENTS % 100;
  cout << "The total is " << DOLLARS << " dollars and " << CENTS << " cents"<<endl; 

    return 0;
}
