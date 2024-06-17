#include <iostream>
#include <vector>

using namespace std;

void PrintWorryCount(const vector<bool>& is_nervous) {
    // ������������ ���������� ��������� � ������� is_nervous, ������ true

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