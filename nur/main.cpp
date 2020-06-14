//
//  main.cpp
//  nur
//
//  Created by Zaid Hand on 5/6/20.
//  Copyright © 2020 Zaid Hand. All rights reserved.
//

#include <iostream>
using namespace std;

class Employee {
  private:
    int salary;

  public:
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}
