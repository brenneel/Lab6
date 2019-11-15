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
}

//isEmpty Testers

bool Test::isEmptyTest1(){
    if(m_myQueue->isEmpty())
    {
        return(true);
    }
    return(false);
}

void Test::printer(bool result, std::string testName){
    if(result){
        std::cout << testName << ": PASSED\n";
    }
    else{
        std::cout << testName << ": FAILED\n";
    }
}