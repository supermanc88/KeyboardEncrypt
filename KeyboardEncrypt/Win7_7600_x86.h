#pragma once
#include <ntdef.h>

struct _MY_EPROCESS_WIN7_7600_X86_
{
	UCHAR PcbAndOthers[0x188]; // +0x000 Pcb              : _KPROCESS
	// 	+ 0x098 ProcessLock : _EX_PUSH_LOCK
	// 	+ 0x0a0 CreateTime : _LARGE_INTEGER
	// 	+ 0x0a8 ExitTime : _LARGE_INTEGER
	// 	+ 0x0b0 RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x0b4 UniqueProcessId : Ptr32 Void
	// 	+ 0x0b8 ActiveProcessLinks : _LIST_ENTRY
	// 	+ 0x0c0 ProcessQuotaUsage : [2] Uint4B
	// 	+ 0x0c8 ProcessQuotaPeak : [2] Uint4B
	// 	+ 0x0d0 CommitCharge : Uint4B
	// 	+ 0x0d4 QuotaBlock : Ptr32 _EPROCESS_QUOTA_BLOCK
	// 	+ 0x0d8 CpuQuotaBlock : Ptr32 _PS_CPU_QUOTA_BLOCK
	// 	+ 0x0dc PeakVirtualSize : Uint4B
	// 	+ 0x0e0 VirtualSize : Uint4B
	// 	+ 0x0e4 SessionProcessLinks : _LIST_ENTRY
	// 	+ 0x0ec DebugPort : Ptr32 Void
	// 	+ 0x0f0 ExceptionPortData : Ptr32 Void
	// 	+ 0x0f0 ExceptionPortValue : Uint4B
	// 	+ 0x0f0 ExceptionPortState : Pos 0, 3 Bits
	// 	+ 0x0f4 ObjectTable : Ptr32 _HANDLE_TABLE
	// 	+ 0x0f8 Token : _EX_FAST_REF
	// 	+ 0x0fc WorkingSetPage : Uint4B
	// 	+ 0x100 AddressCreationLock : _EX_PUSH_LOCK
	// 	+ 0x104 RotateInProgress : Ptr32 _ETHREAD
	// 	+ 0x108 ForkInProgress : Ptr32 _ETHREAD
	// 	+ 0x10c HardwareTrigger : Uint4B
	// 	+ 0x110 PhysicalVadRoot : Ptr32 _MM_AVL_TABLE
	// 	+ 0x114 CloneRoot : Ptr32 Void
	// 	+ 0x118 NumberOfPrivatePages : Uint4B
	// 	+ 0x11c NumberOfLockedPages : Uint4B
	// 	+ 0x120 Win32Process : Ptr32 Void
	// 	+ 0x124 Job : Ptr32 _EJOB
	// 	+ 0x128 SectionObject : Ptr32 Void
	// 	+ 0x12c SectionBaseAddress : Ptr32 Void
	// 	+ 0x130 Cookie : Uint4B
	// 	+ 0x134 Spare8 : Uint4B
	// 	+ 0x138 WorkingSetWatch : Ptr32 _PAGEFAULT_HISTORY
	// 	+ 0x13c Win32WindowStation : Ptr32 Void
	// 	+ 0x140 InheritedFromUniqueProcessId : Ptr32 Void
	// 	+ 0x144 LdtInformation : Ptr32 Void
	// 	+ 0x148 VdmObjects : Ptr32 Void
	// 	+ 0x14c ConsoleHostProcess : Uint4B
	// 	+ 0x150 DeviceMap : Ptr32 Void
	// 	+ 0x154 EtwDataSource : Ptr32 Void
	// 	+ 0x158 FreeTebHint : Ptr32 Void
	// 	+ 0x160 PageDirectoryPte : _HARDWARE_PTE_X86
	// 	+ 0x160 Filler : Uint8B
	// 	+ 0x168 Session : Ptr32 Void
	// 	+ 0x16c ImageFileName : [15] UChar
	// 	+ 0x17b PriorityClass : UChar
	// 	+ 0x17c JobLinks : _LIST_ENTRY
	// 	+ 0x184 LockedPagesList : Ptr32 Void
	LIST_ENTRY ThreadListHead; // 	+ 0x188 ThreadListHead : _LIST_ENTRY
	// 	+ 0x190 SecurityPort : Ptr32 Void
	// 	+ 0x194 PaeTop : Ptr32 Void
	// 	+ 0x198 ActiveThreads : Uint4B
	// 	+ 0x19c ImagePathHash : Uint4B
	// 	+ 0x1a0 DefaultHardErrorProcessing : Uint4B
	// 	+ 0x1a4 LastThreadExitStatus : Int4B
	// 	+ 0x1a8 Peb : Ptr32 _PEB
	// 	+ 0x1ac PrefetchTrace : _EX_FAST_REF
	// 	+ 0x1b0 ReadOperationCount : _LARGE_INTEGER
	// 	+ 0x1b8 WriteOperationCount : _LARGE_INTEGER
	// 	+ 0x1c0 OtherOperationCount : _LARGE_INTEGER
	// 	+ 0x1c8 ReadTransferCount : _LARGE_INTEGER
	// 	+ 0x1d0 WriteTransferCount : _LARGE_INTEGER
	// 	+ 0x1d8 OtherTransferCount : _LARGE_INTEGER
	// 	+ 0x1e0 CommitChargeLimit : Uint4B
	// 	+ 0x1e4 CommitChargePeak : Uint4B
	// 	+ 0x1e8 AweInfo : Ptr32 Void
	// 	+ 0x1ec SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
	// 	+ 0x1f0 Vm : _MMSUPPORT
	// 	+ 0x25c MmProcessLinks : _LIST_ENTRY
	// 	+ 0x264 HighestUserAddress : Ptr32 Void
	// 	+ 0x268 ModifiedPageCount : Uint4B
	// 	+ 0x26c Flags2 : Uint4B
	// 	+ 0x26c JobNotReallyActive : Pos 0, 1 Bit
	// 	+ 0x26c AccountingFolded : Pos 1, 1 Bit
	// 	+ 0x26c NewProcessReported : Pos 2, 1 Bit
	// 	+ 0x26c ExitProcessReported : Pos 3, 1 Bit
	// 	+ 0x26c ReportCommitChanges : Pos 4, 1 Bit
	// 	+ 0x26c LastReportMemory : Pos 5, 1 Bit
	// 	+ 0x26c ReportPhysicalPageChanges : Pos 6, 1 Bit
	// 	+ 0x26c HandleTableRundown : Pos 7, 1 Bit
	// 	+ 0x26c NeedsHandleRundown : Pos 8, 1 Bit
	// 	+ 0x26c RefTraceEnabled : Pos 9, 1 Bit
	// 	+ 0x26c NumaAware : Pos 10, 1 Bit
	// 	+ 0x26c ProtectedProcess : Pos 11, 1 Bit
	// 	+ 0x26c DefaultPagePriority : Pos 12, 3 Bits
	// 	+ 0x26c PrimaryTokenFrozen : Pos 15, 1 Bit
	// 	+ 0x26c ProcessVerifierTarget : Pos 16, 1 Bit
	// 	+ 0x26c StackRandomizationDisabled : Pos 17, 1 Bit
	// 	+ 0x26c AffinityPermanent : Pos 18, 1 Bit
	// 	+ 0x26c AffinityUpdateEnable : Pos 19, 1 Bit
	// 	+ 0x26c PropagateNode : Pos 20, 1 Bit
	// 	+ 0x26c ExplicitAffinity : Pos 21, 1 Bit
	// 	+ 0x270 Flags : Uint4B
	// 	+ 0x270 CreateReported : Pos 0, 1 Bit
	// 	+ 0x270 NoDebugInherit : Pos 1, 1 Bit
	// 	+ 0x270 ProcessExiting : Pos 2, 1 Bit
	// 	+ 0x270 ProcessDelete : Pos 3, 1 Bit
	// 	+ 0x270 Wow64SplitPages : Pos 4, 1 Bit
	// 	+ 0x270 VmDeleted : Pos 5, 1 Bit
	// 	+ 0x270 OutswapEnabled : Pos 6, 1 Bit
	// 	+ 0x270 Outswapped : Pos 7, 1 Bit
	// 	+ 0x270 ForkFailed : Pos 8, 1 Bit
	// 	+ 0x270 Wow64VaSpace4Gb : Pos 9, 1 Bit
	// 	+ 0x270 AddressSpaceInitialized : Pos 10, 2 Bits
	// 	+ 0x270 SetTimerResolution : Pos 12, 1 Bit
	// 	+ 0x270 BreakOnTermination : Pos 13, 1 Bit
	// 	+ 0x270 DeprioritizeViews : Pos 14, 1 Bit
	// 	+ 0x270 WriteWatch : Pos 15, 1 Bit
	// 	+ 0x270 ProcessInSession : Pos 16, 1 Bit
	// 	+ 0x270 OverrideAddressSpace : Pos 17, 1 Bit
	// 	+ 0x270 HasAddressSpace : Pos 18, 1 Bit
	// 	+ 0x270 LaunchPrefetched : Pos 19, 1 Bit
	// 	+ 0x270 InjectInpageErrors : Pos 20, 1 Bit
	// 	+ 0x270 VmTopDown : Pos 21, 1 Bit
	// 	+ 0x270 ImageNotifyDone : Pos 22, 1 Bit
	// 	+ 0x270 PdeUpdateNeeded : Pos 23, 1 Bit
	// 	+ 0x270 VdmAllowed : Pos 24, 1 Bit
	// 	+ 0x270 CrossSessionCreate : Pos 25, 1 Bit
	// 	+ 0x270 ProcessInserted : Pos 26, 1 Bit
	// 	+ 0x270 DefaultIoPriority : Pos 27, 3 Bits
	// 	+ 0x270 ProcessSelfDelete : Pos 30, 1 Bit
	// 	+ 0x270 SetTimerResolutionLink : Pos 31, 1 Bit
	// 	+ 0x274 ExitStatus : Int4B
	// 	+ 0x278 VadRoot : _MM_AVL_TABLE
	// 	+ 0x298 AlpcContext : _ALPC_PROCESS_CONTEXT
	// 	+ 0x2a8 TimerResolutionLink : _LIST_ENTRY
	// 	+ 0x2b0 RequestedTimerResolution : Uint4B
	// 	+ 0x2b4 ActiveThreadsHighWatermark : Uint4B
	// 	+ 0x2b8 SmallestTimerResolution : Uint4B
	// 	+ 0x2bc TimerResolutionStackRecord : Ptr32 _PO_DIAG_STACK_RECORD

};

struct _MY_ETHREAD_WIN7_7600_X86_
{
	UCHAR TcbAndOthers[0x268]; // 	+ 0x000 Tcb              : _KTHREAD
	// 	+ 0x200 CreateTime : _LARGE_INTEGER
	// 	+ 0x208 ExitTime : _LARGE_INTEGER
	// 	+ 0x208 KeyedWaitChain : _LIST_ENTRY
	// 	+ 0x210 ExitStatus : Int4B
	// 	+ 0x214 PostBlockList : _LIST_ENTRY
	// 	+ 0x214 ForwardLinkShadow : Ptr32 Void
	// 	+ 0x218 StartAddress : Ptr32 Void
	// 	+ 0x21c TerminationPort : Ptr32 _TERMINATION_PORT
	// 	+ 0x21c ReaperLink : Ptr32 _ETHREAD
	// 	+ 0x21c KeyedWaitValue : Ptr32 Void
	// 	+ 0x220 ActiveTimerListLock : Uint4B
	// 	+ 0x224 ActiveTimerListHead : _LIST_ENTRY
	// 	+ 0x22c Cid : _CLIENT_ID
	// 	+ 0x234 KeyedWaitSemaphore : _KSEMAPHORE
	// 	+ 0x234 AlpcWaitSemaphore : _KSEMAPHORE
	// 	+ 0x248 ClientSecurity : _PS_CLIENT_SECURITY_CONTEXT
	// 	+ 0x24c IrpList : _LIST_ENTRY
	// 	+ 0x254 TopLevelIrp : Uint4B
	// 	+ 0x258 DeviceToVerify : Ptr32 _DEVICE_OBJECT
	// 	+ 0x25c CpuQuotaApc : Ptr32 _PSP_CPU_QUOTA_APC
	// 	+ 0x260 Win32StartAddress : Ptr32 Void
	// 	+ 0x264 LegacyPowerObject : Ptr32 Void
	LIST_ENTRY ThreadListEntry; // 	+ 0x268 ThreadListEntry : _LIST_ENTRY
	// 	+ 0x270 RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x274 ThreadLock : _EX_PUSH_LOCK
	// 	+ 0x278 ReadClusterSize : Uint4B
	// 	+ 0x27c MmLockOrdering : Int4B
	// 	+ 0x280 CrossThreadFlags : Uint4B
	// 	+ 0x280 Terminated : Pos 0, 1 Bit
	// 	+ 0x280 ThreadInserted : Pos 1, 1 Bit
	// 	+ 0x280 HideFromDebugger : Pos 2, 1 Bit
	// 	+ 0x280 ActiveImpersonationInfo : Pos 3, 1 Bit
	// 	+ 0x280 SystemThread : Pos 4, 1 Bit
	// 	+ 0x280 HardErrorsAreDisabled : Pos 5, 1 Bit
	// 	+ 0x280 BreakOnTermination : Pos 6, 1 Bit
	// 	+ 0x280 SkipCreationMsg : Pos 7, 1 Bit
	// 	+ 0x280 SkipTerminationMsg : Pos 8, 1 Bit
	// 	+ 0x280 CopyTokenOnOpen : Pos 9, 1 Bit
	// 	+ 0x280 ThreadIoPriority : Pos 10, 3 Bits
	// 	+ 0x280 ThreadPagePriority : Pos 13, 3 Bits
	// 	+ 0x280 RundownFail : Pos 16, 1 Bit
	// 	+ 0x280 NeedsWorkingSetAging : Pos 17, 1 Bit
	// 	+ 0x284 SameThreadPassiveFlags : Uint4B
	// 	+ 0x284 ActiveExWorker : Pos 0, 1 Bit
	// 	+ 0x284 ExWorkerCanWaitUser : Pos 1, 1 Bit
	// 	+ 0x284 MemoryMaker : Pos 2, 1 Bit
	// 	+ 0x284 ClonedThread : Pos 3, 1 Bit
	// 	+ 0x284 KeyedEventInUse : Pos 4, 1 Bit
	// 	+ 0x284 RateApcState : Pos 5, 2 Bits
	// 	+ 0x284 SelfTerminate : Pos 7, 1 Bit
	// 	+ 0x288 SameThreadApcFlags : Uint4B
	// 	+ 0x288 Spare : Pos 0, 1 Bit
	// 	+ 0x288 StartAddressInvalid : Pos 1, 1 Bit
	// 	+ 0x288 EtwPageFaultCalloutActive : Pos 2, 1 Bit
	// 	+ 0x288 OwnsProcessWorkingSetExclusive : Pos 3, 1 Bit
	// 	+ 0x288 OwnsProcessWorkingSetShared : Pos 4, 1 Bit
	// 	+ 0x288 OwnsSystemCacheWorkingSetExclusive : Pos 5, 1 Bit
	// 	+ 0x288 OwnsSystemCacheWorkingSetShared : Pos 6, 1 Bit
	// 	+ 0x288 OwnsSessionWorkingSetExclusive : Pos 7, 1 Bit
	// 	+ 0x289 OwnsSessionWorkingSetShared : Pos 0, 1 Bit
	// 	+ 0x289 OwnsProcessAddressSpaceExclusive : Pos 1, 1 Bit
	// 	+ 0x289 OwnsProcessAddressSpaceShared : Pos 2, 1 Bit
	// 	+ 0x289 SuppressSymbolLoad : Pos 3, 1 Bit
	// 	+ 0x289 Prefetching : Pos 4, 1 Bit
	// 	+ 0x289 OwnsDynamicMemoryShared : Pos 5, 1 Bit
	// 	+ 0x289 OwnsChangeControlAreaExclusive : Pos 6, 1 Bit
	// 	+ 0x289 OwnsChangeControlAreaShared : Pos 7, 1 Bit
	// 	+ 0x28a OwnsPagedPoolWorkingSetExclusive : Pos 0, 1 Bit
	// 	+ 0x28a OwnsPagedPoolWorkingSetShared : Pos 1, 1 Bit
	// 	+ 0x28a OwnsSystemPtesWorkingSetExclusive : Pos 2, 1 Bit
	// 	+ 0x28a OwnsSystemPtesWorkingSetShared : Pos 3, 1 Bit
	// 	+ 0x28a TrimTrigger : Pos 4, 2 Bits
	// 	+ 0x28a Spare1 : Pos 6, 2 Bits
	// 	+ 0x28b PriorityRegionActive : UChar
	// 	+ 0x28c CacheManagerActive : UChar
	// 	+ 0x28d DisablePageFaultClustering : UChar
	// 	+ 0x28e ActiveFaultCount : UChar
	// 	+ 0x28f LockOrderState : UChar
	// 	+ 0x290 AlpcMessageId : Uint4B
	// 	+ 0x294 AlpcMessage : Ptr32 Void
	// 	+ 0x294 AlpcReceiveAttributeSet : Uint4B
	// 	+ 0x298 AlpcWaitListEntry : _LIST_ENTRY
	// 	+ 0x2a0 CacheManagerCount : Uint4B
	// 	+ 0x2a4 IoBoostCount : Uint4B
	// 	+ 0x2a8 IrpListLock : Uint4B
	// 	+ 0x2ac ReservedForSynchTracking : Ptr32 Void
	// 	+ 0x2b0 CmCallbackListHead : _SINGLE_LIST_ENTRY

};

struct _MY_KTHREAD_WIN7_7600_X86_
{
	UCHAR HeaderAndOthers[0x18c]; // +0x000 Header           : _DISPATCHER_HEADER
	// 	+ 0x010 CycleTime : Uint8B
	// 	+ 0x018 HighCycleTime : Uint4B
	// 	+ 0x020 QuantumTarget : Uint8B
	// 	+ 0x028 InitialStack : Ptr32 Void
	// 	+ 0x02c StackLimit : Ptr32 Void
	// 	+ 0x030 KernelStack : Ptr32 Void
	// 	+ 0x034 ThreadLock : Uint4B
	// 	+ 0x038 WaitRegister : _KWAIT_STATUS_REGISTER
	// 	+ 0x039 Running : UChar
	// 	+ 0x03a Alerted : [2] UChar
	// 	+ 0x03c KernelStackResident : Pos 0, 1 Bit
	// 	+ 0x03c ReadyTransition : Pos 1, 1 Bit
	// 	+ 0x03c ProcessReadyQueue : Pos 2, 1 Bit
	// 	+ 0x03c WaitNext : Pos 3, 1 Bit
	// 	+ 0x03c SystemAffinityActive : Pos 4, 1 Bit
	// 	+ 0x03c Alertable : Pos 5, 1 Bit
	// 	+ 0x03c GdiFlushActive : Pos 6, 1 Bit
	// 	+ 0x03c UserStackWalkActive : Pos 7, 1 Bit
	// 	+ 0x03c ApcInterruptRequest : Pos 8, 1 Bit
	// 	+ 0x03c ForceDeferSchedule : Pos 9, 1 Bit
	// 	+ 0x03c QuantumEndMigrate : Pos 10, 1 Bit
	// 	+ 0x03c UmsDirectedSwitchEnable : Pos 11, 1 Bit
	// 	+ 0x03c TimerActive : Pos 12, 1 Bit
	// 	+ 0x03c Reserved : Pos 13, 19 Bits
	// 	+ 0x03c MiscFlags : Int4B
	// 	+ 0x040 ApcState : _KAPC_STATE
	// 	+ 0x040 ApcStateFill : [23] UChar
	// 	+ 0x057 Priority : Char
	// 	+ 0x058 NextProcessor : Uint4B
	// 	+ 0x05c DeferredProcessor : Uint4B
	// 	+ 0x060 ApcQueueLock : Uint4B
	// 	+ 0x064 ContextSwitches : Uint4B
	// 	+ 0x068 State : UChar
	// 	+ 0x069 NpxState : Char
	// 	+ 0x06a WaitIrql : UChar
	// 	+ 0x06b WaitMode : Char
	// 	+ 0x06c WaitStatus : Int4B
	// 	+ 0x070 WaitBlockList : Ptr32 _KWAIT_BLOCK
	// 	+ 0x074 WaitListEntry : _LIST_ENTRY
	// 	+ 0x074 SwapListEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x07c Queue : Ptr32 _KQUEUE
	// 	+ 0x080 WaitTime : Uint4B
	// 	+ 0x084 KernelApcDisable : Int2B
	// 	+ 0x086 SpecialApcDisable : Int2B
	// 	+ 0x084 CombinedApcDisable : Uint4B
	// 	+ 0x088 Teb : Ptr32 Void
	// 	+ 0x090 Timer : _KTIMER
	// 	+ 0x0b8 AutoAlignment : Pos 0, 1 Bit
	// 	+ 0x0b8 DisableBoost : Pos 1, 1 Bit
	// 	+ 0x0b8 EtwStackTraceApc1Inserted : Pos 2, 1 Bit
	// 	+ 0x0b8 EtwStackTraceApc2Inserted : Pos 3, 1 Bit
	// 	+ 0x0b8 CalloutActive : Pos 4, 1 Bit
	// 	+ 0x0b8 ApcQueueable : Pos 5, 1 Bit
	// 	+ 0x0b8 EnableStackSwap : Pos 6, 1 Bit
	// 	+ 0x0b8 GuiThread : Pos 7, 1 Bit
	// 	+ 0x0b8 UmsPerformingSyscall : Pos 8, 1 Bit
	// 	+ 0x0b8 ReservedFlags : Pos 9, 23 Bits
	// 	+ 0x0b8 ThreadFlags : Int4B
	// 	+ 0x0bc ServiceTable : Ptr32 Void
	// 	+ 0x0c0 WaitBlock : [4] _KWAIT_BLOCK
	// 	+ 0x120 QueueListEntry : _LIST_ENTRY
	// 	+ 0x128 TrapFrame : Ptr32 _KTRAP_FRAME
	// 	+ 0x12c FirstArgument : Ptr32 Void
	// 	+ 0x130 CallbackStack : Ptr32 Void
	// 	+ 0x130 CallbackDepth : Uint4B
	// 	+ 0x134 ApcStateIndex : UChar
	// 	+ 0x135 BasePriority : Char
	// 	+ 0x136 PriorityDecrement : Char
	// 	+ 0x136 ForegroundBoost : Pos 0, 4 Bits
	// 	+ 0x136 UnusualBoost : Pos 4, 4 Bits
	// 	+ 0x137 Preempted : UChar
	// 	+ 0x138 AdjustReason : UChar
	// 	+ 0x139 AdjustIncrement : Char
	// 	+ 0x13a PreviousMode : Char
	// 	+ 0x13b Saturation : Char
	// 	+ 0x13c SystemCallNumber : Uint4B
	// 	+ 0x140 FreezeCount : Uint4B
	// 	+ 0x144 UserAffinity : _GROUP_AFFINITY
	// 	+ 0x150 Process : Ptr32 _KPROCESS
	// 	+ 0x154 Affinity : _GROUP_AFFINITY
	// 	+ 0x160 IdealProcessor : Uint4B
	// 	+ 0x164 UserIdealProcessor : Uint4B
	// 	+ 0x168 ApcStatePointer : [2] Ptr32 _KAPC_STATE
	// 	+ 0x170 SavedApcState : _KAPC_STATE
	// 	+ 0x170 SavedApcStateFill : [23] UChar
	// 	+ 0x187 WaitReason : UChar
	// 	+ 0x188 SuspendCount : Char
	// 	+ 0x189 Spare1 : Char
	// 	+ 0x18a OtherPlatformFill : UChar
	ULONG_PTR Win32Thread; // 	+ 0x18c Win32Thread : Ptr32 Void
	// 	+ 0x190 StackBase : Ptr32 Void
	// 	+ 0x194 SuspendApc : _KAPC
	// 	+ 0x194 SuspendApcFill0 : [1] UChar
	// 	+ 0x195 ResourceIndex : UChar
	// 	+ 0x194 SuspendApcFill1 : [3] UChar
	// 	+ 0x197 QuantumReset : UChar
	// 	+ 0x194 SuspendApcFill2 : [4] UChar
	// 	+ 0x198 KernelTime : Uint4B
	// 	+ 0x194 SuspendApcFill3 : [36] UChar
	// 	+ 0x1b8 WaitPrcb : Ptr32 _KPRCB
	// 	+ 0x194 SuspendApcFill4 : [40] UChar
	// 	+ 0x1bc LegoData : Ptr32 Void
	// 	+ 0x194 SuspendApcFill5 : [47] UChar
	// 	+ 0x1c3 LargeStack : UChar
	// 	+ 0x1c4 UserTime : Uint4B
	// 	+ 0x1c8 SuspendSemaphore : _KSEMAPHORE
	// 	+ 0x1c8 SuspendSemaphorefill : [20] UChar
	// 	+ 0x1dc SListFaultCount : Uint4B
	// 	+ 0x1e0 ThreadListEntry : _LIST_ENTRY
	// 	+ 0x1e8 MutantListHead : _LIST_ENTRY
	// 	+ 0x1f0 SListFaultAddress : Ptr32 Void
	// 	+ 0x1f4 ThreadCounters : Ptr32 _KTHREAD_COUNTERS
	// 	+ 0x1f8 XStateSave : Ptr32 _XSTATE_SAVE

};
