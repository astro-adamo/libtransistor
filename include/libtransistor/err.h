/**
 * @file libtransistor/err.h
 * @brief Error definitions
 */

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include<libtransistor/err/modules.h>

#define MAKE_RESULT(module, code) (((code) << 9) | (module))

#define LIBTRANSISTOR_RESULT(code) MAKE_RESULT(MODULE_LIBTRANSISTOR, code)

// Misc
#define LIBTRANSISTOR_ERR_UNSPECIFIED LIBTRANSISTOR_RESULT(1)
#define LIBTRANSISTOR_ERR_UNIMPLEMENTED LIBTRANSISTOR_RESULT(2)
#define LIBTRANSISTOR_ERR_OUT_OF_MEMORY LIBTRANSISTOR_RESULT(3)
#define LIBTRANSISTOR_ERR_ASSERTION_FAILED LIBTRANSISTOR_RESULT(4)
#define LIBTRANSISTOR_ERR_LEGACY_CONTEXT LIBTRANSISTOR_RESULT(5)
#define LIBTRANSISTOR_ERR_MODULE_NOT_INITIALIZED LIBTRANSISTOR_RESULT(6)
#define LIBTRANSISTOR_ERR_INVALID_ARGUMENT LIBTRANSISTOR_RESULT(7)

// IPC
#define LIBTRANSISTOR_ERR_UNSUPPORTED_BUFFER_TYPE LIBTRANSISTOR_RESULT(1001)
#define LIBTRANSISTOR_ERR_TOO_MANY_BUFFERS LIBTRANSISTOR_RESULT(1002)
#define LIBTRANSISTOR_ERR_INVALID_REQUEST_TYPE LIBTRANSISTOR_RESULT(1003)
#define LIBTRANSISTOR_ERR_TOO_MANY_HANDLES LIBTRANSISTOR_RESULT(1004)
#define LIBTRANSISTOR_ERR_INVALID_BUFFER_ADDRESS LIBTRANSISTOR_RESULT(1005)
#define LIBTRANSISTOR_ERR_INVALID_BUFFER_SIZE LIBTRANSISTOR_RESULT(1006)
#define LIBTRANSISTOR_ERR_INVALID_PROTECTION LIBTRANSISTOR_RESULT(1007)
#define LIBTRANSISTOR_ERR_INVALID_IPC_RESPONSE_TYPE LIBTRANSISTOR_RESULT(1008)
#define LIBTRANSISTOR_ERR_INVALID_IPC_RESPONSE_MAGIC LIBTRANSISTOR_RESULT(1009)
#define LIBTRANSISTOR_ERR_INVALID_RAW_DATA_SIZE LIBTRANSISTOR_RESULT(1010)
#define LIBTRANSISTOR_ERR_UNEXPECTED_RAW_DATA_SIZE LIBTRANSISTOR_RESULT(1011)
#define LIBTRANSISTOR_ERR_UNEXPECTED_PID LIBTRANSISTOR_RESULT(1012)
#define LIBTRANSISTOR_ERR_UNEXPECTED_COPY_HANDLES LIBTRANSISTOR_RESULT(1013)
#define LIBTRANSISTOR_ERR_UNEXPECTED_MOVE_HANDLES LIBTRANSISTOR_RESULT(1014)
#define LIBTRANSISTOR_ERR_ALREADY_A_DOMAIN LIBTRANSISTOR_RESULT(1015)
#define LIBTRANSISTOR_ERR_CANT_SEND_OBJECT_ACROSS_DOMAINS LIBTRANSISTOR_RESULT(1016)
#define LIBTRANSISTOR_ERR_CANT_SEND_DOMAIN_OBJECT_TO_SESSION LIBTRANSISTOR_RESULT(1017)
#define LIBTRANSISTOR_ERR_TOO_MANY_OBJECTS LIBTRANSISTOR_RESULT(1018)
#define LIBTRANSISTOR_ERR_UNEXPECTED_DOMAIN_HEADER_COMMAND LIBTRANSISTOR_RESULT(1018)
#define LIBTRANSISTOR_ERR_UNEXPECTED_OBJECTS LIBTRANSISTOR_RESULT(1019)
#define LIBTRANSISTOR_ERR_CANT_CLOSE_SESSIONS_LIKE_DOMAIN_OBJECTS LIBTRANSISTOR_RESULT(1020)
#define LIBTRANSISTOR_ERR_MALFORMED_CLOSE_REQUEST LIBTRANSISTOR_RESULT(1021)
#define LIBTRANSISTOR_ERR_INVALID_IPC_REQUEST_MAGIC LIBTRANSISTOR_RESULT(1022)
#define LIBTRANSISTOR_ERR_CANT_SEND_SESSION_OBJECT_FROM_DOMAIN LIBTRANSISTOR_RESULT(1023)
#define LIBTRANSISTOR_ERR_CANT_SEND_DOMAIN_OBJECT_FROM_SESSION LIBTRANSISTOR_RESULT(1024)
#define LIBTRANSISTOR_ERR_UNEXPECTED_BUFFER_PROTECTION LIBTRANSISTOR_RESULT(1025)
#define LIBTRANSISTOR_ERR_REFUSAL_TO_CONVERT_BORROWED_OBJECT LIBTRANSISTOR_RESULT(1026)
#define LIBTRANSISTOR_ERR_EXPECTED_SESSION_CLOSURE LIBTRANSISTOR_RESULT(1027)
	
// SM
#define LIBTRANSISTOR_ERR_SM_NOT_INITIALIZED LIBTRANSISTOR_RESULT(2001)
#define LIBTRANSISTOR_ERR_SM_SERVICE_NAME_TOO_LONG LIBTRANSISTOR_RESULT(2002)

// BSD
#define LIBTRANSISTOR_ERR_BSD_ERRNO_SET LIBTRANSISTOR_RESULT(3001)
#define LIBTRANSISTOR_ERR_BSD_BUFFER_TOO_SMALL LIBTRANSISTOR_RESULT(3002)
#define LIBTRANSISTOR_ERR_BSD_INVALID_MAGIC LIBTRANSISTOR_RESULT(3003)
#define LIBTRANSISTOR_ERR_BSD_UNRECOGNIZED_SOCKET_SERVICE LIBTRANSISTOR_RESULT(3004)
	
// NV
#define LIBTRANSISTOR_ERR_NV_INITIALIZE_FAILED LIBTRANSISTOR_RESULT(4001)
#define LIBTRANSISTOR_ERR_NV_OPEN_FAILED LIBTRANSISTOR_RESULT(4002)

// Parcel & Display
#define LIBTRANSISTOR_ERR_PARCEL_INVALID_BINDER_TYPE LIBTRANSISTOR_RESULT(5001)
#define LIBTRANSISTOR_ERR_PARCEL_DATA_TOO_BIG LIBTRANSISTOR_RESULT(5002)
#define LIBTRANSISTOR_ERR_PARCEL_DATA_UNDERRUN LIBTRANSISTOR_RESULT(5003)
#define LIBTRANSISTOR_ERR_DISPLAY_FENCE_TOO_MANY_FDS LIBTRANSISTOR_RESULT(5004)
#define LIBTRANSISTOR_ERR_DISPLAY_GRAPHIC_BUFFER_LENGTH_MISMATCH LIBTRANSISTOR_RESULT(5005)
#define LIBTRANSISTOR_ERR_SURFACE_CONNECT_FAILED LIBTRANSISTOR_RESULT(5006)
#define LIBTRANSISTOR_ERR_SURFACE_DEQUEUE_BUFFER_FAILED LIBTRANSISTOR_RESULT(5007)
#define LIBTRANSISTOR_ERR_SURFACE_QUEUE_BUFFER_FAILED LIBTRANSISTOR_RESULT(5008)
#define LIBTRANSISTOR_ERR_SURFACE_INVALID_STATE LIBTRANSISTOR_RESULT(5009)
	
// GPU
#define LIBTRANSISTOR_ERR_GPU_BUFFER_UNALIGNED LIBTRANSISTOR_RESULT(6001)

// HID
#define LIBTRANSISTOR_ERR_HID_BAD_STRUCTURE LIBTRANSISTOR_RESULT(7001)

// FS
#define LIBTRANSISTOR_ERR_FS_INTERNAL_ERROR LIBTRANSISTOR_RESULT(8001)
#define LIBTRANSISTOR_ERR_FS_OUT_OF_DIR_ENTRIES LIBTRANSISTOR_RESULT(8002)
#define LIBTRANSISTOR_ERR_FS_NAME_TOO_LONG LIBTRANSISTOR_RESULT(8003)
#define LIBTRANSISTOR_ERR_FS_NOT_A_DIRECTORY LIBTRANSISTOR_RESULT(8004)
#define LIBTRANSISTOR_ERR_FS_NOT_A_FILE LIBTRANSISTOR_RESULT(8005)
#define LIBTRANSISTOR_ERR_FS_NOT_FOUND LIBTRANSISTOR_RESULT(8006)
#define LIBTRANSISTOR_ERR_FS_INVALID_PATH LIBTRANSISTOR_RESULT(8007)
#define LIBTRANSISTOR_ERR_FS_PATH_TOO_DEEP LIBTRANSISTOR_RESULT(8008)
#define LIBTRANSISTOR_ERR_FS_PATH_EXISTS LIBTRANSISTOR_RESULT(8009)
#define LIBTRANSISTOR_ERR_FS_READ_ONLY LIBTRANSISTOR_RESULT(8010)
#define LIBTRANSISTOR_ERR_FS_ACCESS_DENIED LIBTRANSISTOR_RESULT(8011)
#define LIBTRANSISTOR_ERR_FS_IO_ERROR LIBTRANSISTOR_RESULT(8012)

// AM
#define LIBTRANSISTOR_ERR_AM_WORKAROUND_ACTIVE LIBTRANSISTOR_RESULT(9001)

// IPC Server
#define LIBTRANSISTOR_ERR_IPCSERVER_INVALID_SESSION_STATE LIBTRANSISTOR_RESULT(10001)
#define LIBTRANSISTOR_ERR_IPCSERVER_TOO_MANY_SESSIONS LIBTRANSISTOR_RESULT(10002)
#define LIBTRANSISTOR_ERR_IPCSERVER_NO_SUCH_OBJECT LIBTRANSISTOR_RESULT(10003)
#define LIBTRANSISTOR_ERR_IPCSERVER_OBJECT_NOT_ACTIVE LIBTRANSISTOR_RESULT(10004)
#define LIBTRANSISTOR_ERR_IPCSERVER_SESSION_OBJECT_WAS_DOMAIN LIBTRANSISTOR_RESULT(10005)
#define LIBTRANSISTOR_ERR_IPCSERVER_CANT_SEND_ROOT_OBJECT LIBTRANSISTOR_RESULT(10006)
#define LIBTRANSISTOR_ERR_IPCSERVER_NO_SUCH_COMMAND LIBTRANSISTOR_RESULT(10007)

// Page Allocator
#define LIBTRANSISTOR_ERR_AP_OUT_OF_PAGES LIBTRANSISTOR_RESULT(11001)
#define LIBTRANSISTOR_ERR_AP_DUPLICATE_BLOCK LIBTRANSISTOR_RESULT(11002)
#define LIBTRANSISTOR_ERR_AP_INSERT_FAILED LIBTRANSISTOR_RESULT(11003)

// Transistor Linker
#define LIBTRANSISTOR_ERR_TRNLD_INVALID_MODULE_HEADER LIBTRANSISTOR_RESULT(12001)
#define LIBTRANSISTOR_ERR_TRNLD_DUPLICATE_DT_ENTRY LIBTRANSISTOR_RESULT(12002)
#define LIBTRANSISTOR_ERR_TRNLD_MISSING_DT_ENTRY LIBTRANSISTOR_RESULT(12003)
#define LIBTRANSISTOR_ERR_TRNLD_INVALID_RELOC_ENT LIBTRANSISTOR_RESULT(12004)
#define LIBTRANSISTOR_ERR_TRNLD_INVALID_RELOC_TABLE_SIZE LIBTRANSISTOR_RESULT(12005)
#define LIBTRANSISTOR_ERR_TRNLD_RELA_SYMBOL_UNSUPPORTED LIBTRANSISTOR_RESULT(12006)
#define LIBTRANSISTOR_ERR_TRNLD_UNRECOGNIZED_RELOC_TYPE LIBTRANSISTOR_RESULT(12007)
#define LIBTRANSISTOR_ERR_TRNLD_FAILED_TO_READ_MODULE LIBTRANSISTOR_RESULT(12008)
#define LIBTRANSISTOR_ERR_TRNLD_FAILED_TO_FIND_MODULE LIBTRANSISTOR_RESULT(12009)
#define LIBTRANSISTOR_ERR_TRNLD_NOT_EXECUTABLE LIBTRANSISTOR_RESULT(12010)
#define LIBTRANSISTOR_ERR_TRNLD_INVALID_RELOC_TABLE_TYPE LIBTRANSISTOR_RESULT(12011)
#define LIBTRANSISTOR_ERR_TRNLD_INVALID_SYM_ENT LIBTRANSISTOR_RESULT(12012)
#define LIBTRANSISTOR_ERR_TRNLD_NEEDS_STRTAB LIBTRANSISTOR_RESULT(12013)
#define LIBTRANSISTOR_ERR_TRNLD_NEEDS_SYMTAB LIBTRANSISTOR_RESULT(12014)
#define LIBTRANSISTOR_ERR_TRNLD_COULD_NOT_RESOLVE_SYMBOL LIBTRANSISTOR_RESULT(12015)

// Syscalls
#define LIBTRANSISTOR_ERR_NEEDS_SYSCALL(id) LIBTRANSISTOR_RESULT(13000 + id)

// USB
#define LIBTRANSISTOR_ERR_USB_REPORT_NOT_FOUND LIBTRANSISTOR_RESULT(14001)
#define LIBTRANSISTOR_ERR_USB_TRANSFER_FAILED LIBTRANSISTOR_RESULT(14002)

// Homebrew ABI
#define HOMEBREW_ABI_RESULT(code) MAKE_RESULT(MODULE_HOMEBREW_ABI, code)
#define HOMEBREW_ABI_UNRECOGNIZED_KEY(key) HOMEBREW_ABI_RESULT(100 + key)
#define HOMEBREW_ABI_KEY_NOT_PRESENT(key)  HOMEBREW_ABI_RESULT(200 + key)
#define HOMEBREW_ABI_KEY_INVALID(key)      HOMEBREW_ABI_RESULT(300 + key)

#ifdef __cplusplus
}
#endif
