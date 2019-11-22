#include "Test.h"

Test::Test(){
    m_myQueue = new Queue();
}

Test::~Test(){
    delete m_myQueue;
}

void Test::run(){
    //run all test funcs here
    printer(isEmptyTest1(),"Test1: queue empty after creation: ");
    printer(isEmptyTest2(),"Test2: queue not empty after enqueue: ");
    printer(peekFrontTest1(),"Test3: peekFront throws an error when peeking empty queue: ");
    printer(peekFrontTest2(),"Test4: peekFront can return the value when adding one element: ");
    printer(dequeueTest1(),"Test5: dequeue throws an error on empty queue: ");
    printer(dequeueTest2(), "Test6: dequeue removes single element from queue: ");
    printer(dequeueTest3(), "Test7: dequeue removes the front-most element: ");
    printer(enqueueTest1(),"Test8: enqueue adds element to the back: ");
}

bool Test::isEmptyTest1(){
    if(m_myQueue->isEmpty())
    {
        return(true);
    }
    return(false);
}

bool Test::isEmptyTest2(){
    delete m_myQueue;
    m_myQueue = new Queue();

    m_myQueue->enqueue(1);
    if(m_myQueue->isEmpty()){
        return(false);
    }
    return(true);
}

bool Test::peekFrontTest1(){
    delete m_myQueue;
    m_myQueue = new Queue();
    bool passed = false;
    try{
        if(m_myQueue->peekFront() == 1){
            return(true);
        }
        return(false);
    }
    catch(...){
        passed = true;
    }
    return(passed);
}

bool Test::peekFrontTest2(){
    delete m_myQueue;
    m_myQueue = new Queue();
    bool passed = false;

    m_myQueue->enqueue(1);
    if(m_myQueue->peekFront() == 1){
        passed = true;
    }
    return(passed);
}

bool Test::dequeueTest1(){
    delete m_myQueue;
    m_myQueue = new Queue();
    bool passed = false;
    try{
        m_myQueue->dequeue();
        if(m_myQueue->isEmpty()){
            //do nothing, something didn't work
        }
    }
    catch(...){
        passed = true;
    }
    return(passed); 
}

bool Test::dequeueTest2(){
    delete m_myQueue;
    m_myQueue = new Queue();
    bool passed = false;

    m_myQueue->enqueue(1);
    m_myQueue->dequeue();

    if(m_myQueue->isEmpty()){
        passed = true;
    }

    return(passed);
}

bool Test::dequeueTest3(){
     delete m_myQueue;
    m_myQueue = new Queue();
    bool passed = false;

    m_myQueue->enqueue(1);
    m_myQueue->enqueue(2);
    int val = m_myQueue->peekFront();
    m_myQueue->dequeue();
    if(m_myQueue->peekFront() != val){
        passed = true;
    }
    
    return(passed);
}

bool Test::enqueueTest1(){
    delete m_myQueue;
    m_myQueue = new Queue();
    
    bool passed = true;
    
    m_myQueue->enqueue(2);
   int val = m_myQueue->peekFront();
    m_myQueue->enqueue(3);
    if(m_myQueue->peekFront() != val){
        passed = false;
    }

    return(passed); 
}

void Test::printer(bool result, std::string testName){
    if(result){
        std::cout << testName << "PASSED\n\n";
    }
    else{
        std::cout << testName << "FAILED\n\n";
    }
}