#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <forward_list>
#include <deque>
#include <array>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>

// function prototypes
void printMenu();
void vectorOps();
void listOps();
void forwardListOps();
void dequeOps();
void arrayOps();
void setOps();
void mapOps();
void unorderedSetOps();
void unorderedMapOps();
void stackOps();
void queueOps();

using namespace std;

int main()
{
    int choice;
    do
    {
        // display menu
        printMenu();
        // get user's choice
        cin >> choice;
        // perform the selected operation
        switch (choice)
        {
        case 1:
            vectorOps();
            break;
        case 2:
            listOps();
            break;
        case 3:
            forwardListOps();
            break;
        case 4:
            dequeOps();
            break;
        case 5:
            arrayOps();
            break;
        case 6:
            setOps();
            break;
        case 7:
            mapOps();
            break;
        case 8:
            unorderedSetOps();
            break;
        case 9:
            unorderedMapOps();
            break;
        case 10:
            stackOps();
            break;
        case 11:
            queueOps();
            break;
        case 12:
            // exit the program
            cout << "Exiting..." << endl;
            break;
        default:
            // display error message
            cout << "Invalid choice!" << endl;
            break;
        }
    } while (choice != 12);
    return 0;
}

// display menu
void printMenu()
{
    cout << "-----------------------------" << endl;
    cout << "1. Vector operations" << endl;
    cout << "2. List operations" << endl;
    cout << "3. Forward list operations" << endl;
    cout << "4. Deque operations" << endl;
    cout << "5. Array operations" << endl;
    cout << "6. Set operations" << endl;
    cout << "7. Map operations" << endl;
    cout << "8. Unordered set operations" << endl;
    cout << "9. Unordered map operations" << endl;
    cout << "10. Stack operations" << endl;
    cout << "11. Queue operations" << endl;
    cout << "12. Exit" << endl;
    cout << "-----------------------------" << endl;
}

// vector operations
void vectorOps()
{
    // create a vector of integers
    vector<int> intVector;
    // add elements to the vector
    intVector.push_back(1);
    intVector.push_back(2);
    intVector.push_back(3);
    intVector.push_back(4);
    intVector.push_back(5);
    // display the vector
    cout << "Vector: ";
    for (int i = 0; i < intVector.size(); i++)
        cout << intVector[i] << " ";
    cout << endl;

    // remove the last element of the vector
    intVector.pop_back();
    // display the vector
    cout << "Vector: ";
    for (int i = 0; i < intVector.size(); i++)
        cout << intVector[i] << " ";
    cout << endl;

    // sort the vector in ascending order
    sort(intVector.begin(), intVector.end());
    // display the vector
    cout << "Vector: ";
    for (int i = 0; i < intVector.size(); i++)
        cout << intVector[i] << " ";
    cout << endl;
    
    // reverse the vector
    reverse(intVector.begin(), intVector.end());
    // display the vector
    cout << "Vector: ";
    for (int i = 0; i < intVector.size(); i++)
        cout << intVector[i] << " ";
    cout << endl;
}

// list operations
void listOps()
{
    // create a list of integers
    list<int> intList;
    // add elements to the list
    intList.push_back(1);
    intList.push_back(2);
    intList.push_back(3);
    intList.push_back(4);
    intList.push_back(5);
    // display the list
    cout << "List: ";
    for (int i : intList)
        cout << i << " ";
    cout << endl;
    // remove the last element of the list
    intList.pop_back();
    // display the list
    cout << "List: ";
    for (int i : intList)
        cout << i << " ";
    cout << endl;
    // sort the list in ascending order
    intList.sort();
    // display the list
    cout << "List: ";
    for (int i : intList)
        cout << i << " ";
    cout << endl;
    // reverse the list
    intList.reverse();
    // display the list
    cout << "List: ";
    for (int i : intList)
        cout << i << " ";
    cout << endl;
}

// forward list operations
void forwardListOps()
{
    // create a forward list of integers
    forward_list<int> intForwardList;
    // add elements to the forward list
    intForwardList.push_front(1);
    intForwardList.push_front(2);
    intForwardList.push_front(3);
    intForwardList.push_front(4);
    intForwardList.push_front(5);
    // display the forward list
    cout << "Forward list: ";
    for (int i : intForwardList)
        cout << i << " ";
    cout << endl;
    
    // remove the last element of the forward list
    intForwardList.pop_front();
    // display the forward list
    cout << "Forward list: ";
    for (int i : intForwardList)
        cout << i << " ";
    cout << endl;
}

// deque operations
void dequeOps()
{
    // create a deque of integers
    deque<int> intDeque;
    // add elements to the deque
    intDeque.push_back(1);
    intDeque.push_back(2);
    intDeque.push_back(3);
    intDeque.push_back(4);
    intDeque.push_back(5);
    // display the deque
    cout << "Deque: ";
    for (int i : intDeque)
        cout << i << " ";
    cout << endl;
    // remove the last element of the deque
    intDeque.pop_back();
    // display the deque
    cout << "Deque: ";
    for (int i : intDeque)
        cout << i << " ";
    cout << endl;
}

// array operations
void arrayOps()
{
    // create an array of integers
    array<int, 5> intArray{1, 2, 3, 4, 5};
    // display the array
    cout << "Array: ";
    for (int i : intArray)
        cout << i << " ";
    cout << endl;
    // sort the array in ascending order
    sort(intArray.begin(), intArray.end());
    // display the array
    cout << "Array: ";
    for (int i : intArray)
        cout << i << " ";
    cout << endl;
    // reverse the array
    reverse(intArray.begin(), intArray.end());
    // display the array
    cout << "Array: ";
    for (int i : intArray)
        cout << i << " ";
    cout << endl;
}

// set operations
void setOps()
{
    // create a set of integers
    set<int> intSet;
    // add elements to the set
    intSet.insert(1);
    intSet.insert(2);
    intSet.insert(3);
    intSet.insert(4);
    intSet.insert(5);
    // display the set
    cout << "Set: ";
    for (int i : intSet)
        cout << i << " ";
    cout << endl;
    // remove an element from the set
    intSet.erase(3);
    // display the set
    cout << "Set: ";
    for (int i : intSet)
        cout << i << " ";
    cout << endl;
    // find an element in the set
    if (intSet.find(4) != intSet.end())
        cout << "Found!" << endl;
    else
        cout << "Not found!" << endl;
}

// map operations
void mapOps()
{
    // create a map of integers
    map<int, int> intMap;
    // add elements to the map
    intMap[1] = 10;
    intMap[2] = 20;
    intMap[3] = 30;
    intMap[4] = 40;
    intMap[5] = 50;
    // display the map
    cout << "Map: ";
    for (auto i : intMap)
        cout << "(" << i.first << ", " << i.second << ") ";
    cout << endl;
    // remove an element from the map
    intMap.erase(3);
    // display the map
    cout << "Map: ";
    for (auto i : intMap)
        cout << "(" << i.first << ", " << i.second << ") ";
    cout << endl;
    // find an element in the map
    if (intMap.find(2) != intMap.end())
        cout << "Found!" << endl;
    else
        cout << "Not found!" << endl;
}

// unordered set operations
void unorderedSetOps()
{
    // create an unordered set of integers
    unordered_set<int> intUnorderedSet;
    // add elements to the unordered set
    intUnorderedSet.insert(1);
    intUnorderedSet.insert(2);
    intUnorderedSet.insert(3);
    intUnorderedSet.insert(4);
    intUnorderedSet.insert(5);
    // display the unordered set
    cout << "Unordered set: ";
    for (int i : intUnorderedSet)
        cout << i << " ";
    cout << endl;
    // remove an element from the unordered set
    intUnorderedSet.erase(3);
    // display the unordered set
    cout << "Unordered set: ";
    for (int i : intUnorderedSet)
        cout << i << " ";
    cout << endl;
    // find an element in the unordered set
    if (intUnorderedSet.find(4) != intUnorderedSet.end())
        cout << "Found!" << endl;
    else
        cout << "Not found!" << endl;
}

// unordered map operations
void unorderedMapOps()
{
    // create an unordered map of integers
    unordered_map<int, int> intUnorderedMap;
    // add elements to the unordered map
    intUnorderedMap[1] = 10;
    intUnorderedMap[2] = 20;
    intUnorderedMap[3] = 30;
    intUnorderedMap[4] = 40;
    intUnorderedMap[5] = 50;
    // display the unordered map
    cout << "Unordered map: ";
    for (auto i : intUnorderedMap)
        cout << "(" << i.first << ", " << i.second << ") ";
    cout << endl;
    // remove an element from the unordered map
    intUnorderedMap.erase(3);
    // display the unordered map
    cout << "Unordered map: ";
    for (auto i : intUnorderedMap)
        cout << "(" << i.first << ", " << i.second << ") ";
    cout << endl;
    // find an element in the unordered map
    if (intUnorderedMap.find(2) != intUnorderedMap.end())
        cout << "Found!" << endl;
    else
        cout << "Not found!" << endl;
}

// stack operations
void stackOps()
{
    // create a stack of integers
    stack<int> intStack;
    // add elements to the stack
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    intStack.push(4);
    intStack.push(5);
    // display the stack
    cout << "Stack: ";
    while (!intStack.empty())
    {
        cout << intStack.top() << " ";
        intStack.pop();
    }
    cout << endl;
}

// queue operations
void queueOps()
{
    // create a queue of integers
    queue<int> intQueue;
    // add elements to the queue
    intQueue.push(1);
    intQueue.push(2);
    intQueue.push(3);
    intQueue.push(4);
    intQueue.push(5);
    // display the queue
    cout << "Queue: ";
    while (!intQueue.empty())
    {
        cout << intQueue.front() << " ";
        intQueue.pop();
    }
    cout << endl;
}
