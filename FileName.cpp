#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std; 

int main() {
    int count;
    vector <pair<string, int>> name_age;
    cin >> count;
    for (int i = 0; i < count; ++i) {
        string name;
        int age;
        cin >> name >> age;
        name_age.push_back(make_pair(name, age));
    }
    sort(name_age.begin(), name_age.end());
    reverse(name_age.begin(), name_age.end());
    for (const auto& element : name_age) {
        cout << element.first << " " << "\n";
    }
}
    // выведите только имена в порядке убывания возраста
    // Jack
    // John
    // ...
