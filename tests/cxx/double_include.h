//===--- double_include.h - test input file for iwyu ----------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "tests/cxx/indirect.h"

typedef IndirectClass DirectClass;

/**** IWYU_SUMMARY

(tests/cxx/double_include.h has correct #includes/fwd-decls)

***** IWYU_SUMMARY */
