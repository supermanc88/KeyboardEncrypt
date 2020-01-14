#pragma once
#include <ntdef.h>

struct _MY_EPROCESS_WIN8_1_X64_
{
	UCHAR PcbAndOthers[0x470]; // +0x000 Pcb              : _KPROCESS
	// 	+ 0x2c8 ProcessLock : _EX_PUSH_LOCK
	// 	+ 0x2d0 CreateTime : _LARGE_INTEGER
	// 	+ 0x2d8 RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x2e0 UniqueProcessId : Ptr64 Void
	// 	+ 0x2e8 ActiveProcessLinks : _LIST_ENTRY
	// 	+ 0x2f8 Flags2 : Uint4B
	// 	+ 0x2f8 JobNotReallyActive : Pos 0, 1 Bit
	// 	+ 0x2f8 AccountingFolded : Pos 1, 1 Bit
	// 	+ 0x2f8 NewProcessReported : Pos 2, 1 Bit
	// 	+ 0x2f8 ExitProcessReported : Pos 3, 1 Bit
	// 	+ 0x2f8 ReportCommitChanges : Pos 4, 1 Bit
	// 	+ 0x2f8 LastReportMemory : Pos 5, 1 Bit
	// 	+ 0x2f8 ForceWakeCharge : Pos 6, 1 Bit
	// 	+ 0x2f8 CrossSessionCreate : Pos 7, 1 Bit
	// 	+ 0x2f8 NeedsHandleRundown : Pos 8, 1 Bit
	// 	+ 0x2f8 RefTraceEnabled : Pos 9, 1 Bit
	// 	+ 0x2f8 DisableDynamicCode : Pos 10, 1 Bit
	// 	+ 0x2f8 EmptyJobEvaluated : Pos 11, 1 Bit
	// 	+ 0x2f8 DefaultPagePriority : Pos 12, 3 Bits
	// 	+ 0x2f8 PrimaryTokenFrozen : Pos 15, 1 Bit
	// 	+ 0x2f8 ProcessVerifierTarget : Pos 16, 1 Bit
	// 	+ 0x2f8 StackRandomizationDisabled : Pos 17, 1 Bit
	// 	+ 0x2f8 AffinityPermanent : Pos 18, 1 Bit
	// 	+ 0x2f8 AffinityUpdateEnable : Pos 19, 1 Bit
	// 	+ 0x2f8 PropagateNode : Pos 20, 1 Bit
	// 	+ 0x2f8 ExplicitAffinity : Pos 21, 1 Bit
	// 	+ 0x2f8 ProcessExecutionState : Pos 22, 2 Bits
	// 	+ 0x2f8 DisallowStrippedImages : Pos 24, 1 Bit
	// 	+ 0x2f8 HighEntropyASLREnabled : Pos 25, 1 Bit
	// 	+ 0x2f8 ExtensionPointDisable : Pos 26, 1 Bit
	// 	+ 0x2f8 ForceRelocateImages : Pos 27, 1 Bit
	// 	+ 0x2f8 ProcessStateChangeRequest : Pos 28, 2 Bits
	// 	+ 0x2f8 ProcessStateChangeInProgress : Pos 30, 1 Bit
	// 	+ 0x2f8 DisallowWin32kSystemCalls : Pos 31, 1 Bit
	// 	+ 0x2fc Flags : Uint4B
	// 	+ 0x2fc CreateReported : Pos 0, 1 Bit
	// 	+ 0x2fc NoDebugInherit : Pos 1, 1 Bit
	// 	+ 0x2fc ProcessExiting : Pos 2, 1 Bit
	// 	+ 0x2fc ProcessDelete : Pos 3, 1 Bit
	// 	+ 0x2fc ControlFlowGuardEnabled : Pos 4, 1 Bit
	// 	+ 0x2fc VmDeleted : Pos 5, 1 Bit
	// 	+ 0x2fc OutswapEnabled : Pos 6, 1 Bit
	// 	+ 0x2fc Outswapped : Pos 7, 1 Bit
	// 	+ 0x2fc ForkFailed : Pos 8, 1 Bit
	// 	+ 0x2fc Wow64VaSpace4Gb : Pos 9, 1 Bit
	// 	+ 0x2fc AddressSpaceInitialized : Pos 10, 2 Bits
	// 	+ 0x2fc SetTimerResolution : Pos 12, 1 Bit
	// 	+ 0x2fc BreakOnTermination : Pos 13, 1 Bit
	// 	+ 0x2fc DeprioritizeViews : Pos 14, 1 Bit
	// 	+ 0x2fc WriteWatch : Pos 15, 1 Bit
	// 	+ 0x2fc ProcessInSession : Pos 16, 1 Bit
	// 	+ 0x2fc OverrideAddressSpace : Pos 17, 1 Bit
	// 	+ 0x2fc HasAddressSpace : Pos 18, 1 Bit
	// 	+ 0x2fc LaunchPrefetched : Pos 19, 1 Bit
	// 	+ 0x2fc Background : Pos 20, 1 Bit
	// 	+ 0x2fc VmTopDown : Pos 21, 1 Bit
	// 	+ 0x2fc ImageNotifyDone : Pos 22, 1 Bit
	// 	+ 0x2fc PdeUpdateNeeded : Pos 23, 1 Bit
	// 	+ 0x2fc VdmAllowed : Pos 24, 1 Bit
	// 	+ 0x2fc ProcessRundown : Pos 25, 1 Bit
	// 	+ 0x2fc ProcessInserted : Pos 26, 1 Bit
	// 	+ 0x2fc DefaultIoPriority : Pos 27, 3 Bits
	// 	+ 0x2fc ProcessSelfDelete : Pos 30, 1 Bit
	// 	+ 0x2fc SetTimerResolutionLink : Pos 31, 1 Bit
	// 	+ 0x300 ProcessQuotaUsage : [2] Uint8B
	// 	+ 0x310 ProcessQuotaPeak : [2] Uint8B
	// 	+ 0x320 PeakVirtualSize : Uint8B
	// 	+ 0x328 VirtualSize : Uint8B
	// 	+ 0x330 SessionProcessLinks : _LIST_ENTRY
	// 	+ 0x340 ExceptionPortData : Ptr64 Void
	// 	+ 0x340 ExceptionPortValue : Uint8B
	// 	+ 0x340 ExceptionPortState : Pos 0, 3 Bits
	// 	+ 0x348 Token : _EX_FAST_REF
	// 	+ 0x350 WorkingSetPage : Uint8B
	// 	+ 0x358 AddressCreationLock : _EX_PUSH_LOCK
	// 	+ 0x360 PageTableCommitmentLock : _EX_PUSH_LOCK
	// 	+ 0x368 RotateInProgress : Ptr64 _ETHREAD
	// 	+ 0x370 ForkInProgress : Ptr64 _ETHREAD
	// 	+ 0x378 CommitChargeJob : Ptr64 _EJOB
	// 	+ 0x380 CloneRoot : _RTL_AVL_TREE
	// 	+ 0x388 NumberOfPrivatePages : Uint8B
	// 	+ 0x390 NumberOfLockedPages : Uint8B
	// 	+ 0x398 Win32Process : Ptr64 Void
	// 	+ 0x3a0 Job : Ptr64 _EJOB
	// 	+ 0x3a8 SectionObject : Ptr64 Void
	// 	+ 0x3b0 SectionBaseAddress : Ptr64 Void
	// 	+ 0x3b8 Cookie : Uint4B
	// 	+ 0x3c0 WorkingSetWatch : Ptr64 _PAGEFAULT_HISTORY
	// 	+ 0x3c8 Win32WindowStation : Ptr64 Void
	// 	+ 0x3d0 InheritedFromUniqueProcessId : Ptr64 Void
	// 	+ 0x3d8 LdtInformation : Ptr64 Void
	// 	+ 0x3e0 OwnerProcessId : Uint8B
	// 	+ 0x3e8 Peb : Ptr64 _PEB
	// 	+ 0x3f0 Session : Ptr64 Void
	// 	+ 0x3f8 AweInfo : Ptr64 Void
	// 	+ 0x400 QuotaBlock : Ptr64 _EPROCESS_QUOTA_BLOCK
	// 	+ 0x408 ObjectTable : Ptr64 _HANDLE_TABLE
	// 	+ 0x410 DebugPort : Ptr64 Void
	// 	+ 0x418 Wow64Process : Ptr64 Void
	// 	+ 0x420 DeviceMap : Ptr64 Void
	// 	+ 0x428 EtwDataSource : Ptr64 Void
	// 	+ 0x430 PageDirectoryPte : Uint8B
	// 	+ 0x438 ImageFileName : [15] UChar
	// 	+ 0x447 PriorityClass : UChar
	// 	+ 0x448 SecurityPort : Ptr64 Void
	// 	+ 0x450 SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
	// 	+ 0x458 JobLinks : _LIST_ENTRY
	// 	+ 0x468 HighestUserAddress : Ptr64 Void
	LIST_ENTRY ThreadListHead; // 	+ 0x470 ThreadListHead : _LIST_ENTRY
	// 	+ 0x480 ActiveThreads : Uint4B
	// 	+ 0x484 ImagePathHash : Uint4B
	// 	+ 0x488 DefaultHardErrorProcessing : Uint4B
	// 	+ 0x48c LastThreadExitStatus : Int4B
	// 	+ 0x490 PrefetchTrace : _EX_FAST_REF
	// 	+ 0x498 LockedPagesList : Ptr64 Void
	// 	+ 0x4a0 ReadOperationCount : _LARGE_INTEGER
	// 	+ 0x4a8 WriteOperationCount : _LARGE_INTEGER
	// 	+ 0x4b0 OtherOperationCount : _LARGE_INTEGER
	// 	+ 0x4b8 ReadTransferCount : _LARGE_INTEGER
	// 	+ 0x4c0 WriteTransferCount : _LARGE_INTEGER
	// 	+ 0x4c8 OtherTransferCount : _LARGE_INTEGER
	// 	+ 0x4d0 CommitChargeLimit : Uint8B
	// 	+ 0x4d8 CommitCharge : Uint8B
	// 	+ 0x4e0 CommitChargePeak : Uint8B
	// 	+ 0x4e8 Vm : _MMSUPPORT
	// 	+ 0x5c0 MmProcessLinks : _LIST_ENTRY
	// 	+ 0x5d0 ModifiedPageCount : Uint4B
	// 	+ 0x5d4 ExitStatus : Int4B
	// 	+ 0x5d8 VadRoot : _RTL_AVL_TREE
	// 	+ 0x5e0 VadHint : Ptr64 Void
	// 	+ 0x5e8 VadCount : Uint8B
	// 	+ 0x5f0 VadPhysicalPages : Uint8B
	// 	+ 0x5f8 VadPhysicalPagesLimit : Uint8B
	// 	+ 0x600 AlpcContext : _ALPC_PROCESS_CONTEXT
	// 	+ 0x620 TimerResolutionLink : _LIST_ENTRY
	// 	+ 0x630 TimerResolutionStackRecord : Ptr64 _PO_DIAG_STACK_RECORD
	// 	+ 0x638 RequestedTimerResolution : Uint4B
	// 	+ 0x63c SmallestTimerResolution : Uint4B
	// 	+ 0x640 ExitTime : _LARGE_INTEGER
	// 	+ 0x648 InvertedFunctionTable : Ptr64 _INVERTED_FUNCTION_TABLE
	// 	+ 0x650 InvertedFunctionTableLock : _EX_PUSH_LOCK
	// 	+ 0x658 ActiveThreadsHighWatermark : Uint4B
	// 	+ 0x65c LargePrivateVadCount : Uint4B
	// 	+ 0x660 ThreadListLock : _EX_PUSH_LOCK
	// 	+ 0x668 WnfContext : Ptr64 Void
	// 	+ 0x670 Spare0 : Uint8B
	// 	+ 0x678 SignatureLevel : UChar
	// 	+ 0x679 SectionSignatureLevel : UChar
	// 	+ 0x67a Protection : _PS_PROTECTION
	// 	+ 0x67b SpareByte20 : [1] UChar
	// 	+ 0x67c Flags3 : Uint4B
	// 	+ 0x67c Minimal : Pos 0, 1 Bit
	// 	+ 0x680 SvmReserved : Int4B
	// 	+ 0x688 SvmReserved1 : Ptr64 Void
	// 	+ 0x690 SvmReserved2 : Uint8B
	// 	+ 0x698 LastFreezeInterruptTime : Uint8B
	// 	+ 0x6a0 DiskCounters : Ptr64 _PROCESS_DISK_COUNTERS
	// 	+ 0x6a8 PicoContext : Ptr64 Void
	// 	+ 0x6b0 KeepAliveCounter : Uint4B
	// 	+ 0x6b4 NoWakeKeepAliveCounter : Uint4B

};

struct _MY_ETHREAD_WIN8_1_X64_
{
	UCHAR TcbAndOthers[0x688]; // +0x000 Tcb              : _KTHREAD
	// 	+ 0x5d0 CreateTime : _LARGE_INTEGER
	// 	+ 0x5d8 ExitTime : _LARGE_INTEGER
	// 	+ 0x5d8 KeyedWaitChain : _LIST_ENTRY
	// 	+ 0x5e8 ChargeOnlySession : Ptr64 Void
	// 	+ 0x5f0 PostBlockList : _LIST_ENTRY
	// 	+ 0x5f0 ForwardLinkShadow : Ptr64 Void
	// 	+ 0x5f8 StartAddress : Ptr64 Void
	// 	+ 0x600 TerminationPort : Ptr64 _TERMINATION_PORT
	// 	+ 0x600 ReaperLink : Ptr64 _ETHREAD
	// 	+ 0x600 KeyedWaitValue : Ptr64 Void
	// 	+ 0x608 ActiveTimerListLock : Uint8B
	// 	+ 0x610 ActiveTimerListHead : _LIST_ENTRY
	// 	+ 0x620 Cid : _CLIENT_ID
	// 	+ 0x630 KeyedWaitSemaphore : _KSEMAPHORE
	// 	+ 0x630 AlpcWaitSemaphore : _KSEMAPHORE
	// 	+ 0x650 ClientSecurity : _PS_CLIENT_SECURITY_CONTEXT
	// 	+ 0x658 IrpList : _LIST_ENTRY
	// 	+ 0x668 TopLevelIrp : Uint8B
	// 	+ 0x670 DeviceToVerify : Ptr64 _DEVICE_OBJECT
	// 	+ 0x678 Win32StartAddress : Ptr64 Void
	// 	+ 0x680 LegacyPowerObject : Ptr64 Void
	LIST_ENTRY ThreadListEntry; // 	+ 0x688 ThreadListEntry : _LIST_ENTRY
	// 	+ 0x698 RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x6a0 ThreadLock : _EX_PUSH_LOCK
	// 	+ 0x6a8 ReadClusterSize : Uint4B
	// 	+ 0x6ac MmLockOrdering : Int4B
	// 	+ 0x6b0 CmLockOrdering : Int4B
	// 	+ 0x6b4 CrossThreadFlags : Uint4B
	// 	+ 0x6b4 Terminated : Pos 0, 1 Bit
	// 	+ 0x6b4 ThreadInserted : Pos 1, 1 Bit
	// 	+ 0x6b4 HideFromDebugger : Pos 2, 1 Bit
	// 	+ 0x6b4 ActiveImpersonationInfo : Pos 3, 1 Bit
	// 	+ 0x6b4 HardErrorsAreDisabled : Pos 4, 1 Bit
	// 	+ 0x6b4 BreakOnTermination : Pos 5, 1 Bit
	// 	+ 0x6b4 SkipCreationMsg : Pos 6, 1 Bit
	// 	+ 0x6b4 SkipTerminationMsg : Pos 7, 1 Bit
	// 	+ 0x6b4 CopyTokenOnOpen : Pos 8, 1 Bit
	// 	+ 0x6b4 ThreadIoPriority : Pos 9, 3 Bits
	// 	+ 0x6b4 ThreadPagePriority : Pos 12, 3 Bits
	// 	+ 0x6b4 RundownFail : Pos 15, 1 Bit
	// 	+ 0x6b4 UmsForceQueueTermination : Pos 16, 1 Bit
	// 	+ 0x6b4 ReservedCrossThreadFlags : Pos 17, 15 Bits
	// 	+ 0x6b8 SameThreadPassiveFlags : Uint4B
	// 	+ 0x6b8 ActiveExWorker : Pos 0, 1 Bit
	// 	+ 0x6b8 MemoryMaker : Pos 1, 1 Bit
	// 	+ 0x6b8 ClonedThread : Pos 2, 1 Bit
	// 	+ 0x6b8 KeyedEventInUse : Pos 3, 1 Bit
	// 	+ 0x6b8 SelfTerminate : Pos 4, 1 Bit
	// 	+ 0x6bc SameThreadApcFlags : Uint4B
	// 	+ 0x6bc HardFaultBehavior : Pos 0, 1 Bit
	// 	+ 0x6bc StartAddressInvalid : Pos 1, 1 Bit
	// 	+ 0x6bc EtwCalloutActive : Pos 2, 1 Bit
	// 	+ 0x6bc OwnsProcessWorkingSetExclusive : Pos 3, 1 Bit
	// 	+ 0x6bc OwnsProcessWorkingSetShared : Pos 4, 1 Bit
	// 	+ 0x6bc OwnsSystemCacheWorkingSetExclusive : Pos 5, 1 Bit
	// 	+ 0x6bc OwnsSystemCacheWorkingSetShared : Pos 6, 1 Bit
	// 	+ 0x6bc OwnsSessionWorkingSetExclusive : Pos 7, 1 Bit
	// 	+ 0x6bd OwnsSessionWorkingSetShared : Pos 0, 1 Bit
	// 	+ 0x6bd OwnsProcessAddressSpaceExclusive : Pos 1, 1 Bit
	// 	+ 0x6bd OwnsProcessAddressSpaceShared : Pos 2, 1 Bit
	// 	+ 0x6bd SuppressSymbolLoad : Pos 3, 1 Bit
	// 	+ 0x6bd Prefetching : Pos 4, 1 Bit
	// 	+ 0x6bd OwnsVadExclusive : Pos 5, 1 Bit
	// 	+ 0x6bd OwnsChangeControlAreaExclusive : Pos 6, 1 Bit
	// 	+ 0x6bd OwnsChangeControlAreaShared : Pos 7, 1 Bit
	// 	+ 0x6be OwnsPagedPoolWorkingSetExclusive : Pos 0, 1 Bit
	// 	+ 0x6be OwnsPagedPoolWorkingSetShared : Pos 1, 1 Bit
	// 	+ 0x6be OwnsSystemPtesWorkingSetExclusive : Pos 2, 1 Bit
	// 	+ 0x6be OwnsSystemPtesWorkingSetShared : Pos 3, 1 Bit
	// 	+ 0x6be TrimTrigger : Pos 4, 2 Bits
	// 	+ 0x6be Spare2 : Pos 6, 2 Bits
	// 	+ 0x6bf SystemPagePriorityActive : Pos 0, 1 Bit
	// 	+ 0x6bf SystemPagePriority : Pos 1, 3 Bits
	// 	+ 0x6bf Spare3 : Pos 4, 4 Bits
	// 	+ 0x6c0 CacheManagerActive : UChar
	// 	+ 0x6c1 DisablePageFaultClustering : UChar
	// 	+ 0x6c2 ActiveFaultCount : UChar
	// 	+ 0x6c3 LockOrderState : UChar
	// 	+ 0x6c8 AlpcMessageId : Uint8B
	// 	+ 0x6d0 AlpcMessage : Ptr64 Void
	// 	+ 0x6d0 AlpcReceiveAttributeSet : Uint4B
	// 	+ 0x6d8 ExitStatus : Int4B
	// 	+ 0x6e0 AlpcWaitListEntry : _LIST_ENTRY
	// 	+ 0x6f0 CacheManagerCount : Uint4B
	// 	+ 0x6f4 IoBoostCount : Uint4B
	// 	+ 0x6f8 BoostList : _LIST_ENTRY
	// 	+ 0x708 DeboostList : _LIST_ENTRY
	// 	+ 0x718 BoostListLock : Uint8B
	// 	+ 0x720 IrpListLock : Uint8B
	// 	+ 0x728 ReservedForSynchTracking : Ptr64 Void
	// 	+ 0x730 CmCallbackListHead : _SINGLE_LIST_ENTRY
	// 	+ 0x738 ActivityId : Ptr64 _GUID
	// 	+ 0x740 SeLearningModeListHead : _SINGLE_LIST_ENTRY
	// 	+ 0x748 VerifierContext : Ptr64 Void
	// 	+ 0x750 KernelStackReference : Uint4B
	// 	+ 0x758 AdjustedClientToken : Ptr64 Void
	// 	+ 0x760 UserFsBase : Uint4B
	// 	+ 0x768 UserGsBase : Uint8B
	// 	+ 0x770 PicoContext : Ptr64 Void

};

struct _MY_KTHREAD_WIN8_1_X64_
{
	UCHAR HeaderAndOthers[0x1c8]; // +0x000 Header           : _DISPATCHER_HEADER
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
	// 	+ 0x074 KernelStackResident : Pos 0, 1 Bit
	// 	+ 0x074 ReadyTransition : Pos 1, 1 Bit
	// 	+ 0x074 ProcessReadyQueue : Pos 2, 1 Bit
	// 	+ 0x074 WaitNext : Pos 3, 1 Bit
	// 	+ 0x074 SystemAffinityActive : Pos 4, 1 Bit
	// 	+ 0x074 Alertable : Pos 5, 1 Bit
	// 	+ 0x074 UserStackWalkActive : Pos 6, 1 Bit
	// 	+ 0x074 ApcInterruptRequest : Pos 7, 1 Bit
	// 	+ 0x074 QuantumEndMigrate : Pos 8, 1 Bit
	// 	+ 0x074 UmsDirectedSwitchEnable : Pos 9, 1 Bit
	// 	+ 0x074 TimerActive : Pos 10, 1 Bit
	// 	+ 0x074 SystemThread : Pos 11, 1 Bit
	// 	+ 0x074 ProcessDetachActive : Pos 12, 1 Bit
	// 	+ 0x074 CalloutActive : Pos 13, 1 Bit
	// 	+ 0x074 ScbReadyQueue : Pos 14, 1 Bit
	// 	+ 0x074 ApcQueueable : Pos 15, 1 Bit
	// 	+ 0x074 ReservedStackInUse : Pos 16, 1 Bit
	// 	+ 0x074 UmsPerformingSyscall : Pos 17, 1 Bit
	// 	+ 0x074 ApcPendingReload : Pos 18, 1 Bit
	// 	+ 0x074 Reserved : Pos 19, 13 Bits
	// 	+ 0x074 MiscFlags : Int4B
	// 	+ 0x078 AutoAlignment : Pos 0, 1 Bit
	// 	+ 0x078 DisableBoost : Pos 1, 1 Bit
	// 	+ 0x078 UserAffinitySet : Pos 2, 1 Bit
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
	// 	+ 0x078 EtwStackTraceApcInserted : Pos 16, 8 Bits
	// 	+ 0x078 ReservedFlags : Pos 24, 8 Bits
	// 	+ 0x078 ThreadFlags : Int4B
	// 	+ 0x07c Spare0 : Uint4B
	// 	+ 0x080 SystemCallNumber : Uint4B
	// 	+ 0x084 Spare1 : Uint4B
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
	// 	+ 0x185 NpxState : Char
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
	ULONG_PTR Win32Thread; // 	+ 0x1c8 Win32Thread : Ptr64 Void
	// 	+ 0x140 WaitBlockFill11 : [176] UChar
	// 	+ 0x1f0 Ucb : Ptr64 _UMS_CONTROL_BLOCK
	// 	+ 0x1f8 Uch : Ptr64 _KUMS_CONTEXT_HEADER
	// 	+ 0x200 TebMappedLowVa : Ptr64 Void
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
	// 	+ 0x238 Affinity : _GROUP_AFFINITY
	// 	+ 0x238 AffinityFill : [10] UChar
	// 	+ 0x242 ApcStateIndex : UChar
	// 	+ 0x243 WaitBlockCount : UChar
	// 	+ 0x244 IdealProcessor : Uint4B
	// 	+ 0x248 ApcStatePointer : [2] Ptr64 _KAPC_STATE
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
	// 	+ 0x318 LockEntriesFreeList : _SINGLE_LIST_ENTRY
	// 	+ 0x320 LockEntries : [6] _KLOCK_ENTRY
	// 	+ 0x560 PropagateBoostsEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x568 IoSelfBoostsEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x570 PriorityFloorCounts : [16] UChar
	// 	+ 0x580 PriorityFloorSummary : Uint4B
	// 	+ 0x584 AbCompletedIoBoostCount : Int4B
	// 	+ 0x588 AbReferenceCount : Int2B
	// 	+ 0x58a AbFreeEntryCount : UChar
	// 	+ 0x58b AbWaitEntryCount : UChar
	// 	+ 0x58c ForegroundLossTime : Uint4B
	// 	+ 0x590 GlobalForegroundListEntry : _LIST_ENTRY
	// 	+ 0x590 ForegroundDpcStackListEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x598 InGlobalForegroundList : Uint8B
	// 	+ 0x5a0 ReadOperationCount : Int8B
	// 	+ 0x5a8 WriteOperationCount : Int8B
	// 	+ 0x5b0 OtherOperationCount : Int8B
	// 	+ 0x5b8 ReadTransferCount : Int8B
	// 	+ 0x5c0 WriteTransferCount : Int8B
	// 	+ 0x5c8 OtherTransferCount : Int8B

};
