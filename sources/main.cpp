//
// Created by cezar on 14.10.2019.
//

#include <iostream>
#include <string>
#include <any>
#include "../include/Json.h"

int main()
{
    std::string json = "{    \"lastname\" : \"Ivanov\",    \"firstname\" : \"Ivan\",    \"age\" : 25,    \"islegal\" : false,    \"marks\" : [    	4,5,5,5,2,3    ],    \"address\" : {    	\"city\" : \"Moscow\",        \"street\" : \"Vozdvijenka\"  }}";
    Json object = Json::parse(json);

    std::cout << std::any_cast<std::string>(object["lastname"]) << std::endl;
    std::cout << std::any_cast<bool>(object["islegal"]) << std::endl;
    std::cout << std::any_cast<int>(object["age"]) << std::endl;
    auto marks = std::any_cast<Json>(object["marks"]);
    std::cout << std::any_cast<int>(marks[0]) << std::endl;
    std::cout << std::any_cast<int>(marks[1]) << std::endl;
    auto address = std::any_cast<Json>(object["address"]);
    std::cout << std::any_cast<std::string>(address["city"]) << std::endl;
    std::cout << std::any_cast<std::string>(address["street"]) << std::endl;
    return 0;
}

