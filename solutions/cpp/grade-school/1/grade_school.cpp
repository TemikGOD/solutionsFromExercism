#include "grade_school.h"

namespace grade_school {
    std::map<int, std::vector<std::string>> school::roster() const {
        return roster_;
    }
    
    void school::add(const std::string& name, int grade) {
        auto& refToGrade = roster_[grade];
        auto pos = std::lower_bound(refToGrade.begin(), refToGrade.end(), name);
        refToGrade.insert(pos, name);
    }
    
    std::vector<std::string> school::grade(int grade) const {
        auto it = roster_.find(grade);
        if (it != roster_.end()) {
            return it->second;
        } else {
            return {};
        }
    }
}  // namespace grade_school
