#pragma once
#include <ntdef.h>

typedef struct _MY_EPROCESS_
{
	UCHAR PcbAndOthers[0x488];// +0x000 Pcb              : _KPROCESS
	// 	+ 0x2d8 ProcessLock : _EX_PUSH_LOCK
	// 	+ 0x2e0 UniqueProcessId : Ptr64 Void
	// 	+ 0x2e8 ActiveProcessLinks : _LIST_ENTRY
	// 	+ 0x2f8 RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x300 Flags2 : Uint4B
	// 	+ 0x300 JobNotReallyActive : Pos 0, 1 Bit
	// 	+ 0x300 AccountingFolded : Pos 1, 1 Bit
	// 	+ 0x300 NewProcessReported : Pos 2, 1 Bit
	// 	+ 0x300 ExitProcessReported : Pos 3, 1 Bit
	// 	+ 0x300 ReportCommitChanges : Pos 4, 1 Bit
	// 	+ 0x300 LastReportMemory : Pos 5, 1 Bit
	// 	+ 0x300 ForceWakeCharge : Pos 6, 1 Bit
	// 	+ 0x300 CrossSessionCreate : Pos 7, 1 Bit
	// 	+ 0x300 NeedsHandleRundown : Pos 8, 1 Bit
	// 	+ 0x300 RefTraceEnabled : Pos 9, 1 Bit
	// 	+ 0x300 DisableDynamicCode : Pos 10, 1 Bit
	// 	+ 0x300 EmptyJobEvaluated : Pos 11, 1 Bit
	// 	+ 0x300 DefaultPagePriority : Pos 12, 3 Bits
	// 	+ 0x300 PrimaryTokenFrozen : Pos 15, 1 Bit
	// 	+ 0x300 ProcessVerifierTarget : Pos 16, 1 Bit
	// 	+ 0x300 StackRandomizationDisabled : Pos 17, 1 Bit
	// 	+ 0x300 AffinityPermanent : Pos 18, 1 Bit
	// 	+ 0x300 AffinityUpdateEnable : Pos 19, 1 Bit
	// 	+ 0x300 PropagateNode : Pos 20, 1 Bit
	// 	+ 0x300 ExplicitAffinity : Pos 21, 1 Bit
	// 	+ 0x300 ProcessExecutionState : Pos 22, 2 Bits
	// 	+ 0x300 DisallowStrippedImages : Pos 24, 1 Bit
	// 	+ 0x300 HighEntropyASLREnabled : Pos 25, 1 Bit
	// 	+ 0x300 ExtensionPointDisable : Pos 26, 1 Bit
	// 	+ 0x300 ForceRelocateImages : Pos 27, 1 Bit
	// 	+ 0x300 ProcessStateChangeRequest : Pos 28, 2 Bits
	// 	+ 0x300 ProcessStateChangeInProgress : Pos 30, 1 Bit
	// 	+ 0x300 DisallowWin32kSystemCalls : Pos 31, 1 Bit
	// 	+ 0x304 Flags : Uint4B
	// 	+ 0x304 CreateReported : Pos 0, 1 Bit
	// 	+ 0x304 NoDebugInherit : Pos 1, 1 Bit
	// 	+ 0x304 ProcessExiting : Pos 2, 1 Bit
	// 	+ 0x304 ProcessDelete : Pos 3, 1 Bit
	// 	+ 0x304 ControlFlowGuardEnabled : Pos 4, 1 Bit
	// 	+ 0x304 VmDeleted : Pos 5, 1 Bit
	// 	+ 0x304 OutswapEnabled : Pos 6, 1 Bit
	// 	+ 0x304 Outswapped : Pos 7, 1 Bit
	// 	+ 0x304 FailFastOnCommitFail : Pos 8, 1 Bit
	// 	+ 0x304 Wow64VaSpace4Gb : Pos 9, 1 Bit
	// 	+ 0x304 AddressSpaceInitialized : Pos 10, 2 Bits
	// 	+ 0x304 SetTimerResolution : Pos 12, 1 Bit
	// 	+ 0x304 BreakOnTermination : Pos 13, 1 Bit
	// 	+ 0x304 DeprioritizeViews : Pos 14, 1 Bit
	// 	+ 0x304 WriteWatch : Pos 15, 1 Bit
	// 	+ 0x304 ProcessInSession : Pos 16, 1 Bit
	// 	+ 0x304 OverrideAddressSpace : Pos 17, 1 Bit
	// 	+ 0x304 HasAddressSpace : Pos 18, 1 Bit
	// 	+ 0x304 LaunchPrefetched : Pos 19, 1 Bit
	// 	+ 0x304 Background : Pos 20, 1 Bit
	// 	+ 0x304 VmTopDown : Pos 21, 1 Bit
	// 	+ 0x304 ImageNotifyDone : Pos 22, 1 Bit
	// 	+ 0x304 PdeUpdateNeeded : Pos 23, 1 Bit
	// 	+ 0x304 VdmAllowed : Pos 24, 1 Bit
	// 	+ 0x304 ProcessRundown : Pos 25, 1 Bit
	// 	+ 0x304 ProcessInserted : Pos 26, 1 Bit
	// 	+ 0x304 DefaultIoPriority : Pos 27, 3 Bits
	// 	+ 0x304 ProcessSelfDelete : Pos 30, 1 Bit
	// 	+ 0x304 SetTimerResolutionLink : Pos 31, 1 Bit
	// 	+ 0x308 CreateTime : _LARGE_INTEGER
	// 	+ 0x310 ProcessQuotaUsage : [2] Uint8B
	// 	+ 0x320 ProcessQuotaPeak : [2] Uint8B
	// 	+ 0x330 PeakVirtualSize : Uint8B
	// 	+ 0x338 VirtualSize : Uint8B
	// 	+ 0x340 SessionProcessLinks : _LIST_ENTRY
	// 	+ 0x350 ExceptionPortData : Ptr64 Void
	// 	+ 0x350 ExceptionPortValue : Uint8B
	// 	+ 0x350 ExceptionPortState : Pos 0, 3 Bits
	// 	+ 0x358 Token : _EX_FAST_REF
	// 	+ 0x360 MmReserved : Uint8B
	// 	+ 0x368 AddressCreationLock : _EX_PUSH_LOCK
	// 	+ 0x370 PageTableCommitmentLock : _EX_PUSH_LOCK
	// 	+ 0x378 RotateInProgress : Ptr64 _ETHREAD
	// 	+ 0x380 ForkInProgress : Ptr64 _ETHREAD
	// 	+ 0x388 CommitChargeJob : Ptr64 _EJOB
	// 	+ 0x390 CloneRoot : _RTL_AVL_TREE
	// 	+ 0x398 NumberOfPrivatePages : Uint8B
	// 	+ 0x3a0 NumberOfLockedPages : Uint8B
	// 	+ 0x3a8 Win32Process : Ptr64 Void
	// 	+ 0x3b0 Job : Ptr64 _EJOB
	// 	+ 0x3b8 SectionObject : Ptr64 Void
	// 	+ 0x3c0 SectionBaseAddress : Ptr64 Void
	// 	+ 0x3c8 Cookie : Uint4B
	// 	+ 0x3d0 WorkingSetWatch : Ptr64 _PAGEFAULT_HISTORY
	// 	+ 0x3d8 Win32WindowStation : Ptr64 Void
	// 	+ 0x3e0 InheritedFromUniqueProcessId : Ptr64 Void
	// 	+ 0x3e8 LdtInformation : Ptr64 Void
	// 	+ 0x3f0 OwnerProcessId : Uint8B
	// 	+ 0x3f8 Peb : Ptr64 _PEB
	// 	+ 0x400 Session : Ptr64 _MM_SESSION_SPACE
	// 	+ 0x408 AweInfo : Ptr64 Void
	// 	+ 0x410 QuotaBlock : Ptr64 _EPROCESS_QUOTA_BLOCK
	// 	+ 0x418 ObjectTable : Ptr64 _HANDLE_TABLE
	// 	+ 0x420 DebugPort : Ptr64 Void
	// 	+ 0x428 WoW64Process : Ptr64 _EWOW64PROCESS
	// 	+ 0x430 DeviceMap : Ptr64 Void
	// 	+ 0x438 EtwDataSource : Ptr64 Void
	// 	+ 0x440 PageDirectoryPte : Uint8B
	// 	+ 0x448 ImageFilePointer : Ptr64 _FILE_OBJECT
	// 	+ 0x450 ImageFileName : [15] UChar
	// 	+ 0x45f PriorityClass : UChar
	// 	+ 0x460 SecurityPort : Ptr64 Void
	// 	+ 0x468 SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
	// 	+ 0x470 JobLinks : _LIST_ENTRY
	// 	+ 0x480 HighestUserAddress : Ptr64 Void
	LIST_ENTRY ThreadListHead;// 	+ 0x488 ThreadListHead : _LIST_ENTRY
	// 	+ 0x498 ActiveThreads : Uint4B
	// 	+ 0x49c ImagePathHash : Uint4B
	// 	+ 0x4a0 DefaultHardErrorProcessing : Uint4B
	// 	+ 0x4a4 LastThreadExitStatus : Int4B
	// 	+ 0x4a8 PrefetchTrace : _EX_FAST_REF
	// 	+ 0x4b0 LockedPagesList : Ptr64 Void
	// 	+ 0x4b8 ReadOperationCount : _LARGE_INTEGER
	// 	+ 0x4c0 WriteOperationCount : _LARGE_INTEGER
	// 	+ 0x4c8 OtherOperationCount : _LARGE_INTEGER
	// 	+ 0x4d0 ReadTransferCount : _LARGE_INTEGER
	// 	+ 0x4d8 WriteTransferCount : _LARGE_INTEGER
	// 	+ 0x4e0 OtherTransferCount : _LARGE_INTEGER
	// 	+ 0x4e8 CommitChargeLimit : Uint8B
	// 	+ 0x4f0 CommitCharge : Uint8B
	// 	+ 0x4f8 CommitChargePeak : Uint8B
	// 	+ 0x500 Vm : _MMSUPPORT_FULL
	// 	+ 0x610 MmProcessLinks : _LIST_ENTRY
	// 	+ 0x620 ModifiedPageCount : Uint4B
	// 	+ 0x624 ExitStatus : Int4B
	// 	+ 0x628 VadRoot : _RTL_AVL_TREE
	// 	+ 0x630 VadHint : Ptr64 Void
	// 	+ 0x638 VadCount : Uint8B
	// 	+ 0x640 VadPhysicalPages : Uint8B
	// 	+ 0x648 VadPhysicalPagesLimit : Uint8B
	// 	+ 0x650 AlpcContext : _ALPC_PROCESS_CONTEXT
	// 	+ 0x670 TimerResolutionLink : _LIST_ENTRY
	// 	+ 0x680 TimerResolutionStackRecord : Ptr64 _PO_DIAG_STACK_RECORD
	// 	+ 0x688 RequestedTimerResolution : Uint4B
	// 	+ 0x68c SmallestTimerResolution : Uint4B
	// 	+ 0x690 ExitTime : _LARGE_INTEGER
	// 	+ 0x698 InvertedFunctionTable : Ptr64 _INVERTED_FUNCTION_TABLE
	// 	+ 0x6a0 InvertedFunctionTableLock : _EX_PUSH_LOCK
	// 	+ 0x6a8 ActiveThreadsHighWatermark : Uint4B
	// 	+ 0x6ac LargePrivateVadCount : Uint4B
	// 	+ 0x6b0 ThreadListLock : _EX_PUSH_LOCK
	// 	+ 0x6b8 WnfContext : Ptr64 Void
	// 	+ 0x6c0 ServerSilo : Ptr64 _EJOB
	// 	+ 0x6c8 SignatureLevel : UChar
	// 	+ 0x6c9 SectionSignatureLevel : UChar
	// 	+ 0x6ca Protection : _PS_PROTECTION
	// 	+ 0x6cb HangCount : UChar
	// 	+ 0x6cc Flags3 : Uint4B
	// 	+ 0x6cc Minimal : Pos 0, 1 Bit
	// 	+ 0x6cc ReplacingPageRoot : Pos 1, 1 Bit
	// 	+ 0x6cc DisableNonSystemFonts : Pos 2, 1 Bit
	// 	+ 0x6cc AuditNonSystemFontLoading : Pos 3, 1 Bit
	// 	+ 0x6cc Crashed : Pos 4, 1 Bit
	// 	+ 0x6cc JobVadsAreTracked : Pos 5, 1 Bit
	// 	+ 0x6cc VadTrackingDisabled : Pos 6, 1 Bit
	// 	+ 0x6cc AuxiliaryProcess : Pos 7, 1 Bit
	// 	+ 0x6cc SubsystemProcess : Pos 8, 1 Bit
	// 	+ 0x6cc IndirectCpuSets : Pos 9, 1 Bit
	// 	+ 0x6cc InPrivate : Pos 10, 1 Bit
	// 	+ 0x6cc ProhibitRemoteImageMap : Pos 11, 1 Bit
	// 	+ 0x6cc ProhibitLowILImageMap : Pos 12, 1 Bit
	// 	+ 0x6cc SignatureMitigationOptIn : Pos 13, 1 Bit
	// 	+ 0x6cc DisableDynamicCodeAllowOptOut : Pos 14, 1 Bit
	// 	+ 0x6cc EnableFilteredWin32kAPIs : Pos 15, 1 Bit
	// 	+ 0x6cc AuditFilteredWin32kAPIs : Pos 16, 1 Bit
	// 	+ 0x6cc PreferSystem32Images : Pos 17, 1 Bit
	// 	+ 0x6cc RelinquishedCommit : Pos 18, 1 Bit
	// 	+ 0x6cc AutomaticallyOverrideChildProcessPolicy : Pos 19, 1 Bit
	// 	+ 0x6cc HighGraphicsPriority : Pos 20, 1 Bit
	// 	+ 0x6cc CommitFailLogged : Pos 21, 1 Bit
	// 	+ 0x6cc ReserveFailLogged : Pos 22, 1 Bit
	// 	+ 0x6cc DisableDynamicCodeAllowRemoteDowngrade : Pos 23, 1 Bit
	// 	+ 0x6cc LoaderIntegrityContinuityEnabled : Pos 24, 1 Bit
	// 	+ 0x6cc LoaderIntegrityContinuityAudit : Pos 25, 1 Bit
	// 	+ 0x6cc ControlFlowGuardExportSuppressionEnabled : Pos 26, 1 Bit
	// 	+ 0x6cc FatalAccessTerminationRequested : Pos 27, 1 Bit
	// 	+ 0x6cc DisableSystemAllowedCpuSet : Pos 28, 1 Bit
	// 	+ 0x6cc ControlFlowGuardStrict : Pos 29, 1 Bit
	// 	+ 0x6d0 DeviceAsid : Int4B
	// 	+ 0x6d8 SvmData : Ptr64 Void
	// 	+ 0x6e0 SvmProcessLock : _EX_PUSH_LOCK
	// 	+ 0x6e8 SvmLock : Uint8B
	// 	+ 0x6f0 SvmProcessDeviceListHead : _LIST_ENTRY
	// 	+ 0x700 LastFreezeInterruptTime : Uint8B
	// 	+ 0x708 DiskCounters : Ptr64 _PROCESS_DISK_COUNTERS
	// 	+ 0x710 PicoContext : Ptr64 Void
	// 	+ 0x718 TrustletIdentity : Uint8B
	// 	+ 0x720 HighPriorityFaultsAllowed : Uint4B
	// 	+ 0x728 EnergyContext : Ptr64 _PO_PROCESS_ENERGY_CONTEXT
	// 	+ 0x730 VmContext : Ptr64 Void
	// 	+ 0x738 SequenceNumber : Uint8B
	// 	+ 0x740 CreateInterruptTime : Uint8B
	// 	+ 0x748 CreateUnbiasedInterruptTime : Uint8B
	// 	+ 0x750 TotalUnbiasedFrozenTime : Uint8B
	// 	+ 0x758 LastAppStateUpdateTime : Uint8B
	// 	+ 0x760 LastAppStateUptime : Pos 0, 61 Bits
	// 	+ 0x760 LastAppState : Pos 61, 3 Bits
	// 	+ 0x768 SharedCommitCharge : Uint8B
	// 	+ 0x770 SharedCommitLock : _EX_PUSH_LOCK
	// 	+ 0x778 SharedCommitLinks : _LIST_ENTRY
	// 	+ 0x788 AllowedCpuSets : Uint8B
	// 	+ 0x790 DefaultCpuSets : Uint8B
	// 	+ 0x788 AllowedCpuSetsIndirect : Ptr64 Uint8B
	// 	+ 0x790 DefaultCpuSetsIndirect : Ptr64 Uint8B
	// 	+ 0x798 DiskIoAttribution : Ptr64 Void
	// 	+ 0x7a0 DxgProcess : Ptr64 Void
	// 	+ 0x7a8 Win32KFilterSet : Uint4B
	// 	+ 0x7b0 ProcessTimerDelay : _PS_INTERLOCKED_TIMER_DELAY_VALUES
	// 	+ 0x7b8 KTimerSets : Uint4B
	// 	+ 0x7bc KTimer2Sets : Uint4B
	// 	+ 0x7c0 ThreadTimerSets : Uint4B
	// 	+ 0x7c8 VirtualTimerListLock : Uint8B
	// 	+ 0x7d0 VirtualTimerListHead : _LIST_ENTRY
	// 	+ 0x7e0 WakeChannel : _WNF_STATE_NAME
	// 	+ 0x7e0 WakeInfo : _PS_PROCESS_WAKE_INFORMATION
	// 	+ 0x810 Flags4 : Uint4B
	// 	+ 0x810 PicoCreated : Pos 0, 1 Bit
	// 	+ 0x810 RestrictSetThreadContext : Pos 1, 1 Bit
	UCHAR Others[0x37C];

}*PMY_EPROCESS, MY_EPROCESS;


typedef struct _MY_ETHREAD_
{
	UCHAR TcbAndOthers[0x6a0];// +0x000 Tcb              : _KTHREAD
	// 	+ 0x5e8 CreateTime : _LARGE_INTEGER
	// 	+ 0x5f0 ExitTime : _LARGE_INTEGER
	// 	+ 0x5f0 KeyedWaitChain : _LIST_ENTRY
	// 	+ 0x600 ChargeOnlySession : Ptr64 Void
	// 	+ 0x608 PostBlockList : _LIST_ENTRY
	// 	+ 0x608 ForwardLinkShadow : Ptr64 Void
	// 	+ 0x610 StartAddress : Ptr64 Void
	// 	+ 0x618 TerminationPort : Ptr64 _TERMINATION_PORT
	// 	+ 0x618 ReaperLink : Ptr64 _ETHREAD
	// 	+ 0x618 KeyedWaitValue : Ptr64 Void
	// 	+ 0x620 ActiveTimerListLock : Uint8B
	// 	+ 0x628 ActiveTimerListHead : _LIST_ENTRY
	// 	+ 0x638 Cid : _CLIENT_ID
	// 	+ 0x648 KeyedWaitSemaphore : _KSEMAPHORE
	// 	+ 0x648 AlpcWaitSemaphore : _KSEMAPHORE
	// 	+ 0x668 ClientSecurity : _PS_CLIENT_SECURITY_CONTEXT
	// 	+ 0x670 IrpList : _LIST_ENTRY
	// 	+ 0x680 TopLevelIrp : Uint8B
	// 	+ 0x688 DeviceToVerify : Ptr64 _DEVICE_OBJECT
	// 	+ 0x690 Win32StartAddress : Ptr64 Void
	// 	+ 0x698 LegacyPowerObject : Ptr64 Void
	LIST_ENTRY ThreadListEntry;// 	+ 0x6a0 ThreadListEntry : _LIST_ENTRY
	// 	+ 0x6b0 RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x6b8 ThreadLock : _EX_PUSH_LOCK
	// 	+ 0x6c0 ReadClusterSize : Uint4B
	// 	+ 0x6c4 MmLockOrdering : Int4B
	// 	+ 0x6c8 CrossThreadFlags : Uint4B
	// 	+ 0x6c8 Terminated : Pos 0, 1 Bit
	// 	+ 0x6c8 ThreadInserted : Pos 1, 1 Bit
	// 	+ 0x6c8 HideFromDebugger : Pos 2, 1 Bit
	// 	+ 0x6c8 ActiveImpersonationInfo : Pos 3, 1 Bit
	// 	+ 0x6c8 HardErrorsAreDisabled : Pos 4, 1 Bit
	// 	+ 0x6c8 BreakOnTermination : Pos 5, 1 Bit
	// 	+ 0x6c8 SkipCreationMsg : Pos 6, 1 Bit
	// 	+ 0x6c8 SkipTerminationMsg : Pos 7, 1 Bit
	// 	+ 0x6c8 CopyTokenOnOpen : Pos 8, 1 Bit
	// 	+ 0x6c8 ThreadIoPriority : Pos 9, 3 Bits
	// 	+ 0x6c8 ThreadPagePriority : Pos 12, 3 Bits
	// 	+ 0x6c8 RundownFail : Pos 15, 1 Bit
	// 	+ 0x6c8 UmsForceQueueTermination : Pos 16, 1 Bit
	// 	+ 0x6c8 IndirectCpuSets : Pos 17, 1 Bit
	// 	+ 0x6c8 DisableDynamicCodeOptOut : Pos 18, 1 Bit
	// 	+ 0x6c8 ExplicitCaseSensitivity : Pos 19, 1 Bit
	// 	+ 0x6c8 PicoNotifyExit : Pos 20, 1 Bit
	// 	+ 0x6c8 DbgWerUserReportActive : Pos 21, 1 Bit
	// 	+ 0x6c8 ReservedCrossThreadFlags : Pos 22, 10 Bits
	// 	+ 0x6cc SameThreadPassiveFlags : Uint4B
	// 	+ 0x6cc ActiveExWorker : Pos 0, 1 Bit
	// 	+ 0x6cc MemoryMaker : Pos 1, 1 Bit
	// 	+ 0x6cc StoreLockThread : Pos 2, 2 Bits
	// 	+ 0x6cc ClonedThread : Pos 4, 1 Bit
	// 	+ 0x6cc KeyedEventInUse : Pos 5, 1 Bit
	// 	+ 0x6cc SelfTerminate : Pos 6, 1 Bit
	// 	+ 0x6cc RespectIoPriority : Pos 7, 1 Bit
	// 	+ 0x6cc ActivePageLists : Pos 8, 1 Bit
	// 	+ 0x6cc ReservedSameThreadPassiveFlags : Pos 9, 23 Bits
	// 	+ 0x6d0 SameThreadApcFlags : Uint4B
	// 	+ 0x6d0 OwnsProcessAddressSpaceExclusive : Pos 0, 1 Bit
	// 	+ 0x6d0 OwnsProcessAddressSpaceShared : Pos 1, 1 Bit
	// 	+ 0x6d0 HardFaultBehavior : Pos 2, 1 Bit
	// 	+ 0x6d0 StartAddressInvalid : Pos 3, 1 Bit
	// 	+ 0x6d0 EtwCalloutActive : Pos 4, 1 Bit
	// 	+ 0x6d0 SuppressSymbolLoad : Pos 5, 1 Bit
	// 	+ 0x6d0 Prefetching : Pos 6, 1 Bit
	// 	+ 0x6d0 OwnsVadExclusive : Pos 7, 1 Bit
	// 	+ 0x6d1 SystemPagePriorityActive : Pos 0, 1 Bit
	// 	+ 0x6d1 SystemPagePriority : Pos 1, 3 Bits
	// 	+ 0x6d4 CacheManagerActive : UChar
	// 	+ 0x6d5 DisablePageFaultClustering : UChar
	// 	+ 0x6d6 ActiveFaultCount : UChar
	// 	+ 0x6d7 LockOrderState : UChar
	// 	+ 0x6d8 AlpcMessageId : Uint8B
	// 	+ 0x6e0 AlpcMessage : Ptr64 Void
	// 	+ 0x6e0 AlpcReceiveAttributeSet : Uint4B
	// 	+ 0x6e8 AlpcWaitListEntry : _LIST_ENTRY
	// 	+ 0x6f8 ExitStatus : Int4B
	// 	+ 0x6fc CacheManagerCount : Uint4B
	// 	+ 0x700 IoBoostCount : Uint4B
	// 	+ 0x704 IoQoSBoostCount : Uint4B
	// 	+ 0x708 IoQoSThrottleCount : Uint4B
	// 	+ 0x710 BoostList : _LIST_ENTRY
	// 	+ 0x720 DeboostList : _LIST_ENTRY
	// 	+ 0x730 BoostListLock : Uint8B
	// 	+ 0x738 IrpListLock : Uint8B
	// 	+ 0x740 ReservedForSynchTracking : Ptr64 Void
	// 	+ 0x748 CmCallbackListHead : _SINGLE_LIST_ENTRY
	// 	+ 0x750 ActivityId : Ptr64 _GUID
	// 	+ 0x758 SeLearningModeListHead : _SINGLE_LIST_ENTRY
	// 	+ 0x760 VerifierContext : Ptr64 Void
	// 	+ 0x768 KernelStackReference : Uint4B
	// 	+ 0x770 AdjustedClientToken : Ptr64 Void
	// 	+ 0x778 WorkOnBehalfThread : Ptr64 Void
	// 	+ 0x780 PropertySet : _PS_PROPERTY_SET
	// 	+ 0x798 PicoContext : Ptr64 Void
	// 	+ 0x7a0 UserFsBase : Uint8B
	// 	+ 0x7a8 UserGsBase : Uint8B
	// 	+ 0x7b0 EnergyValues : Ptr64 _THREAD_ENERGY_VALUES
	// 	+ 0x7b8 CmDbgInfo : Ptr64 Void
	// 	+ 0x7c0 SelectedCpuSets : Uint8B
	// 	+ 0x7c0 SelectedCpuSetsIndirect : Ptr64 Uint8B
	// 	+ 0x7c8 Silo : Ptr64 _EJOB
	// 	+ 0x7d0 ThreadName : Ptr64 _UNICODE_STRING
	// 	+ 0x7d8 SetContextState : Ptr64 _CONTEXT
	// 	+ 0x7e0 LastExpectedRunTime : Uint4B
	// 	+ 0x7e8 OwnerEntryListHead : _LIST_ENTRY
	// 	+ 0x7f8 DisownedOwnerEntryListLock : Uint8B
	// 	+ 0x800 DisownedOwnerEntryListHead : _LIST_ENTRY
}*PMY_ETHREAD, MY_ETHREAD;

typedef struct _MY_KTHREAD
{
	UCHAR HeaderAndOthers[0x1c8];// +0x000 Header           : _DISPATCHER_HEADER
	// 	+ 0x018 SListFaultAddress : Ptr64 Void
	// 	+ 0x020 QuantumTarget : Uint8B
	// 	+ 0x028 InitialStack : Ptr64 Void
	// 	+ 0x030 StackLimit : Ptr64 Void
	// 	+ 0x038 StackBase : Ptr64 Void
	// 	+ 0x040 ThreadLock : Uint8B
	// 	+ 0x048 CycleTime : Uint8B
	// 	+ 0x050 CurrentRunTime : Uint4B
	// 	+ 0x054 ExpectedRunTime : Uint4B
	// 	+ 0x058 KernelStack : Ptr64 Void
	// 	+ 0x060 StateSaveArea : Ptr64 _XSAVE_FORMAT
	// 	+ 0x068 SchedulingGroup : Ptr64 _KSCHEDULING_GROUP
	// 	+ 0x070 WaitRegister : _KWAIT_STATUS_REGISTER
	// 	+ 0x071 Running : UChar
	// 	+ 0x072 Alerted : [2] UChar
	// 	+ 0x074 AutoBoostActive : Pos 0, 1 Bit
	// 	+ 0x074 ReadyTransition : Pos 1, 1 Bit
	// 	+ 0x074 WaitNext : Pos 2, 1 Bit
	// 	+ 0x074 SystemAffinityActive : Pos 3, 1 Bit
	// 	+ 0x074 Alertable : Pos 4, 1 Bit
	// 	+ 0x074 UserStackWalkActive : Pos 5, 1 Bit
	// 	+ 0x074 ApcInterruptRequest : Pos 6, 1 Bit
	// 	+ 0x074 QuantumEndMigrate : Pos 7, 1 Bit
	// 	+ 0x074 UmsDirectedSwitchEnable : Pos 8, 1 Bit
	// 	+ 0x074 TimerActive : Pos 9, 1 Bit
	// 	+ 0x074 SystemThread : Pos 10, 1 Bit
	// 	+ 0x074 ProcessDetachActive : Pos 11, 1 Bit
	// 	+ 0x074 CalloutActive : Pos 12, 1 Bit
	// 	+ 0x074 ScbReadyQueue : Pos 13, 1 Bit
	// 	+ 0x074 ApcQueueable : Pos 14, 1 Bit
	// 	+ 0x074 ReservedStackInUse : Pos 15, 1 Bit
	// 	+ 0x074 UmsPerformingSyscall : Pos 16, 1 Bit
	// 	+ 0x074 TimerSuspended : Pos 17, 1 Bit
	// 	+ 0x074 SuspendedWaitMode : Pos 18, 1 Bit
	// 	+ 0x074 SuspendSchedulerApcWait : Pos 19, 1 Bit
	// 	+ 0x074 Reserved : Pos 20, 12 Bits
	// 	+ 0x074 MiscFlags : Int4B
	// 	+ 0x078 AutoAlignment : Pos 0, 1 Bit
	// 	+ 0x078 DisableBoost : Pos 1, 1 Bit
	// 	+ 0x078 BamEppImportant : Pos 2, 1 Bit
	// 	+ 0x078 AlertedByThreadId : Pos 3, 1 Bit
	// 	+ 0x078 QuantumDonation : Pos 4, 1 Bit
	// 	+ 0x078 EnableStackSwap : Pos 5, 1 Bit
	// 	+ 0x078 GuiThread : Pos 6, 1 Bit
	// 	+ 0x078 DisableQuantum : Pos 7, 1 Bit
	// 	+ 0x078 ChargeOnlySchedulingGroup : Pos 8, 1 Bit
	// 	+ 0x078 DeferPreemption : Pos 9, 1 Bit
	// 	+ 0x078 QueueDeferPreemption : Pos 10, 1 Bit
	// 	+ 0x078 ForceDeferSchedule : Pos 11, 1 Bit
	// 	+ 0x078 SharedReadyQueueAffinity : Pos 12, 1 Bit
	// 	+ 0x078 FreezeCount : Pos 13, 1 Bit
	// 	+ 0x078 TerminationApcRequest : Pos 14, 1 Bit
	// 	+ 0x078 AutoBoostEntriesExhausted : Pos 15, 1 Bit
	// 	+ 0x078 KernelStackResident : Pos 16, 1 Bit
	// 	+ 0x078 TerminateRequestReason : Pos 17, 2 Bits
	// 	+ 0x078 ProcessStackCountDecremented : Pos 19, 1 Bit
	// 	+ 0x078 RestrictedGuiThread : Pos 20, 1 Bit
	// 	+ 0x078 ThreadFlagsSpare : Pos 21, 3 Bits
	// 	+ 0x078 EtwStackTraceApcInserted : Pos 24, 8 Bits
	// 	+ 0x078 ThreadFlags : Int4B
	// 	+ 0x07c Tag : UChar
	// 	+ 0x07d SystemHeteroCpuPolicy : UChar
	// 	+ 0x07e UserHeteroCpuPolicy : Pos 0, 7 Bits
	// 	+ 0x07e ExplicitSystemHeteroCpuPolicy : Pos 7, 1 Bit
	// 	+ 0x07f Spare0 : UChar
	// 	+ 0x080 SystemCallNumber : Uint4B
	// 	+ 0x084 ReadyTime : Uint4B
	// 	+ 0x088 FirstArgument : Ptr64 Void
	// 	+ 0x090 TrapFrame : Ptr64 _KTRAP_FRAME
	// 	+ 0x098 ApcState : _KAPC_STATE
	// 	+ 0x098 ApcStateFill : [43] UChar
	// 	+ 0x0c3 Priority : Char
	// 	+ 0x0c4 UserIdealProcessor : Uint4B
	// 	+ 0x0c8 WaitStatus : Int8B
	// 	+ 0x0d0 WaitBlockList : Ptr64 _KWAIT_BLOCK
	// 	+ 0x0d8 WaitListEntry : _LIST_ENTRY
	// 	+ 0x0d8 SwapListEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x0e8 Queue : Ptr64 _DISPATCHER_HEADER
	// 	+ 0x0f0 Teb : Ptr64 Void
	// 	+ 0x0f8 RelativeTimerBias : Uint8B
	// 	+ 0x100 Timer : _KTIMER
	// 	+ 0x140 WaitBlock : [4] _KWAIT_BLOCK
	// 	+ 0x140 WaitBlockFill4 : [20] UChar
	// 	+ 0x154 ContextSwitches : Uint4B
	// 	+ 0x140 WaitBlockFill5 : [68] UChar
	// 	+ 0x184 State : UChar
	// 	+ 0x185 Spare13 : Char
	// 	+ 0x186 WaitIrql : UChar
	// 	+ 0x187 WaitMode : Char
	// 	+ 0x140 WaitBlockFill6 : [116] UChar
	// 	+ 0x1b4 WaitTime : Uint4B
	// 	+ 0x140 WaitBlockFill7 : [164] UChar
	// 	+ 0x1e4 KernelApcDisable : Int2B
	// 	+ 0x1e6 SpecialApcDisable : Int2B
	// 	+ 0x1e4 CombinedApcDisable : Uint4B
	// 	+ 0x140 WaitBlockFill8 : [40] UChar
	// 	+ 0x168 ThreadCounters : Ptr64 _KTHREAD_COUNTERS
	// 	+ 0x140 WaitBlockFill9 : [88] UChar
	// 	+ 0x198 XStateSave : Ptr64 _XSTATE_SAVE
	// 	+ 0x140 WaitBlockFill10 : [136] UChar
	ULONGLONG Win32Thread;// 	+ 0x1c8 Win32Thread : Ptr64 Void
	// 	+ 0x140 WaitBlockFill11 : [176] UChar
	// 	+ 0x1f0 Ucb : Ptr64 _UMS_CONTROL_BLOCK
	// 	+ 0x1f8 Uch : Ptr64 _KUMS_CONTEXT_HEADER
	// 	+ 0x200 Spare21 : Ptr64 Void
	// 	+ 0x208 QueueListEntry : _LIST_ENTRY
	// 	+ 0x218 NextProcessor : Uint4B
	// 	+ 0x218 NextProcessorNumber : Pos 0, 31 Bits
	// 	+ 0x218 SharedReadyQueue : Pos 31, 1 Bit
	// 	+ 0x21c QueuePriority : Int4B
	// 	+ 0x220 Process : Ptr64 _KPROCESS
	// 	+ 0x228 UserAffinity : _GROUP_AFFINITY
	// 	+ 0x228 UserAffinityFill : [10] UChar
	// 	+ 0x232 PreviousMode : Char
	// 	+ 0x233 BasePriority : Char
	// 	+ 0x234 PriorityDecrement : Char
	// 	+ 0x234 ForegroundBoost : Pos 0, 4 Bits
	// 	+ 0x234 UnusualBoost : Pos 4, 4 Bits
	// 	+ 0x235 Preempted : UChar
	// 	+ 0x236 AdjustReason : UChar
	// 	+ 0x237 AdjustIncrement : Char
	// 	+ 0x238 AffinityVersion : Uint8B
	// 	+ 0x240 Affinity : _GROUP_AFFINITY
	// 	+ 0x240 AffinityFill : [10] UChar
	// 	+ 0x24a ApcStateIndex : UChar
	// 	+ 0x24b WaitBlockCount : UChar
	// 	+ 0x24c IdealProcessor : Uint4B
	// 	+ 0x250 NpxState : Uint8B
	// 	+ 0x258 SavedApcState : _KAPC_STATE
	// 	+ 0x258 SavedApcStateFill : [43] UChar
	// 	+ 0x283 WaitReason : UChar
	// 	+ 0x284 SuspendCount : Char
	// 	+ 0x285 Saturation : Char
	// 	+ 0x286 SListFaultCount : Uint2B
	// 	+ 0x288 SchedulerApc : _KAPC
	// 	+ 0x288 SchedulerApcFill0 : [1] UChar
	// 	+ 0x289 ResourceIndex : UChar
	// 	+ 0x288 SchedulerApcFill1 : [3] UChar
	// 	+ 0x28b QuantumReset : UChar
	// 	+ 0x288 SchedulerApcFill2 : [4] UChar
	// 	+ 0x28c KernelTime : Uint4B
	// 	+ 0x288 SchedulerApcFill3 : [64] UChar
	// 	+ 0x2c8 WaitPrcb : Ptr64 _KPRCB
	// 	+ 0x288 SchedulerApcFill4 : [72] UChar
	// 	+ 0x2d0 LegoData : Ptr64 Void
	// 	+ 0x288 SchedulerApcFill5 : [83] UChar
	// 	+ 0x2db CallbackNestingLevel : UChar
	// 	+ 0x2dc UserTime : Uint4B
	// 	+ 0x2e0 SuspendEvent : _KEVENT
	// 	+ 0x2f8 ThreadListEntry : _LIST_ENTRY
	// 	+ 0x308 MutantListHead : _LIST_ENTRY
	// 	+ 0x318 AbEntrySummary : UChar
	// 	+ 0x319 AbWaitEntryCount : UChar
	// 	+ 0x31a AbAllocationRegionCount : UChar
	// 	+ 0x31b Spare20 : UChar
	// 	+ 0x31c SecureThreadCookie : Uint4B
	// 	+ 0x320 LockEntries : [6] _KLOCK_ENTRY
	// 	+ 0x560 PropagateBoostsEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x568 IoSelfBoostsEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x570 PriorityFloorCounts : [16] UChar
	// 	+ 0x580 PriorityFloorSummary : Uint4B
	// 	+ 0x584 AbCompletedIoBoostCount : Int4B
	// 	+ 0x588 AbCompletedIoQoSBoostCount : Int4B
	// 	+ 0x58c KeReferenceCount : Int2B
	// 	+ 0x58e AbOrphanedEntrySummary : UChar
	// 	+ 0x58f AbOwnedEntryCount : UChar
	// 	+ 0x590 ForegroundLossTime : Uint4B
	// 	+ 0x598 GlobalForegroundListEntry : _LIST_ENTRY
	// 	+ 0x598 ForegroundDpcStackListEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x5a0 InGlobalForegroundList : Uint8B
	// 	+ 0x5a8 ReadOperationCount : Int8B
	// 	+ 0x5b0 WriteOperationCount : Int8B
	// 	+ 0x5b8 OtherOperationCount : Int8B
	// 	+ 0x5c0 ReadTransferCount : Int8B
	// 	+ 0x5c8 WriteTransferCount : Int8B
	// 	+ 0x5d0 OtherTransferCount : Int8B
	// 	+ 0x5d8 QueuedScb : Ptr64 _KSCB
	// 	+ 0x5e0 ThreadTimerDelay : Uint4B
	// 	+ 0x5e4 Spare22 : Int4B
}*PMY_KTHREAD, MY_KTHEAD;