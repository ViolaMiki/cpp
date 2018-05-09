class Solution {
    public:
        bool isMatch(string s, string p) {
            char cache;
            auto position = s.begin();
            bool hasChecked = false;
            for (auto i = p.begin(); i != p.end(); ++i) {
                if (position == s.end()) {
                    break;
                }
                hasChecked = false;
                for (auto j = position; j != s.end(); ++j) {
                    if (*i == '*') {
                        if (*j == cache) {
                            while (*j == *(j + 1)) {
                                j++;
                            }
                        } else {
                            return false;
                        }
                    }

                    if (*j != *i && i != p.begin()) {
                        return false;
                    }
                    cache = *j;
                    position = j + 1;
                    hasChecked = true;
                    break;
                }
            }

            return hasChecked;
        }
};
