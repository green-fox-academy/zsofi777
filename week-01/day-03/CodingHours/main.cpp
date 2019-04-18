#include <iostream>

int main(int argc, char *args[]) {

  // An average Green Fox attendee codes 6 hours daily
  // The semester is 17 weeks long
  //
  // Print how many hours is spent with coding in a semester by an attendee,
  // if the attendee only codes on workdays.
  //
  // Print the percentage of the coding hours in the semester if the average
  // working hours weekly is 52

  std::cout << 17 * 5 << std::endl;
  std::cout << 85 * 6 << std::endl;

  int x = 85 * 6;
  std::cout << "Hours spent by an average Green Fox attendee with coding in a "
               "semester: "
            << x << std::endl;

  std::cout << 17 * 52 << std::endl;
  std::cout << 17 * 7 * 24 << std::endl;
  std::cout << 884. / 2856 << std::endl;
  std::cout << (884. / 2856) * 100 << std::endl;

  std::cout << "The percentage of the coding hours in the semester: "
            << std::endl;
  std::cout << (884. / 2856) * 100 << std::endl;

  /////////////////////////////////////////////////////////////////////////////////////////////////////

  int a = 6;
  // coding hours
  int b = 17;
  // semester - weeks

  std::cout << "Hours spent by an average Green Fox attendee with coding in a "
               "semester: "
            << a * (b * 5) << std::endl;

  int c = 52;
  // all learning hours

  std::cout << "The percentage of the coding hours in the semester: "
            << ((a * 5.) / c) * 100 << std::endl;

  return 0;
}
