/**
 * Author: Ethan Brenner
 * Desc: Class to test the functionality of Queue
*/

#ifndef TEST_H
#define TEST_H

#include "Queue.h"
#include <stdexcept>

class Test{

    private:
    Queue *m_myQueue = nullptr;

    //isEmpty Testers

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