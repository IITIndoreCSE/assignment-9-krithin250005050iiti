#include <iostream>
using namespace std;

struct Item {

int id;
float cost;
};

int main (){
  Item items[6] = {
{1 , 30},
{2 , 35},
{3 , 60},
{4 , 70.25},
{5 , 100},
{6,44.66},
};

for(int i = 0; i<6; i++){
if (items[i].cost>50.00){
cout <<"ITEM id : " << items[i].id << " cost is " << items[i].cost << endl;
}
}
return 0; 
}
    
    
    


