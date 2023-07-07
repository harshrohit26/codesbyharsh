#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int cnt=0;
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<4;i++)
    {
        
        if(arr[i]>=10)
        {
            cnt++;
        }
    }
        
    
    cout<<cnt<<endl;
    
	// your code goes here
	return 0;
}
