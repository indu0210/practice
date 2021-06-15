#include<iostream>
using namespace std;
#define SIZE 5 

class Queue{
    private:
        int items[SIZE], front, rear;
    public:
    Queue(){
        front = -1;
        rear = -1;
    }
    bool isFull(){
        if (front == 0 && rear == SIZE-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isEmpty(){
        if(front ==-1){
            return true;
        }
        else {
            return false;
        }
    }
    void enqueue(int element){
        if(isFull()){
            cout<<"\n Queue is FULL";
        }
        else{
            if (front == -1){
                front = 0;
            }
            rear ++;
            items[rear] = element;
            cout<<"\n Element is inserted"; 
            
        }
    }
    int dequeue(){
        int element;
        if(isEmpty()){
            cout<<"\n Queue is empty";
            return -1;
        }
        else{
            element = items[front];
            if (front > rear){
                front = -1;
                rear = -1;
            }
            else{
                front++;
            }
            cout<<"\n Element Deleted is "<<element;
            return element;
        }
    }
    void display(){
        int i;
        if (isEmpty()){
            cout<<"\n Queue EMPTY";
        }
        else{
            for(i = front; i <= rear;i++){
                cout<<items[i]<<" "<<endl<<"REar Index:"<<rear;
            }
        }
    }
};
    int main(){
        Queue q;
        q.dequeue();
        q.enqueue(10);
        q.enqueue(20);
        q.enqueue(30);
        q.enqueue(40);
        q.enqueue(50);
        q.display();
        q.dequeue();
        q.display();
        return 0;
    }