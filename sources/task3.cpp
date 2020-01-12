// Copyright 2019  Dimontich

#include <iostream>
#include <nlohmann/json.hpp>

int main() {
  std::string str =
      R"([["Si-9.15", "RTS-9.15", "GAZP-9.15"],[100024, 100027, 100050],["Futures contract for USD/RUB", "Futures contract for index RTS", "Futures contract for Gazprom shares"]])";
  nlohmann::json input_json = nlohmann::json::parse(str);
  nlohmann::json current_json;
  nlohmann::json result_json;
  for (size_t i = 0; i < input_json.size(); i++) {
    current_json["ticker"] = input_json[0][i];
    current_json["id"] = input_json[1][i];
    current_json["description"] = input_json[2][i];
    result_json.push_back(current_json);
  }
  std::cout << "Result:\n";
  std::cout << result_json.dump(3);
}
