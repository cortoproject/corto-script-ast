/*
 * Extensions for C++.
 * This file contains generated code. Do not modify!
 */

#ifndef TEST__CPPAPI_H
#define TEST__CPPAPI_H

#include <corto/corto.h>
#include <include/_project.h>
#include <include/_type.h>


/* -- C++ namespaced typedefs and objects -- */
#ifdef __cplusplus
namespace test {
extern corto_test_Suite binary_o;
typedef ::test_binary binary;
extern corto_test_Suite cast_o;
typedef ::test_cast cast;
extern corto_test_Suite literal_o;
typedef ::test_literal literal;
extern corto_test_Suite object_o;
typedef ::test_object object;
extern corto_test_Suite postfix_o;
typedef ::test_postfix postfix;
extern corto_test_Suite ternary_o;
typedef ::test_ternary ternary;
extern corto_test_Suite unary_o;
typedef ::test_unary unary;
}
#endif

/* -- Helpers that enable compile-time type safety -- */
#ifdef __cplusplus
namespace test {
class binary_t {
public:
    typedef ::test_binary _ref;
    static corto_test_Suite _o;
};
class cast_t {
public:
    typedef ::test_cast _ref;
    static corto_test_Suite _o;
};
class literal_t {
public:
    typedef ::test_literal _ref;
    static corto_test_Suite _o;
};
class object_t {
public:
    typedef ::test_object _ref;
    static corto_test_Suite _o;
};
class postfix_t {
public:
    typedef ::test_postfix _ref;
    static corto_test_Suite _o;
};
class ternary_t {
public:
    typedef ::test_ternary _ref;
    static corto_test_Suite _o;
};
class unary_t {
public:
    typedef ::test_unary _ref;
    static corto_test_Suite _o;
};
}
#endif
#endif

