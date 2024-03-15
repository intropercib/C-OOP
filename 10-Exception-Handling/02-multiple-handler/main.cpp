#include <iostream>
#define SIZE 4

using namespace std;

class Stack{
    protected:
        int s[SIZE], top;
    
    public:
        class FULL{};
        class EMPTY{};

        Stack(){
            top = -1;
        }

        void push(int x){
            if(top == SIZE - 1){
                throw FULL();
            }

            else{
                s[++top] = x;
            }
        }

        int pop(){
            if (top == -1){
                throw EMPTY();
            }

            else{
                return s[top--];
            }
        }
};

int main(){
    Stack s;

    try{
        s.push(11);
        s.push(12);
        s.push(13);
        s.push(14);
        s.pop();
        s.pop();
        s.pop();
        s.pop();
        s.pop();
    }

    catch(Stack::FULL){
        cout << "Stack memory is full." << endl;
    }

    catch(Stack::EMPTY){
        cout << "Stack memory is empty." << endl;
    }
    return 0;
}