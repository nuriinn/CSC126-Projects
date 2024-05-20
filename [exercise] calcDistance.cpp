#include <iostream>
using namespace std;
double calcDistance ( double speed , double timePeriod);
int main()
{
    int highest;
    double speed, timePeriod, distance=0 , times;
    for (int i = 1; i<3; i++){
    cout<<"Car " <<i <<endl;
    cout<<"Enter the speed: ";
    cin>>speed;
    cout<<"Enter the time period: ";
    cin>>timePeriod;
    
    distance = calcDistance(speed , timePeriod);
    
    cout<<"Distance travelled: " <<distance <<endl;
    }
    highest = distance;
    if(distance > highest)
        highest = distance;
    cout<<"car " <<highest <<" has travelled further" <<endl;
    
}
double calcDistance ( double speed , double timePeriod){
    double distance = speed * timePeriod;
    return distance;
}

