
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/object.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Test_Constants) {

	ZEPHIR_REGISTER_CLASS_EX(Test, Constants, test, constants, test_constantsparent_ce, test_constants_method_entry, 0);

	zend_declare_property_null(test_constants_ce, SL("propertyC1"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_bool(test_constants_ce, SL("propertyC2"), 0, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_bool(test_constants_ce, SL("propertyC3"), 1, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_long(test_constants_ce, SL("propertyC4"), 10, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_double(test_constants_ce, SL("propertyC5"), 10.25, ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_string(test_constants_ce, SL("propertyC6"), "test", ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(test_constants_ce, SL("propertyC7"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zend_declare_property_null(test_constants_ce, SL("propertyC8"), ZEND_ACC_PROTECTED TSRMLS_CC);

	zephir_declare_class_constant_null(test_constants_ce, SL("C1"));

	zephir_declare_class_constant_bool(test_constants_ce, SL("C2"), 0);

	zephir_declare_class_constant_bool(test_constants_ce, SL("C3"), 1);

	zephir_declare_class_constant_long(test_constants_ce, SL("C4"), 10);

	zephir_declare_class_constant_double(test_constants_ce, SL("C5"), 10.25);

	zephir_declare_class_constant_double(test_constants_ce, SL("C5_SELF"), 10.25);

	zephir_declare_class_constant_double(test_constants_ce, SL("C5_BY_NAME"), 10.25);

	zephir_declare_class_constant_string(test_constants_ce, SL("C6"), "test");

	zephir_declare_class_constant_string(test_constants_ce, SL("className"), "Test\\Constants");

	zephir_declare_class_constant_long(test_constants_ce, SL("STD_PROP_LIST"), 1);

	/**
	 * Test property addSlashes for constants
	 */
	zephir_declare_class_constant_string(test_constants_ce, SL("ANNOTATION_REGEX"), "/@(\\w+)(?:\\s*(?:\\(\\s*)?(.*?)(?:\\s*\\))?)??\\s*(?:\n|\\*\\/)/");

	zephir_declare_class_constant_string(test_constants_ce, SL("PARAMETER_REGEX"), "/(\\w+)\\s*=\\s*(\\[[^\\]]*\\]|\"[^\"]*\"|[^,)]*)\\s*(?:,|$)/");

	return SUCCESS;

}

PHP_METHOD(Test_Constants, getPropertyC1) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_MEMBER(this_ptr, "propertyC1");

}

PHP_METHOD(Test_Constants, getPropertyC2) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_MEMBER(this_ptr, "propertyC2");

}

PHP_METHOD(Test_Constants, getPropertyC3) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_MEMBER(this_ptr, "propertyC3");

}

PHP_METHOD(Test_Constants, getPropertyC4) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_MEMBER(this_ptr, "propertyC4");

}

PHP_METHOD(Test_Constants, getPropertyC5) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_MEMBER(this_ptr, "propertyC5");

}

PHP_METHOD(Test_Constants, getPropertyC6) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_MEMBER(this_ptr, "propertyC6");

}

PHP_METHOD(Test_Constants, getPropertyC7) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_MEMBER(this_ptr, "propertyC7");

}

PHP_METHOD(Test_Constants, getPropertyC8) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_MEMBER(this_ptr, "propertyC8");

}

PHP_METHOD(Test_Constants, testReadConstant) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_LONG(3);

}

PHP_METHOD(Test_Constants, testReadClassConstant1) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_LONG(10);

}

PHP_METHOD(Test_Constants, testReadClassConstant2) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_LONG(10);

}

PHP_METHOD(Test_Constants, testReadClassConstant3) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_LONG(10);

}

PHP_METHOD(Test_Constants, testPHPVersionEnvConstant) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	ZEPHIR_GET_CONSTANT(return_value, "PHP_VERSION");
	return;

}

PHP_METHOD(Test_Constants, testClassMagicConstant) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_STRING("Test\\Constants");

}

PHP_METHOD(Test_Constants, testMethodMagicConstant) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_STRING("Constants:testMethodMagicConstant");

}

PHP_METHOD(Test_Constants, testFunctionMagicConstant) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_STRING("testFunctionMagicConstant");

}

PHP_METHOD(Test_Constants, testNamespaceMagicConstant) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_STRING("Test");

}

PHP_METHOD(Test_Constants, testDirConstant) {

		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	

	RETURN_NULL();

}

PHP_METHOD(Test_Constants, testPHPVersionEnvConstantInExpValue) {

	zval a;
		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	
	ZVAL_UNDEF(&a);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&a);
	ZEPHIR_GET_CONSTANT(&a, "PHP_VERSION");
	RETURN_CCTOR(a);

}

