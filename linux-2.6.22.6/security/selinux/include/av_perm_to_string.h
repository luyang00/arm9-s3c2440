/* This file is automatically generated.  Do not edit. */
   S_(SECCLASS_FILESYSTEM, FILESYSTEM__MOUNT, "mount")
   S_(SECCLASS_FILESYSTEM, FILESYSTEM__REMOUNT, "remount")
   S_(SECCLASS_FILESYSTEM, FILESYSTEM__UNMOUNT, "unmount")
   S_(SECCLASS_FILESYSTEM, FILESYSTEM__GETATTR, "getattr")
   S_(SECCLASS_FILESYSTEM, FILESYSTEM__RELABELFROM, "relabelfrom")
   S_(SECCLASS_FILESYSTEM, FILESYSTEM__RELABELTO, "relabelto")
   S_(SECCLASS_FILESYSTEM, FILESYSTEM__TRANSITION, "transition")
   S_(SECCLASS_FILESYSTEM, FILESYSTEM__ASSOCIATE, "associate")
   S_(SECCLASS_FILESYSTEM, FILESYSTEM__QUOTAMOD, "quotamod")
   S_(SECCLASS_FILESYSTEM, FILESYSTEM__QUOTAGET, "quotaget")
   S_(SECCLASS_DIR, DIR__ADD_NAME, "add_name")
   S_(SECCLASS_DIR, DIR__REMOVE_NAME, "remove_name")
   S_(SECCLASS_DIR, DIR__REPARENT, "reparent")
   S_(SECCLASS_DIR, DIR__SEARCH, "search")
   S_(SECCLASS_DIR, DIR__RMDIR, "rmdir")
   S_(SECCLASS_FILE, FILE__EXECUTE_NO_TRANS, "execute_no_trans")
   S_(SECCLASS_FILE, FILE__ENTRYPOINT, "entrypoint")
   S_(SECCLASS_FILE, FILE__EXECMOD, "execmod")
   S_(SECCLASS_CHR_FILE, CHR_FILE__EXECUTE_NO_TRANS, "execute_no_trans")
   S_(SECCLASS_CHR_FILE, CHR_FILE__ENTRYPOINT, "entrypoint")
   S_(SECCLASS_CHR_FILE, CHR_FILE__EXECMOD, "execmod")
   S_(SECCLASS_FD, FD__USE, "use")
   S_(SECCLASS_TCP_SOCKET, TCP_SOCKET__CONNECTTO, "connectto")
   S_(SECCLASS_TCP_SOCKET, TCP_SOCKET__NEWCONN, "newconn")
   S_(SECCLASS_TCP_SOCKET, TCP_SOCKET__ACCEPTFROM, "acceptfrom")
   S_(SECCLASS_TCP_SOCKET, TCP_SOCKET__NODE_BIND, "node_bind")
   S_(SECCLASS_TCP_SOCKET, TCP_SOCKET__NAME_CONNECT, "name_connect")
   S_(SECCLASS_UDP_SOCKET, UDP_SOCKET__NODE_BIND, "node_bind")
   S_(SECCLASS_RAWIP_SOCKET, RAWIP_SOCKET__NODE_BIND, "node_bind")
   S_(SECCLASS_NODE, NODE__TCP_RECV, "tcp_recv")
   S_(SECCLASS_NODE, NODE__TCP_SEND, "tcp_send")
   S_(SECCLASS_NODE, NODE__UDP_RECV, "udp_recv")
   S_(SECCLASS_NODE, NODE__UDP_SEND, "udp_send")
   S_(SECCLASS_NODE, NODE__RAWIP_RECV, "rawip_recv")
   S_(SECCLASS_NODE, NODE__RAWIP_SEND, "rawip_send")
   S_(SECCLASS_NODE, NODE__ENFORCE_DEST, "enforce_dest")
   S_(SECCLASS_NODE, NODE__DCCP_RECV, "dccp_recv")
   S_(SECCLASS_NODE, NODE__DCCP_SEND, "dccp_send")
   S_(SECCLASS_NETIF, NETIF__TCP_RECV, "tcp_recv")
   S_(SECCLASS_NETIF, NETIF__TCP_SEND, "tcp_send")
   S_(SECCLASS_NETIF, NETIF__UDP_RECV, "udp_recv")
   S_(SECCLASS_NETIF, NETIF__UDP_SEND, "udp_send")
   S_(SECCLASS_NETIF, NETIF__RAWIP_RECV, "rawip_recv")
   S_(SECCLASS_NETIF, NETIF__RAWIP_SEND, "rawip_send")
   S_(SECCLASS_NETIF, NETIF__DCCP_RECV, "dccp_recv")
   S_(SECCLASS_NETIF, NETIF__DCCP_SEND, "dccp_send")
   S_(SECCLASS_UNIX_STREAM_SOCKET, UNIX_STREAM_SOCKET__CONNECTTO, "connectto")
   S_(SECCLASS_UNIX_STREAM_SOCKET, UNIX_STREAM_SOCKET__NEWCONN, "newconn")
   S_(SECCLASS_UNIX_STREAM_SOCKET, UNIX_STREAM_SOCKET__ACCEPTFROM, "acceptfrom")
   S_(SECCLASS_PROCESS, PROCESS__FORK, "fork")
   S_(SECCLASS_PROCESS, PROCESS__TRANSITION, "transition")
   S_(SECCLASS_PROCESS, PROCESS__SIGCHLD, "sigchld")
   S_(SECCLASS_PROCESS, PROCESS__SIGKILL, "sigkill")
   S_(SECCLASS_PROCESS, PROCESS__SIGSTOP, "sigstop")
   S_(SECCLASS_PROCESS, PROCESS__SIGNULL, "signull")
   S_(SECCLASS_PROCESS, PROCESS__SIGNAL, "signal")
   S_(SECCLASS_PROCESS, PROCESS__PTRACE, "ptrace")
   S_(SECCLASS_PROCESS, PROCESS__GETSCHED, "getsched")
   S_(SECCLASS_PROCESS, PROCESS__SETSCHED, "setsched")
   S_(SECCLASS_PROCESS, PROCESS__GETSESSION, "getsession")
   S_(SECCLASS_PROCESS, PROCESS__GETPGID, "getpgid")
   S_(SECCLASS_PROCESS, PROCESS__SETPGID, "setpgid")
   S_(SECCLASS_PROCESS, PROCESS__GETCAP, "getcap")
   S_(SECCLASS_PROCESS, PROCESS__SETCAP, "setcap")
   S_(SECCLASS_PROCESS, PROCESS__SHARE, "share")
   S_(SECCLASS_PROCESS, PROCESS__GETATTR, "getattr")
   S_(SECCLASS_PROCESS, PROCESS__SETEXEC, "setexec")
   S_(SECCLASS_PROCESS, PROCESS__SETFSCREATE, "setfscreate")
   S_(SECCLASS_PROCESS, PROCESS__NOATSECURE, "noatsecure")
   S_(SECCLASS_PROCESS, PROCESS__SIGINH, "siginh")
   S_(SECCLASS_PROCESS, PROCESS__SETRLIMIT, "setrlimit")
   S_(SECCLASS_PROCESS, PROCESS__RLIMITINH, "rlimitinh")
   S_(SECCLASS_PROCESS, PROCESS__DYNTRANSITION, "dyntransition")
   S_(SECCLASS_PROCESS, PROCESS__SETCURRENT, "setcurrent")
   S_(SECCLASS_PROCESS, PROCESS__EXECMEM, "execmem")
   S_(SECCLASS_PROCESS, PROCESS__EXECSTACK, "execstack")
   S_(SECCLASS_PROCESS, PROCESS__EXECHEAP, "execheap")
   S_(SECCLASS_PROCESS, PROCESS__SETKEYCREATE, "setkeycreate")
   S_(SECCLASS_PROCESS, PROCESS__SETSOCKCREATE, "setsockcreate")
   S_(SECCLASS_MSGQ, MSGQ__ENQUEUE, "enqueue")
   S_(SECCLASS_MSG, MSG__SEND, "send")
   S_(SECCLASS_MSG, MSG__RECEIVE, "receive")
   S_(SECCLASS_SHM, SHM__LOCK, "lock")
   S_(SECCLASS_SECURITY, SECURITY__COMPUTE_AV, "compute_av")
   S_(SECCLASS_SECURITY, SECURITY__COMPUTE_CREATE, "compute_create")
   S_(SECCLASS_SECURITY, SECURITY__COMPUTE_MEMBER, "compute_member")
   S_(SECCLASS_SECURITY, SECURITY__CHECK_CONTEXT, "check_context")
   S_(SECCLASS_SECURITY, SECURITY__LOAD_POLICY, "load_policy")
   S_(SECCLASS_SECURITY, SECURITY__COMPUTE_RELABEL, "compute_relabel")
   S_(SECCLASS_SECURITY, SECURITY__COMPUTE_USER, "compute_user")
   S_(SECCLASS_SECURITY, SECURITY__SETENFORCE, "setenforce")
   S_(SECCLASS_SECURITY, SECURITY__SETBOOL, "setbool")
   S_(SECCLASS_SECURITY, SECURITY__SETSECPARAM, "setsecparam")
   S_(SECCLASS_SECURITY, SECURITY__SETCHECKREQPROT, "setcheckreqprot")
   S_(SECCLASS_SYSTEM, SYSTEM__IPC_INFO, "ipc_info")
   S_(SECCLASS_SYSTEM, SYSTEM__SYSLOG_READ, "syslog_read")
   S_(SECCLASS_SYSTEM, SYSTEM__SYSLOG_MOD, "syslog_mod")
   S_(SECCLASS_SYSTEM, SYSTEM__SYSLOG_CONSOLE, "syslog_console")
   S_(SECCLASS_CAPABILITY, CAPABILITY__CHOWN, "chown")
   S_(SECCLASS_CAPABILITY, CAPABILITY__DAC_OVERRIDE, "dac_override")
   S_(SECCLASS_CAPABILITY, CAPABILITY__DAC_READ_SEARCH, "dac_read_search")
   S_(SECCLASS_CAPABILITY, CAPABILITY__FOWNER, "fowner")
   S_(SECCLASS_CAPABILITY, CAPABILITY__FSETID, "fsetid")
   S_(SECCLASS_CAPABILITY, CAPABILITY__KILL, "kill")
   S_(SECCLASS_CAPABILITY, CAPABILITY__SETGID, "setgid")
   S_(SECCLASS_CAPABILITY, CAPABILITY__SETUID, "setuid")
   S_(SECCLASS_CAPABILITY, CAPABILITY__SETPCAP, "setpcap")
   S_(SECCLASS_CAPABILITY, CAPABILITY__LINUX_IMMUTABLE, "linux_immutable")
   S_(SECCLASS_CAPABILITY, CAPABILITY__NET_BIND_SERVICE, "net_bind_service")
   S_(SECCLASS_CAPABILITY, CAPABILITY__NET_BROADCAST, "net_broadcast")
   S_(SECCLASS_CAPABILITY, CAPABILITY__NET_ADMIN, "net_admin")
   S_(SECCLASS_CAPABILITY, CAPABILITY__NET_RAW, "net_raw")
   S_(SECCLASS_CAPABILITY, CAPABILITY__IPC_LOCK, "ipc_lock")
   S_(SECCLASS_CAPABILITY, CAPABILITY__IPC_OWNER, "ipc_owner")
   S_(SECCLASS_CAPABILITY, CAPABILITY__SYS_MODULE, "sys_module")
   S_(SECCLASS_CAPABILITY, CAPABILITY__SYS_RAWIO, "sys_rawio")
   S_(SECCLASS_CAPABILITY, CAPABILITY__SYS_CHROOT, "sys_chroot")
   S_(SECCLASS_CAPABILITY, CAPABILITY__SYS_PTRACE, "sys_ptrace")
   S_(SECCLASS_CAPABILITY, CAPABILITY__SYS_PACCT, "sys_pacct")
   S_(SECCLASS_CAPABILITY, CAPABILITY__SYS_ADMIN, "sys_admin")
   S_(SECCLASS_CAPABILITY, CAPABILITY__SYS_BOOT, "sys_boot")
   S_(SECCLASS_CAPABILITY, CAPABILITY__SYS_NICE, "sys_nice")
   S_(SECCLASS_CAPABILITY, CAPABILITY__SYS_RESOURCE, "sys_resource")
   S_(SECCLASS_CAPABILITY, CAPABILITY__SYS_TIME, "sys_time")
   S_(SECCLASS_CAPABILITY, CAPABILITY__SYS_TTY_CONFIG, "sys_tty_config")
   S_(SECCLASS_CAPABILITY, CAPABILITY__MKNOD, "mknod")
   S_(SECCLASS_CAPABILITY, CAPABILITY__LEASE, "lease")
   S_(SECCLASS_CAPABILITY, CAPABILITY__AUDIT_WRITE, "audit_write")
   S_(SECCLASS_CAPABILITY, CAPABILITY__AUDIT_CONTROL, "audit_control")
   S_(SECCLASS_NETLINK_ROUTE_SOCKET, NETLINK_ROUTE_SOCKET__NLMSG_READ, "nlmsg_read")
   S_(SECCLASS_NETLINK_ROUTE_SOCKET, NETLINK_ROUTE_SOCKET__NLMSG_WRITE, "nlmsg_write")
   S_(SECCLASS_NETLINK_FIREWALL_SOCKET, NETLINK_FIREWALL_SOCKET__NLMSG_READ, "nlmsg_read")
   S_(SECCLASS_NETLINK_FIREWALL_SOCKET, NETLINK_FIREWALL_SOCKET__NLMSG_WRITE, "nlmsg_write")
   S_(SECCLASS_NETLINK_TCPDIAG_SOCKET, NETLINK_TCPDIAG_SOCKET__NLMSG_READ, "nlmsg_read")
   S_(SECCLASS_NETLINK_TCPDIAG_SOCKET, NETLINK_TCPDIAG_SOCKET__NLMSG_WRITE, "nlmsg_write")
   S_(SECCLASS_NETLINK_XFRM_SOCKET, NETLINK_XFRM_SOCKET__NLMSG_READ, "nlmsg_read")
   S_(SECCLASS_NETLINK_XFRM_SOCKET, NETLINK_XFRM_SOCKET__NLMSG_WRITE, "nlmsg_write")
   S_(SECCLASS_NETLINK_AUDIT_SOCKET, NETLINK_AUDIT_SOCKET__NLMSG_READ, "nlmsg_read")
   S_(SECCLASS_NETLINK_AUDIT_SOCKET, NETLINK_AUDIT_SOCKET__NLMSG_WRITE, "nlmsg_write")
   S_(SECCLASS_NETLINK_AUDIT_SOCKET, NETLINK_AUDIT_SOCKET__NLMSG_RELAY, "nlmsg_relay")
   S_(SECCLASS_NETLINK_AUDIT_SOCKET, NETLINK_AUDIT_SOCKET__NLMSG_READPRIV, "nlmsg_readpriv")
   S_(SECCLASS_NETLINK_IP6FW_SOCKET, NETLINK_IP6FW_SOCKET__NLMSG_READ, "nlmsg_read")
   S_(SECCLASS_NETLINK_IP6FW_SOCKET, NETLINK_IP6FW_SOCKET__NLMSG_WRITE, "nlmsg_write")
   S_(SECCLASS_ASSOCIATION, ASSOCIATION__SENDTO, "sendto")
   S_(SECCLASS_ASSOCIATION, ASSOCIATION__RECVFROM, "recvfrom")
   S_(SECCLASS_ASSOCIATION, ASSOCIATION__SETCONTEXT, "setcontext")
   S_(SECCLASS_ASSOCIATION, ASSOCIATION__POLMATCH, "polmatch")
   S_(SECCLASS_PACKET, PACKET__SEND, "send")
   S_(SECCLASS_PACKET, PACKET__RECV, "recv")
   S_(SECCLASS_PACKET, PACKET__RELABELTO, "relabelto")
   S_(SECCLASS_KEY, KEY__VIEW, "view")
   S_(SECCLASS_KEY, KEY__READ, "read")
   S_(SECCLASS_KEY, KEY__WRITE, "write")
   S_(SECCLASS_KEY, KEY__SEARCH, "search")
   S_(SECCLASS_KEY, KEY__LINK, "link")
   S_(SECCLASS_KEY, KEY__SETATTR, "setattr")
   S_(SECCLASS_KEY, KEY__CREATE, "create")
   S_(SECCLASS_DCCP_SOCKET, DCCP_SOCKET__NODE_BIND, "node_bind")
   S_(SECCLASS_DCCP_SOCKET, DCCP_SOCKET__NAME_CONNECT, "name_connect")
