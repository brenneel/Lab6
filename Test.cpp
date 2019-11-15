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
    m_myQueue->enqueue(1);
    if(m_myQueue->isEmpty()){
        return(false);
    }
    return(true);
}

bool Test::peekFrontTest1(){
    if(m_myQueue->peekFront() == 1){
        return(true);
    }
    return(false);
}

bool Test::dequeueTest1(){
    m_myQueue->dequeue();
    if(m_myQueue->isEmpty()){
        return(true);
    }
    return(false);
}

bool Test::enqueueTest1(){
    bool passed = true;
    m_myQueue->enqueue(2);
    m_myQueue->enqueue(3);
    if(m_myQueue->peekFront() != 2){
        passed = false;
    }
    m_myQueue->dequeue();

    if(m_myQueue->peekFront() != 3){
        passed = false;
    }

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