#pragma once
#ifdef LIB_EXPORT
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif
extern "C" LIB_API unsigned int MurMurHash2(char* key, unsigned int len);