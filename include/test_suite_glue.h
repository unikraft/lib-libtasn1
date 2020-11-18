#ifndef __TEST_SUITE_GLUE__LIBTASN1_H__
#define __TEST_SUITE_GLUE__LIBTASN1_H__

int Test_tree_main(int argc, char *argv[]);
int coding_decoding2_main(int argc, char *argv[]);
int coding_long_oid_main(int argc, char *argv[]);
int copynode_main(int argc, char *argv[]);
int CVE_2018_1000654_main(int argc, char *argv[]);
int object_id_decoding_main(int argc, char *argv[]);
int object_id_encoding_main(int argc, char *argv[]);
int ocsp_basic_response_main(int argc, char *argv[]);
int octet_string_main(int argc, char *argv[]);
int reproducers_main(int argc, char *argv[]);
int setof_main(int argc, char *argv[]);
int spc_pe_image_data_main(int argc, char *argv[]);
int strict_der_main(int argc, char *argv[]);
int Test_choice_ocsp_main(int argc, char *argv[]);
int Test_encdec_main(int argc, char *argv[]);
int Test_encoding_main(int argc, char *argv[]);
int Test_errors_main(int argc, char *argv[]);
int Test_indefinite_main(int argc, char *argv[]);
int Test_overflow_main(int argc, char *argv[]);
int Test_parser_main(int argc, char *argv[]);
int Test_simple_main(int argc, char *argv[]);
int Test_strings_main(int argc, char *argv[]);

int libtasn1_test_main(int verbose);

#endif /* __TEST_SUITE_GLUE__LIBTASN1_H__ */