#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Student {
private:
    int m_id;
    int m_chinese;
    int m_math;
    int m_english;
    int m_total;
public:
    [[nodiscard]] int getId() const {
        return m_id;
    }

    [[nodiscard]] int getChinese() const {
        return m_chinese;
    }

    [[nodiscard]] int getTotal() const {
        return m_total;
    }

    void setId(int id) {
        m_id = id;
    }

    friend istream &operator>>(istream &in, Student &student) {
        in >> student.m_chinese >> student.m_math >> student.m_english;
        student.m_total = student.m_chinese + student.m_math + student.m_english;
        return in;
    }

    friend ostream &operator<<(ostream &out, Student &student) {
        out << student.m_id << " " << student.m_total << endl;
        return out;
    }
};

bool cmp(Student s, Student t) {
    if (s.getTotal() == t.getTotal()) {
        if (s.getChinese() == t.getChinese()) {
            return s.getId() < t.getId();
        }
        return s.getChinese() > t.getChinese();
    }
    return s.getTotal() > t.getTotal();
}

int main() {
    int n = 0;
    vector<Student> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        Student input{};
        cin >> input;
        input.setId(i + 1);
        v.push_back(input);
    }
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < 5; i++) {
        cout << v[i];
    }
}