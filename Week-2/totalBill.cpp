//Practice Template to calculate total bill through tip. 
#include <iostream>
using namespace std;

template <typename T>
T calculateTotalBill(T tipPercent, T billAmount){
    T tipAmount = billAmount * (tipPercent/100);
    T totalBill = billAmount + tipAmount;
    
    cout << "Bill amount $" << billAmount << endl;
    cout << "Tip (" << tipPercent << "%): $" << tipAmount << endl;
    cout << "Total Bill: $" << totalBill<< endl;
    return totalBill;
}

int main(){
    double bill= 100.00;
    double tip = 15.0;
    
    calculateTotalBill(tip, bill);
        
        
        return 0;
    }
