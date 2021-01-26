#ifndef OS_NETINET_TCP
#define OS_NETINET_TCP

#include "../os.h"

#include "lwip/prot/tcp.h"


#define tcphdr tcp_hdr
#  define SRC_PORT    src
#  define DST_PORT    dest
#  define SEQ_NUM     seqno
#  define ACK_NUM     ackno
#  define DATA_OFFSET _hdrlen_rsvd_flags
#  define WINDOW_SIZE wnd
#  define CHECKSUM    chksum
#  define URGENT_PTR  urgp


#ifdef LINUX
#  include <netinet/tcp.h>
#  define SRC_PORT    source
#  define DST_PORT    dest
#  define SEQ_NUM     seq
#  define ACK_NUM     ack_seq
#  define DATA_OFFSET doff
#  define WINDOW_SIZE window
#  define CHECKSUM    check
#  define URGENT_PTR  urg_ptr
#endif

#ifdef FREEBSD
#  include <netinet/tcp.h>
#  define SRC_PORT    th_sport
#  define DST_PORT    th_dport
#  define SEQ_NUM     th_seq
#  define ACK_NUM     th_ack
#  define DATA_OFFSET th_off
#  define WINDOW_SIZE th_win
#  define CHECKSUM    th_sum
#  define URGENT_PTR  th_urp
#endif

#endif // OS_NETINET_TCP
