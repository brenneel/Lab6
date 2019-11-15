/**
 * Author: Ethan Brenner
 * Desc: Class to test the functionality of Queue
*/

#ifndef TEST_H
#define TEST_H

#include "Queue.h"
#include <stdexcept>
#include <iostream>
#include <string>

class Test{

    private:
    Queue *m_myQueue = nullptr;

    /**
     * @post prints to console the result of the test along with the test name
     * @pre valid bool and string name
     */
    void printer(bool result, std::string testName);
    //isEmpty Testers

    /**
     * @return true if test passed, false otherwise
     */
    bool isEmptyTest1();

    /**
     * @return true if test passed, false otherwise
     */
    bool isEmptyTest2();

    public:
    

    /**
     * @post construct the Test obj
     */
    Test();

    /**
     * @post destroy the Test obj
     */
    ~Test();

    /**
     * @post prints the results of the testing functions to console
     */
    void run();
};
#endif