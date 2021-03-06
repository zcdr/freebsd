//===--- ToolExecutorPluginRegistry.h - -------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_TOOLING_TOOLEXECUTORPLUGINREGISTRY_H
#define LLVM_CLANG_TOOLING_TOOLEXECUTORPLUGINREGISTRY_H

#include "clang/Tooling/Execution.h"
#include "llvm/Support/Registry.h"

namespace clang {
namespace tooling {

typedef llvm::Registry<ToolExecutorPlugin> ToolExecutorPluginRegistry;

} // end namespace tooling
} // end namespace clang

#endif // LLVM_CLANG_TOOLING_TOOLEXECUTORPLUGINREGISTRY_H
