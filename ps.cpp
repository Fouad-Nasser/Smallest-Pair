#include<iostream>
using namespace std;

int main(){
    int N,T;
    long long s;
    cin >> T;


    for (int i = 0; i < T; i++)
    {
        cin >> N;
        long long arr[N];

        for (int i = 0; i < N; i++)
        {
            cin>>arr[i];
        }

        s=arr[0]+arr[1]+1;
        for (int i = 0; i < N-1; i++)
        {
            for (int j = i+1; j < N; j++)
            {
                s=(s>(arr[i]+arr[j]+(j-i)))?(arr[i]+arr[j]+(j-i)):s;
            }
        }

        cout<<s<<endl;
    }
    


    return 0;
}
