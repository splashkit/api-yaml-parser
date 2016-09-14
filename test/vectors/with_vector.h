#include <vector>
#include <string>
using namespace std;

namespace splashkit_lib
{
  /**
   * description.
   *
   * @param message message
   * @returns message
   */
  string print_string(const string &message);

  /**
   * Adds an array of `json` object values to the `json` object for
   * the given `string` key.
   *
   * @param j List to print
   * @param x An int
   */
  void print_string_list(const vector<string> &j, int x);

  /**
   * Prints values from the list.
   *
   * @param j The list
   */
  void print_float_list(const vector<float> &j);


  /**
   * Adds an array of `json` object values to the `json` object for
   * the given `string` key.
   *
   * @param count The number of values
   * @returns Values 1 to count in a vector
   */
  vector<float> get_number_list(int count);
}