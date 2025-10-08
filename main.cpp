#include <iostream>
#include <vector>

using namespace std;

template <class T>
T vec_fill(T elem)
{
    vector<int> vec;
    while (vec.size()!= 10)
    {
        vec.push_front(elem);
        elem++;
    }
    return vec;
}

template <class T>
T until(T elem,function<T(T)> func, function<bool(T)> predicate)
{
    while(!predicate(elem))
    {
        elem= f(elem);
    }
    return elem;
}

template <class T>
T order(T& a, T& b, T& c)
{
    vector<T> vec= {a,b,c};
    sort.(vec.begin(),vec.end(), greater(T));
    for(T x: vec)
    {
        cout << x << endl;
    }
    return 0
}

template <typename T>
int main()
{
    function<int(T)> f= [](T x){return x*2};
    function<bool(T)> p= [](T x){return x>100};

}