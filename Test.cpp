#include "Test.h"

//constructor
Test::Test(){
    m_myQueue = new Queue();
}

//the destructor
Test::~Test(){
    //destroyer of objects
    //do I need to delete here? this may cause a leak
    delete m_myQueue;

}

//runner
void Test::run(){
    //run all test funcs here
}