#include <string>


/// class Task - Early version
class Task {
  // Attributes
private:
  std::string description;
  bool done;
  std::string createDate;
  std::string doneDate;
  // Operations
public:
  Task (std::string description);
  void setDone ();
  std::string getDescription ();
  std::string getCreateDate ();
  std::string getDoneDate ();
  bool getDone ();
};

