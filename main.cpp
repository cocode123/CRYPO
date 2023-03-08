#include <iostream>
bool strcmp1(const char* s1, const char* s2) {
    if (sizeof(s1) != sizeof(s2)) {
        return false;
    }
    for (int i = 0; i < sizeof(s1); ++i) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}
int main() {
    char table[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    int count = 0;
    char tmp[] = { 'a','a','a','a','a','\0' };
    char passwd[] = { 'h','e','l','l','o','\0' };
    for (int i = 0; i < sizeof(table); ++i) {
        tmp[0] = table[i];
        for (int j = 0; j < sizeof(table); ++j) {
            tmp[1] = table[j];
            for (int a = 0; a < sizeof(table); ++a) {
                tmp[2] = table[a];
                for (int b = 0; b < sizeof(table); ++b) {
                    tmp[3] = table[b];
                    for (int c = 0; c < sizeof(table); ++c) {
                        tmp[4] = table[c];
                        if (strcmp1(tmp, passwd)) {
                            std::cout << "result:" << tmp << std::flush;
                            return 0;
                        }
                        std::cout << ++count << "\n" << std::flush;


                    }
                }
            }
        }
    }
    return 0;

}