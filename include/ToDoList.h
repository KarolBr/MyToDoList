/// class ToDoList - 
class ToDoList {
  // Attributes
private:
  std::vector<Task> tasks;
  // Operations
public:
  void addTask (std::string description);
  void setTaskDone ();
  void printAll (bool done);
};

