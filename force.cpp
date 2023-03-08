#include "force.h"

force::force()
{
    count = 0;
}


void force::startForce(const char* table, int len, char tmp[], char passwd[])
{
    
    for (int i = 0; i < len; ++i) {
        tmp[0] = table[i];
        for (int j = 0; j < len; ++j) {
            tmp[1] = table[j];
            for (int a = 0; a < len; ++a) {
                tmp[2] = table[a];
                for (int b = 0; b < len; ++b) {
                    tmp[3] = table[b];
                    for (int c = 0; c < len; ++c) {
                        tmp[4] = table[c];
                        if (strcmp1(tmp, passwd)) {
                            std::cout << "result:" << tmp << std::flush;
                            return;
                        }
                        std::cout << ++count << "\n" << std::flush;


                    }
                }
            }
        }
    }
}



force::~force()
{
}


bool force::strcmp1(const char* s1, const char* s2)
{
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
