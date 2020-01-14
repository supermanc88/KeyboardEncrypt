#pragma once
#include <ntdef.h>

struct _MY_EPROCESS_WIN10_1607_X86_
{
	UCHAR PcbAndOthers[0x198];// +0x000 Pcb              : _KPROCESS
	// 	+ 0x0a8 ProcessLock : _EX_PUSH_LOCK
	// 	+ 0x0ac RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x0b0 VdmObjects : Ptr32 Void
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
	// 	+ 0x0c4 FailFastOnCommitFail : Pos 8, 1 Bit
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
	// 	+ 0x0c8 CreateTime : _LARGE_INTEGER
	// 	+ 0x0d0 ProcessQuotaUsage : [2] Uint4B
	// 	+ 0x0d8 ProcessQuotaPeak : [2] Uint4B
	// 	+ 0x0e0 PeakVirtualSize : Uint4B
	// 	+ 0x0e4 VirtualSize : Uint4B
	// 	+ 0x0e8 SessionProcessLinks : _LIST_ENTRY
	// 	+ 0x0f0 ExceptionPortData : Ptr32 Void
	// 	+ 0x0f0 ExceptionPortValue : Uint4B
	// 	+ 0x0f0 ExceptionPortState : Pos 0, 3 Bits
	// 	+ 0x0f4 Token : _EX_FAST_REF
	// 	+ 0x0f8 WorkingSetPage : Uint4B
	// 	+ 0x0fc AddressCreationLock : _EX_PUSH_LOCK
	// 	+ 0x100 PageTableCommitmentLock : _EX_PUSH_LOCK
	// 	+ 0x104 RotateInProgress : Ptr32 _ETHREAD
	// 	+ 0x108 ForkInProgress : Ptr32 _ETHREAD
	// 	+ 0x10c CommitChargeJob : Ptr32 _EJOB
	// 	+ 0x110 CloneRoot : _RTL_AVL_TREE
	// 	+ 0x114 NumberOfPrivatePages : Uint4B
	// 	+ 0x118 NumberOfLockedPages : Uint4B
	// 	+ 0x11c Win32Process : Ptr32 Void
	// 	+ 0x120 Job : Ptr32 _EJOB
	// 	+ 0x124 SectionObject : Ptr32 Void
	// 	+ 0x128 SectionBaseAddress : Ptr32 Void
	// 	+ 0x12c Cookie : Uint4B
	// 	+ 0x130 WorkingSetWatch : Ptr32 _PAGEFAULT_HISTORY
	// 	+ 0x134 Win32WindowStation : Ptr32 Void
	// 	+ 0x138 InheritedFromUniqueProcessId : Ptr32 Void
	// 	+ 0x13c LdtInformation : Ptr32 Void
	// 	+ 0x140 OwnerProcessId : Uint4B
	// 	+ 0x144 Peb : Ptr32 _PEB
	// 	+ 0x148 Session : Ptr32 _MM_SESSION_SPACE
	// 	+ 0x14c AweInfo : Ptr32 Void
	// 	+ 0x150 QuotaBlock : Ptr32 _EPROCESS_QUOTA_BLOCK
	// 	+ 0x154 ObjectTable : Ptr32 _HANDLE_TABLE
	// 	+ 0x158 DebugPort : Ptr32 Void
	// 	+ 0x15c PaeTop : Ptr32 Void
	// 	+ 0x160 DeviceMap : Ptr32 Void
	// 	+ 0x164 EtwDataSource : Ptr32 Void
	// 	+ 0x168 PageDirectoryPte : Uint8B
	// 	+ 0x170 ImageFilePointer : Ptr32 _FILE_OBJECT
	// 	+ 0x174 ImageFileName : [15] UChar
	// 	+ 0x183 PriorityClass : UChar
	// 	+ 0x184 SecurityPort : Ptr32 Void
	// 	+ 0x188 SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
	// 	+ 0x18c JobLinks : _LIST_ENTRY
	// 	+ 0x194 HighestUserAddress : Ptr32 Void
	LIST_ENTRY ThreadListHead; // 	+ 0x198 ThreadListHead : _LIST_ENTRY
	// 	+ 0x1a0 ActiveThreads : Uint4B
	// 	+ 0x1a4 ImagePathHash : Uint4B
	// 	+ 0x1a8 DefaultHardErrorProcessing : Uint4B
	// 	+ 0x1ac LastThreadExitStatus : Int4B
	// 	+ 0x1b0 PrefetchTrace : _EX_FAST_REF
	// 	+ 0x1b4 LockedPagesList : Ptr32 Void
	// 	+ 0x1b8 ReadOperationCount : _LARGE_INTEGER
	// 	+ 0x1c0 WriteOperationCount : _LARGE_INTEGER
	// 	+ 0x1c8 OtherOperationCount : _LARGE_INTEGER
	// 	+ 0x1d0 ReadTransferCount : _LARGE_INTEGER
	// 	+ 0x1d8 WriteTransferCount : _LARGE_INTEGER
	// 	+ 0x1e0 OtherTransferCount : _LARGE_INTEGER
	// 	+ 0x1e8 CommitChargeLimit : Uint4B
	// 	+ 0x1ec CommitCharge : Uint4B
	// 	+ 0x1f0 CommitChargePeak : Uint4B
	// 	+ 0x1f4 Vm : _MMSUPPORT_FULL
	// 	+ 0x27c MmProcessLinks : _LIST_ENTRY
	// 	+ 0x284 ModifiedPageCount : Uint4B
	// 	+ 0x288 ExitStatus : Int4B
	// 	+ 0x28c VadRoot : _RTL_AVL_TREE
	// 	+ 0x290 VadHint : Ptr32 Void
	// 	+ 0x294 VadCount : Uint4B
	// 	+ 0x298 VadPhysicalPages : Uint4B
	// 	+ 0x29c VadPhysicalPagesLimit : Uint4B
	// 	+ 0x2a0 AlpcContext : _ALPC_PROCESS_CONTEXT
	// 	+ 0x2b0 TimerResolutionLink : _LIST_ENTRY
	// 	+ 0x2b8 TimerResolutionStackRecord : Ptr32 _PO_DIAG_STACK_RECORD
	// 	+ 0x2bc RequestedTimerResolution : Uint4B
	// 	+ 0x2c0 SmallestTimerResolution : Uint4B
	// 	+ 0x2c8 ExitTime : _LARGE_INTEGER
	// 	+ 0x2d0 ActiveThreadsHighWatermark : Uint4B
	// 	+ 0x2d4 LargePrivateVadCount : Uint4B
	// 	+ 0x2d8 ThreadListLock : _EX_PUSH_LOCK
	// 	+ 0x2dc WnfContext : Ptr32 Void
	// 	+ 0x2e0 Spare0 : Uint4B
	// 	+ 0x2e4 SignatureLevel : UChar
	// 	+ 0x2e5 SectionSignatureLevel : UChar
	// 	+ 0x2e6 Protection : _PS_PROTECTION
	// 	+ 0x2e7 HangCount : UChar
	// 	+ 0x2e8 Flags3 : Uint4B
	// 	+ 0x2e8 Minimal : Pos 0, 1 Bit
	// 	+ 0x2e8 ReplacingPageRoot : Pos 1, 1 Bit
	// 	+ 0x2e8 DisableNonSystemFonts : Pos 2, 1 Bit
	// 	+ 0x2e8 AuditNonSystemFontLoading : Pos 3, 1 Bit
	// 	+ 0x2e8 Crashed : Pos 4, 1 Bit
	// 	+ 0x2e8 JobVadsAreTracked : Pos 5, 1 Bit
	// 	+ 0x2e8 VadTrackingDisabled : Pos 6, 1 Bit
	// 	+ 0x2e8 AuxiliaryProcess : Pos 7, 1 Bit
	// 	+ 0x2e8 SubsystemProcess : Pos 8, 1 Bit
	// 	+ 0x2e8 IndirectCpuSets : Pos 9, 1 Bit
	// 	+ 0x2e8 InPrivate : Pos 10, 1 Bit
	// 	+ 0x2e8 ProhibitRemoteImageMap : Pos 11, 1 Bit
	// 	+ 0x2e8 ProhibitLowILImageMap : Pos 12, 1 Bit
	// 	+ 0x2e8 SignatureMitigationOptIn : Pos 13, 1 Bit
	// 	+ 0x2e8 DisableDynamicCodeAllowOptOut : Pos 14, 1 Bit
	// 	+ 0x2e8 EnableFilteredWin32kAPIs : Pos 15, 1 Bit
	// 	+ 0x2e8 AuditFilteredWin32kAPIs : Pos 16, 1 Bit
	// 	+ 0x2e8 PreferSystem32Images : Pos 17, 1 Bit
	// 	+ 0x2e8 RelinquishedCommit : Pos 18, 1 Bit
	// 	+ 0x2e8 AutomaticallyOverrideChildProcessPolicy : Pos 19, 1 Bit
	// 	+ 0x2e8 HighGraphicsPriority : Pos 20, 1 Bit
	// 	+ 0x2e8 CommitFailLogged : Pos 21, 1 Bit
	// 	+ 0x2e8 ReserveFailLogged : Pos 22, 1 Bit
	// 	+ 0x2ec DeviceAsid : Int4B
	// 	+ 0x2f0 SvmData : Ptr32 Void
	// 	+ 0x2f4 SvmProcessLock : _EX_PUSH_LOCK
	// 	+ 0x2f8 SvmLock : Uint4B
	// 	+ 0x2fc SvmProcessDeviceListHead : _LIST_ENTRY
	// 	+ 0x308 LastFreezeInterruptTime : Uint8B
	// 	+ 0x310 DiskCounters : Ptr32 _PROCESS_DISK_COUNTERS
	// 	+ 0x314 PicoContext : Ptr32 Void
	// 	+ 0x318 KeepAliveCounter : Uint4B
	// 	+ 0x31c NoWakeKeepAliveCounter : Uint4B
	// 	+ 0x320 HighPriorityFaultsAllowed : Uint4B
	// 	+ 0x324 InstrumentationCallback : Ptr32 Void
	// 	+ 0x328 EnergyValues : Ptr32 _PROCESS_ENERGY_VALUES
	// 	+ 0x32c VmContext : Ptr32 Void
	// 	+ 0x330 SequenceNumber : Uint8B
	// 	+ 0x338 CreateInterruptTime : Uint8B
	// 	+ 0x340 CreateUnbiasedInterruptTime : Uint8B
	// 	+ 0x348 TotalUnbiasedFrozenTime : Uint8B
	// 	+ 0x350 LastAppStateUpdateTime : Uint8B
	// 	+ 0x358 LastAppStateUptime : Pos 0, 61 Bits
	// 	+ 0x358 LastAppState : Pos 61, 3 Bits
	// 	+ 0x360 SharedCommitCharge : Uint4B
	// 	+ 0x364 SharedCommitLock : _EX_PUSH_LOCK
	// 	+ 0x368 SharedCommitLinks : _LIST_ENTRY
	// 	+ 0x370 AllowedCpuSets : Uint4B
	// 	+ 0x374 DefaultCpuSets : Uint4B
	// 	+ 0x370 AllowedCpuSetsIndirect : Ptr32 Uint4B
	// 	+ 0x374 DefaultCpuSetsIndirect : Ptr32 Uint4B
	// 	+ 0x378 DiskIoAttribution : Ptr32 Void
	// 	+ 0x37c ReadyTime : Uint4B
	// 	+ 0x380 DxgProcess : Ptr32 Void

};

struct _MY_ETHREAD_WIN10_1607_X86_
{
	UCHAR TcbAndOthers[0x3ac]; // +0x000 Tcb              : _KTHREAD
	// 	+ 0x348 CreateTime : _LARGE_INTEGER
	// 	+ 0x350 ExitTime : _LARGE_INTEGER
	// 	+ 0x350 KeyedWaitChain : _LIST_ENTRY
	// 	+ 0x358 ChargeOnlySession : Ptr32 Void
	// 	+ 0x35c PostBlockList : _LIST_ENTRY
	// 	+ 0x35c ForwardLinkShadow : Ptr32 Void
	// 	+ 0x360 StartAddress : Ptr32 Void
	// 	+ 0x364 TerminationPort : Ptr32 _TERMINATION_PORT
	// 	+ 0x364 ReaperLink : Ptr32 _ETHREAD
	// 	+ 0x364 KeyedWaitValue : Ptr32 Void
	// 	+ 0x368 ActiveTimerListLock : Uint4B
	// 	+ 0x36c ActiveTimerListHead : _LIST_ENTRY
	// 	+ 0x374 Cid : _CLIENT_ID
	// 	+ 0x37c KeyedWaitSemaphore : _KSEMAPHORE
	// 	+ 0x37c AlpcWaitSemaphore : _KSEMAPHORE
	// 	+ 0x390 ClientSecurity : _PS_CLIENT_SECURITY_CONTEXT
	// 	+ 0x394 IrpList : _LIST_ENTRY
	// 	+ 0x39c TopLevelIrp : Uint4B
	// 	+ 0x3a0 DeviceToVerify : Ptr32 _DEVICE_OBJECT
	// 	+ 0x3a4 Win32StartAddress : Ptr32 Void
	// 	+ 0x3a8 LegacyPowerObject : Ptr32 Void
	LIST_ENTRY ThreadListEntry; // 	+ 0x3ac ThreadListEntry : _LIST_ENTRY
	// 	+ 0x3b4 RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x3b8 ThreadLock : _EX_PUSH_LOCK
	// 	+ 0x3bc ReadClusterSize : Uint4B
	// 	+ 0x3c0 MmLockOrdering : Int4B
	// 	+ 0x3c4 CrossThreadFlags : Uint4B
	// 	+ 0x3c4 Terminated : Pos 0, 1 Bit
	// 	+ 0x3c4 ThreadInserted : Pos 1, 1 Bit
	// 	+ 0x3c4 HideFromDebugger : Pos 2, 1 Bit
	// 	+ 0x3c4 ActiveImpersonationInfo : Pos 3, 1 Bit
	// 	+ 0x3c4 HardErrorsAreDisabled : Pos 4, 1 Bit
	// 	+ 0x3c4 BreakOnTermination : Pos 5, 1 Bit
	// 	+ 0x3c4 SkipCreationMsg : Pos 6, 1 Bit
	// 	+ 0x3c4 SkipTerminationMsg : Pos 7, 1 Bit
	// 	+ 0x3c4 CopyTokenOnOpen : Pos 8, 1 Bit
	// 	+ 0x3c4 ThreadIoPriority : Pos 9, 3 Bits
	// 	+ 0x3c4 ThreadPagePriority : Pos 12, 3 Bits
	// 	+ 0x3c4 RundownFail : Pos 15, 1 Bit
	// 	+ 0x3c4 UmsForceQueueTermination : Pos 16, 1 Bit
	// 	+ 0x3c4 IndirectCpuSets : Pos 17, 1 Bit
	// 	+ 0x3c4 DisableDynamicCodeOptOut : Pos 18, 1 Bit
	// 	+ 0x3c4 ExplicitCaseSensitivity : Pos 19, 1 Bit
	// 	+ 0x3c4 ReservedCrossThreadFlags : Pos 20, 12 Bits
	// 	+ 0x3c8 SameThreadPassiveFlags : Uint4B
	// 	+ 0x3c8 ActiveExWorker : Pos 0, 1 Bit
	// 	+ 0x3c8 MemoryMaker : Pos 1, 1 Bit
	// 	+ 0x3c8 StoreLockThread : Pos 2, 2 Bits
	// 	+ 0x3c8 ClonedThread : Pos 4, 1 Bit
	// 	+ 0x3c8 KeyedEventInUse : Pos 5, 1 Bit
	// 	+ 0x3c8 SelfTerminate : Pos 6, 1 Bit
	// 	+ 0x3c8 RespectIoPriority : Pos 7, 1 Bit
	// 	+ 0x3c8 ActivePageLists : Pos 8, 1 Bit
	// 	+ 0x3c8 ReservedSameThreadPassiveFlags : Pos 9, 23 Bits
	// 	+ 0x3cc SameThreadApcFlags : Uint4B
	// 	+ 0x3cc OwnsProcessAddressSpaceExclusive : Pos 0, 1 Bit
	// 	+ 0x3cc OwnsProcessAddressSpaceShared : Pos 1, 1 Bit
	// 	+ 0x3cc HardFaultBehavior : Pos 2, 1 Bit
	// 	+ 0x3cc StartAddressInvalid : Pos 3, 1 Bit
	// 	+ 0x3cc EtwCalloutActive : Pos 4, 1 Bit
	// 	+ 0x3cc SuppressSymbolLoad : Pos 5, 1 Bit
	// 	+ 0x3cc Prefetching : Pos 6, 1 Bit
	// 	+ 0x3cc OwnsVadExclusive : Pos 7, 1 Bit
	// 	+ 0x3cd SystemPagePriorityActive : Pos 0, 1 Bit
	// 	+ 0x3cd SystemPagePriority : Pos 1, 3 Bits
	// 	+ 0x3d0 CacheManagerActive : UChar
	// 	+ 0x3d1 DisablePageFaultClustering : UChar
	// 	+ 0x3d2 ActiveFaultCount : UChar
	// 	+ 0x3d3 LockOrderState : UChar
	// 	+ 0x3d4 AlpcMessageId : Uint4B
	// 	+ 0x3d8 AlpcMessage : Ptr32 Void
	// 	+ 0x3d8 AlpcReceiveAttributeSet : Uint4B
	// 	+ 0x3dc AlpcWaitListEntry : _LIST_ENTRY
	// 	+ 0x3e4 ExitStatus : Int4B
	// 	+ 0x3e8 CacheManagerCount : Uint4B
	// 	+ 0x3ec IoBoostCount : Uint4B
	// 	+ 0x3f0 IoQoSBoostCount : Uint4B
	// 	+ 0x3f4 IoQoSThrottleCount : Uint4B
	// 	+ 0x3f8 BoostList : _LIST_ENTRY
	// 	+ 0x400 DeboostList : _LIST_ENTRY
	// 	+ 0x408 BoostListLock : Uint4B
	// 	+ 0x40c IrpListLock : Uint4B
	// 	+ 0x410 ReservedForSynchTracking : Ptr32 Void
	// 	+ 0x414 CmCallbackListHead : _SINGLE_LIST_ENTRY
	// 	+ 0x418 ActivityId : Ptr32 _GUID
	// 	+ 0x41c SeLearningModeListHead : _SINGLE_LIST_ENTRY
	// 	+ 0x420 VerifierContext : Ptr32 Void
	// 	+ 0x424 KernelStackReference : Uint4B
	// 	+ 0x428 AdjustedClientToken : Ptr32 Void
	// 	+ 0x42c WorkOnBehalfThread : Ptr32 Void
	// 	+ 0x430 PropertySet : _PS_PROPERTY_SET
	// 	+ 0x43c PicoContext : Ptr32 Void
	// 	+ 0x440 UserFsBase : Uint4B
	// 	+ 0x444 UserGsBase : Uint4B
	// 	+ 0x448 EnergyValues : Ptr32 _THREAD_ENERGY_VALUES
	// 	+ 0x44c CmDbgInfo : Ptr32 Void
	// 	+ 0x450 SelectedCpuSets : Uint4B
	// 	+ 0x450 SelectedCpuSetsIndirect : Ptr32 Uint4B
	// 	+ 0x454 Silo : Ptr32 _EJOB
	// 	+ 0x458 ThreadName : Ptr32 _UNICODE_STRING
	// 	+ 0x45c ReadyTime : Uint4B

};

struct _MY_KTHREAD_WIN10_1607_X86_
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
	// 	+ 0x058 AutoBoostActive : Pos 0, 1 Bit
	// 	+ 0x058 ReadyTransition : Pos 1, 1 Bit
	// 	+ 0x058 WaitNext : Pos 2, 1 Bit
	// 	+ 0x058 SystemAffinityActive : Pos 3, 1 Bit
	// 	+ 0x058 Alertable : Pos 4, 1 Bit
	// 	+ 0x058 UserStackWalkActive : Pos 5, 1 Bit
	// 	+ 0x058 ApcInterruptRequest : Pos 6, 1 Bit
	// 	+ 0x058 QuantumEndMigrate : Pos 7, 1 Bit
	// 	+ 0x058 UmsDirectedSwitchEnable : Pos 8, 1 Bit
	// 	+ 0x058 TimerActive : Pos 9, 1 Bit
	// 	+ 0x058 SystemThread : Pos 10, 1 Bit
	// 	+ 0x058 ProcessDetachActive : Pos 11, 1 Bit
	// 	+ 0x058 CalloutActive : Pos 12, 1 Bit
	// 	+ 0x058 ScbReadyQueue : Pos 13, 1 Bit
	// 	+ 0x058 ApcQueueable : Pos 14, 1 Bit
	// 	+ 0x058 ReservedStackInUse : Pos 15, 1 Bit
	// 	+ 0x058 UmsPerformingSyscall : Pos 16, 1 Bit
	// 	+ 0x058 TimerSuspended : Pos 17, 1 Bit
	// 	+ 0x058 SuspendedWaitMode : Pos 18, 1 Bit
	// 	+ 0x058 SuspendSchedulerApcWait : Pos 19, 1 Bit
	// 	+ 0x058 Reserved : Pos 20, 12 Bits
	// 	+ 0x058 MiscFlags : Int4B
	// 	+ 0x05c AutoAlignment : Pos 0, 1 Bit
	// 	+ 0x05c DisableBoost : Pos 1, 1 Bit
	// 	+ 0x05c ThreadFlagsSpare0 : Pos 2, 1 Bit
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
	// 	+ 0x05c KernelStackResident : Pos 16, 1 Bit
	// 	+ 0x05c CommitFailTerminateRequest : Pos 17, 1 Bit
	// 	+ 0x05c ProcessStackCountDecremented : Pos 18, 1 Bit
	// 	+ 0x05c RestrictedGuiThread : Pos 19, 1 Bit
	// 	+ 0x05c ThreadFlagsSpare : Pos 20, 4 Bits
	// 	+ 0x05c EtwStackTraceApcInserted : Pos 24, 8 Bits
	// 	+ 0x05c ThreadFlags : Int4B
	// 	+ 0x060 Tag : UChar
	// 	+ 0x061 SystemHeteroCpuPolicy : UChar
	// 	+ 0x062 UserHeteroCpuPolicy : Pos 0, 7 Bits
	// 	+ 0x062 ExplicitSystemHeteroCpuPolicy : Pos 7, 1 Bit
	// 	+ 0x063 Spare0 : UChar
	// 	+ 0x064 SystemCallNumber : Uint4B
	// 	+ 0x068 FirstArgument : Ptr32 Void
	// 	+ 0x06c TrapFrame : Ptr32 _KTRAP_FRAME
	// 	+ 0x070 ApcState : _KAPC_STATE
	// 	+ 0x070 ApcStateFill : [23] UChar
	// 	+ 0x087 Priority : Char
	// 	+ 0x088 UserIdealProcessor : Uint4B
	// 	+ 0x08c ContextSwitches : Uint4B
	// 	+ 0x090 State : UChar
	// 	+ 0x091 Spare12 : Char
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
	// 	+ 0x160 AffinityVersion : Uint4B
	// 	+ 0x164 Affinity : _GROUP_AFFINITY
	// 	+ 0x164 AffinityFill : [6] UChar
	// 	+ 0x16a ApcStateIndex : UChar
	// 	+ 0x16b WaitBlockCount : UChar
	// 	+ 0x16c IdealProcessor : Uint4B
	// 	+ 0x170 Spare15 : [1] Uint4B
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
	// 	+ 0x1e4 AbEntrySummary : UChar
	// 	+ 0x1e5 AbWaitEntryCount : UChar
	// 	+ 0x1e6 Spare20 : Uint2B
	// 	+ 0x1e8 LockEntries : [6] _KLOCK_ENTRY
	// 	+ 0x308 PropagateBoostsEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x30c IoSelfBoostsEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x310 PriorityFloorCounts : [16] UChar
	// 	+ 0x320 PriorityFloorSummary : Uint4B
	// 	+ 0x324 AbCompletedIoBoostCount : Int4B
	// 	+ 0x328 AbCompletedIoQoSBoostCount : Int4B
	// 	+ 0x32c KeReferenceCount : Int2B
	// 	+ 0x32e AbOrphanedEntrySummary : UChar
	// 	+ 0x32f AbOwnedEntryCount : UChar
	// 	+ 0x330 ForegroundLossTime : Uint4B
	// 	+ 0x334 GlobalForegroundListEntry : _LIST_ENTRY
	// 	+ 0x334 ForegroundDpcStackListEntry : _SINGLE_LIST_ENTRY
	// 	+ 0x338 InGlobalForegroundList : Uint4B
	// 	+ 0x33c QueuedScb : Ptr32 _KSCB
	// 	+ 0x340 NpxState : Uint8B

};
