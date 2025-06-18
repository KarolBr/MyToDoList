/// class ToDoList - 
class ToDoList {
  // Attributes
private:
  std::vector<Task> tasks;
  // Operations
public:
  addTask (std::string description);
  void setTaskDone ();
  void printAll (bool done);
};

