#include <stdio.h>
#include <stdlib.h>
#include <uk/config.h>
#include <uk/essentials.h>

#include <test_suite_glue.h>

int libtasn1_test_main(int verbose) {

    int argc = 1;
    char **argv = NULL;
    if(verbose)
        argc++;
    
    int testCounter = 0;
    int errorCounter = 0;
    int rc;

#if CONFIG_ALL_TEST_CASES || CONFIG_TEST_TREE
    testCounter++;
    printf("Running Test_tree ....................\n");
    rc = Test_tree_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_CODING_DECODING2
    testCounter++;
    printf("Running coding-decoding2 .............\n");
    rc = coding_decoding2_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_CODING_LONG_OID
    testCounter++;
    printf("Running coding-long-oid .............\n");
    rc = coding_long_oid_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_COPYNODE
    testCounter++;
    printf("Running copynode ....................\n");
    rc = copynode_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_CVE_2018_1000654
    testCounter++;
    printf("Running CVE_2018_1000654 ............\n");
    rc = CVE_2018_1000654_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_OBJECT_ID_DECODING
    testCounter++;
    printf("Running object-id-decoding ..........\n");
    rc = object_id_decoding_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_OBJECT_ID_ENCODING
    testCounter++;
    printf("Running object-id-encoding ..........\n");
    rc = object_id_encoding_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_OCSP_BASIC_RESPONSE
    testCounter++;
    printf("Running ocsp-basic-response .........\n");
    rc = ocsp_basic_response_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_OCTET_STRING
    testCounter++;
    printf("Running octet-string ................\n");
    rc = octet_string_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_REPRODUCERS
    testCounter++;
    printf("Running reproducers .................\n");
    rc = reproducers_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_SETOF
    testCounter++;
    printf("Running setof .......................\n");
    rc = setof_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_SPC_PE_IMAGE_DATA
    testCounter++;
    printf("Running spc_pe_image_data ...........\n");
    rc = spc_pe_image_data_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_STRICT_DER
    testCounter++;
    printf("Running strict-der ..................\n");
    rc = strict_der_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_TEST_CHOICE_OCSP
    testCounter++;
    printf("Running Test_choice_ocsp .............\n");
    rc = Test_choice_ocsp_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_TEST_ENCDEC
    testCounter++;
    printf("Running Test_encdec .................\n");
    rc = Test_encdec_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_TEST_ENCODING
    testCounter++;
    printf("Running Test_encoding ...............\n");
    rc = Test_encoding_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_TEST_ERRORS
    testCounter++;
    printf("Running Test_errors .................\n");
    rc = Test_errors_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_TEST_INDEFINITE
    testCounter++;
    printf("Running Test_indefinite .............\n");
    rc = Test_indefinite_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_TEST_OVERFLOW
    testCounter++;
    printf("Running Test_overflow ...............\n");
    rc = Test_overflow_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_TEST_PARSER
    testCounter++;
    printf("Running Test_parser .................\n");
    rc = Test_parser_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_TEST_SIMPLE
    testCounter++;
    printf("Running Test_simple .................\n");
    rc = Test_simple_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

#if CONFIG_ALL_TEST_CASES || CONFIG_TEST_STRINGS
    testCounter++;
    printf("Running Test_strings ................\n");
    rc = Test_strings_main(argc, argv);
    if(rc == 0)
        printf("PASS\n");
    else {
        printf("FAIL\n");
        errorCounter++;
    }
#endif

    printf ("Total tests : %d\n", testCounter);
    printf ("Total errors: %d\n", errorCounter);

return errorCounter;
}
