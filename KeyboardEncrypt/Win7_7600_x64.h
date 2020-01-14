#pragma once
#include <ntdef.h>

struct _MY_EPROCESS_WIN7_7600_X64_
{
	UCHAR PcbAndOthers[0x308]; // +0x000 Pcb              : _KPROCESS
	// 	+ 0x160 ProcessLock : _EX_PUSH_LOCK
	// 	+ 0x168 CreateTime : _LARGE_INTEGER
	// 	+ 0x170 ExitTime : _LARGE_INTEGER
	// 	+ 0x178 RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x180 UniqueProcessId : Ptr64 Void
	// 	+ 0x188 ActiveProcessLinks : _LIST_ENTRY
	// 	+ 0x198 ProcessQuotaUsage : [2] Uint8B
	// 	+ 0x1a8 ProcessQuotaPeak : [2] Uint8B
	// 	+ 0x1b8 CommitCharge : Uint8B
	// 	+ 0x1c0 QuotaBlock : Ptr64 _EPROCESS_QUOTA_BLOCK
	// 	+ 0x1c8 CpuQuotaBlock : Ptr64 _PS_CPU_QUOTA_BLOCK
	// 	+ 0x1d0 PeakVirtualSize : Uint8B
	// 	+ 0x1d8 VirtualSize : Uint8B
	// 	+ 0x1e0 SessionProcessLinks : _LIST_ENTRY
	// 	+ 0x1f0 DebugPort : Ptr64 Void
	// 	+ 0x1f8 ExceptionPortData : Ptr64 Void
	// 	+ 0x1f8 ExceptionPortValue : Uint8B
	// 	+ 0x1f8 ExceptionPortState : Pos 0, 3 Bits
	// 	+ 0x200 ObjectTable : Ptr64 _HANDLE_TABLE
	// 	+ 0x208 Token : _EX_FAST_REF
	// 	+ 0x210 WorkingSetPage : Uint8B
	// 	+ 0x218 AddressCreationLock : _EX_PUSH_LOCK
	// 	+ 0x220 RotateInProgress : Ptr64 _ETHREAD
	// 	+ 0x228 ForkInProgress : Ptr64 _ETHREAD
	// 	+ 0x230 HardwareTrigger : Uint8B
	// 	+ 0x238 PhysicalVadRoot : Ptr64 _MM_AVL_TABLE
	// 	+ 0x240 CloneRoot : Ptr64 Void
	// 	+ 0x248 NumberOfPrivatePages : Uint8B
	// 	+ 0x250 NumberOfLockedPages : Uint8B
	// 	+ 0x258 Win32Process : Ptr64 Void
	// 	+ 0x260 Job : Ptr64 _EJOB
	// 	+ 0x268 SectionObject : Ptr64 Void
	// 	+ 0x270 SectionBaseAddress : Ptr64 Void
	// 	+ 0x278 Cookie : Uint4B
	// 	+ 0x27c UmsScheduledThreads : Uint4B
	// 	+ 0x280 WorkingSetWatch : Ptr64 _PAGEFAULT_HISTORY
	// 	+ 0x288 Win32WindowStation : Ptr64 Void
	// 	+ 0x290 InheritedFromUniqueProcessId : Ptr64 Void
	// 	+ 0x298 LdtInformation : Ptr64 Void
	// 	+ 0x2a0 Spare : Ptr64 Void
	// 	+ 0x2a8 ConsoleHostProcess : Uint8B
	// 	+ 0x2b0 DeviceMap : Ptr64 Void
	// 	+ 0x2b8 EtwDataSource : Ptr64 Void
	// 	+ 0x2c0 FreeTebHint : Ptr64 Void
	// 	+ 0x2c8 FreeUmsTebHint : Ptr64 Void
	// 	+ 0x2d0 PageDirectoryPte : _HARDWARE_PTE
	// 	+ 0x2d0 Filler : Uint8B
	// 	+ 0x2d8 Session : Ptr64 Void
	// 	+ 0x2e0 ImageFileName : [15] UChar
	// 	+ 0x2ef PriorityClass : UChar
	// 	+ 0x2f0 JobLinks : _LIST_ENTRY
	// 	+ 0x300 LockedPagesList : Ptr64 Void
	LIST_ENTRY ThreadListHead; // 	+ 0x308 ThreadListHead : _LIST_ENTRY
	// 	+ 0x318 SecurityPort : Ptr64 Void
	// 	+ 0x320 Wow64Process : Ptr64 Void
	// 	+ 0x328 ActiveThreads : Uint4B
	// 	+ 0x32c ImagePathHash : Uint4B
	// 	+ 0x330 DefaultHardErrorProcessing : Uint4B
	// 	+ 0x334 LastThreadExitStatus : Int4B
	// 	+ 0x338 Peb : Ptr64 _PEB
	// 	+ 0x340 PrefetchTrace : _EX_FAST_REF
	// 	+ 0x348 ReadOperationCount : _LARGE_INTEGER
	// 	+ 0x350 WriteOperationCount : _LARGE_INTEGER
	// 	+ 0x358 OtherOperationCount : _LARGE_INTEGER
	// 	+ 0x360 ReadTransferCount : _LARGE_INTEGER
	// 	+ 0x368 WriteTransferCount : _LARGE_INTEGER
	// 	+ 0x370 OtherTransferCount : _LARGE_INTEGER
	// 	+ 0x378 CommitChargeLimit : Uint8B
	// 	+ 0x380 CommitChargePeak : Uint8B
	// 	+ 0x388 AweInfo : Ptr64 Void
	// 	+ 0x390 SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
	// 	+ 0x398 Vm : _MMSUPPORT
	// 	+ 0x420 MmProcessLinks : _LIST_ENTRY
	// 	+ 0x430 HighestUserAddress : Ptr64 Void
	// 	+ 0x438 ModifiedPageCount : Uint4B
	// 	+ 0x43c Flags2 : Uint4B
	// 	+ 0x43c JobNotReallyActive : Pos 0, 1 Bit
	// 	+ 0x43c AccountingFolded : Pos 1, 1 Bit
	// 	+ 0x43c NewProcessReported : Pos 2, 1 Bit
	// 	+ 0x43c ExitProcessReported : Pos 3, 1 Bit
	// 	+ 0x43c ReportCommitChanges : Pos 4, 1 Bit
	// 	+ 0x43c LastReportMemory : Pos 5, 1 Bit
	// 	+ 0x43c ReportPhysicalPageChanges : Pos 6, 1 Bit
	// 	+ 0x43c HandleTableRundown : Pos 7, 1 Bit
	// 	+ 0x43c NeedsHandleRundown : Pos 8, 1 Bit
	// 	+ 0x43c RefTraceEnabled : Pos 9, 1 Bit
	// 	+ 0x43c NumaAware : Pos 10, 1 Bit
	// 	+ 0x43c ProtectedProcess : Pos 11, 1 Bit
	// 	+ 0x43c DefaultPagePriority : Pos 12, 3 Bits
	// 	+ 0x43c PrimaryTokenFrozen : Pos 15, 1 Bit
	// 	+ 0x43c ProcessVerifierTarget : Pos 16, 1 Bit
	// 	+ 0x43c StackRandomizationDisabled : Pos 17, 1 Bit
	// 	+ 0x43c AffinityPermanent : Pos 18, 1 Bit
	// 	+ 0x43c AffinityUpdateEnable : Pos 19, 1 Bit
	// 	+ 0x43c PropagateNode : Pos 20, 1 Bit
	// 	+ 0x43c ExplicitAffinity : Pos 21, 1 Bit
	// 	+ 0x440 Flags : Uint4B
	// 	+ 0x440 CreateReported : Pos 0, 1 Bit
	// 	+ 0x440 NoDebugInherit : Pos 1, 1 Bit
	// 	+ 0x440 ProcessExiting : Pos 2, 1 Bit
	// 	+ 0x440 ProcessDelete : Pos 3, 1 Bit
	// 	+ 0x440 Wow64SplitPages : Pos 4, 1 Bit
	// 	+ 0x440 VmDeleted : Pos 5, 1 Bit
	// 	+ 0x440 OutswapEnabled : Pos 6, 1 Bit
	// 	+ 0x440 Outswapped : Pos 7, 1 Bit
	// 	+ 0x440 ForkFailed : Pos 8, 1 Bit
	// 	+ 0x440 Wow64VaSpace4Gb : Pos 9, 1 Bit
	// 	+ 0x440 AddressSpaceInitialized : Pos 10, 2 Bits
	// 	+ 0x440 SetTimerResolution : Pos 12, 1 Bit
	// 	+ 0x440 BreakOnTermination : Pos 13, 1 Bit
	// 	+ 0x440 DeprioritizeViews : Pos 14, 1 Bit
	// 	+ 0x440 WriteWatch : Pos 15, 1 Bit
	// 	+ 0x440 ProcessInSession : Pos 16, 1 Bit
	// 	+ 0x440 OverrideAddressSpace : Pos 17, 1 Bit
	// 	+ 0x440 HasAddressSpace : Pos 18, 1 Bit
	// 	+ 0x440 LaunchPrefetched : Pos 19, 1 Bit
	// 	+ 0x440 InjectInpageErrors : Pos 20, 1 Bit
	// 	+ 0x440 VmTopDown : Pos 21, 1 Bit
	// 	+ 0x440 ImageNotifyDone : Pos 22, 1 Bit
	// 	+ 0x440 PdeUpdateNeeded : Pos 23, 1 Bit
	// 	+ 0x440 VdmAllowed : Pos 24, 1 Bit
	// 	+ 0x440 CrossSessionCreate : Pos 25, 1 Bit
	// 	+ 0x440 ProcessInserted : Pos 26, 1 Bit
	// 	+ 0x440 DefaultIoPriority : Pos 27, 3 Bits
	// 	+ 0x440 ProcessSelfDelete : Pos 30, 1 Bit
	// 	+ 0x440 SetTimerResolutionLink : Pos 31, 1 Bit
	// 	+ 0x444 ExitStatus : Int4B
	// 	+ 0x448 VadRoot : _MM_AVL_TABLE
	// 	+ 0x488 AlpcContext : _ALPC_PROCESS_CONTEXT
	// 	+ 0x4a8 TimerResolutionLink : _LIST_ENTRY
	// 	+ 0x4b8 RequestedTimerResolution : Uint4B
	// 	+ 0x4bc ActiveThreadsHighWatermark : Uint4B
	// 	+ 0x4c0 SmallestTimerResolution : Uint4B
	// 	+ 0x4c8 TimerResolutionStackRecord : Ptr64 _PO_DIAG_STACK_RECORD

};

struct _MY_ETHREAD_WIN7_7600_X64_
{
	UCHAR TcbAndOthers[0x420]; // +0x000 Tcb              : _KTHREAD
	// 	+ 0x360 CreateTime : _LARGE_INTEGER
	// 	+ 0x368 ExitTime : _LARGE_INTEGER
	// 	+ 0x368 KeyedWaitChain : _LIST_ENTRY
	// 	+ 0x378 ExitStatus : Int4B
	// 	+ 0x380 PostBlockList : _LIST_ENTRY
	// 	+ 0x380 ForwardLinkShadow : Ptr64 Void
	// 	+ 0x388 StartAddress : Ptr64 Void
	// 	+ 0x390 TerminationPort : Ptr64 _TERMINATION_PORT
	// 	+ 0x390 ReaperLink : Ptr64 _ETHREAD
	// 	+ 0x390 KeyedWaitValue : Ptr64 Void
	// 	+ 0x398 ActiveTimerListLock : Uint8B
	// 	+ 0x3a0 ActiveTimerListHead : _LIST_ENTRY
	// 	+ 0x3b0 Cid : _CLIENT_ID
	// 	+ 0x3c0 KeyedWaitSemaphore : _KSEMAPHORE
	// 	+ 0x3c0 AlpcWaitSemaphore : _KSEMAPHORE
	// 	+ 0x3e0 ClientSecurity : _PS_CLIENT_SECURITY_CONTEXT
	// 	+ 0x3e8 IrpList : _LIST_ENTRY
	// 	+ 0x3f8 TopLevelIrp : Uint8B
	// 	+ 0x400 DeviceToVerify : Ptr64 _DEVICE_OBJECT
	// 	+ 0x408 CpuQuotaApc : Ptr64 _PSP_CPU_QUOTA_APC
	// 	+ 0x410 Win32StartAddress : Ptr64 Void
	// 	+ 0x418 LegacyPowerObject : Ptr64 Void
	LIST_ENTRY ThreadListEntry; // 	+ 0x420 ThreadListEntry : _LIST_ENTRY
	// 	+ 0x430 RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x438 ThreadLock : _EX_PUSH_LOCK
	// 	+ 0x440 ReadClusterSize : Uint4B
	// 	+ 0x444 MmLockOrdering : Int4B
	// 	+ 0x448 CrossThreadFlags : Uint4B
	// 	+ 0x448 Terminated : Pos 0, 1 Bit
	// 	+ 0x448 ThreadInserted : Pos 1, 1 Bit
	// 	+ 0x448 HideFromDebugger : Pos 2, 1 Bit
	// 	+ 0x448 ActiveImpersonationInfo : Pos 3, 1 Bit
	// 	+ 0x448 SystemThread : Pos 4, 1 Bit
	// 	+ 0x448 HardErrorsAreDisabled : Pos 5, 1 Bit
	// 	+ 0x448 BreakOnTermination : Pos 6, 1 Bit
	// 	+ 0x448 SkipCreationMsg : Pos 7, 1 Bit
	// 	+ 0x448 SkipTerminationMsg : Pos 8, 1 Bit
	// 	+ 0x448 CopyTokenOnOpen : Pos 9, 1 Bit
	// 	+ 0x448 ThreadIoPriority : Pos 10, 3 Bits
	// 	+ 0x448 ThreadPagePriority : Pos 13, 3 Bits
	// 	+ 0x448 RundownFail : Pos 16, 1 Bit
	// 	+ 0x448 NeedsWorkingSetAging : Pos 17, 1 Bit
	// 	+ 0x44c SameThreadPassiveFlags : Uint4B
	// 	+ 0x44c ActiveExWorker : Pos 0, 1 Bit
	// 	+ 0x44c ExWorkerCanWaitUser : Pos 1, 1 Bit
	// 	+ 0x44c MemoryMaker : Pos 2, 1 Bit
	// 	+ 0x44c ClonedThread : Pos 3, 1 Bit
	// 	+ 0x44c KeyedEventInUse : Pos 4, 1 Bit
	// 	+ 0x44c RateApcState : Pos 5, 2 Bits
	// 	+ 0x44c SelfTerminate : Pos 7, 1 Bit
	// 	+ 0x450 SameThreadApcFlags : Uint4B
	// 	+ 0x450 Spare : Pos 0, 1 Bit
	// 	+ 0x450 StartAddressInvalid : Pos 1, 1 Bit
	// 	+ 0x450 EtwPageFaultCalloutActive : Pos 2, 1 Bit
	// 	+ 0x450 OwnsProcessWorkingSetExclusive : Pos 3, 1 Bit
	// 	+ 0x450 OwnsProcessWorkingSetShared : Pos 4, 1 Bit
	// 	+ 0x450 OwnsSystemCacheWorkingSetExclusive : Pos 5, 1 Bit
	// 	+ 0x450 OwnsSystemCacheWorkingSetShared : Pos 6, 1 Bit
	// 	+ 0x450 OwnsSessionWorkingSetExclusive : Pos 7, 1 Bit
	// 	+ 0x451 OwnsSessionWorkingSetShared : Pos 0, 1 Bit
	// 	+ 0x451 OwnsProcessAddressSpaceExclusive : Pos 1, 1 Bit
	// 	+ 0x451 OwnsProcessAddressSpaceShared : Pos 2, 1 Bit
	// 	+ 0x451 SuppressSymbolLoad : Pos 3, 1 Bit
	// 	+ 0x451 Prefetching : Pos 4, 1 Bit
	// 	+ 0x451 OwnsDynamicMemoryShared : Pos 5, 1 Bit
	// 	+ 0x451 OwnsChangeControlAreaExclusive : Pos 6, 1 Bit
	// 	+ 0x451 OwnsChangeControlAreaShared : Pos 7, 1 Bit
	// 	+ 0x452 OwnsPagedPoolWorkingSetExclusive : Pos 0, 1 Bit
	// 	+ 0x452 OwnsPagedPoolWorkingSetShared : Pos 1, 1 Bit
	// 	+ 0x452 OwnsSystemPtesWorkingSetExclusive : Pos 2, 1 Bit
	// 	+ 0x452 OwnsSystemPtesWorkingSetShared : Pos 3, 1 Bit
	// 	+ 0x452 TrimTrigger : Pos 4, 2 Bits
	// 	+ 0x452 Spare1 : Pos 6, 2 Bits
	// 	+ 0x453 PriorityRegionActive : UChar
	// 	+ 0x454 CacheManagerActive : UChar
	// 	+ 0x455 DisablePageFaultClustering : UChar
	// 	+ 0x456 ActiveFaultCount : UChar
	// 	+ 0x457 LockOrderState : UChar
	// 	+ 0x458 AlpcMessageId : Uint8B
	// 	+ 0x460 AlpcMessage : Ptr64 Void
	// 	+ 0x460 AlpcReceiveAttributeSet : Uint4B
	// 	+ 0x468 AlpcWaitListEntry : _LIST_ENTRY
	// 	+ 0x478 CacheManagerCount : Uint4B
	// 	+ 0x47c IoBoostCount : Uint4B
	// 	+ 0x480 IrpListLock : Uint8B
	// 	+ 0x488 ReservedForSynchTracking : Ptr64 Void
	// 	+ 0x490 CmCallbackListHead : _SINGLE_LIST_ENTRY

};

struct _MY_KTHREAD_WIN7_7600_X64_
{
	UCHAR HeaderAndOthers[0x270]; // +0x000 Header           : _DISPATCHER_HEADER
	// 	+ 0x018 CycleTime : Uint8B
	// 	+ 0x020 QuantumTarget : Uint8B
	// 	+ 0x028 InitialStack : Ptr64 Void
	// 	+ 0x030 StackLimit : Ptr64 Void
	// 	+ 0x038 KernelStack : Ptr64 Void
	// 	+ 0x040 ThreadLock : Uint8B
	// 	+ 0x048 WaitRegister : _KWAIT_STATUS_REGISTER
	// 	+ 0x049 Running : UChar
	// 	+ 0x04a Alerted : [2] UChar
	// 	+ 0x04c KernelStackResident : Pos 0, 1 Bit
	// 	+ 0x04c ReadyTransition : Pos 1, 1 Bit
	// 	+ 0x04c ProcessReadyQueue : Pos 2, 1 Bit
	// 	+ 0x04c WaitNext : Pos 3, 1 Bit
	// 	+ 0x04c SystemAffinityActive : Pos 4, 1 Bit
	// 	+ 0x04c Alertable : Pos 5, 1 Bit
	// 	+ 0x04c GdiFlushActive : Pos 6, 1 Bit
	// 	+ 0x04c UserStackWalkActive : Pos 7, 1 Bit
	// 	+ 0x04c ApcInterruptRequest : Pos 8, 1 Bit
	// 	+ 0x04c ForceDeferSchedule : Pos 9, 1 Bit
	// 	+ 0x04c QuantumEndMigrate : Pos 10, 1 Bit
	// 	+ 0x04c UmsDirectedSwitchEnable : Pos 11, 1 Bit
	// 	+ 0x04c TimerActive : Pos 12, 1 Bit
	// 	+ 0x04c Reserved : Pos 13, 19 Bits
	// 	+ 0x04c MiscFlags : Int4B
	// 	+ 0x050 ApcState : _KAPC_STATE
	// 	+ 0x050 ApcStateFill : [43] UChar
	// 	+ 0x07b Priority : Char
	// 	+ 0x07c NextProcessor : Uint4B
	// 	+ 0x080 DeferredProcessor : Uint4B
	// 	+ 0x088 ApcQueueLock : Uint8B
	// 	+ 0x090 WaitStatus : Int8B
	// 	+ 0x098 WaitBlockList : Ptr64 _KWAIT_BLOCK
	// 	+ 0x0a0 WaitListEntry : _LIST_ENTRY
	// 	+ 0x0a0 SwapListEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x0b0 Queue : Ptr64 _KQUEUE
	// 	+ 0x0b8 Teb : Ptr64 Void
	// 	+ 0x0c0 Timer : _KTIMER
	// 	+ 0x100 AutoAlignment : Pos 0, 1 Bit
	// 	+ 0x100 DisableBoost : Pos 1, 1 Bit
	// 	+ 0x100 EtwStackTraceApc1Inserted : Pos 2, 1 Bit
	// 	+ 0x100 EtwStackTraceApc2Inserted : Pos 3, 1 Bit
	// 	+ 0x100 CalloutActive : Pos 4, 1 Bit
	// 	+ 0x100 ApcQueueable : Pos 5, 1 Bit
	// 	+ 0x100 EnableStackSwap : Pos 6, 1 Bit
	// 	+ 0x100 GuiThread : Pos 7, 1 Bit
	// 	+ 0x100 UmsPerformingSyscall : Pos 8, 1 Bit
	// 	+ 0x100 ReservedFlags : Pos 9, 23 Bits
	// 	+ 0x100 ThreadFlags : Int4B
	// 	+ 0x104 Spare0 : Uint4B
	// 	+ 0x108 WaitBlock : [4] _KWAIT_BLOCK
	// 	+ 0x108 WaitBlockFill4 : [44] UChar
	// 	+ 0x134 ContextSwitches : Uint4B
	// 	+ 0x108 WaitBlockFill5 : [92] UChar
	// 	+ 0x164 State : UChar
	// 	+ 0x165 NpxState : Char
	// 	+ 0x166 WaitIrql : UChar
	// 	+ 0x167 WaitMode : Char
	// 	+ 0x108 WaitBlockFill6 : [140] UChar
	// 	+ 0x194 WaitTime : Uint4B
	// 	+ 0x108 WaitBlockFill7 : [168] UChar
	// 	+ 0x1b0 TebMappedLowVa : Ptr64 Void
	// 	+ 0x1b8 Ucb : Ptr64 _UMS_CONTROL_BLOCK
	// 	+ 0x108 WaitBlockFill8 : [188] UChar
	// 	+ 0x1c4 KernelApcDisable : Int2B
	// 	+ 0x1c6 SpecialApcDisable : Int2B
	// 	+ 0x1c4 CombinedApcDisable : Uint4B
	// 	+ 0x1c8 QueueListEntry : _LIST_ENTRY
	// 	+ 0x1d8 TrapFrame : Ptr64 _KTRAP_FRAME
	// 	+ 0x1e0 FirstArgument : Ptr64 Void
	// 	+ 0x1e8 CallbackStack : Ptr64 Void
	// 	+ 0x1e8 CallbackDepth : Uint8B
	// 	+ 0x1f0 ApcStateIndex : UChar
	// 	+ 0x1f1 BasePriority : Char
	// 	+ 0x1f2 PriorityDecrement : Char
	// 	+ 0x1f2 ForegroundBoost : Pos 0, 4 Bits
	// 	+ 0x1f2 UnusualBoost : Pos 4, 4 Bits
	// 	+ 0x1f3 Preempted : UChar
	// 	+ 0x1f4 AdjustReason : UChar
	// 	+ 0x1f5 AdjustIncrement : Char
	// 	+ 0x1f6 PreviousMode : Char
	// 	+ 0x1f7 Saturation : Char
	// 	+ 0x1f8 SystemCallNumber : Uint4B
	// 	+ 0x1fc FreezeCount : Uint4B
	// 	+ 0x200 UserAffinity : _GROUP_AFFINITY
	// 	+ 0x210 Process : Ptr64 _KPROCESS
	// 	+ 0x218 Affinity : _GROUP_AFFINITY
	// 	+ 0x228 IdealProcessor : Uint4B
	// 	+ 0x22c UserIdealProcessor : Uint4B
	// 	+ 0x230 ApcStatePointer : [2] Ptr64 _KAPC_STATE
	// 	+ 0x240 SavedApcState : _KAPC_STATE
	// 	+ 0x240 SavedApcStateFill : [43] UChar
	// 	+ 0x26b WaitReason : UChar
	// 	+ 0x26c SuspendCount : Char
	// 	+ 0x26d Spare1 : Char
	// 	+ 0x26e CodePatchInProgress : UChar
	ULONG_PTR Win32Thread; // 	+ 0x270 Win32Thread : Ptr64 Void
	// 	+ 0x278 StackBase : Ptr64 Void
	// 	+ 0x280 SuspendApc : _KAPC
	// 	+ 0x280 SuspendApcFill0 : [1] UChar
	// 	+ 0x281 ResourceIndex : UChar
	// 	+ 0x280 SuspendApcFill1 : [3] UChar
	// 	+ 0x283 QuantumReset : UChar
	// 	+ 0x280 SuspendApcFill2 : [4] UChar
	// 	+ 0x284 KernelTime : Uint4B
	// 	+ 0x280 SuspendApcFill3 : [64] UChar
	// 	+ 0x2c0 WaitPrcb : Ptr64 _KPRCB
	// 	+ 0x280 SuspendApcFill4 : [72] UChar
	// 	+ 0x2c8 LegoData : Ptr64 Void
	// 	+ 0x280 SuspendApcFill5 : [83] UChar
	// 	+ 0x2d3 LargeStack : UChar
	// 	+ 0x2d4 UserTime : Uint4B
	// 	+ 0x2d8 SuspendSemaphore : _KSEMAPHORE
	// 	+ 0x2d8 SuspendSemaphorefill : [28] UChar
	// 	+ 0x2f4 SListFaultCount : Uint4B
	// 	+ 0x2f8 ThreadListEntry : _LIST_ENTRY
	// 	+ 0x308 MutantListHead : _LIST_ENTRY
	// 	+ 0x318 SListFaultAddress : Ptr64 Void
	// 	+ 0x320 ReadOperationCount : Int8B
	// 	+ 0x328 WriteOperationCount : Int8B
	// 	+ 0x330 OtherOperationCount : Int8B
	// 	+ 0x338 ReadTransferCount : Int8B
	// 	+ 0x340 WriteTransferCount : Int8B
	// 	+ 0x348 OtherTransferCount : Int8B
	// 	+ 0x350 ThreadCounters : Ptr64 _KTHREAD_COUNTERS
	// 	+ 0x358 XStateSave : Ptr64 _XSTATE_SAVE

};
