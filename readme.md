# bits/stdc++.h for non gcc
Intended to be used for competitive programming or the like, with clang++. Not suitable for production or project code.
It includes every header file included  in your version of c++ as well as any previous (its literally just a bunch of `#if __cplusplus >= ... #include`).

As of 2026-02-11, my version of clang++ (clang-1500.3.9.4), is missing one c++20 header (`<syncstream>`), and most of the c++23/c++26 headers. These have been commented out, but feel free to include them if your compiler supports it.

# Usage
Clone, and place `stdc++.h` in an include directory compiler has been configured to search. Easiest on MacOS is `/usr/local/include/`. Personally, I created a `/usr/local/include//bits/` dir so it feels like the gcc version.

## nvim LSP note
For nvim users (especially those like me who suck at configs):
- If you use `clangd`, and its failing to see the file; (`file bits/stdc++.h not found`), put the following snippet in this directory:
```yaml
# file: ~/Library/Preferences/clangd/config.yaml

If:
  PathMatch: ['.*\.(cpp|hpp|cc|cxx|hh|hxx)$']
CompileFlags:
  Compiler: clang++
  Add: [-I/usr/local/include/]
```
As far as I understand, this directory is enabled by default in most MacOS installations of `clang` itself, but not necessarily `clangd`. So it will compile, but your LSP cannot see it.


# Why
bits/stdc++.h is a GCC extension, which includes all the headers as part of the c++ standard library. I use clang++. The online versions of `bits/stdc++.h` I was able to find were all for c++17 at the latest, so I threw this together for my convinience in the future.

# References
[cppreference.com/c++/Standard Library Headers](https://en.cppreference.com/w/cpp/headers.html)
