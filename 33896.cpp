#include <bits/stdc++.h>

using namespace std;

typedef tuple<string, int, short> Person;
typedef vector<Person> People;

People p;

bool _sort(Person a, Person b) {
    if (get<1>(a) != get<1>(b))
        return get<1>(a) > get<1>(b);
    if (get<2>(a) != get<2>(b))
        return get<2>(a) < get<2>(b);
    return get<0>(a).compare(get<0>(b)) < 0;
}

int main() {
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name;
        short s, r, c;
        cin >> name >> s >> r >> c;
        double o = (double)pow((double)s, 3) / ((double)c * (double)(r + 1));
        p.push_back(make_tuple(name, (int)o, c));
    }
    sort(p.begin(), p.end(), _sort);
    /*
    for (int i = 0; i < n; i++)
        cout << get<0>(p[i]) << " " << get<1>(p[i]) << " " << get<2>(p[i]) << "\n";
    */
    cout << get<0>(p[1]);
}