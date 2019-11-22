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
     * checks if queue is empty after creation
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
     * checks if peekFront can peek an element of an empty queue
     * @pre queue empty
     * @return true if test passed, false if failed
     */
    bool peekFrontTest1();

    /**
     * checks if peekFront correctly sees the value when adding one value to the queue
     * @pre the queue must not be empty
     * @return true if test passed, false if failed
     */
    bool peekFrontTest2();

    /**
     * removes the element from an empty queue
     * @pre the queue must be empty
     * @post an error should be thrown
     * @return true if test passed, false if empty
     */
    bool dequeueTest1();

    /**
     * tries to remove an element from a queue with an element inside
     * @pre the queue must have something inside it
     * @post the queue should be empty
     * @return true if passed, false if failed
     */
    bool dequeueTest2();

    /**
    * checks if dequeue removes an element from the front
    * @pre queue has at least 2 elements
    * @post queue should 1 element, the second element added
    * @return true if test passed, false if failed
    */
   bool dequeueTest3();

    /**
     * adds multiple elements, checks if element added to the back
     * @pre queue empty
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