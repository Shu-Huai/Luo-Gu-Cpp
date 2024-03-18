#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

int main() {
    cout << "输入题号：" << endl;
    string input;
    getline(cin, input);
    while (!input.empty()) {
        HMODULE dllHandle = LoadLibrary((input + ".dll").c_str());
        if (dllHandle == nullptr) {
            cout << "输入错误。" << endl << "输入题号：" << endl;
            getline(cin, input);
            continue;
        }
        ifstream ifs;
        ifs.open(input + ".md", ios::in);
        char c;
        while ((c = (char) ifs.get()) != EOF) {
            cout << c;
        }
        ifs.close();
        cout << endl;
        typedef int (*MainFunction)();
        auto mainFunction = reinterpret_cast<MainFunction>(GetProcAddress(dllHandle, "main"));
        mainFunction();
        FreeLibrary(dllHandle);
        cout << "输入题号：" << endl;
        getline(cin, input);
    }
    return 0;
}