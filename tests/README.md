# 🧪 Tests Directory

## 📝 Description

This directory contains test files for our custom printf implementation. These tests are designed to verify the functionality and reliability of our `_printf` function.

## 🗂️ Files

- **main.c**: Main test file containing various test cases to compare our `_printf` function with the standard `printf` function.

## 🎯 Test Coverage

Our tests verify:
- Basic string printing
- Character printing
- Integer conversion
- Decimal number handling
- Percentage sign printing
- String format specifiers
- Error cases and edge conditions

## 🚀 Running Tests

To run the tests:

1. Navigate to the root directory
2. Compile with:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c tests/main.c -o printf_test
```
3. Execute:
```bash
./printf_test
```

## ✅ Expected Results

All test cases should produce identical output when comparing `_printf` with the standard `printf` function.
