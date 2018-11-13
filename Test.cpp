#include <sys/stat.h>
#include <sys/timeb.h>
#include <sys/utime.h>

#define _SILENCE_ALL_CXX17_DEPRECATION_WARNINGS
#define _SILENCE_STDEXT_ALLOCATORS_DEPRECATION_WARNING
#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS

#include <algorithm>
#include <allocators>
#include <any>
#include <array>
#include <atomic>
#include <bitset>
#include <charconv>
#include <chrono>
#include <codecvt>
#include <complex>
#include <condition_variable>
#include <deque>
#include <exception>
#include <execution>
#include <filesystem>
#include <forward_list>
#include <fstream>
#include <functional>
#include <future>
#include <hash_map>
#include <hash_set>
#include <initializer_list>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <memory_resource>
#include <mutex>
#include <new>
#include <numeric>
#include <optional>
#include <ostream>
#include <queue>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <set>
#include <shared_mutex>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <string_view>
#include <strstream>
#include <system_error>
#include <thread>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <variant>
#include <vector>

#include <experimental/deque>
#include <experimental/filesystem>
#include <experimental/forward_list>
#include <experimental/list>
#include <experimental/map>
#include <experimental/set>
#include <experimental/string>
#include <experimental/unordered_map>
#include <experimental/unordered_set>
#include <experimental/vector>

#include <cassert>
#include <ccomplex>
#include <cctype>
#include <cerrno>
#include <cfenv>
#include <cfloat>
#include <cinttypes>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdalign>
#include <cstdarg>
#include <cstdbool>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctgmath>
#include <ctime>
#include <cuchar>
#include <cwchar>
#include <cwctype>

#include <assert.h>
#include <complex.h>
#include <conio.h>
#include <crtdbg.h>
#include <ctype.h>
#include <direct.h>
#include <dos.h>
#include <errno.h>
#include <excpt.h>
#include <fcntl.h>
#include <fenv.h>
#include <float.h>
#include <intrin.h>
#include <inttypes.h>
#include <io.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <malloc.h>
#include <math.h>
#include <mbctype.h>
#include <mbstring.h>
#include <memory.h>
#include <minmax.h>
#include <new.h>
#include <process.h>
#include <safeint.h>
#include <sal.h>
#include <search.h>
#include <setjmp.h>
#include <share.h>
#include <signal.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/locking.h>
#include <sys/stat.h>
#include <sys/timeb.h>
#include <sys/types.h>
#include <sys/utime.h>
#include <tchar.h>
#include <time.h>
#include <uchar.h>
#include <wchar.h>
#include <wctype.h>

// declaration 1
void func();

int main()
{
    // reference 1
    func();
    // reference 2
    func();
}

// definition
void func() {}

// declaration 2
void func();
