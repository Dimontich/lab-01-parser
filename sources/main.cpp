// Copyright 2019  Dimontich

#include <any>
#include <ctime>
#include <iostream>
#include <string>
#include "../include/Json.h"

int main() {
  auto start = clock();
  std::string json =
      "{    \"lastname\" : \"Ivanov\",    \"firstname\" : \"Ivan\",    \"age\" "
      ": 25,    \"islegal\" : false,    \"marks\" : [    	4,5,5,5,2,3    "
      "],    \"address\" : {    	\"city\" : \"Moscow\",        "
      "\"street\" : \"Vozdvijenka\"  }}";
  auto end = clock();
  std::cout << end - start;

  return 0;
}
