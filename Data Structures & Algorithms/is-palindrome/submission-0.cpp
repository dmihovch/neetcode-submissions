class Solution {
   public:
    bool isPalindrome(string s) {
        std::erase_if(s, [](unsigned char c) {
            return !std::isalnum(c);
        });
        
        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c){
            return std::tolower(c);
        });
            std::cout << s << std::endl << std::endl;

        const char* p1 = s.c_str();
        const char* p2 = p1 + s.length() - 1;

        while (*p1 == *p2 && p1 <= p2) {
            p1++;
            p2--;
        }
        if (p1 >= p2) {
            return true;
        }
        std::cout << s << std::endl;
        std::cout << *p1 << *p2 << std::endl;
        return false;
    }
};
