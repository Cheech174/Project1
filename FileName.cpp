#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

pair<bool, double> CalcMedian(vector<double> samples) {
    // ������� {true, �������}, ���� ��� ����������,
    // �� ���� ������ ��������,
    // ����� - {false, 0}
    // �������� �������� - ������ ��������� �� ��������,
    // ��� ��� ��� ������� ������� ����������, ����� ������� �����
}

int main() {
    int size;
    cin >> size;

    vector<double> samples;
    for (int i = 0; i < size; ++i) {
        double sample;
        cin >> sample;
        samples.push_back(sample);
    }

    pair<bool, double> result = CalcMedian(samples);
    if (result.first) {
        cout << result.second << endl;
    }
    else {
        cout << "Empty vector"s << endl;
    }
}