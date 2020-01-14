#pragma once
#include <ntdef.h>

struct _MY_EPROCESS_WIN8_1_X86_
{
	UCHAR PcbAndOthers[0x194];// +0x000 Pcb              : _KPROCESS
	// 	+ 0x0a0 ProcessLock : _EX_PUSH_LOCK
	// 	+ 0x0a8 CreateTime : _LARGE_INTEGER
	// 	+ 0x0b0 RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x0b4 UniqueProcessId : Ptr32 Void
	// 	+ 0x0b8 ActiveProcessLinks : _LIST_ENTRY
	// 	+ 0x0c0 Flags2 : Uint4B
	// 	+ 0x0c0 JobNotReallyActive : Pos 0, 1 Bit
	// 	+ 0x0c0 AccountingFolded : Pos 1, 1 Bit
	// 	+ 0x0c0 NewProcessReported : Pos 2, 1 Bit
	// 	+ 0x0c0 ExitProcessReported : Pos 3, 1 Bit
	// 	+ 0x0c0 ReportCommitChanges : Pos 4, 1 Bit
	// 	+ 0x0c0 LastReportMemory : Pos 5, 1 Bit
	// 	+ 0x0c0 ForceWakeCharge : Pos 6, 1 Bit
	// 	+ 0x0c0 CrossSessionCreate : Pos 7, 1 Bit
	// 	+ 0x0c0 NeedsHandleRundown : Pos 8, 1 Bit
	// 	+ 0x0c0 RefTraceEnabled : Pos 9, 1 Bit
	// 	+ 0x0c0 DisableDynamicCode : Pos 10, 1 Bit
	// 	+ 0x0c0 EmptyJobEvaluated : Pos 11, 1 Bit
	// 	+ 0x0c0 DefaultPagePriority : Pos 12, 3 Bits
	// 	+ 0x0c0 PrimaryTokenFrozen : Pos 15, 1 Bit
	// 	+ 0x0c0 ProcessVerifierTarget : Pos 16, 1 Bit
	// 	+ 0x0c0 StackRandomizationDisabled : Pos 17, 1 Bit
	// 	+ 0x0c0 AffinityPermanent : Pos 18, 1 Bit
	// 	+ 0x0c0 AffinityUpdateEnable : Pos 19, 1 Bit
	// 	+ 0x0c0 PropagateNode : Pos 20, 1 Bit
	// 	+ 0x0c0 ExplicitAffinity : Pos 21, 1 Bit
	// 	+ 0x0c0 ProcessExecutionState : Pos 22, 2 Bits
	// 	+ 0x0c0 DisallowStrippedImages : Pos 24, 1 Bit
	// 	+ 0x0c0 HighEntropyASLREnabled : Pos 25, 1 Bit
	// 	+ 0x0c0 ExtensionPointDisable : Pos 26, 1 Bit
	// 	+ 0x0c0 ForceRelocateImages : Pos 27, 1 Bit
	// 	+ 0x0c0 ProcessStateChangeRequest : Pos 28, 2 Bits
	// 	+ 0x0c0 ProcessStateChangeInProgress : Pos 30, 1 Bit
	// 	+ 0x0c0 DisallowWin32kSystemCalls : Pos 31, 1 Bit
	// 	+ 0x0c4 Flags : Uint4B
	// 	+ 0x0c4 CreateReported : Pos 0, 1 Bit
	// 	+ 0x0c4 NoDebugInherit : Pos 1, 1 Bit
	// 	+ 0x0c4 ProcessExiting : Pos 2, 1 Bit
	// 	+ 0x0c4 ProcessDelete : Pos 3, 1 Bit
	// 	+ 0x0c4 ControlFlowGuardEnabled : Pos 4, 1 Bit
	// 	+ 0x0c4 VmDeleted : Pos 5, 1 Bit
	// 	+ 0x0c4 OutswapEnabled : Pos 6, 1 Bit
	// 	+ 0x0c4 Outswapped : Pos 7, 1 Bit
	// 	+ 0x0c4 ForkFailed : Pos 8, 1 Bit
	// 	+ 0x0c4 Wow64VaSpace4Gb : Pos 9, 1 Bit
	// 	+ 0x0c4 AddressSpaceInitialized : Pos 10, 2 Bits
	// 	+ 0x0c4 SetTimerResolution : Pos 12, 1 Bit
	// 	+ 0x0c4 BreakOnTermination : Pos 13, 1 Bit
	// 	+ 0x0c4 DeprioritizeViews : Pos 14, 1 Bit
	// 	+ 0x0c4 WriteWatch : Pos 15, 1 Bit
	// 	+ 0x0c4 ProcessInSession : Pos 16, 1 Bit
	// 	+ 0x0c4 OverrideAddressSpace : Pos 17, 1 Bit
	// 	+ 0x0c4 HasAddressSpace : Pos 18, 1 Bit
	// 	+ 0x0c4 LaunchPrefetched : Pos 19, 1 Bit
	// 	+ 0x0c4 Background : Pos 20, 1 Bit
	// 	+ 0x0c4 VmTopDown : Pos 21, 1 Bit
	// 	+ 0x0c4 ImageNotifyDone : Pos 22, 1 Bit
	// 	+ 0x0c4 PdeUpdateNeeded : Pos 23, 1 Bit
	// 	+ 0x0c4 VdmAllowed : Pos 24, 1 Bit
	// 	+ 0x0c4 ProcessRundown : Pos 25, 1 Bit
	// 	+ 0x0c4 ProcessInserted : Pos 26, 1 Bit
	// 	+ 0x0c4 DefaultIoPriority : Pos 27, 3 Bits
	// 	+ 0x0c4 ProcessSelfDelete : Pos 30, 1 Bit
	// 	+ 0x0c4 SetTimerResolutionLink : Pos 31, 1 Bit
	// 	+ 0x0c8 ProcessQuotaUsage : [2] Uint4B
	// 	+ 0x0d0 ProcessQuotaPeak : [2] Uint4B
	// 	+ 0x0d8 PeakVirtualSize : Uint4B
	// 	+ 0x0dc VirtualSize : Uint4B
	// 	+ 0x0e0 SessionProcessLinks : _LIST_ENTRY
	// 	+ 0x0e8 ExceptionPortData : Ptr32 Void
	// 	+ 0x0e8 ExceptionPortValue : Uint4B
	// 	+ 0x0e8 ExceptionPortState : Pos 0, 3 Bits
	// 	+ 0x0ec Token : _EX_FAST_REF
	// 	+ 0x0f0 WorkingSetPage : Uint4B
	// 	+ 0x0f4 AddressCreationLock : _EX_PUSH_LOCK
	// 	+ 0x0f8 PageTableCommitmentLock : _EX_PUSH_LOCK
	// 	+ 0x0fc RotateInProgress : Ptr32 _ETHREAD
	// 	+ 0x100 ForkInProgress : Ptr32 _ETHREAD
	// 	+ 0x104 CommitChargeJob : Ptr32 _EJOB
	// 	+ 0x108 CloneRoot : _RTL_AVL_TREE
	// 	+ 0x10c NumberOfPrivatePages : Uint4B
	// 	+ 0x110 NumberOfLockedPages : Uint4B
	// 	+ 0x114 Win32Process : Ptr32 Void
	// 	+ 0x118 Job : Ptr32 _EJOB
	// 	+ 0x11c SectionObject : Ptr32 Void
	// 	+ 0x120 SectionBaseAddress : Ptr32 Void
	// 	+ 0x124 Cookie : Uint4B
	// 	+ 0x128 VdmObjects : Ptr32 Void
	// 	+ 0x12c WorkingSetWatch : Ptr32 _PAGEFAULT_HISTORY
	// 	+ 0x130 Win32WindowStation : Ptr32 Void
	// 	+ 0x134 InheritedFromUniqueProcessId : Ptr32 Void
	// 	+ 0x138 LdtInformation : Ptr32 Void
	// 	+ 0x13c OwnerProcessId : Uint4B
	// 	+ 0x140 Peb : Ptr32 _PEB
	// 	+ 0x144 Session : Ptr32 Void
	// 	+ 0x148 AweInfo : Ptr32 Void
	// 	+ 0x14c QuotaBlock : Ptr32 _EPROCESS_QUOTA_BLOCK
	// 	+ 0x150 ObjectTable : Ptr32 _HANDLE_TABLE
	// 	+ 0x154 DebugPort : Ptr32 Void
	// 	+ 0x158 PaeTop : Ptr32 Void
	// 	+ 0x15c DeviceMap : Ptr32 Void
	// 	+ 0x160 EtwDataSource : Ptr32 Void
	// 	+ 0x168 PageDirectoryPte : Uint8B
	// 	+ 0x170 ImageFileName : [15] UChar
	// 	+ 0x17f PriorityClass : UChar
	// 	+ 0x180 SecurityPort : Ptr32 Void
	// 	+ 0x184 SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
	// 	+ 0x188 JobLinks : _LIST_ENTRY
	// 	+ 0x190 HighestUserAddress : Ptr32 Void
	LIST_ENTRY ThreadListHead; // 	+ 0x194 ThreadListHead : _LIST_ENTRY
	// 	+ 0x19c ActiveThreads : Uint4B
	// 	+ 0x1a0 ImagePathHash : Uint4B
	// 	+ 0x1a4 DefaultHardErrorProcessing : Uint4B
	// 	+ 0x1a8 LastThreadExitStatus : Int4B
	// 	+ 0x1ac PrefetchTrace : _EX_FAST_REF
	// 	+ 0x1b0 LockedPagesList : Ptr32 Void
	// 	+ 0x1b8 ReadOperationCount : _LARGE_INTEGER
	// 	+ 0x1c0 WriteOperationCount : _LARGE_INTEGER
	// 	+ 0x1c8 OtherOperationCount : _LARGE_INTEGER
	// 	+ 0x1d0 ReadTransferCount : _LARGE_INTEGER
	// 	+ 0x1d8 WriteTransferCount : _LARGE_INTEGER
	// 	+ 0x1e0 OtherTransferCount : _LARGE_INTEGER
	// 	+ 0x1e8 CommitChargeLimit : Uint4B
	// 	+ 0x1ec CommitCharge : Uint4B
	// 	+ 0x1f0 CommitChargePeak : Uint4B
	// 	+ 0x1f4 Vm : _MMSUPPORT
	// 	+ 0x264 MmProcessLinks : _LIST_ENTRY
	// 	+ 0x26c ModifiedPageCount : Uint4B
	// 	+ 0x270 ExitStatus : Int4B
	// 	+ 0x274 VadRoot : _RTL_AVL_TREE
	// 	+ 0x278 VadHint : Ptr32 Void
	// 	+ 0x27c VadCount : Uint4B
	// 	+ 0x280 VadPhysicalPages : Uint4B
	// 	+ 0x284 VadPhysicalPagesLimit : Uint4B
	// 	+ 0x288 AlpcContext : _ALPC_PROCESS_CONTEXT
	// 	+ 0x298 TimerResolutionLink : _LIST_ENTRY
	// 	+ 0x2a0 TimerResolutionStackRecord : Ptr32 _PO_DIAG_STACK_RECORD
	// 	+ 0x2a4 RequestedTimerResolution : Uint4B
	// 	+ 0x2a8 SmallestTimerResolution : Uint4B
	// 	+ 0x2b0 ExitTime : _LARGE_INTEGER
	// 	+ 0x2b8 ActiveThreadsHighWatermark : Uint4B
	// 	+ 0x2bc LargePrivateVadCount : Uint4B
	// 	+ 0x2c0 ThreadListLock : _EX_PUSH_LOCK
	// 	+ 0x2c4 WnfContext : Ptr32 Void
	// 	+ 0x2c8 Spare0 : Uint4B
	// 	+ 0x2cc SignatureLevel : UChar
	// 	+ 0x2cd SectionSignatureLevel : UChar
	// 	+ 0x2ce Protection : _PS_PROTECTION
	// 	+ 0x2cf SpareByte20 : [1] UChar
	// 	+ 0x2d0 Flags3 : Uint4B
	// 	+ 0x2d0 Minimal : Pos 0, 1 Bit
	// 	+ 0x2d4 SvmReserved : Int4B
	// 	+ 0x2d8 SvmReserved1 : Ptr32 Void
	// 	+ 0x2dc SvmReserved2 : Uint4B
	// 	+ 0x2e0 LastFreezeInterruptTime : Uint8B
	// 	+ 0x2e8 DiskCounters : Ptr32 _PROCESS_DISK_COUNTERS
	// 	+ 0x2ec KeepAliveCounter : Uint4B
	// 	+ 0x2f0 NoWakeKeepAliveCounter : Uint4B

};

struct _MY_ETHREAD_WIN8_1_X86_
{
	UCHAR TcbAndOthers[0x39c]; // +0x000 Tcb              : _KTHREAD
	// 	+ 0x338 CreateTime : _LARGE_INTEGER
	// 	+ 0x340 ExitTime : _LARGE_INTEGER
	// 	+ 0x340 KeyedWaitChain : _LIST_ENTRY
	// 	+ 0x348 ChargeOnlySession : Ptr32 Void
	// 	+ 0x34c PostBlockList : _LIST_ENTRY
	// 	+ 0x34c ForwardLinkShadow : Ptr32 Void
	// 	+ 0x350 StartAddress : Ptr32 Void
	// 	+ 0x354 TerminationPort : Ptr32 _TERMINATION_PORT
	// 	+ 0x354 ReaperLink : Ptr32 _ETHREAD
	// 	+ 0x354 KeyedWaitValue : Ptr32 Void
	// 	+ 0x358 ActiveTimerListLock : Uint4B
	// 	+ 0x35c ActiveTimerListHead : _LIST_ENTRY
	// 	+ 0x364 Cid : _CLIENT_ID
	// 	+ 0x36c KeyedWaitSemaphore : _KSEMAPHORE
	// 	+ 0x36c AlpcWaitSemaphore : _KSEMAPHORE
	// 	+ 0x380 ClientSecurity : _PS_CLIENT_SECURITY_CONTEXT
	// 	+ 0x384 IrpList : _LIST_ENTRY
	// 	+ 0x38c TopLevelIrp : Uint4B
	// 	+ 0x390 DeviceToVerify : Ptr32 _DEVICE_OBJECT
	// 	+ 0x394 Win32StartAddress : Ptr32 Void
	// 	+ 0x398 LegacyPowerObject : Ptr32 Void
	LIST_ENTRY ThreadListEntry; // 	+ 0x39c ThreadListEntry : _LIST_ENTRY
	// 	+ 0x3a4 RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x3a8 ThreadLock : _EX_PUSH_LOCK
	// 	+ 0x3ac ReadClusterSize : Uint4B
	// 	+ 0x3b0 MmLockOrdering : Int4B
	// 	+ 0x3b4 CmLockOrdering : Int4B
	// 	+ 0x3b8 CrossThreadFlags : Uint4B
	// 	+ 0x3b8 Terminated : Pos 0, 1 Bit
	// 	+ 0x3b8 ThreadInserted : Pos 1, 1 Bit
	// 	+ 0x3b8 HideFromDebugger : Pos 2, 1 Bit
	// 	+ 0x3b8 ActiveImpersonationInfo : Pos 3, 1 Bit
	// 	+ 0x3b8 HardErrorsAreDisabled : Pos 4, 1 Bit
	// 	+ 0x3b8 BreakOnTermination : Pos 5, 1 Bit
	// 	+ 0x3b8 SkipCreationMsg : Pos 6, 1 Bit
	// 	+ 0x3b8 SkipTerminationMsg : Pos 7, 1 Bit
	// 	+ 0x3b8 CopyTokenOnOpen : Pos 8, 1 Bit
	// 	+ 0x3b8 ThreadIoPriority : Pos 9, 3 Bits
	// 	+ 0x3b8 ThreadPagePriority : Pos 12, 3 Bits
	// 	+ 0x3b8 RundownFail : Pos 15, 1 Bit
	// 	+ 0x3b8 UmsForceQueueTermination : Pos 16, 1 Bit
	// 	+ 0x3b8 ReservedCrossThreadFlags : Pos 17, 15 Bits
	// 	+ 0x3bc SameThreadPassiveFlags : Uint4B
	// 	+ 0x3bc ActiveExWorker : Pos 0, 1 Bit
	// 	+ 0x3bc MemoryMaker : Pos 1, 1 Bit
	// 	+ 0x3bc ClonedThread : Pos 2, 1 Bit
	// 	+ 0x3bc KeyedEventInUse : Pos 3, 1 Bit
	// 	+ 0x3bc SelfTerminate : Pos 4, 1 Bit
	// 	+ 0x3c0 SameThreadApcFlags : Uint4B
	// 	+ 0x3c0 HardFaultBehavior : Pos 0, 1 Bit
	// 	+ 0x3c0 StartAddressInvalid : Pos 1, 1 Bit
	// 	+ 0x3c0 EtwCalloutActive : Pos 2, 1 Bit
	// 	+ 0x3c0 OwnsProcessWorkingSetExclusive : Pos 3, 1 Bit
	// 	+ 0x3c0 OwnsProcessWorkingSetShared : Pos 4, 1 Bit
	// 	+ 0x3c0 OwnsSystemCacheWorkingSetExclusive : Pos 5, 1 Bit
	// 	+ 0x3c0 OwnsSystemCacheWorkingSetShared : Pos 6, 1 Bit
	// 	+ 0x3c0 OwnsSessionWorkingSetExclusive : Pos 7, 1 Bit
	// 	+ 0x3c1 OwnsSessionWorkingSetShared : Pos 0, 1 Bit
	// 	+ 0x3c1 OwnsProcessAddressSpaceExclusive : Pos 1, 1 Bit
	// 	+ 0x3c1 OwnsProcessAddressSpaceShared : Pos 2, 1 Bit
	// 	+ 0x3c1 SuppressSymbolLoad : Pos 3, 1 Bit
	// 	+ 0x3c1 Prefetching : Pos 4, 1 Bit
	// 	+ 0x3c1 OwnsVadExclusive : Pos 5, 1 Bit
	// 	+ 0x3c1 OwnsChangeControlAreaExclusive : Pos 6, 1 Bit
	// 	+ 0x3c1 OwnsChangeControlAreaShared : Pos 7, 1 Bit
	// 	+ 0x3c2 OwnsPagedPoolWorkingSetExclusive : Pos 0, 1 Bit
	// 	+ 0x3c2 OwnsPagedPoolWorkingSetShared : Pos 1, 1 Bit
	// 	+ 0x3c2 OwnsSystemPtesWorkingSetExclusive : Pos 2, 1 Bit
	// 	+ 0x3c2 OwnsSystemPtesWorkingSetShared : Pos 3, 1 Bit
	// 	+ 0x3c2 TrimTrigger : Pos 4, 2 Bits
	// 	+ 0x3c2 Spare2 : Pos 6, 2 Bits
	// 	+ 0x3c3 SystemPagePriorityActive : Pos 0, 1 Bit
	// 	+ 0x3c3 SystemPagePriority : Pos 1, 3 Bits
	// 	+ 0x3c3 Spare3 : Pos 4, 4 Bits
	// 	+ 0x3c4 CacheManagerActive : UChar
	// 	+ 0x3c5 DisablePageFaultClustering : UChar
	// 	+ 0x3c6 ActiveFaultCount : UChar
	// 	+ 0x3c7 LockOrderState : UChar
	// 	+ 0x3c8 AlpcMessageId : Uint4B
	// 	+ 0x3cc AlpcMessage : Ptr32 Void
	// 	+ 0x3cc AlpcReceiveAttributeSet : Uint4B
	// 	+ 0x3d0 ExitStatus : Int4B
	// 	+ 0x3d4 AlpcWaitListEntry : _LIST_ENTRY
	// 	+ 0x3dc CacheManagerCount : Uint4B
	// 	+ 0x3e0 IoBoostCount : Uint4B
	// 	+ 0x3e4 BoostList : _LIST_ENTRY
	// 	+ 0x3ec DeboostList : _LIST_ENTRY
	// 	+ 0x3f4 BoostListLock : Uint4B
	// 	+ 0x3f8 IrpListLock : Uint4B
	// 	+ 0x3fc ReservedForSynchTracking : Ptr32 Void
	// 	+ 0x400 CmCallbackListHead : _SINGLE_LIST_ENTRY
	// 	+ 0x404 ActivityId : Ptr32 _GUID
	// 	+ 0x408 SeLearningModeListHead : _SINGLE_LIST_ENTRY
	// 	+ 0x40c VerifierContext : Ptr32 Void
	// 	+ 0x410 KernelStackReference : Uint4B
	// 	+ 0x414 AdjustedClientToken : Ptr32 Void

};

struct _MY_KTHREAD_WIN8_1_X86_
{
	UCHAR HeaderAndOthers[0x124]; // +0x000 Header           : _DISPATCHER_HEADER
	// 	+ 0x010 SListFaultAddress : Ptr32 Void
	// 	+ 0x018 QuantumTarget : Uint8B
	// 	+ 0x020 InitialStack : Ptr32 Void
	// 	+ 0x024 StackLimit : Ptr32 Void
	// 	+ 0x028 StackBase : Ptr32 Void
	// 	+ 0x02c ThreadLock : Uint4B
	// 	+ 0x030 CycleTime : Uint8B
	// 	+ 0x038 HighCycleTime : Uint4B
	// 	+ 0x03c ServiceTable : Ptr32 Void
	// 	+ 0x040 CurrentRunTime : Uint4B
	// 	+ 0x044 ExpectedRunTime : Uint4B
	// 	+ 0x048 KernelStack : Ptr32 Void
	// 	+ 0x04c StateSaveArea : Ptr32 _XSAVE_FORMAT
	// 	+ 0x050 SchedulingGroup : Ptr32 _KSCHEDULING_GROUP
	// 	+ 0x054 WaitRegister : _KWAIT_STATUS_REGISTER
	// 	+ 0x055 Running : UChar
	// 	+ 0x056 Alerted : [2] UChar
	// 	+ 0x058 KernelStackResident : Pos 0, 1 Bit
	// 	+ 0x058 ReadyTransition : Pos 1, 1 Bit
	// 	+ 0x058 ProcessReadyQueue : Pos 2, 1 Bit
	// 	+ 0x058 WaitNext : Pos 3, 1 Bit
	// 	+ 0x058 SystemAffinityActive : Pos 4, 1 Bit
	// 	+ 0x058 Alertable : Pos 5, 1 Bit
	// 	+ 0x058 UserStackWalkActive : Pos 6, 1 Bit
	// 	+ 0x058 ApcInterruptRequest : Pos 7, 1 Bit
	// 	+ 0x058 QuantumEndMigrate : Pos 8, 1 Bit
	// 	+ 0x058 UmsDirectedSwitchEnable : Pos 9, 1 Bit
	// 	+ 0x058 TimerActive : Pos 10, 1 Bit
	// 	+ 0x058 SystemThread : Pos 11, 1 Bit
	// 	+ 0x058 ProcessDetachActive : Pos 12, 1 Bit
	// 	+ 0x058 CalloutActive : Pos 13, 1 Bit
	// 	+ 0x058 ScbReadyQueue : Pos 14, 1 Bit
	// 	+ 0x058 ApcQueueable : Pos 15, 1 Bit
	// 	+ 0x058 ReservedStackInUse : Pos 16, 1 Bit
	// 	+ 0x058 UmsPerformingSyscall : Pos 17, 1 Bit
	// 	+ 0x058 ApcPendingReload : Pos 18, 1 Bit
	// 	+ 0x058 Reserved : Pos 19, 13 Bits
	// 	+ 0x058 MiscFlags : Int4B
	// 	+ 0x05c AutoAlignment : Pos 0, 1 Bit
	// 	+ 0x05c DisableBoost : Pos 1, 1 Bit
	// 	+ 0x05c UserAffinitySet : Pos 2, 1 Bit
	// 	+ 0x05c AlertedByThreadId : Pos 3, 1 Bit
	// 	+ 0x05c QuantumDonation : Pos 4, 1 Bit
	// 	+ 0x05c EnableStackSwap : Pos 5, 1 Bit
	// 	+ 0x05c GuiThread : Pos 6, 1 Bit
	// 	+ 0x05c DisableQuantum : Pos 7, 1 Bit
	// 	+ 0x05c ChargeOnlySchedulingGroup : Pos 8, 1 Bit
	// 	+ 0x05c DeferPreemption : Pos 9, 1 Bit
	// 	+ 0x05c QueueDeferPreemption : Pos 10, 1 Bit
	// 	+ 0x05c ForceDeferSchedule : Pos 11, 1 Bit
	// 	+ 0x05c SharedReadyQueueAffinity : Pos 12, 1 Bit
	// 	+ 0x05c FreezeCount : Pos 13, 1 Bit
	// 	+ 0x05c TerminationApcRequest : Pos 14, 1 Bit
	// 	+ 0x05c AutoBoostEntriesExhausted : Pos 15, 1 Bit
	// 	+ 0x05c EtwStackTraceApcInserted : Pos 16, 8 Bits
	// 	+ 0x05c ReservedFlags : Pos 24, 8 Bits
	// 	+ 0x05c ThreadFlags : Int4B
	// 	+ 0x060 Spare0 : Uint4B
	// 	+ 0x064 SystemCallNumber : Uint4B
	// 	+ 0x068 FirstArgument : Ptr32 Void
	// 	+ 0x06c TrapFrame : Ptr32 _KTRAP_FRAME
	// 	+ 0x070 ApcState : _KAPC_STATE
	// 	+ 0x070 ApcStateFill : [23] UChar
	// 	+ 0x087 Priority : Char
	// 	+ 0x088 UserIdealProcessor : Uint4B
	// 	+ 0x08c ContextSwitches : Uint4B
	// 	+ 0x090 State : UChar
	// 	+ 0x091 NpxState : Char
	// 	+ 0x092 WaitIrql : UChar
	// 	+ 0x093 WaitMode : Char
	// 	+ 0x094 WaitStatus : Int4B
	// 	+ 0x098 WaitBlockList : Ptr32 _KWAIT_BLOCK
	// 	+ 0x09c WaitListEntry : _LIST_ENTRY
	// 	+ 0x09c SwapListEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x0a4 Queue : Ptr32 _DISPATCHER_HEADER
	// 	+ 0x0a8 Teb : Ptr32 Void
	// 	+ 0x0b0 RelativeTimerBias : Uint8B
	// 	+ 0x0b8 Timer : _KTIMER
	// 	+ 0x0e0 WaitBlock : [4] _KWAIT_BLOCK
	// 	+ 0x0e0 WaitBlockFill8 : [20] UChar
	// 	+ 0x0f4 ThreadCounters : Ptr32 _KTHREAD_COUNTERS
	// 	+ 0x0e0 WaitBlockFill9 : [44] UChar
	// 	+ 0x10c XStateSave : Ptr32 _XSTATE_SAVE
	// 	+ 0x0e0 WaitBlockFill10 : [68] UChar
	ULONG_PTR Win32Thread; // 	+ 0x124 Win32Thread : Ptr32 Void
	// 	+ 0x0e0 WaitBlockFill11 : [88] UChar
	// 	+ 0x138 WaitTime : Uint4B
	// 	+ 0x13c KernelApcDisable : Int2B
	// 	+ 0x13e SpecialApcDisable : Int2B
	// 	+ 0x13c CombinedApcDisable : Uint4B
	// 	+ 0x140 QueueListEntry : _LIST_ENTRY
	// 	+ 0x148 NextProcessor : Uint4B
	// 	+ 0x148 NextProcessorNumber : Pos 0, 31 Bits
	// 	+ 0x148 SharedReadyQueue : Pos 31, 1 Bit
	// 	+ 0x14c QueuePriority : Int4B
	// 	+ 0x150 Process : Ptr32 _KPROCESS
	// 	+ 0x154 UserAffinity : _GROUP_AFFINITY
	// 	+ 0x154 UserAffinityFill : [6] UChar
	// 	+ 0x15a PreviousMode : Char
	// 	+ 0x15b BasePriority : Char
	// 	+ 0x15c PriorityDecrement : Char
	// 	+ 0x15c ForegroundBoost : Pos 0, 4 Bits
	// 	+ 0x15c UnusualBoost : Pos 4, 4 Bits
	// 	+ 0x15d Preempted : UChar
	// 	+ 0x15e AdjustReason : UChar
	// 	+ 0x15f AdjustIncrement : Char
	// 	+ 0x160 Affinity : _GROUP_AFFINITY
	// 	+ 0x160 AffinityFill : [6] UChar
	// 	+ 0x166 ApcStateIndex : UChar
	// 	+ 0x167 WaitBlockCount : UChar
	// 	+ 0x168 IdealProcessor : Uint4B
	// 	+ 0x16c ApcStatePointer : [2] Ptr32 _KAPC_STATE
	// 	+ 0x174 SavedApcState : _KAPC_STATE
	// 	+ 0x174 SavedApcStateFill : [23] UChar
	// 	+ 0x18b WaitReason : UChar
	// 	+ 0x18c SuspendCount : Char
	// 	+ 0x18d Saturation : Char
	// 	+ 0x18e SListFaultCount : Uint2B
	// 	+ 0x190 SchedulerApc : _KAPC
	// 	+ 0x190 SchedulerApcFill0 : [1] UChar
	// 	+ 0x191 ResourceIndex : UChar
	// 	+ 0x190 SchedulerApcFill1 : [3] UChar
	// 	+ 0x193 QuantumReset : UChar
	// 	+ 0x190 SchedulerApcFill2 : [4] UChar
	// 	+ 0x194 KernelTime : Uint4B
	// 	+ 0x190 SchedulerApcFill3 : [36] UChar
	// 	+ 0x1b4 WaitPrcb : Ptr32 _KPRCB
	// 	+ 0x190 SchedulerApcFill4 : [40] UChar
	// 	+ 0x1b8 LegoData : Ptr32 Void
	// 	+ 0x190 SchedulerApcFill5 : [47] UChar
	// 	+ 0x1bf CallbackNestingLevel : UChar
	// 	+ 0x1c0 UserTime : Uint4B
	// 	+ 0x1c4 SuspendEvent : _KEVENT
	// 	+ 0x1d4 ThreadListEntry : _LIST_ENTRY
	// 	+ 0x1dc MutantListHead : _LIST_ENTRY
	// 	+ 0x1e4 LockEntriesFreeList : _SINGLE_LIST_ENTRY
	// 	+ 0x1e8 LockEntries : [6] _KLOCK_ENTRY
	// 	+ 0x308 PropagateBoostsEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x30c IoSelfBoostsEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x310 PriorityFloorCounts : [16] UChar
	// 	+ 0x320 PriorityFloorSummary : Uint4B
	// 	+ 0x324 AbCompletedIoBoostCount : Int4B
	// 	+ 0x328 AbReferenceCount : Int2B
	// 	+ 0x32a AbFreeEntryCount : UChar
	// 	+ 0x32b AbWaitEntryCount : UChar
	// 	+ 0x32c ForegroundLossTime : Uint4B
	// 	+ 0x330 GlobalForegroundListEntry : _LIST_ENTRY
	// 	+ 0x330 ForegroundDpcStackListEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x334 InGlobalForegroundList : Uint4B

};
