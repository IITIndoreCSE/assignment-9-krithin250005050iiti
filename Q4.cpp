#include <iostream>
#include <string>
using namespace std;


struct SalesRecord {
    string month;
    float amount;
};

int main() {
    SalesRecord records[12];  

    cout << "Enter sales data for each month:\n";

    
    for (int i = 0; i < 12; i++) {
        cout << "Month " << i + 1 <<" Name:";
        cin >> records[i].month;
        cout << "Sales Amount: ";
        cin >> records[i].amount;
    }

 
    float maxAmount = records[0].amount;
    float minAmount = records[0].amount;
    string maxMonth = records[0].month;
    string minMonth = records[0].month;

  
    for (int i = 1; i < 12; i++) {
        if (records[i].amount > maxAmount) {
            maxAmount = records[i].amount;
            maxMonth = records[i].month;
        }
        if (records[i].amount < minAmount) {
            minAmount = records[i].amount;
            minMonth = records[i].month;
        }
    }

    
    cout << "\nMonth with maximum sales: " << maxMonth 
         << " with amount " << maxAmount << endl;
    cout << "Month with minimum sales: " << minMonth 
         << " with amount " << minAmount << endl;

    return 0;
}
	

