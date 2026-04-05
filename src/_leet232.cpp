#include "main.hpp"
#include <cstring>  

class MyQueue {
    private:
        static const int MAX_SIZE = 100;
        static const int ZERO_POS = 0;
        int m_stack[MAX_SIZE];
        int m_front;
        int m_rear;
        int m_count;
    public:
        MyQueue() {
            clear();
        }
        
        void push(int x) {
            m_stack[m_front] = x;
            m_front = (m_front + 1)%MAX_SIZE;
            m_count++;
        }
        
        int pop() {
            int l_ret = m_stack[m_rear];
            m_stack[m_rear] = 0;
            m_rear = (m_rear+1)%MAX_SIZE;
            m_count--;
            return l_ret;
        }
        
        int peek() {
            return m_stack[m_rear];
        }
        
        bool empty() {
            bool l_ret = false;
            if(m_count == ZERO_POS)
            {
                l_ret = true;
            }
            return l_ret;
        }
        
        void clear()
        {
            m_front = m_rear = m_count =0;
            memset(m_stack, 0, sizeof(m_stack));
        }
    };
    
    /**
     * Your MyQueue object will be instantiated and called as such:
     * MyQueue* obj = new MyQueue();
     * obj->push(x);
     * int param_2 = obj->pop();
     * int param_3 = obj->peek();
     * bool param_4 = obj->empty();
     */

     void _leet232(int exe) {
        if(exe == RUN)
        {
            MyQueue* obj = new MyQueue();
    
            obj->push(1);
            int param_2 = obj->pop();
            int param_3 = obj->peek();
            bool param_4 = obj->empty();
            cout << "param_2 " << param_2 << endl;
            cout << "param_3 " << param_3 << endl;
            cout << "param_4 " << param_4 << endl;
        }   
    }