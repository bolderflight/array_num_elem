/*
* Brian R Taylor
* brian.taylor@bolderflight.com
* 
* Copyright (c) 2021 Bolder Flight Systems Inc
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the “Software”), to
* deal in the Software without restriction, including without limitation the
* rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
* sell copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
* IN THE SOFTWARE.
*/

#include "array_num_elem.h"
#include "gtest/gtest.h"

TEST(ArrayNumElem, int8) {
  int8_t arr[42];
  EXPECT_EQ(42, bfs::ArrayNumElem(arr));
}

TEST(ArrayNumElem, uint8) {
  uint8_t arr[43];
  EXPECT_EQ(43, bfs::ArrayNumElem(arr));
}

TEST(ArrayNumElem, int16) {
  int16_t arr[44];
  EXPECT_EQ(44, bfs::ArrayNumElem(arr));
}

TEST(ArrayNumElem, uint16) {
  uint16_t arr[45];
  EXPECT_EQ(45, bfs::ArrayNumElem(arr));
}

TEST(ArrayNumElem, int32) {
  int32_t arr[46];
  EXPECT_EQ(46, bfs::ArrayNumElem(arr));
}

TEST(ArrayNumElem, uint32) {
  uint32_t arr[47];
  EXPECT_EQ(47, bfs::ArrayNumElem(arr));
}

TEST(ArrayNumElem, int64) {
  int64_t arr[48];
  EXPECT_EQ(48, bfs::ArrayNumElem(arr));
}

TEST(ArrayNumElem, uint64) {
  uint64_t arr[49];
  EXPECT_EQ(49, bfs::ArrayNumElem(arr));
}

TEST(ArrayNumElem, float) {
  float arr[50];
  EXPECT_EQ(50, bfs::ArrayNumElem(arr));
}

TEST(ArrayNumElem, double) {
  double arr[51];
  EXPECT_EQ(51, bfs::ArrayNumElem(arr));
}

TEST(ArrayNumElem, long) {
  long double arr[52];
  EXPECT_EQ(52, bfs::ArrayNumElem(arr));
}

