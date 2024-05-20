#include <iostream>
using namespace std;
double calcTotalSales(int aa ,int bb , int cc );
double calCommission(double tot);
int main()
{
    int aa=0, bb=0, cc=0, min=999, max =0, i;
    string distributorName;
    double total, commission;
    cout<<"***********************************************************************"<<endl;
    cout<<"                           WELCOME TO                                  "<<endl;
    cout<<"                         DROP DROPPERFUME                              "<<endl;
    cout<<"***********************************************************************"<<endl;
    for (int i=1; i<3; i++){
        cout<<"DISTRIBUTOR NUMBER " <<i <<": " <<endl;
        cout<<endl;
        cout<<"Please enter name " <<i <<": ";
        cin>>distributorName;
        cout<<"Please enter number of bottles sold for AA brand: ";
        cin>>aa;
        cout<<"Please enter number of bottles sold for BB brand: ";
        cin>>bb;
        cout<<"Please enter number of bottles sold for CC brand: ";
        cin>>cc;
        total = calcTotalSales( aa , bb , cc );
        commission = calCommission (total);
        
        max = commission;
        if (commission > max)
            max = distributorName;
        cout<<"Total Sales: RM " <<total <<endl;
        cout<<"Total Commission: RM " <<commission <<endl;
    }
    cout<<"Total comission for all distributors is RM" <<i*commission <<endl;
    cout<<"The distributors with the highest commission is "<<max <<endl;
    cout<<"The commission received is RM" <<commission <<endl;
}
double calcTotalSales(int aa , int bb , int cc ){
    double totalSales = (aa * 35.00) + (bb * 56.00) + (cc * 99.00);
    return totalSales;
}
double calCommission (double tot){
    double commission = tot * 0.15;
    return commission ;
}

