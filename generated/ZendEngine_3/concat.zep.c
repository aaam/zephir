
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
#include "kernel/operators.h"
#include "kernel/concat.h"


ZEPHIR_INIT_CLASS(Test_Concat) {

	ZEPHIR_REGISTER_CLASS(Test, Concat, test, concat, test_concat_method_entry, 0);

	zend_declare_property_null(test_concat_ce, SL("testProperty"), ZEND_ACC_PROTECTED|ZEND_ACC_STATIC TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(Test_Concat, getTestProperty) {

	zval _0;
		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	
	ZVAL_UNDEF(&_0);


	zephir_read_static_property_ce(&_0, test_concat_ce, SL("testProperty"), PH_NOISY_CC | PH_READONLY);
	RETURN_CTORW(_0);

}

PHP_METHOD(Test_Concat, testConcatBySelfProperty) {

	zval *title_param = NULL, _0;
	zval title;
		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &title_param);

	zephir_get_strval(&title, title_param);


	ZEPHIR_INIT_ZVAL_NREF(_0);
	ZEPHIR_OBS_VAR(&_0);
	zephir_read_static_property_ce(&_0, test_concat_ce, SL("testProperty"), PH_NOISY_CC);
	zephir_concat_function(&title, &_0, &title);
	zephir_update_static_property_ce(test_concat_ce, SL("testProperty"), &title);
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(Test_Concat, testConcat1) {

	zval url, _0;
		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	
	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&url);
	ZVAL_STRING(&url, "test");
	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CONCAT_SV(&_0, "append", &url);
	ZEPHIR_CPY_WRT(&url, &_0);
	RETURN_CCTOR(url);

}

PHP_METHOD(Test_Concat, testConcat2) {

	zval _1;
	zval url, _0;
		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	
	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&url);
	ZVAL_STRING(&url, "test");
	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CONCAT_SVS(&_0, "append", &url, "other");
	ZEPHIR_CPY_WRT(&url, &_0);
	ZEPHIR_INIT_VAR(&_1);
	ZEPHIR_CONCAT_SS(&_1, "append", "other");
	ZEPHIR_CPY_WRT(&url, &_1);
	ZEPHIR_INIT_LNVAR(_0);
	ZEPHIR_CONCAT_SSV(&_0, "append", "other", &url);
	ZEPHIR_CPY_WRT(&url, &_0);
	RETURN_CCTOR(url);

}

PHP_METHOD(Test_Concat, testConcatSelf1) {

	zval _1;
	zval url, _0, _2;
		zval this_zv;
	zval *this_ptr = getThis();
	if (EXPECTED(this_ptr)) {
		ZVAL_OBJ(&this_zv, Z_OBJ_P(this_ptr));
		this_ptr = &this_zv;
	} else this_ptr = NULL;
	
	ZVAL_UNDEF(&url);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&url);
	ZVAL_STRING(&url, "");
	zephir_concat_self_str(&url, SL("test") TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_CONCAT_SVS(&_0, "append", &url, "other");
	zephir_concat_self(&url, &_0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_1);
	ZEPHIR_CONCAT_SS(&_1, "append", "other");
	zephir_concat_self(&url, &_1 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_2);
	ZEPHIR_CONCAT_SSV(&_2, "append", "other", &url);
	zephir_concat_self(&url, &_2 TSRMLS_CC);
	RETURN_CCTOR(url);

}

