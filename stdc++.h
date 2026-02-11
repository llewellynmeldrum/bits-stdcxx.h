/*
Created by Llewellyn Meldrum 2026-02-11
Includes all headers as defined by https://en.cppreference.com/w/cpp/headers.html
*/
/*----------CORE LIBS----------*/
// (all versions)
#include <cstdlib>
#include <cfloat>
#include <climits>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <exception>
#include <limits>
#include <new>
#include <typeinfo>
#include <cassert>
#include <cerrno>
#include <stdexcept>
#include <memory>
#include <bitset>
#include <functional>
#include <utility>
#include <deque>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>
#include <cstring>
#include <string>
#include <cctype>
#include <clocale>
#include <cwchar>
#include <cwctype>
#include <locale>
#include <cmath>
#include <complex>
#include <valarray>
#include <ctime>
#include <cstdio>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <ostream>
#include <sstream>
#include <streambuf>
/*----------C++11----------*/
#if __cplusplus >= 201103L
	#include <cstdint>
	#include <initializer_list>
	#include <typeindex>
	#include <system_error>
	#include <scoped_allocator>
	#include <ratio>
	#include <type_traits>
	#include <tuple>
	#include <array>
	#include <forward_list>
	#include <unordered_map>
	#include <unordered_set>
	#include <codecvt>
	#include <cuchar>
	#include <regex>
	#include <cfenv>
	#include <random>
	#include <chrono>
	#include <cinttypes>
	#include <atomic>
	#include <condition_variable>
	#include <future>
	#include <mutex>
	#include <thread>
#endif
/*----------C++14----------*/
#if __cplusplus >= 201402L
	#include <shared_mutex>
#endif
/*----------C++17----------*/
#if __cplusplus >= 201703L
	#include <execution>
	#include <memory_resource>
	#include <any>
	#include <optional>
	#include <variant>
	#include <string_view>
	#include <charconv>
	#include <filesystem>
#endif
/*----------C++20----------*/
#if __cplusplus >= 202002L
	#include <compare>
	#include <coroutine>
	#include <source_location>
	#include <version>
	#include <concepts>
	#include <bit>
	#include <span>
	#include <ranges>
	#include <format>
	#include <numbers>
	//	#include <syncstream>
	#include <barrier>
	#include <latch>
	#include <semaphore>
	#include <stop_token>
#endif
/*----------C++23----------*/
#if __cplusplus >= 202302L
	//	#include <stdfloat>
	//	#include <stacktrace>
	#include <expected>
	//	#include <flat_map>
	//	#include <flat_set>
	#include <mdspan>
	//	#include <generator>
	#include <print>
	//	#include <spanstream>
#endif

/*----------C++26----------*/
#if __cplusplus > 202302L // no official __cplusplus value yet
	#include <contracts>
	#include <debugging>
	#include <hive>
	#include <inplace_vector>
	#include <text_encoding>
	#include <linalg>
	#include <simd>
	#include <hazard_pointer>
	#include <rcu>
#endif
