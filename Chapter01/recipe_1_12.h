#pragma once

namespace recipe_1_12 {
namespace modernlib {
#ifndef LIB_VERSION_2
inline namespace version_1 {
template <typename T>
int test(T value) {
    return 1;
}
} // namespace version_1
#endif

#ifdef LIB_VERSION_2
inline namespace version_2 {
template <typename T>
int test(T value) {
    return 2;
}
} // namespace version_2
#endif
} // namespace modernlib

namespace client {
struct foo {
    int a;
};

} // namespace client
namespace modernlib {
template <>
int test(client::foo value) {
    return value.a;
}
} // namespace modernlib

namespace client {
void execute() {
    auto y = modernlib::test(foo{42});
}
} // namespace client
} // namespace recipe_1_12