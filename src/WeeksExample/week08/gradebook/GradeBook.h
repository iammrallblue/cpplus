#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <string>

using std::string;

/**
 * Simple gradebook class.
 */
class GradeBook {

  string courseName;
  static unsigned int numGradeBooks;

 public:

  /**
   * Constructs a new grade book object.
   * @param name  course name
   */
  GradeBook(const string & name);

  /**
   * Destructor. This instance function is called automatically when an object
   * of this class is destroyed via either automatic or explicit (i.e., "delete")
   * deallocation.
   */
  ~GradeBook();

  /**
   * Returns the course name. This is a const member function (denoted by the
   * const at the end of the function prototype), which means it is 
   * contractually guaranteed to not modify the object. This guarantee also
   * means it can be called using a const object of this class. Member functions
   * that do not need to modify the object should generally by marked as const. 
   */
  const string & getCourseName() const;

  /**
   * Sets the course name. 
   * @param name  course name
   */
  void setCourseName(const string & name);

  /**
   * Display a nice message.
   */
  void displayMessage() const;

  /**
   * Print the number of grade book objects.
   */
  static void printNumGradeBooks();

}; // GradeBook

#endif

