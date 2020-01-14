#pragma once
#include <ntdef.h>

struct _MY_EPROCESS_WIN8_0_X64_
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
	// 	+ 0x2f8 NoWakeCharge : Pos 6, 1 Bit
	// 	+ 0x2f8 HandleTableRundown : Pos 7, 1 Bit
	// 	+ 0x2f8 NeedsHandleRundown : Pos 8, 1 Bit
	// 	+ 0x2f8 RefTraceEnabled : Pos 9, 1 Bit
	// 	+ 0x2f8 NumaAware : Pos 10, 1 Bit
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
	// 	+ 0x2fc Wow64SplitPages : Pos 4, 1 Bit
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
	// 	+ 0x2fc CrossSessionCreate : Pos 25, 1 Bit
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
	// 	+ 0x360 RotateInProgress : Ptr64 _ETHREAD
	// 	+ 0x368 ForkInProgress : Ptr64 _ETHREAD
	// 	+ 0x370 HardwareTrigger : Uint8B
	// 	+ 0x378 CommitChargeJob : Ptr64 _EJOB
	// 	+ 0x380 CloneRoot : Ptr64 _MM_AVL_TABLE
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
	// 	+ 0x3e0 CreatorProcess : Ptr64 _EPROCESS
	// 	+ 0x3e0 ConsoleHostProcess : Uint8B
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
	// 	+ 0x498 LockedPagesList : Ptr64 _MM_AVL_TABLE
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
	// 	+ 0x578 MmProcessLinks : _LIST_ENTRY
	// 	+ 0x588 ModifiedPageCount : Uint4B
	// 	+ 0x58c ExitStatus : Int4B
	// 	+ 0x590 VadRoot : _MM_AVL_TABLE
	// 	+ 0x5c0 VadPhysicalPages : Uint8B
	// 	+ 0x5c8 VadPhysicalPagesLimit : Uint8B
	// 	+ 0x5d0 AlpcContext : _ALPC_PROCESS_CONTEXT
	// 	+ 0x5f0 TimerResolutionLink : _LIST_ENTRY
	// 	+ 0x600 TimerResolutionStackRecord : Ptr64 _PO_DIAG_STACK_RECORD
	// 	+ 0x608 RequestedTimerResolution : Uint4B
	// 	+ 0x60c SmallestTimerResolution : Uint4B
	// 	+ 0x610 ExitTime : _LARGE_INTEGER
	// 	+ 0x618 InvertedFunctionTable : Ptr64 _INVERTED_FUNCTION_TABLE
	// 	+ 0x620 InvertedFunctionTableLock : _EX_PUSH_LOCK
	// 	+ 0x628 ActiveThreadsHighWatermark : Uint4B
	// 	+ 0x62c LargePrivateVadCount : Uint4B
	// 	+ 0x630 ThreadListLock : _EX_PUSH_LOCK
	// 	+ 0x638 WnfContext : Ptr64 Void
	// 	+ 0x640 SectionMappingSize : Uint8B
	// 	+ 0x648 SignatureLevel : UChar
	// 	+ 0x649 SectionSignatureLevel : UChar
	// 	+ 0x64a SpareByte20 : [2] UChar
	// 	+ 0x64c KeepAliveCounter : Uint4B
	// 	+ 0x650 DiskCounters : Ptr64 _PROCESS_DISK_COUNTERS
	// 	+ 0x658 LastFreezeInterruptTime : Uint8B

};

struct _MY_ETHREAD_WIN8_0_X64_
{
	UCHAR TcbAndOthers[0x400]; // +0x000 Tcb              : _KTHREAD
	// 	+ 0x348 CreateTime : _LARGE_INTEGER
	// 	+ 0x350 ExitTime : _LARGE_INTEGER
	// 	+ 0x350 KeyedWaitChain : _LIST_ENTRY
	// 	+ 0x360 ChargeOnlySession : Ptr64 Void
	// 	+ 0x368 PostBlockList : _LIST_ENTRY
	// 	+ 0x368 ForwardLinkShadow : Ptr64 Void
	// 	+ 0x370 StartAddress : Ptr64 Void
	// 	+ 0x378 TerminationPort : Ptr64 _TERMINATION_PORT
	// 	+ 0x378 ReaperLink : Ptr64 _ETHREAD
	// 	+ 0x378 KeyedWaitValue : Ptr64 Void
	// 	+ 0x380 ActiveTimerListLock : Uint8B
	// 	+ 0x388 ActiveTimerListHead : _LIST_ENTRY
	// 	+ 0x398 Cid : _CLIENT_ID
	// 	+ 0x3a8 KeyedWaitSemaphore : _KSEMAPHORE
	// 	+ 0x3a8 AlpcWaitSemaphore : _KSEMAPHORE
	// 	+ 0x3c8 ClientSecurity : _PS_CLIENT_SECURITY_CONTEXT
	// 	+ 0x3d0 IrpList : _LIST_ENTRY
	// 	+ 0x3e0 TopLevelIrp : Uint8B
	// 	+ 0x3e8 DeviceToVerify : Ptr64 _DEVICE_OBJECT
	// 	+ 0x3f0 Win32StartAddress : Ptr64 Void
	// 	+ 0x3f8 LegacyPowerObject : Ptr64 Void
	LIST_ENTRY ThreadListEntry; // 	+ 0x400 ThreadListEntry : _LIST_ENTRY
	// 	+ 0x410 RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x418 ThreadLock : _EX_PUSH_LOCK
	// 	+ 0x420 ReadClusterSize : Uint4B
	// 	+ 0x424 MmLockOrdering : Int4B
	// 	+ 0x428 CmLockOrdering : Int4B
	// 	+ 0x42c CrossThreadFlags : Uint4B
	// 	+ 0x42c Terminated : Pos 0, 1 Bit
	// 	+ 0x42c ThreadInserted : Pos 1, 1 Bit
	// 	+ 0x42c HideFromDebugger : Pos 2, 1 Bit
	// 	+ 0x42c ActiveImpersonationInfo : Pos 3, 1 Bit
	// 	+ 0x42c HardErrorsAreDisabled : Pos 4, 1 Bit
	// 	+ 0x42c BreakOnTermination : Pos 5, 1 Bit
	// 	+ 0x42c SkipCreationMsg : Pos 6, 1 Bit
	// 	+ 0x42c SkipTerminationMsg : Pos 7, 1 Bit
	// 	+ 0x42c CopyTokenOnOpen : Pos 8, 1 Bit
	// 	+ 0x42c ThreadIoPriority : Pos 9, 3 Bits
	// 	+ 0x42c ThreadPagePriority : Pos 12, 3 Bits
	// 	+ 0x42c RundownFail : Pos 15, 1 Bit
	// 	+ 0x42c UmsForceQueueTermination : Pos 16, 1 Bit
	// 	+ 0x42c ReservedCrossThreadFlags : Pos 17, 15 Bits
	// 	+ 0x430 SameThreadPassiveFlags : Uint4B
	// 	+ 0x430 ActiveExWorker : Pos 0, 1 Bit
	// 	+ 0x430 MemoryMaker : Pos 1, 1 Bit
	// 	+ 0x430 ClonedThread : Pos 2, 1 Bit
	// 	+ 0x430 KeyedEventInUse : Pos 3, 1 Bit
	// 	+ 0x430 SelfTerminate : Pos 4, 1 Bit
	// 	+ 0x434 SameThreadApcFlags : Uint4B
	// 	+ 0x434 Spare : Pos 0, 1 Bit
	// 	+ 0x434 StartAddressInvalid : Pos 1, 1 Bit
	// 	+ 0x434 EtwCalloutActive : Pos 2, 1 Bit
	// 	+ 0x434 OwnsProcessWorkingSetExclusive : Pos 3, 1 Bit
	// 	+ 0x434 OwnsProcessWorkingSetShared : Pos 4, 1 Bit
	// 	+ 0x434 OwnsSystemCacheWorkingSetExclusive : Pos 5, 1 Bit
	// 	+ 0x434 OwnsSystemCacheWorkingSetShared : Pos 6, 1 Bit
	// 	+ 0x434 OwnsSessionWorkingSetExclusive : Pos 7, 1 Bit
	// 	+ 0x435 OwnsSessionWorkingSetShared : Pos 0, 1 Bit
	// 	+ 0x435 OwnsProcessAddressSpaceExclusive : Pos 1, 1 Bit
	// 	+ 0x435 OwnsProcessAddressSpaceShared : Pos 2, 1 Bit
	// 	+ 0x435 SuppressSymbolLoad : Pos 3, 1 Bit
	// 	+ 0x435 Prefetching : Pos 4, 1 Bit
	// 	+ 0x435 OwnsVadExclusive : Pos 5, 1 Bit
	// 	+ 0x435 OwnsChangeControlAreaExclusive : Pos 6, 1 Bit
	// 	+ 0x435 OwnsChangeControlAreaShared : Pos 7, 1 Bit
	// 	+ 0x436 OwnsPagedPoolWorkingSetExclusive : Pos 0, 1 Bit
	// 	+ 0x436 OwnsPagedPoolWorkingSetShared : Pos 1, 1 Bit
	// 	+ 0x436 OwnsSystemPtesWorkingSetExclusive : Pos 2, 1 Bit
	// 	+ 0x436 OwnsSystemPtesWorkingSetShared : Pos 3, 1 Bit
	// 	+ 0x436 TrimTrigger : Pos 4, 2 Bits
	// 	+ 0x436 Spare2 : Pos 6, 2 Bits
	// 	+ 0x437 PriorityRegionActive : UChar
	// 	+ 0x438 CacheManagerActive : UChar
	// 	+ 0x439 DisablePageFaultClustering : UChar
	// 	+ 0x43a ActiveFaultCount : UChar
	// 	+ 0x43b LockOrderState : UChar
	// 	+ 0x440 AlpcMessageId : Uint8B
	// 	+ 0x448 AlpcMessage : Ptr64 Void
	// 	+ 0x448 AlpcReceiveAttributeSet : Uint4B
	// 	+ 0x450 ExitStatus : Int4B
	// 	+ 0x458 AlpcWaitListEntry : _LIST_ENTRY
	// 	+ 0x468 CacheManagerCount : Uint4B
	// 	+ 0x46c IoBoostCount : Uint4B
	// 	+ 0x470 BoostList : _LIST_ENTRY
	// 	+ 0x480 DeboostList : _LIST_ENTRY
	// 	+ 0x490 BoostListLock : Uint8B
	// 	+ 0x498 IrpListLock : Uint8B
	// 	+ 0x4a0 ReservedForSynchTracking : Ptr64 Void
	// 	+ 0x4a8 CmCallbackListHead : _SINGLE_LIST_ENTRY
	// 	+ 0x4b0 ActivityId : Ptr64 _GUID
	// 	+ 0x4b8 WnfContext : Ptr64 Void
	// 	+ 0x4c0 KernelStackReference : Uint4B

};

struct _MY_KTHREAD_WIN8_0_X64_
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
	// 	+ 0x074 CodePatchInProgress : Pos 6, 1 Bit
	// 	+ 0x074 UserStackWalkActive : Pos 7, 1 Bit
	// 	+ 0x074 ApcInterruptRequest : Pos 8, 1 Bit
	// 	+ 0x074 QuantumEndMigrate : Pos 9, 1 Bit
	// 	+ 0x074 UmsDirectedSwitchEnable : Pos 10, 1 Bit
	// 	+ 0x074 TimerActive : Pos 11, 1 Bit
	// 	+ 0x074 SystemThread : Pos 12, 1 Bit
	// 	+ 0x074 ProcessDetachActive : Pos 13, 1 Bit
	// 	+ 0x074 CalloutActive : Pos 14, 1 Bit
	// 	+ 0x074 ScbReadyQueue : Pos 15, 1 Bit
	// 	+ 0x074 ApcQueueable : Pos 16, 1 Bit
	// 	+ 0x074 ReservedStackInUse : Pos 17, 1 Bit
	// 	+ 0x074 UmsPerformingSyscall : Pos 18, 1 Bit
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
	// 	+ 0x078 ChargeOnlyGroup : Pos 8, 1 Bit
	// 	+ 0x078 DeferPreemption : Pos 9, 1 Bit
	// 	+ 0x078 QueueDeferPreemption : Pos 10, 1 Bit
	// 	+ 0x078 ForceDeferSchedule : Pos 11, 1 Bit
	// 	+ 0x078 ExplicitIdealProcessor : Pos 12, 1 Bit
	// 	+ 0x078 FreezeCount : Pos 13, 1 Bit
	// 	+ 0x078 EtwStackTraceApcInserted : Pos 14, 8 Bits
	// 	+ 0x078 ReservedFlags : Pos 22, 10 Bits
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
	// 	+ 0x0e8 Queue : Ptr64 _KQUEUE
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
	// 	+ 0x21c DeferredProcessor : Uint4B
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
	// 	+ 0x318 ReadOperationCount : Int8B
	// 	+ 0x320 WriteOperationCount : Int8B
	// 	+ 0x328 OtherOperationCount : Int8B
	// 	+ 0x330 ReadTransferCount : Int8B
	// 	+ 0x338 WriteTransferCount : Int8B
	// 	+ 0x340 OtherTransferCount : Int8B

};
