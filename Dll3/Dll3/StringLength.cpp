#include "pch.h"
#include "StringLength.h"
#include <cstring>

extern "C" {

     int max_length(const char* s1, const char* s2, const char* s3, const char* s4) {
        int len1 = std::strlen(s1);
        int len2 = std::strlen(s2);
        int len3 = std::strlen(s3);
        int len4 = std::strlen(s4);

        int maxLen = len1;

        if (len2 > maxLen) maxLen = len2;
        if (len3 > maxLen) maxLen = len3;
        if (len4 > maxLen) maxLen = len4;

        return maxLen;
    }

}