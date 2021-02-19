/*
 * Copyright 2020 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ECCLESIA_LIB_STRINGS_STRIP_H_
#define ECCLESIA_LIB_STRINGS_STRIP_H_

#include "absl/strings/string_view.h"

namespace ecclesia {

// Trim the suffix white spaces from the string.
absl::string_view TrimSuffixWhiteSpaces(absl::string_view in_str);

// Trim the prefix white spaces from the string.
absl::string_view TrimPrefixWhiteSpaces(absl::string_view in_str);

// Trim the white spaces from both ends of the string.
inline absl::string_view TrimString(absl::string_view in_str) {
  return TrimSuffixWhiteSpaces(TrimPrefixWhiteSpaces(in_str));
}

}  // namespace ecclesia

#endif  // ECCLESIA_LIB_STRINGS_STRIP_H_
