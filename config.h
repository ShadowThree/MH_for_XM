#define PIC_COUNT   4          // 输入照片的数量
#define PIC_SUFFIX  "jpeg"     // 输入照片的后缀名

// 根据想要的内容输入数据
//                               " 1 "," 2 "," 3 "," 4 "," 5 "," 6 "," 7 "," 8 "," 9 "," 10","11 ","12 ","13 ","14 ","15 ","16 ","17 ","18 ","19 ","20 "
static char pic[][4] = {/* 01 */         "2",  "3",  "4",  "5",  "6",              "9", "10", "11", "12", "13",             "16", "17", "18", "19",
                        /* 02 */        "22",                                                             "33",             "36",             "39",
                        /* 03 */        "42",                                                             "53",             "56",             "59",
                        /* 04 */        "62", "63", "64", "65", "66",             "69", "70", "71", "72", "73",             "76",             "79",
                        /* 05 */                                "86",             "89",                                     "96",             "99",
                        /* 06 */                               "106",            "109",                                    "116",            "119",
                        /* 07 */       "122","123","124","125","126",            "129","130","131","132","133",            "136","137","138","139",
                        /* 08 */
                        /* 09 */
                        /* 10 */       "162",            "165","166","167","168","169",            "172",            "175",            "178",
                        /* 11 */       "182",                                    "189",            "192",            "195",            "198",
                        /* 12 */       "202",                                    "209",            "212",            "215",            "218",
                        /* 13 */       "222",            "225","226","227","228","229",            "232",            "235","236","237","238","239",
                        /* 14 */       "242",                                    "249",            "252",                              "258",
                        /* 15 */       "262",                                    "269",            "272",                              "278",
                        /* 16 */       "282",            "285","286","287","288","289",            "292",                              "298",
                        /* 17 */
                        /* 18 */                               "326","327","328",                              "334","335","336",
                        /* 19 */                         "345",                                          "353",
                        /* 20 */                         "365",                                          "373",
                        /* 21 */                               "386","387","388",                              "394","395","396"                                  };

