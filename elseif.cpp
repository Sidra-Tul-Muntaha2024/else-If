#include<iostream>
using namespace std;
int main()
{
	int percentage;

    cout << "Enter the percentage: ";
    cin >> percentage;
    
    if (percentage > 90) {
        cout << "Grade: A" << endl;
    } 
    else if (percentage > 75) {
        cout << "Grade: B" << endl;
    } 
    else if (percentage > 65) {
        cout << "Grade: C" << endl;
    } 
    else {
        cout << "Grade: F" << endl;
    }
    
return 0;
}


