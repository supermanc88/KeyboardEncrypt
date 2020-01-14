#pragma once
#include <ntdef.h>

struct _MY_EPROCESS_WIN10_1803_X64_
{
	UCHAR PcbAndOthers[0x488]; // +0x000 Pcb              : _KPROCESS
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
	// 	+ 0x300 PicoCreated : Pos 10, 1 Bit
	// 	+ 0x300 EmptyJobEvaluated : Pos 11, 1 Bit
	// 	+ 0x300 DefaultPagePriority : Pos 12, 3 Bits
	// 	+ 0x300 PrimaryTokenFrozen : Pos 15, 1 Bit
	// 	+ 0x300 ProcessVerifierTarget : Pos 16, 1 Bit
	// 	+ 0x300 RestrictSetThreadContext : Pos 17, 1 Bit
	// 	+ 0x300 AffinityPermanent : Pos 18, 1 Bit
	// 	+ 0x300 AffinityUpdateEnable : Pos 19, 1 Bit
	// 	+ 0x300 PropagateNode : Pos 20, 1 Bit
	// 	+ 0x300 ExplicitAffinity : Pos 21, 1 Bit
	// 	+ 0x300 ProcessExecutionState : Pos 22, 2 Bits
	// 	+ 0x300 EnableReadVmLogging : Pos 24, 1 Bit
	// 	+ 0x300 EnableWriteVmLogging : Pos 25, 1 Bit
	// 	+ 0x300 FatalAccessTerminationRequested : Pos 26, 1 Bit
	// 	+ 0x300 DisableSystemAllowedCpuSet : Pos 27, 1 Bit
	// 	+ 0x300 ProcessStateChangeRequest : Pos 28, 2 Bits
	// 	+ 0x300 ProcessStateChangeInProgress : Pos 30, 1 Bit
	// 	+ 0x300 InPrivate : Pos 31, 1 Bit
	// 	+ 0x304 Flags : Uint4B
	// 	+ 0x304 CreateReported : Pos 0, 1 Bit
	// 	+ 0x304 NoDebugInherit : Pos 1, 1 Bit
	// 	+ 0x304 ProcessExiting : Pos 2, 1 Bit
	// 	+ 0x304 ProcessDelete : Pos 3, 1 Bit
	// 	+ 0x304 ManageExecutableMemoryWrites : Pos 4, 1 Bit
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
	LIST_ENTRY ThreadListHead; // 	+ 0x488 ThreadListHead : _LIST_ENTRY
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
	// 	+ 0x6cb HangCount : Pos 0, 4 Bits
	// 	+ 0x6cb GhostCount : Pos 4, 4 Bits
	// 	+ 0x6cc Flags3 : Uint4B
	// 	+ 0x6cc Minimal : Pos 0, 1 Bit
	// 	+ 0x6cc ReplacingPageRoot : Pos 1, 1 Bit
	// 	+ 0x6cc Crashed : Pos 2, 1 Bit
	// 	+ 0x6cc JobVadsAreTracked : Pos 3, 1 Bit
	// 	+ 0x6cc VadTrackingDisabled : Pos 4, 1 Bit
	// 	+ 0x6cc AuxiliaryProcess : Pos 5, 1 Bit
	// 	+ 0x6cc SubsystemProcess : Pos 6, 1 Bit
	// 	+ 0x6cc IndirectCpuSets : Pos 7, 1 Bit
	// 	+ 0x6cc RelinquishedCommit : Pos 8, 1 Bit
	// 	+ 0x6cc HighGraphicsPriority : Pos 9, 1 Bit
	// 	+ 0x6cc CommitFailLogged : Pos 10, 1 Bit
	// 	+ 0x6cc ReserveFailLogged : Pos 11, 1 Bit
	// 	+ 0x6cc SystemProcess : Pos 12, 1 Bit
	// 	+ 0x6cc HideImageBaseAddresses : Pos 13, 1 Bit
	// 	+ 0x6cc AddressPolicyFrozen : Pos 14, 1 Bit
	// 	+ 0x6cc ProcessFirstResume : Pos 15, 1 Bit
	// 	+ 0x6cc ForegroundExternal : Pos 16, 1 Bit
	// 	+ 0x6cc ForegroundSystem : Pos 17, 1 Bit
	// 	+ 0x6cc HighMemoryPriority : Pos 18, 1 Bit
	// 	+ 0x6d0 DeviceAsid : Int4B
	// 	+ 0x6d8 SvmData : Ptr64 Void
	// 	+ 0x6e0 SvmProcessLock : _EX_PUSH_LOCK
	// 	+ 0x6e8 SvmLock : Uint8B
	// 	+ 0x6f0 SvmProcessDeviceListHead : _LIST_ENTRY
	// 	+ 0x700 LastFreezeInterruptTime : Uint8B
	// 	+ 0x708 DiskCounters : Ptr64 _PROCESS_DISK_COUNTERS
	// 	+ 0x710 PicoContext : Ptr64 Void
	// 	+ 0x718 TrustletIdentity : Uint8B
	// 	+ 0x720 EnclaveTable : Ptr64 Void
	// 	+ 0x728 EnclaveNumber : Uint8B
	// 	+ 0x730 EnclaveLock : _EX_PUSH_LOCK
	// 	+ 0x738 HighPriorityFaultsAllowed : Uint4B
	// 	+ 0x740 EnergyContext : Ptr64 _PO_PROCESS_ENERGY_CONTEXT
	// 	+ 0x748 VmContext : Ptr64 Void
	// 	+ 0x750 SequenceNumber : Uint8B
	// 	+ 0x758 CreateInterruptTime : Uint8B
	// 	+ 0x760 CreateUnbiasedInterruptTime : Uint8B
	// 	+ 0x768 TotalUnbiasedFrozenTime : Uint8B
	// 	+ 0x770 LastAppStateUpdateTime : Uint8B
	// 	+ 0x778 LastAppStateUptime : Pos 0, 61 Bits
	// 	+ 0x778 LastAppState : Pos 61, 3 Bits
	// 	+ 0x780 SharedCommitCharge : Uint8B
	// 	+ 0x788 SharedCommitLock : _EX_PUSH_LOCK
	// 	+ 0x790 SharedCommitLinks : _LIST_ENTRY
	// 	+ 0x7a0 AllowedCpuSets : Uint8B
	// 	+ 0x7a8 DefaultCpuSets : Uint8B
	// 	+ 0x7a0 AllowedCpuSetsIndirect : Ptr64 Uint8B
	// 	+ 0x7a8 DefaultCpuSetsIndirect : Ptr64 Uint8B
	// 	+ 0x7b0 DiskIoAttribution : Ptr64 Void
	// 	+ 0x7b8 DxgProcess : Ptr64 Void
	// 	+ 0x7c0 Win32KFilterSet : Uint4B
	// 	+ 0x7c8 ProcessTimerDelay : _PS_INTERLOCKED_TIMER_DELAY_VALUES
	// 	+ 0x7d0 KTimerSets : Uint4B
	// 	+ 0x7d4 KTimer2Sets : Uint4B
	// 	+ 0x7d8 ThreadTimerSets : Uint4B
	// 	+ 0x7e0 VirtualTimerListLock : Uint8B
	// 	+ 0x7e8 VirtualTimerListHead : _LIST_ENTRY
	// 	+ 0x7f8 WakeChannel : _WNF_STATE_NAME
	// 	+ 0x7f8 WakeInfo : _PS_PROCESS_WAKE_INFORMATION
	// 	+ 0x828 MitigationFlags : Uint4B
	// 	+ 0x828 MitigationFlagsValues : <unnamed - tag>
	// 	+0x82c MitigationFlags2 : Uint4B
	// 	+ 0x82c MitigationFlags2Values : <unnamed - tag>
	// 	+0x830 PartitionObject : Ptr64 Void
	// 	+ 0x838 SecurityDomain : Uint8B
	// 	+ 0x840 CoverageSamplerContext : Ptr64 Void

};

struct _MY_ETHREAD_WIN10_1803_X64_
{
	UCHAR TcbAndOthers[0x6a8]; // +0x000 Tcb              : _KTHREAD
	// 	+ 0x5f0 CreateTime : _LARGE_INTEGER
	// 	+ 0x5f8 ExitTime : _LARGE_INTEGER
	// 	+ 0x5f8 KeyedWaitChain : _LIST_ENTRY
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
	// 	+ 0x698 ChargeOnlySession : Ptr64 Void
	// 	+ 0x6a0 LegacyPowerObject : Ptr64 Void
	LIST_ENTRY ThreadListEntry; // 	+ 0x6a8 ThreadListEntry : _LIST_ENTRY
	// 	+ 0x6b8 RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x6c0 ThreadLock : _EX_PUSH_LOCK
	// 	+ 0x6c8 ReadClusterSize : Uint4B
	// 	+ 0x6cc MmLockOrdering : Int4B
	// 	+ 0x6d0 CrossThreadFlags : Uint4B
	// 	+ 0x6d0 Terminated : Pos 0, 1 Bit
	// 	+ 0x6d0 ThreadInserted : Pos 1, 1 Bit
	// 	+ 0x6d0 HideFromDebugger : Pos 2, 1 Bit
	// 	+ 0x6d0 ActiveImpersonationInfo : Pos 3, 1 Bit
	// 	+ 0x6d0 HardErrorsAreDisabled : Pos 4, 1 Bit
	// 	+ 0x6d0 BreakOnTermination : Pos 5, 1 Bit
	// 	+ 0x6d0 SkipCreationMsg : Pos 6, 1 Bit
	// 	+ 0x6d0 SkipTerminationMsg : Pos 7, 1 Bit
	// 	+ 0x6d0 CopyTokenOnOpen : Pos 8, 1 Bit
	// 	+ 0x6d0 ThreadIoPriority : Pos 9, 3 Bits
	// 	+ 0x6d0 ThreadPagePriority : Pos 12, 3 Bits
	// 	+ 0x6d0 RundownFail : Pos 15, 1 Bit
	// 	+ 0x6d0 UmsForceQueueTermination : Pos 16, 1 Bit
	// 	+ 0x6d0 IndirectCpuSets : Pos 17, 1 Bit
	// 	+ 0x6d0 DisableDynamicCodeOptOut : Pos 18, 1 Bit
	// 	+ 0x6d0 ExplicitCaseSensitivity : Pos 19, 1 Bit
	// 	+ 0x6d0 PicoNotifyExit : Pos 20, 1 Bit
	// 	+ 0x6d0 DbgWerUserReportActive : Pos 21, 1 Bit
	// 	+ 0x6d0 ForcedSelfTrimActive : Pos 22, 1 Bit
	// 	+ 0x6d0 SamplingCoverage : Pos 23, 1 Bit
	// 	+ 0x6d0 ReservedCrossThreadFlags : Pos 24, 8 Bits
	// 	+ 0x6d4 SameThreadPassiveFlags : Uint4B
	// 	+ 0x6d4 ActiveExWorker : Pos 0, 1 Bit
	// 	+ 0x6d4 MemoryMaker : Pos 1, 1 Bit
	// 	+ 0x6d4 StoreLockThread : Pos 2, 2 Bits
	// 	+ 0x6d4 ClonedThread : Pos 4, 1 Bit
	// 	+ 0x6d4 KeyedEventInUse : Pos 5, 1 Bit
	// 	+ 0x6d4 SelfTerminate : Pos 6, 1 Bit
	// 	+ 0x6d4 RespectIoPriority : Pos 7, 1 Bit
	// 	+ 0x6d4 ActivePageLists : Pos 8, 1 Bit
	// 	+ 0x6d4 SecureContext : Pos 9, 1 Bit
	// 	+ 0x6d4 ZeroPageThread : Pos 10, 1 Bit
	// 	+ 0x6d4 ReservedSameThreadPassiveFlags : Pos 11, 21 Bits
	// 	+ 0x6d8 SameThreadApcFlags : Uint4B
	// 	+ 0x6d8 OwnsProcessAddressSpaceExclusive : Pos 0, 1 Bit
	// 	+ 0x6d8 OwnsProcessAddressSpaceShared : Pos 1, 1 Bit
	// 	+ 0x6d8 HardFaultBehavior : Pos 2, 1 Bit
	// 	+ 0x6d8 StartAddressInvalid : Pos 3, 1 Bit
	// 	+ 0x6d8 EtwCalloutActive : Pos 4, 1 Bit
	// 	+ 0x6d8 SuppressSymbolLoad : Pos 5, 1 Bit
	// 	+ 0x6d8 Prefetching : Pos 6, 1 Bit
	// 	+ 0x6d8 OwnsVadExclusive : Pos 7, 1 Bit
	// 	+ 0x6d9 SystemPagePriorityActive : Pos 0, 1 Bit
	// 	+ 0x6d9 SystemPagePriority : Pos 1, 3 Bits
	// 	+ 0x6d9 AllowWritesToExecutableMemory : Pos 4, 1 Bit
	// 	+ 0x6dc CacheManagerActive : UChar
	// 	+ 0x6dd DisablePageFaultClustering : UChar
	// 	+ 0x6de ActiveFaultCount : UChar
	// 	+ 0x6df LockOrderState : UChar
	// 	+ 0x6e0 AlpcMessageId : Uint8B
	// 	+ 0x6e8 AlpcMessage : Ptr64 Void
	// 	+ 0x6e8 AlpcReceiveAttributeSet : Uint4B
	// 	+ 0x6f0 AlpcWaitListEntry : _LIST_ENTRY
	// 	+ 0x700 ExitStatus : Int4B
	// 	+ 0x704 CacheManagerCount : Uint4B
	// 	+ 0x708 IoBoostCount : Uint4B
	// 	+ 0x70c IoQoSBoostCount : Uint4B
	// 	+ 0x710 IoQoSThrottleCount : Uint4B
	// 	+ 0x718 BoostList : _LIST_ENTRY
	// 	+ 0x728 DeboostList : _LIST_ENTRY
	// 	+ 0x738 BoostListLock : Uint8B
	// 	+ 0x740 IrpListLock : Uint8B
	// 	+ 0x748 ReservedForSynchTracking : Ptr64 Void
	// 	+ 0x750 CmCallbackListHead : _SINGLE_LIST_ENTRY
	// 	+ 0x758 ActivityId : Ptr64 _GUID
	// 	+ 0x760 SeLearningModeListHead : _SINGLE_LIST_ENTRY
	// 	+ 0x768 VerifierContext : Ptr64 Void
	// 	+ 0x770 KernelStackReference : Uint4B
	// 	+ 0x778 AdjustedClientToken : Ptr64 Void
	// 	+ 0x780 WorkOnBehalfThread : Ptr64 Void
	// 	+ 0x788 PropertySet : _PS_PROPERTY_SET
	// 	+ 0x7a0 PicoContext : Ptr64 Void
	// 	+ 0x7a8 UserFsBase : Uint8B
	// 	+ 0x7b0 UserGsBase : Uint8B
	// 	+ 0x7b8 EnergyValues : Ptr64 _THREAD_ENERGY_VALUES
	// 	+ 0x7c0 CmDbgInfo : Ptr64 Void
	// 	+ 0x7c8 SelectedCpuSets : Uint8B
	// 	+ 0x7c8 SelectedCpuSetsIndirect : Ptr64 Uint8B
	// 	+ 0x7d0 Silo : Ptr64 _EJOB
	// 	+ 0x7d8 ThreadName : Ptr64 _UNICODE_STRING
	// 	+ 0x7e0 SetContextState : Ptr64 _CONTEXT
	// 	+ 0x7e8 LastExpectedRunTime : Uint4B
	// 	+ 0x7f0 OwnerEntryListHead : _LIST_ENTRY
	// 	+ 0x800 DisownedOwnerEntryListLock : Uint8B
	// 	+ 0x808 DisownedOwnerEntryListHead : _LIST_ENTRY

};

struct _MY_KTHREAD_WIN10_1803_X64_
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
	// 	+ 0x078 BamQosLevel : Pos 0, 2 Bits
	// 	+ 0x078 AutoAlignment : Pos 2, 1 Bit
	// 	+ 0x078 DisableBoost : Pos 3, 1 Bit
	// 	+ 0x078 AlertedByThreadId : Pos 4, 1 Bit
	// 	+ 0x078 QuantumDonation : Pos 5, 1 Bit
	// 	+ 0x078 EnableStackSwap : Pos 6, 1 Bit
	// 	+ 0x078 GuiThread : Pos 7, 1 Bit
	// 	+ 0x078 DisableQuantum : Pos 8, 1 Bit
	// 	+ 0x078 ChargeOnlySchedulingGroup : Pos 9, 1 Bit
	// 	+ 0x078 DeferPreemption : Pos 10, 1 Bit
	// 	+ 0x078 QueueDeferPreemption : Pos 11, 1 Bit
	// 	+ 0x078 ForceDeferSchedule : Pos 12, 1 Bit
	// 	+ 0x078 SharedReadyQueueAffinity : Pos 13, 1 Bit
	// 	+ 0x078 FreezeCount : Pos 14, 1 Bit
	// 	+ 0x078 TerminationApcRequest : Pos 15, 1 Bit
	// 	+ 0x078 AutoBoostEntriesExhausted : Pos 16, 1 Bit
	// 	+ 0x078 KernelStackResident : Pos 17, 1 Bit
	// 	+ 0x078 TerminateRequestReason : Pos 18, 2 Bits
	// 	+ 0x078 ProcessStackCountDecremented : Pos 20, 1 Bit
	// 	+ 0x078 RestrictedGuiThread : Pos 21, 1 Bit
	// 	+ 0x078 VpBackingThread : Pos 22, 1 Bit
	// 	+ 0x078 ThreadFlagsSpare : Pos 23, 1 Bit
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
	ULONG_PTR Win32Thread; // 	+ 0x1c8 Win32Thread : Ptr64 Void
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
	// 	+ 0x31b SystemPriority : Char
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
	// 	+ 0x5e4 ThreadFlags2 : Int4B
	// 	+ 0x5e4 PpmPolicy : Pos 0, 2 Bits
	// 	+ 0x5e4 ThreadFlags2Reserved : Pos 2, 30 Bits
	// 	+ 0x5e8 SchedulerAssist : Ptr64 Void

};
