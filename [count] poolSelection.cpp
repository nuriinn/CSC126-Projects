#include <iostream>
using namespace std;

int main()
{
   int room = 0, enter, privPool = 0, noPrivPool = 0;
   char pool;
     
        while(room <3){
        cout<<"Enter [1] to input data, [0] to exit : " ;
        cin>>enter;
        while (enter == 1){
            cout<<"Enter [P] for Private Pool or [N] for No Pool : ";
            cin>>pool;
            if (pool == 'P')
                privPool++;
            else if (pool == 'N')
                noPrivPool++;
        }
        room++;
        }
   cout<<"No of Private Pool: " <<privPool;
   cout<<"No of No Pool : " <<noPrivPool;
   cout<<"Remaining Rooms available : " <<room;
         

    return 0;
}
