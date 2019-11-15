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
     * creates checks if queue is empty after creation
     * @return true if test passed, false otherwise
     */
    bool isEmptyTest1();

    /**
     * adds an element to the queue, checks if isEmpty
     * @pre enqueue works correctly
     * @return true if test passed, false otherwise
     */
    bool isEmptyTest2();

    //peekFront testers
    /**
     * checks if peekFront can peek an element
     * @pre queue not empty
     * @return true if test passed, false if failed
     */
    bool peekFrontTest1();

    /**
     * removes the element from the queue
     * @pre the queue has something in it
     * @post the queue should be empty
     * @return true if test passed, false if empty
     */
    bool dequeueTest1();

    /**
     * adds another element to the queue, checks if element is added to back
     * @pre queue has an element already
     * @return true if test passed, false if failed
     */
    bool enqueueTest1();
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