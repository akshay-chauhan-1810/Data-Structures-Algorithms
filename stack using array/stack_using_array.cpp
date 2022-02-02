#include <iostream>
#include <string>

using namespace std;

class stack{
    private:
         int top;
         int arr[5];

    public:
         stack(){
                top = -1;
                for (int i = 0; i < 5; i++)
                    {
                        arr[i] = 0;
                    }
            }
            bool isEmpty(){
                if(top==-1){
                    return true;
                }
                else{
                    return false;
                }
            }
            bool isFull(){
                if (top==4)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }

            void push(int val){
                if (isFull())
                {
                   cout<<"Stack OverFlow"<<endl;
                }
                else
                {
                    top++;
                    arr[top]=val;
                }    
            }

            int pop(){
                if(isEmpty()){
                    cout<<"Stack underflow"<<endl;
                    return 0;
                }
                else
                {
                    int popvalue = arr[top];
                    arr[top] = 0;
                    top--;
                    return popvalue;
                }
            }
            void display(){
                cout<<"All values in the stack are"<<endl;
                for (int i = 4; i>=0; i--)
                {
                     cout<<arr[i]<<endl;
                }  
            }
            int count(){
                return(top+1);
            }

            int peek(int pos)
            {
                if(isEmpty())
                {
                    cout<<"Stack underflow"<<endl;
                    return 0;
                }
                else
                {
                    return arr[pos];
                }
            }

            void change(int pos, int val)
            {
                arr[pos]=val;
                cout<<"value changed at location"<<pos<<endl;
            }
};

int main()
{
    stack s1;
    int option,position,value;

    do
    {
        cout<<"What operatin do you want?"<<endl;
        cout<<"1. push()"<<endl;
        cout<<"2. pop()"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. count()"<<endl;
        cout<<"6. change()"<<endl;
        cout<<"7. peek()"<<endl;
        cout<<"8. display()"<<endl;
        cout<<"9. Clear Screen()"<<endl;

        cin>>option;
        switch (option)
        {
        case 1:
            cout<<"enter an item to push in the stack"<<endl;
            cin>>value;
            s1.push(value);
            break;

        case 2:
             cout<<"pop function called - poped value "<<s1.pop()<<endl;
             break;
        

        case 3:
             if(s1.isEmpty())
             {
                 cout<<"stack is Empty"<<endl;
             }
             else
             {
                 cout<<"Stack is not Empty"<<endl;
             }
             break;
        

        case 4:
             if(s1.isFull())
             {
                 cout<<"Stack is full"<<endl;
             }
             else
             {
                 cout<<"Satck is not full"<<endl;
             }
             break;
        

        case 5:
             cout<<"count function called - Number of Items in the stack are: "<<s1.count()<<endl;
             break;
        
        case 6:
             cout<<"Enetr position of item you want to change"<<endl;
             cin>>position;
             cout<<"Enter value of item you want to change"<<endl;
             cin>>value;
             cout<<"change function called"<<endl;
             s1.change(position,value);
             break;
        
        
        case 7:
             cout<<"Ente position of item you wanr to peek: "<<endl;
             cin>>position;
             cout<<"peek function called - value at position "<<position<<" is "<<s1.peek(position)<<endl;
             break;
        
        case 8:
             cout<<"Display function called"<<endl;
             s1.display();
             break;

             default:
                break;
        
        case 9:
            system("cls"); 
            break;
        }

    }while(option!=0);
 
}