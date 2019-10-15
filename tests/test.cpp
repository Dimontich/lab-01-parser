// Copyright 2018 Your Name <your_email>

#include <gtest/gtest.h>

#include "../include/Json.h"

std::string json = "{    \"lastname\" : \"Ivanov\",    \"firstname\" : \"Ivan\",    \"age\" : 25,    \"double_test\" : 255.5e-3,    \"null_test\" : null,    \"islegal\" : false,    \"marks\" : [    	4,5,5,5,2,3    ],    \"address\" : {    	\"city\" : \"Moscow\",        \"street\" : \"Vozdvijenka\"  }}";

Json object = Json::parse(json);

TEST(Json_parser,string_test)
{
    EXPECT_EQ(std::any_cast<std::string>(object["lastname"]), "Ivanov");
}

TEST(Json_parser,bool_test)
{
    EXPECT_EQ(std::any_cast<bool>(object["islegal"]), false);
}

TEST(Json_parser,int_test)
{
    EXPECT_EQ(std::any_cast<int>(object["age"]), 25);
}

TEST(Json_parser,double_test)
{
    EXPECT_EQ(std::any_cast<double>(object["double_test"]), 0.2555);
}

TEST(Json_parser,null_test)
{
    EXPECT_EQ(std::any_cast<std::nullptr_t>(object["null_test"]), nullptr);
}

auto marks = std::any_cast<Json>(object["marks"]);

TEST(Json_parser,array_test1)
{
    EXPECT_EQ(std::any_cast<int>(marks[0]), 4);
}

TEST(Json_parser,array_test2)
{
    EXPECT_EQ(std::any_cast<int>(marks[1]), 5);
}

auto address = std::any_cast<Json>(object["address"]);

TEST(Json_parser,object_test1)
{
    EXPECT_EQ(std::any_cast<std::string>(address["city"]), "Moscow");
}

TEST(Json_parser,object_test2)
{
    EXPECT_EQ(std::any_cast<std::string>(address["street"]), "Vozdvijenka");
}

