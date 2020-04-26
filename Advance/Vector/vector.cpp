#include <iostream>
using namespace std;
#include <vector>

int main()
{
    // vector double its capacity when its full .
    vector<int> v;

    v.push_back(1);
    cout << v.capacity() << endl;
    cout << v.size() << endl;

    v.push_back(2);
    cout << v.capacity() << endl;
    cout << v.size() << endl;

    v.push_back(2);
    cout << v.capacity() << endl;
    cout << v.size() << endl;

    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }
    
    for(int i=0; i<10; i++){
        cout<<"value of v[i] is"<<v[i]<<endl;
    }
}