#include<iostream>
using namespace std;

class operation{
    private:
        int a, b, result;
        char op;

    public:
        void input() {
            cout << "enter  first number"<< endl;
            cin >> a;
            cout << "enter second number"<< endl;
            cin >> b;

            cout<< "enter an operation"<<endl;
            cin >> op;
        }

        void show() {
            switch(op) {
                case '+':
                    result = a + b;
                    cout << "result" << a << " + " << b << " = " << result  << endl;
                    break;
                    
                case '-':
                    result = a - b;
                    cout << "result" << a << " - " << b << " = " << result  << endl;
                    break;
                    
                case '*':
                    result = a * b;
                    cout << "result" << a << " * " << b << " = " << result  << endl;
                    break;
                    
                case '/':
                   result  = a / b;
                   cout << "result" << a << " / " << b << " = "  << result  << endl;
                    break;

                default:
                    cout << "invalid operation" << endl;
            }
        }
};

int main() {
    operation o;
    o.input();
    o.show();
    return 0;
}
