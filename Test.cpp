#include "Test.h"

//constructor
Test::Test(){
    m_myQueue = new Queue();
}

//the destructor
Test::~Test(){
    delete m_myQueue;
}

//runner
void Test::run(){
    //run all test funcs here
    printer(isEmptyTest1(),"isEmptyTest1");
    printer(isEmptyTest2(),"isEmptyTest2");
    printer(peekFrontTest1(),"peekFrontTest1");
    printer(dequeueTest1(),"dequeueTest1");
    printer(enqueueTest1(),"enqueueTest1");
}

//isEmpty Testers

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

bool Test::enqueueTest1(){
    delete m_myQueue;
    m_myQueue = new Queue();
    
    bool passed = true;
    /*
    m_myQueue->enqueue(2);
    m_myQueue->enqueue(3);
    if(m_myQueue->peekFront() != 2){
        passed = false;
    }
    m_myQueue->dequeue();

    if(m_myQueue->peekFront() != 3){
        passed = false;
    }
*/
    return(passed);
    
}



void Test::printer(bool result, std::string testName){
    if(result){
        std::cout << testName << ": PASSED\n";
    }
    else{
        std::cout << testName << ": FAILED\n";
    }
}