#include "ToDoList.h"
#include "Task.h"
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

void ToDoList::addTask(Task task)
{
    
    tasks.push_back(task);
}

void ToDoList::setTaskDone(int index)
{
    tasks[index].setDone();
}

void ToDoList::printAll(bool done)
{
    for(auto task:tasks)
    {
        if(task.getDone() == done)
        {
            std::cout<<std::setw(30)<<task.getDescription()<<std::setw(10)<<task.getCreateDate()<<std::setw(10)<<task.getDone()<<std::setw(10)<<task.getDoneDate()<<std::endl;
        }
    }
}
