#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void PrintWorryCount(const vector<bool>& is_nervous) {
    // ������������ ���������� ��������� � ������� is_nervous, ������ true
    count(is_nervous.begin(), is_nervous.end(), true);
    int worry_count = 0;
    for (bool status : is_nervous) {
        if (status) {
            ++worry_count;
        }
    }
    cout << worry_count << endl;
}

int main() {
    // �� ������� ���������� ������� main
    PrintWorryCount({ true, true, false, true });
    return 0;
}