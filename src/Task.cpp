#include <string>
#include "Task.h"

Task::Task(std::string description):description(description)
{
    done = false;
    createDate = 
}

void Task::setDone()
{
    done = true;
}

std::string Task::getDescription ()
{
    return description;
}
std::string Task::getCreateDate ()
{
    return createDate;
}
std::string Task::getDoneDate ()
{
    return doneDate;
}
bool Task::getDone ()
{
    
}