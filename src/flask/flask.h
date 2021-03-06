/* This file is automatically generated.  Do not edit. */
#ifndef _OSKIT_FLASK_H_
#define _OSKIT_FLASK_H_

#include <oskit/flask/flask_types.h>

/*
 * Security object class definitions
 */
#define OSKIT_SECCLASS_SECURITY                                1
#define OSKIT_SECCLASS_PROCESS                                 2
#define OSKIT_SECCLASS_SYSTEM                                  3
#define OSKIT_SECCLASS_FILESYSTEM                              4
#define OSKIT_SECCLASS_FILE                                    5
#define OSKIT_SECCLASS_DIR                                     6
#define OSKIT_SECCLASS_FD                                      7
#define OSKIT_SECCLASS_LNK_FILE                                8
#define OSKIT_SECCLASS_CHR_FILE                                9
#define OSKIT_SECCLASS_BLK_FILE                                10
#define OSKIT_SECCLASS_SOCK_FILE                               11
#define OSKIT_SECCLASS_FIFO_FILE                               12
#define OSKIT_SECCLASS_PIPE                                    13
#define OSKIT_SECCLASS_SOCKET                                  14
#define OSKIT_SECCLASS_TCP_SOCKET                              15
#define OSKIT_SECCLASS_UDP_SOCKET                              16
#define OSKIT_SECCLASS_RAWIP_SOCKET                            17
#define OSKIT_SECCLASS_NODE                                    18
#define OSKIT_SECCLASS_NETIF                                   19
#define OSKIT_SECCLASS_NETLINK_SOCKET                          20
#define OSKIT_SECCLASS_PACKET_SOCKET                           21
#define OSKIT_SECCLASS_UNIX_STREAM_SOCKET                      22
#define OSKIT_SECCLASS_UNIX_DGRAM_SOCKET                       23
#define OSKIT_SECCLASS_SUBJECT                                 24
#define OSKIT_SECCLASS_AVC                                     25
#define OSKIT_SECCLASS_MEMORY                                  26

/*
 * Security identifier indices for initial entities
 */
#define OSKIT_SECINITSID_KERNEL                               1
#define OSKIT_SECINITSID_SECURITY                             2
#define OSKIT_SECINITSID_UNLABELED                            3
#define OSKIT_SECINITSID_FS                                   4
#define OSKIT_SECINITSID_FILE                                 5
#define OSKIT_SECINITSID_FILE_LABELS                          6
#define OSKIT_SECINITSID_INIT                                 7
#define OSKIT_SECINITSID_PROC                                 8
#define OSKIT_SECINITSID_ANY_SOCKET                           9
#define OSKIT_SECINITSID_PORT                                 10
#define OSKIT_SECINITSID_NETIF                                11
#define OSKIT_SECINITSID_NETMSG                               12
#define OSKIT_SECINITSID_NODE                                 13
#define OSKIT_SECINITSID_ICMP_SOCKET                          14
#define OSKIT_SECINITSID_TCP_SOCKET                           15

#define OSKIT_SECINITSID_NUM                                  15

#endif
