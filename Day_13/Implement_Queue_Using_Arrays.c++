#include<bits/stdc++.h>
using namespace std;
class Queue {

	int front, rear;
	vector<int> arr;

public:
	Queue()
	{
		front = 0;
		rear = 0;
		
	}

	// Enqueue (add) element 'e' at the end of the queue.
	void enqueue(int e)
	{
		arr.push_back(e);
		front++;

		// Write your code here.
	}

	// Dequeue (retrieve) the element from the front of the queue.
	int dequeue()
	{

          if (rear < front) {
            int ele = arr[rear];
			rear++;
			return ele;
          }

                return -1;
		// Write your code here.
	}
};