#pragma once
#include <ntifs.h>

EXTERN_C NTSTATUS DriverEntry(PDRIVER_OBJECT pDrvObj, PUNICODE_STRING pRegistry);