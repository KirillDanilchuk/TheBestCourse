#pragma once
#include <string>

class Database {
  Database() = default;
  bool Connect();
  std::string Query(const std::string& query);
  std::string Status();

 private:
  void* connection_;
  bool is_open_;
};