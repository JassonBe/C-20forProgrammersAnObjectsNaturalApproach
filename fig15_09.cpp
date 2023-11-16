// fig15_09.cpp
// Testing custom concepts with static_assert.
#include <iostream>
#include <string>

using namespace std;

template<typename T>
concept Numeric = integral<T> || floating_point<T>;

template<typename T>     
auto multiply(T a, T b) {      
   static_assert(Numeric<T>);      
   return a * b;     
} 

int main() {
   using namespace string_literals;

   int result_int = multiply(2, 5);// OK: int is Numeric
   std::cout << "Multiplicacion de enteros: " << result_int << std::endl;

   // Multiplicación de punto flotante
   double result_double = multiply(2.5, 5.5);// OK: double is Numeric
   std::cout << "Multiplicacion de punto flotante: " << result_double << std::endl;

   //multiplicáción ya en tipo entero
   int result_int2 = multiply(2, 5); // error: string is not Numeric
   std::cout << "Multiplicacion ya en enteros: " << result_int2 << std::endl;
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
