# variable

Details can be seen [here](http://www.cplusplus.com/doc/tutorial/variables/)

### identifiers 标识符
A valid identifier is a sequence of one or more letters, digits, or underscore characters (_). Spaces, punctuation marks, and symbols cannot be part of an identifier. In addition, identifiers shall always begin with a letter. They can also begin with an underline character (_), but such identifiers are -on most cases- considered reserved for compiler-specific keywords or external identifiers, as well as identifiers containing two successive underscore characters anywhere. In no case can they begin with a digit.

C++ uses a number of keywords to identify operations and data descriptions; therefore, identifiers created by a programmer cannot match these keywords. The standard reserved keywords that cannot be used for programmer created identifiers are:

```
alignas, alignof, and, and_eq, asm, auto, bitand, bitor, bool, break, case, catch, char, char16_t, char32_t, class, compl, const, constexpr, const_cast, continue, decltype, default, delete, do, double, dynamic_cast, else, enum, explicit, export, extern, false, float, for, friend, goto, if, inline, int, long, mutable, namespace, new, noexcept, not, not_eq, nullptr, operator, or, or_eq, private, protected, public, register, reinterpret_cast, return, short, signed, sizeof, static, static_assert, static_cast, struct, switch, template, this, thread_local, throw, true, try, typedef, typeid, typename, union, unsigned, using, virtual, void, volatile, wchar_t, while, xor, xor_eq
```
Specific compilers may also have additional specific reserved keywords.

**Very important**: The C++ language is a "case sensitive" language. That means that an identifier written in capital letters is not equivalent to another one with the same name but written in small letters. Thus, for example, the RESULT variable is not the same as the result variable or the Result variable. These are three different identifiers identifiying three different variables.


### Fundamental data types 基础数据类型


### plugin
Package Control Messages
========================

C++ & C Single File Builder - Minghang Yang
-------------------------------------------

  Note:
      In Windows, make sure you have installed G++/GCC (MinGW), and set the environment variable "PATH" correctly.
      It is recommended to install CodeBlocks(Version 16.01 or later).
      For example, if you installed MinGW in "C:\Program Files (x86)\CodeBlocks\MinGW",
      then you should add "C:\Program Files (x86)\CodeBlocks\MinGW\bin"(excluding quotation mark) to your "PATH".
      You may also need restart Sublime Text.
  
      In Linux, make sure you have installed gnome-terminal and g++/gcc (support for C++14 and C11).
  
      In Mac OS X, make sure you have run the command `xcode-select --install'.
  
  Usage:
      First time to use, press Ctrl + Shift + B (Windows and Linux) or 
      Command + Shift + B (Mac OS X), then please choose `Build and Run'.
      You can see your program run in terminal.
      Next time you just press Ctrl + B (Windows and Linux) or Command + B (Mac OS X).
  
  注释：
      在 Windows 环境下，确保已经安装了 G++/GCC (MinGW)，并且配置了正确的环境变量。
      建议安装CodeBlocks (16.01或以后版本)。
      比如，你把 MinGW 安装在 "C:\Program Files (x86)\CodeBlocks\MinGW"，
      那么，你可以在 "PATH" 中添加 "C:\Program Files (x86)\CodeBlocks\MinGW\bin"(不包含引号)。
      你可能还需要重启Sublime。
  
      在 Linux 环境下，确保你已经安装了 gnome-terminal 和 g++/gcc (支持C++14 和 C11)。
  
      在 Mac OS X 环境下，确保你已经运行过 `xcode-select --install'。
  
  使用方式：
      第一次使用，按 Ctrl + Shift + B (Windows 和 Linux) 或者 Command + B (Mac OS X)，
      然后选择 `Build and Run'。你可以看到程序在终端中运行。
      下一次再使用，只需按 Ctrl + B (Window 和 Linux) 或者 Command + B (Mac OS X)。
