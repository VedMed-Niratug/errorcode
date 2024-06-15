#include <iostream>
#include <set>
#include <string>
#include <vector>

using namespace std;

template <typename Documents>
ostream& operator<< (ostream& out, const Documents& documents) {
    bool first = true;
    for (const auto& document : documents) {
        if (!first) {
            out << ", "s;
        }
        out << document;
        first = false;
    }
    return out;
}

int main() {
    const vector<int> ages = { 10, 5, 2, 12 };
    cout << ages << endl;
    const set<string> cats = { "Мурка"s, "Белка"s, "Георгий"s, "Рюрик"s };
    cout << cats << endl;
    return 0;
}
