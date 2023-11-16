// fig15_06.cpp
// Using type traits to test whether types are 
// integral types, floating-point types or arithmetic types.
import "format";
#include "iostream"
#include "string"
#include "type_traits"

using namespace std;

int main() {
   cout << format("{}\n{}{}\n{}{}\n{}{}\n{}{}\n{}{}\n\n",
      "CHECK WITH TYPE TRAITS WHETHER TYPES ARE INTEGRAL",
      "is_integral<int>::value: ", std::is_integral<int>::value,
      "is_integral_v<int>: ", std::is_integral_v<int>,
      "is_integral_v<long>: ", std::is_integral_v<long>,
      "is_integral_v<float>: ", std::is_integral_v<float>,
      "is_integral_v<std::string>: ",
      is_integral_v<std::string>);

   cout << format("{}\n{}{}\n{}{}\n{}{}\n{}{}\n{}{}\n\n",
      "CHECK WITH TYPE TRAITS WHETHER TYPES ARE FLOATING POINT",
      "is_floating_point<float>::value: ",
      is_floating_point<float>::value,
      "is_floating_point_v<float>: ",
      is_floating_point_v<float>,
      "is_floating_point_v<double>: ",
      is_floating_point_v<double>,
      "is_floating_point_v<int>: ",
      is_floating_point_v<int>,
      "is_floating_point_v<std::string>: ",
      is_floating_point_v<std::string>);

   cout << format("{}\n{}{}\n{}{}\n{}{}\n{}{}\n",
      "CHECK WITH TYPE TRAITS WHETHER TYPES CAN BE USED IN ARITHMETIC",
      "is_arithmetic<int>::value: ", std::is_arithmetic<int>::value,
      "is_arithmetic_v<int>: ", std::is_arithmetic_v<int>,
      "is_arithmetic_v<double>: ", std::is_arithmetic_v<double>,
      "is_arithmetic_v<std::string>: ",
      is_arithmetic_v<std::string>);
}



/**************************************************************************
 * (C) Copyright 1992-2022 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
