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
    //std::cout.imbue(std::locale("pl_PL.utf8"));
    //std::cout<<std::setw(60)<<std::setfill('_')<<std::endl;
    std::cout<<std::left<<std::setw(31)<<"|Opis zadania"<<std::setw(17)<<"|Data utworzenia"<<std::setw(11)<<"|Zrobione"<<std::setw(17)<<"|Data wykonania"<<"|"<<std::endl;
    for(auto task:tasks)
    {
        if(task.getDone() == done)
        {
            std::cout<<"|"<<std::left<<std::setw(30)<<task.getDescription()<<"|"<<std::setw(16)<<task.getCreateDate()<<"|"<<std::boolalpha<<std::setw(10)<<task.getDone()<<"|"<<std::setw(16)<<task.getDoneDate()<<"|"<<std::endl;
        }
    }
    std::cout<<std::endl;
}
