#include <bits/stdc++.h>
using namespace std;
class queu {
	public: 
		int front ,rear ,arr[100];
        queu(){
        	rear=-1;
        	front=-1;
		}	
  		bool isempty(){
  			return front ==-1;
		  }
		bool isfull(){
			return rear == 99;
		}
		void enqueue(int value)
		{
			if(isempty())
			{
				front =0;
				arr[++rear]=value;
			}
			else if(!isfull())
			{
				arr[++rear]=value;
			}
		}
        void dequeue()
        {
            if(isempty ())
            {
                cout << "Queue is empty...";
            }
            else
            {
                for(int i = front ; i < rear; i++)
                {
                    arr[i] = arr[i+1];
                }
                rear--;
            }
        }
		void display()
		{
			
			for(int i=front;i<=rear;i++)
			{
				cout<< arr[i] <<" " ;
			}
		}
		
};
int main()
{
	queu q;
	q.enqueue(10);
	q.enqueue(19);
	q.enqueue(17);
    q.dequeue();
	q.display();
}