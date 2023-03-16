// Copyright (c) 2015-2017 Bryce Adelstein Lelbach
// Copyright (c) 2017-2023 NVIDIA Corporation
//
// Distributed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception

#include <spaces/config.hpp>
#include <spaces/mdspan.hpp>
#include <spaces/storage_md_range.hpp>

void memset_2d_storage_range_based_for_loop(
  spaces::mdspan<double, spaces::dextents<2>, spaces::layout_left> A
  ) noexcept
{
  for (auto pos : spaces::storage_2d_range(A.extent(0), A.extent(1)))
    A(pos[0], pos[1]) = 0.0;
}

