#ifndef WIN_UTILS_H
#define WIN_UTILS_H

#include <windows.h>

#include <string>

std::wstring utf8ToUtf16(std::string input);
std::string utf16ToUtf8(const WCHAR *input, size_t length);
std::string normalizePath(std::string path);

#endif
