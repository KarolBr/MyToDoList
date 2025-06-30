#ifndef TODOLIST_H
#define TODOLIST_H
#include <vector>
#include "Task.h"

/// class ToDoList - 
class ToDoList {
  // Attributes
private:
  std::vector<Task> tasks;
  // Operations
public:
  void addTask (Task task);
  void setTaskDone (int index);
  void printAll (bool done = false);
};

#endif // !TODOLIST_H