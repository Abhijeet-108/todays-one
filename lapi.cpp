#include <bits/stdc++.h>
using namespace std;
# define tax 0.60;
int main(){
     int sr{0},lr{0},tt,te;
    cout<< "Frank's Carpet Cleaning Servies"<<endl;
    cout<<"No. of small room need: ";
    cin >> sr;
    cout<<"\nNo. of Large room need: ";
    cin >> lr;
    tt = ((lr*35) + (sr*25)) * tax;
    cout << "Cost: $"<<(lr*35) + (sr*25);
    cout << endl <<"Total Tax: $"<< tt << endl;
    te = (lr*35) + (sr*25) + tt;
    cout <<"-----------------------------------------" ;
    cout<< "\nTotal Estimate:- $"<< te;
    cout<<"\nTHIS ESTIMATE IS VALID FOR 30 DAYS....";



    return 0;
}
