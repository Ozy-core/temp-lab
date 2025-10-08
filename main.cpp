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
    a=vec[0];
    b=vec[1];
    c=vec[2];
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

    cout<<"passed! Level 1 done--> next"<<endl;

    int result= until(3,f,p);
    assert(result== 192);

    cout<<"passed! Level 2 done--> next" << endl;

    int x=10;
    int y=6;
    int z=19;

    order(x,y,z);
    assert(x==19);
    assert(y==10);
    assert(z==6);

    cout<<"passed! Level 3 done!! yay" << endl;
    return 0;
}