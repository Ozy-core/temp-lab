#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>

using namespace std;

template <class T>
vector<T> vec_fill(T elem)
{
    vector<T> vec;
    while (vec.size()!= 10)
    {
        vec.push_back(elem);
        elem++;
    }
    return vec;
}

template <class T>
T until(T elem,function<T(T)> func, function<bool(T)> predicate)
{
    while(!predicate(elem))
    {
        elem= func(elem);
    }
    return elem;
}

template <class T>
void order(T& a, T& b, T& c)
{
    vector<T> vec= {a,b,c};
    sort(vec.begin(),vec.end(), greater<T>());
    for(T x: vec)
    {
        cout << x << endl;
    }
}


int main()
{
    function<int(int)> f= [](int x){return x*2;};
    function<bool(int)> p= [](int x){return x>100;};

    vector<int> filled= vec_fill(5);
    assert(filled.size()==10);
    assert(filled.front()==5);
    assert(filled.back()==5+9);

    cout<<"passed!"<<endl;

    return 0;
}