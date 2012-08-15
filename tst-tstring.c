/*
 * =============================================================================
 *
 *       Filename:  tst-tstring.c
 *
 *    Description:  tstring test.
 *
 *        Version:  0.0.1
 *        Created:  01/29/2012 11:20:32 AM
 *       Revision:  r1
 *       Compiler:  gcc (Ubuntu/Linaro 4.4.4-14ubuntu5) 4.4.5
 *
 *         Author:  Fu Haiping (forhappy), haipingf@gmail.com
 *        Company:  ICT ( Institute Of Computing Technology, CAS )
 *
 * =============================================================================
 */
#include "tstring.h"

int main(int argc, const char *argv[])
{
    tstring_t *tstr1 = NULL;
    tstring_t *tstr2 = NULL;

    tstr1 = tstring_new("hello world");
    tstr2 = tstring_new("");

    printf("%s\n", tstr1->str);
    tstr1 = tstring_assign(tstr1, "hello world tstr1 after reassignment.");
    printf("%s\n", tstr1->str);

    tstr2 = tstring_assign(tstr2, "hello world tstr2.");
    printf("%s\n", tstr2->str);

    tstring_t *tstr3 = NULL;
    tstr3 = tstring_new_len("hello world\0hello world", 23);

    printf("%s\n", tstr3->str);

  
    tstring_t *tstr4 = tstring_new("hello world");
 
    printf("%d\n", tstring_equal(tstr1, tstr4));
    tstring_prepend(tstr4, "hi但是");
    tstring_insert(tstr4, 1, "willlllllllllllllll");
    tstring_insert_unichar(tstr4, 12, "嗨");
    printf("%s\n", tstr4->str);
    tstring_free(tstr1);
    tstring_free(tstr2);
    tstring_free(tstr3);
}
