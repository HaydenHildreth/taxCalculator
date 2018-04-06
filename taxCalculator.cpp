#include <iostream>

using namespace std;

int main()
{
    //Getting values
    float taxPercent;
    float price;

    //Input
    cout << "What is the tax in your area? Enter the percentage value (without percent sign). ";
    cin >> taxPercent;
    cout << "What is the total value of your purchase? $";
    cin >> price;   
    
    //Stating tax values, necessary after input
    float taxDivided = taxPercent/100;
    float taxTotal = taxDivided * price;
    float total = taxTotal + price;
    
    //Final
    cout << taxDivided * price << " is the amount of tax you will pay." << endl;
    cout << "  " << price << endl;
    cout << "+ " << taxTotal << endl;
    cout << "--------" << endl;
    cout << total << endl;

    return 0;
}
