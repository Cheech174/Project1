#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool is_a(string str) {
    if (!str.empty() && (str[0] == 'a' || str[0] == 'A')) {
        return true;
    }
    else {
        return false;
    }
}

int CountStartsWithA(const vector<string>& xs) {
    // посчитайте число строк, начинающихс€ на букву A
    int a{};
    a = count_if(xs.begin(), xs.end(), is_a);
    return a;
}


int main() {
    // не мен€йте тело main
         cout << CountStartsWithA({ "And"s, "another"s, "one"s, "gone"s, "another"s, "one"s "bites"s, "the"s, "dust"s });
    return 0;
}

