/*
 * @file test_parser.h
 *
 * @author Jasque Saydyk
 *
 * @brief Unit tests for the parser.c
 */
#ifndef TEST_PARSER_H
#define TEST_PARSER_H

// Function Prototypes
void test_isDigit_Success1(void);
void test_isDigit_Fail1(void);
void test_isDigit_Fail2(void);
void test_isValid_Success1(void);
void test_isValid_Success2(void);
void test_isValid_Fail1(void);
void test_isValid_Fail2(void);
void test_isValid_Fail3(void);
void test_strLength_Success1(void);
void test_strLength_Success2(void);
void test_strLength_Success3(void);
void test_removeLeadingZeros_Success1(void);
void test_removeLeadingZeros_Fail1(void);
void test_removeLeadingZeros_Fail2(void);
void test_removeTrailingZeros_Success1(void);
void test_removeTrailingZeros_Fail1(void);
void test_removeTrailingZeros_Fail2(void);

#endif  // TEST_PARSER_H
