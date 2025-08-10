#pragma once
#include <map>
#include <vector>
#include <string>
#include <algorithm>

namespace grade_school {
    class school {
    public:
        std::map<int, std::vector<std::string>> roster() const;
        void add(const std::string& name, int grade);
        std::vector<std::string> grade(int grade) const;
    private:
        std::map<int, std::vector<std::string>> roster_;
    };
}  // namespace grade_school
