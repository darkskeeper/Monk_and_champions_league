#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue <int> pq;
    int Rows, People, Nseats;
    long long sum = 0;
    cin >> Rows >> People;
    for (int i = 0; i < Rows; i++)
    {
        cin >> Nseats;
        pq.push(Nseats);
    }
    for (int i = 0; i < People; i++)
    {
        Nseats = pq.top();
        pq.pop();
        sum+=Nseats;
        Nseats--;
        pq.push(Nseats);
    }
    cout << sum;
    return 0;
}