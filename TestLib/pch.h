#ifndef PCH_H
#define PCH_H

#define WIN32_LEAN_AND_MEAN

#include "framework.h"
#include "TString.h"
// #include "PathUtils.h"
// #include "StringUtils.h"

#include "nlohmann/json.hpp"
#include "curl/curl.h"

#include <Windows.h>
#include <tchar.h>
#include <afxwin.h>
#include <afxcmn.h>
#include <atlstr.h>
#include <shellapi.h>
#include <Urlmon.h>
#include <wininet.h>
#include <conio.h>
#include <gdiplus.h>
#include <atlimage.h>

// Needed to fix cUrl linking error.
// See
// https://stackoverflow.com/questions/30450042/unresolved-external-symbol-imp-iob-func-referenced-in-function-openssldie
// & https://stackoverflow.com/questions/32418766/c-unresolved-external-symbol-sprintf-and-sscanf-in-visual-studio-2015.
#pragma comment(lib, "legacy_stdio_definitions.lib")
#include <iostream>
namespace details {
FILE _iob[] = { *stdin, *stdout, *stderr };
}
extern "C" FILE* __cdecl __iob_func(void)
{
    return details::_iob;
}

#include <string>
#include <algorithm>
#include <mutex>
#include <unordered_set>

#endif // PCH_H
