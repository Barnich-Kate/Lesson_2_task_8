#include <iostream>

using namespace std;

int main()
{
    int number, res;
    cout<<"Type number: ";
    cin >> number;
    int result1, result2 = 0;
    for (int i = 10, k = -10; i>=-10 && i<=10 && k<=10 && k>=-10; i++, k++ ) {
     if (number > 0 && number < 0) {
        result1 = number / i;
		result2 = number / k;
        
    } else {
        continue;
    }
    
    }
    
    cout << "Result is equal: " << result1  << endl;
	cout << "Result is equal: " << result2  << endl;
    
    

    return 0;
}
