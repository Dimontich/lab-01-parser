// Copyright 2018 Your Name <your_email>

#include <gtest/gtest.h>

#include "../include/Json.h"

std::string json = "{    \"lastname\" : \"Ivanov\",    \"firstname\" : \"Ivan\",    \"age\" : 25,    \"double_test\" : 255.5e-3,    \"null_test\" : null,    \"true_test\" : true,  \"islegal\" : false,    \"marks\" : [    	4,5,5,5,2,3.5e-2,{\"testkey\" : 6}, [5,7], \"test\", true, null    ],    \"address\" : {    	\"city\" : \"Moscow\",        \"street\" : \"Vozdvijenka\"  }}";

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

TEST(Json_parser,true_test)
{
    EXPECT_EQ(std::any_cast<bool>(object["true_test"]), true);
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

TEST(Json_parser, Empty_object_exception)
{
    object = Json::parse("{    }");
    EXPECT_ANY_THROW(object[0]);
}

TEST(Json_parser, Empty_array_exception)
{
    object = Json::parse("[    ]");
    EXPECT_ANY_THROW(object[0]);
}

TEST(Json_parser, exception1)
{
    object = Json::parse("[   }");
    EXPECT_ANY_THROW(object[0]);
}

TEST(Json_parser, exception2)
{
    object = Json::parse("{   ]");
    EXPECT_ANY_THROW(object[0]);
}

TEST(Json_parser, exception3)
{
    object = Json::parse("{  ");
    EXPECT_ANY_THROW(object[0]);
}

TEST(Json_parser, exception4)
{
    object = Json::parse("{ssdf\"test\"}");
    EXPECT_ANY_THROW(object[0]);
}

TEST(Json_parser, exception5)
{
    object = Json::parse("{\"key\":falst   }");
    EXPECT_ANY_THROW(object[0]);
}

TEST(Json_parser, exception6)
{
    object = Json::parse("{\"key\":{{\"key\":234}   }\"");
    EXPECT_ANY_THROW(object[0]);
}

TEST(Json_parser, exception7)
{
    object = Json::parse("{\"key:falst   }\"");
    EXPECT_ANY_THROW(object[0]);
}

TEST(Json_parser, exception8)
{
    object = Json::parse("{\"key\"falst   }\"");
    EXPECT_ANY_THROW(object[0]);
}

TEST(Json_parser, exception9)
{
    object = Json::parse("{\"key:gggg   }\"");
    EXPECT_ANY_THROW(object[0]);
}

TEST(Json_parser, exception10)
{
    object = Json::parse("{\"key\":\"ggggg   }\"");
    EXPECT_ANY_THROW(object[0]);
}

TEST(Json_parser, exception11)
{
    object = Json::parse("{\"key\":44gg   }\"");
    EXPECT_ANY_THROW(object[0]);
}

TEST(Json_parser, exception12)
{
    object = Json::parse("{\"key\":nulg  }\"");
    EXPECT_ANY_THROW(object[0]);
}

