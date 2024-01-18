//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// <string>

// Call back() on empty const container.

#if _LIBCUDACXX_DEBUG >= 1

#define _LIBCUDACXX_ASSERT(x, m) ((x) ? (void)0 : std::exit(0))

#include <string>
#include <cassert>
#include <iterator>
#include <exception>
#include <cstdlib>

#include "test_macros.h"
#include "min_allocator.h"

int main(int, char**)
{
    {
    typedef std::string S;
    const S s;
    assert(s.back() == 0);
    assert(false);
    }
    {
    typedef std::basic_string<char, std::char_traits<char>, min_allocator<char>> S;
    const S s;
    assert(s.back() == 0);
    assert(false);
    }
}

#else

int main(int, char**)
{

  return 0;
}

#endif
