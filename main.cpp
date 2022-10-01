#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {1, 3, 5, 7, 9, 11, 13, 14, 15, 15};
    
    int n;
    cout << "Enter Number :" << endl;
    cin >> n;
    int count = 0;
    
    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == n)
        {
            count++;
        }
        
    }
    
    cout << n <<" occured " << count << " times";
    
    

    return 0;
}
