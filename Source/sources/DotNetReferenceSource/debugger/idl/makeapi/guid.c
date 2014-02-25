#include <windows.h>
#include <ole2.h>

#define INITGUIDS
#include <initguid.h>

// ------------------------------------------------------------------
// Languages

// VB
DEFINE_GUID(guidVBLang, 0x3a12d0b8, 0xc26c, 0x11d0, 0xb4, 0x42, 0x0, 0xa0, 0x24, 0x4a, 0x1d, 0xd2);
// VBScript
DEFINE_GUID(guidVBScriptLang, 0x3a12d0b5, 0xc26c, 0x11d0, 0xb4, 0x42, 0x0, 0xa0, 0x24, 0x4a, 0x1d, 0xd2);
// JScript
DEFINE_GUID(guidJScriptLang, 0x3a12d0b6, 0xc26c, 0x11d0, 0xb4, 0x42, 0x0, 0xa0, 0x24, 0x4a, 0x1d, 0xd2);
// C
DEFINE_GUID(guidCLang, 0x63a08714, 0xfc37, 0x11d2, 0x90, 0x4c, 0x0, 0xc0, 0x4f, 0xa3, 0x2, 0xa1);
// C++
DEFINE_GUID(guidCPPLang, 0x3a12d0b7, 0xc26c, 0x11d0, 0xb4, 0x42, 0x0, 0xa0, 0x24, 0x4a, 0x1d, 0xd2);
// SQL
DEFINE_GUID(guidSQLLang, 0x3a12d0b9, 0xc26c, 0x11d0, 0xb4, 0x42, 0x0, 0xa0, 0x24, 0x4a, 0x1d, 0xd2);
// Script of an undetermined kind
DEFINE_GUID(guidScriptLang, 0xf7fa31da, 0xc32a, 0x11d0, 0xb4, 0x42, 0x0, 0xa0, 0x24, 0x4a, 0x1d, 0xd2);
// Oracle
DEFINE_GUID(guidMsOrclEng, 0x5af6f83d, 0xb555, 0x11d1, 0x84, 0x18, 0x0, 0xc0, 0x4f, 0xa3, 0x2, 0xa1);
// Safe C
DEFINE_GUID(guidSafeCLang, 0x3f5162f8, 0x7c6, 0x11d3, 0x90, 0x53, 0x0, 0xc0, 0x4f, 0xa3, 0x2, 0xa1);
// F#
DEFINE_GUID(guidFSharpLang, 0xAB4F38C9, 0xB6E6, 0x43ba, 0xBE, 0x3B, 0x58, 0x08, 0x0B, 0x2C, 0xCC, 0xE3);
// Visual J#
DEFINE_GUID(guidJSharpLang, 0x3a12d0b4, 0xc26c, 0x11d0, 0xb4, 0x42, 0x0, 0xa0, 0x24, 0x4a, 0x1d, 0xd2);
// Managed C
DEFINE_GUID(guidManagedCLang, 0x5f6a9e9e, 0x13f8, 0x441b, 0x80, 0x90, 0xa1, 0x99, 0x71, 0xcc, 0x20, 0x47);
// Managed C++
DEFINE_GUID(guidManagedCPPLang, 0x4b35fde8, 0x7c6, 0x11d3, 0x90, 0x53, 0x0, 0xc0, 0x4f, 0xa3, 0x2, 0xa1);
// Language used for causality function breakpoints (ASMX)
DEFINE_GUID(guidCausalityBreakpointLang, 0x61D3986E, 0x1220, 0x4877, 0xB9, 0x09, 0x09, 0x6F, 0x0C, 0x29, 0xB0, 0xDD);
// Fortran
DEFINE_GUID(guidFortranLang, 0x28731592, 0x73f5, 0x4ed0, 0xa0, 0x7b, 0xf3, 0x22, 0xc8, 0xff, 0x9c, 0xac);
// Launguage used for specifing MVID/METHOD_TOKEN. This is used for Indigo. Example: "{6AF7F59F-ED82-4f76-95BE-6BB908DBDC69}/06000001"
DEFINE_GUID(guidMethodIdLang, 0xee1ff7c4, 0x775c, 0x449c, 0xa9, 0xc9, 0xbe, 0x45, 0x42, 0x74, 0x2f, 0x64);
// Client side (targeting IE) script
DEFINE_GUID(guidClientScriptLang, 0xfdeabccd, 0x1bec, 0x4495, 0x96, 0x24, 0xf3, 0x5e, 0x7d, 0xcf, 0x2c, 0x7f);

// ------------------------------------------------------------------
// Vendors

// Microsoft
// Warning: Do not change this guid!!  External EE implementors have had to use it to work around bugs in VS 2005.
DEFINE_GUID(guidMicrosoftVendor, 0x994b45c4, 0xe6e9, 0x11d2, 0x90, 0x3f, 0x0, 0xc0, 0x4f, 0xa3, 0x2, 0xa1);

// ------------------------------------------------------------------
// Engines

// Script
DEFINE_GUID(guidScriptEng, 0xf200a7e7, 0xdea5, 0x11d0, 0xb8, 0x54, 0x0, 0xa0, 0x24, 0x4a, 0x1d, 0xe2);
// Legacy SQL (sql2k)
DEFINE_GUID(guidSQLEng, 0x5af6f83c, 0xb555, 0x11d1, 0x84, 0x18, 0x0, 0xc0, 0x4f, 0xa3, 0x2, 0xa1);
// COM PLUS/Interop
DEFINE_GUID(guidCOMPlusNativeEng, 0x92ef0900, 0x2251, 0x11d2, 0xb7, 0x2e, 0x0, 0x0, 0xf8, 0x75, 0x72, 0xef);
// COM PLUS only
DEFINE_GUID(guidCOMPlusOnlyEng, 0x449ec4cc, 0x30d2, 0x4032, 0x92, 0x56, 0xee, 0x18, 0xeb, 0x41, 0xb6, 0x2b);
DEFINE_GUID(guidCOMPlusOnlyEng2,0x5fff7536, 0x0c87, 0x462d, 0x8f, 0xd2, 0x79, 0x71, 0xd9, 0x48, 0xe6, 0xdc);
DEFINE_GUID(guidCOMPlusOnlyEng4,0xfb0d4648, 0xf776, 0x4980, 0x95, 0xf8, 0xbb, 0x7f, 0x36, 0xeb, 0xc1, 0xee);
// Native-Only engine
DEFINE_GUID(guidNativeOnlyEng, 0x3b476d35, 0xa401, 0x11d2, 0xaa, 0xd4, 0x0, 0xc0, 0x4f, 0x99, 0x1, 0x71);
// Embedded CLR engine
DEFINE_GUID(guidEmbeddedCLREng, 0xab9942ab, 0x2473, 0x4b22, 0x8d, 0x7b, 0xb9, 0x5a, 0x89, 0xe1, 0xfe, 0x6b);
// New SQL (from Yukon onwards)
// {1202F5B4-3522-4149-BAD8-58B2079D704F}
DEFINE_GUID(guidSQLEng2, 0x1202f5b4, 0x3522, 0x4149, 0xba, 0xd8, 0x58, 0xb2, 0x7, 0x9d, 0x70, 0x4f);
// COM PLUS/SQL interop local
// {E04BDE58-45EC-48db-9807-513F78865212}
DEFINE_GUID(guidCOMPlusSQLLocalEng, 0xe04bde58, 0x45ec, 0x48db, 0x98, 0x7, 0x51, 0x3f, 0x78, 0x86, 0x52, 0x12);
// COM PLUS/SQL interop remote
// {4194075B-540C-4c1d-AE98-13356B11D063}
DEFINE_GUID(guidCOMPlusSQLRemoteEng, 0x4194075b, 0x540c, 0x4c1d, 0xae, 0x98, 0x13, 0x35, 0x6b, 0x11, 0xd0, 0x63);
// Silverlight engine
DEFINE_GUID(guidSilverlightEng, 0x032f4b8c, 0x7045, 0x4b24, 0xac, 0xcf, 0xd0, 0x8c, 0x9d, 0xa1, 0x8, 0xfe);
// Workflow engine 
// {6589AE11-3B51-494A-AC77-91DA1B53F35A}
DEFINE_GUID(GUID_WorkflowDebugEngine, 0x6589ae11, 0x3b51, 0x494a, 0xac, 0x77, 0x91, 0xda, 0x1b, 0x53, 0xf3, 0x5a);
// MAC SL engine 
// {22189D02-CCA4-40AE-A874-6C2A764FB071}
DEFINE_GUID(guidMACSilverlightEng, 0x22189d02, 0xcca4, 0x40ae, 0xa8, 0x74, 0x6c, 0x2a, 0x76, 0x4f, 0xb0, 0x71);
// Sentinel engine guid value which may be used to force usage of legacy (cpde.dll) remote managed debugging
// {351668CC-8477-4fbf-BFE3-5F1006E4DB1F}
DEFINE_GUID(guidCOMPlusLegacyRemoteEngine, 0x351668cc, 0x8477, 0x4fbf, 0xbf, 0xe3, 0x5f, 0x10, 0x6, 0xe4, 0xdb, 0x1f);
// Sentinel engine guid value which may be used to force usage of new architecture (concord) local managed debugging
// {97552AEF-4F41-447a-BCC3-802EAA377343}
DEFINE_GUID(guidCOMPlusNewArchEngine, 0x97552aef, 0x4f41, 0x447a, 0xbc, 0xc3, 0x80, 0x2e, 0xaa, 0x37, 0x73, 0x43);
// For GPU engine
// {F4453496-1DB8-47F8-A7D5-31EBDDC2EC96}
DEFINE_GUID(guidConcordGpuEng, 0xf4453496, 0x1db8, 0x47f8, 0xa7, 0xd5, 0x31, 0xeb, 0xdd, 0xc2, 0xec, 0x96);
// For coresystem core Clr engine
// {2E36F1D4-B23C-435D-AB41-18E608940038}
DEFINE_GUID(guidCoreSystemClrEng, 0x2E36F1D4, 0xB23C, 0x435D, 0xAB, 0x41, 0x18, 0xE6, 0x08, 0x94, 0x00, 0x38);


// ------------------------------------------------------------------
// GUIDs for IDebugProperty::GetExtendedInfo
DEFINE_GUID(guidDocument, 0x3f98de84, 0xfee9, 0x11d0, 0xb4, 0x7f, 0x0, 0xa0, 0x24, 0x4a, 0x1d, 0xd2);
DEFINE_GUID(guidCodeContext, 0xe2fc65e, 0x56ce, 0x11d1, 0xb5, 0x28, 0x0, 0xaa, 0x0, 0x4a, 0x87, 0x97);
DEFINE_GUID(guidExtendedInfoSlot, 0x6df235ad, 0x82c6, 0x4292, 0x9c, 0x97, 0x73, 0x89, 0x77, 0xb, 0xc4, 0x2f);
DEFINE_GUID(guidExtendedInfoSignature, 0xb5fb6d46, 0xf805, 0x417f, 0x96, 0xa3, 0x8b, 0xa7, 0x37, 0x7, 0x3f, 0xfd);
DEFINE_GUID(guidCustomViewerSupported, 0xd9c9da31, 0xffbe, 0x4eeb, 0x91, 0x86, 0x23, 0x12, 0x1e, 0x3c, 0x8, 0x8c);
DEFINE_GUID(guidSimpleGridViewer, 0x8259b87b, 0xdd66, 0x4435, 0xa9, 0xf9, 0x6b, 0x99, 0xad, 0x63, 0xf1, 0x4e);

// ------------------------------------------------------------------
// GUIDs for IDebugField::GetExtendedInfo
// Constant Value
DEFINE_GUID(guidConstantValue, 0xd01d28a7, 0xb533, 0x4c29, 0x82, 0xba, 0x8e, 0x8e, 0xf8, 0x64, 0x21, 0x9e);
// The Typeflag for the constant - a metadata ELEMENT_TYPE
DEFINE_GUID(guidConstantType, 0xa253612d, 0x4589, 0x44d7, 0x8d, 0xc1, 0xb4, 0xc2, 0x45, 0xa4, 0x97, 0xfe);
// Is the Int Type an IntPtr? (Platform specific size rather than compile time specific size).
DEFINE_GUID(guidIntPtr, 0x8ec71946, 0x7365, 0x4908, 0xa6, 0xbc, 0x2d, 0xc8, 0x3, 0xb5, 0x58, 0xe4);
// Is the type a ValueType?
DEFINE_GUID(guidValueType, 0x6d9b2983, 0x6ed2, 0x40d6, 0x85, 0x70, 0xe2, 0x02, 0x85, 0x9f, 0x2d, 0x6c);


// ------------------------------------------------------------------
// Symbol store types
DEFINE_GUID(guidSymStoreMetaPDB, 0x964f2632, 0x5270, 0x11d2, 0x8f, 0xf7, 0x0, 0xc0, 0x4f, 0xa3, 0x2, 0xa1);

// ------------------------------------------------------------------
// Frame properties
DEFINE_GUID(guidFilterLocals, 0xb200f725, 0xe725, 0x4c53, 0xb3, 0x6a, 0x1e, 0xc2, 0x7a, 0xef, 0x12, 0xef);
DEFINE_GUID(guidFilterAllLocals, 0x196db21f, 0x5f22, 0x45a9, 0xb5, 0xa3, 0x32, 0xcd, 0xdb, 0x30, 0xdb, 0x6);
DEFINE_GUID(guidFilterArgs, 0x804bccea, 0x475, 0x4ae7, 0x8a, 0x46, 0x18, 0x62, 0x68, 0x8a, 0xb8, 0x63);
DEFINE_GUID(guidFilterLocalsPlusArgs, 0xe74721bb, 0x10c0, 0x40f5, 0x80, 0x7f, 0x92, 0xd, 0x37, 0xf9, 0x54, 0x19);
DEFINE_GUID(guidFilterAllLocalsPlusArgs, 0x939729a8, 0x4cb0, 0x4647, 0x98, 0x31, 0x7f, 0xf4, 0x65, 0x24, 0xd, 0x5f);
DEFINE_GUID(guidFilterRegisters, 0x223ae797, 0xbd09, 0x4f28, 0x82, 0x41, 0x27, 0x63, 0xbd, 0xc5, 0xf7, 0x13);
DEFINE_GUID(guidFilterThis, 0xadd901fd, 0xbfc9, 0x48b2, 0xb0, 0xc7, 0x68, 0xb4, 0x59, 0x53, 0x9d, 0x7a);
DEFINE_GUID(guidFilterAutoRegisters, 0x38fc3258, 0xd4d8, 0x401e, 0xa6, 0x38, 0x77, 0x9a, 0x1, 0x45, 0xe9, 0x6);


// ------------------------------------------------------------------
// Port suppliers
DEFINE_GUID(guidLocalPortSupplier, 0x708c1eca, 0xff48, 0x11d2, 0x90, 0x4f, 0x0, 0xc0, 0x4f, 0xa3, 0x2, 0xa1);
DEFINE_GUID(guidNativePortSupplier, 0x3b476d38, 0xa401, 0x11d2, 0xaa, 0xd4, 0x0, 0xc0, 0x4f, 0x99, 0x1, 0x71);
DEFINE_GUID(guidNativePipePortSupplier, 0x7484bffa, 0xe709, 0x48f4, 0xb3, 0x67, 0xc8, 0x13, 0xb0, 0x94, 0x4d, 0xcb);
DEFINE_GUID(guidEmbeddedCLRPortSupplier, 0x839ee356, 0x3bf6, 0x484e, 0x80, 0xb3, 0x3e, 0xee, 0xea, 0x26, 0x49, 0x8f);

// ------------------------------------------------------------------
// Document checksum algorithms
DEFINE_GUID(guidSourceHashMD5, 0x406ea660, 0x64cf, 0x4c82, 0xb6, 0xf0, 0x42, 0xd4, 0x81, 0x72, 0xa7, 0x99);
DEFINE_GUID(guidSourceHashSHA1, 0xff1816ec, 0xaa5e, 0x4d10, 0x87, 0xf7, 0x6f, 0x49, 0x63, 0x83, 0x34, 0x60);

// ------------------------------------------------------------------

// 

DEFINE_GUID(CLSID_NativeDebugEngine, 0xc77ac9c4, 0x4fe5, 0x11d0, 0xb8, 0x21, 0x0, 0xa0, 0x24, 0x4a, 0x1d, 0xe2);

// ------------------------------------------------------------------
// This is used by SQL DE and MDM to turn on t-sql debugging for apps that use the managed data adapter
// in the local & remote cases respectively.
//
DEFINE_GUID(CLSID_SQLDebugging, 0xAFEF65AD, 0x4577, 0x447A, 0xA1, 0x48, 0x83, 0xAC, 0xAD, 0xD3, 0xD4, 0xB9);

// ------------------------------------------------------------------
// This is used by managed engine for specifying a new top-level node for doing MDAs
//
// {6ECE07A9-0EDE-45c4-8296-818D8FC401D4}
DEFINE_GUID(guidMDANotification, 0x6ece07a9, 0xede, 0x45c4, 0x82, 0x96, 0x81, 0x8d, 0x8f, 0xc4, 0x1, 0xd4);
