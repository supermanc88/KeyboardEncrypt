#pragma once
#include <ntdef.h>

struct _MY_EPROCESS_WIN10_1909_X86_
{
	UCHAR PcbAndOthers[0x1a0]; // +0x000 Pcb              : _KPROCESS
	// 	+ 0x0b0 ProcessLock : _EX_PUSH_LOCK
	// 	+ 0x0b4 UniqueProcessId : Ptr32 Void
	// 	+ 0x0b8 ActiveProcessLinks : _LIST_ENTRY
	// 	+ 0x0c0 RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x0c4 VdmObjects : Ptr32 Void
	// 	+ 0x0c8 Flags2 : Uint4B
	// 	+ 0x0c8 JobNotReallyActive : Pos 0, 1 Bit
	// 	+ 0x0c8 AccountingFolded : Pos 1, 1 Bit
	// 	+ 0x0c8 NewProcessReported : Pos 2, 1 Bit
	// 	+ 0x0c8 ExitProcessReported : Pos 3, 1 Bit
	// 	+ 0x0c8 ReportCommitChanges : Pos 4, 1 Bit
	// 	+ 0x0c8 LastReportMemory : Pos 5, 1 Bit
	// 	+ 0x0c8 ForceWakeCharge : Pos 6, 1 Bit
	// 	+ 0x0c8 CrossSessionCreate : Pos 7, 1 Bit
	// 	+ 0x0c8 NeedsHandleRundown : Pos 8, 1 Bit
	// 	+ 0x0c8 RefTraceEnabled : Pos 9, 1 Bit
	// 	+ 0x0c8 PicoCreated : Pos 10, 1 Bit
	// 	+ 0x0c8 EmptyJobEvaluated : Pos 11, 1 Bit
	// 	+ 0x0c8 DefaultPagePriority : Pos 12, 3 Bits
	// 	+ 0x0c8 PrimaryTokenFrozen : Pos 15, 1 Bit
	// 	+ 0x0c8 ProcessVerifierTarget : Pos 16, 1 Bit
	// 	+ 0x0c8 RestrictSetThreadContext : Pos 17, 1 Bit
	// 	+ 0x0c8 AffinityPermanent : Pos 18, 1 Bit
	// 	+ 0x0c8 AffinityUpdateEnable : Pos 19, 1 Bit
	// 	+ 0x0c8 PropagateNode : Pos 20, 1 Bit
	// 	+ 0x0c8 ExplicitAffinity : Pos 21, 1 Bit
	// 	+ 0x0c8 ProcessExecutionState : Pos 22, 2 Bits
	// 	+ 0x0c8 EnableReadVmLogging : Pos 24, 1 Bit
	// 	+ 0x0c8 EnableWriteVmLogging : Pos 25, 1 Bit
	// 	+ 0x0c8 FatalAccessTerminationRequested : Pos 26, 1 Bit
	// 	+ 0x0c8 DisableSystemAllowedCpuSet : Pos 27, 1 Bit
	// 	+ 0x0c8 ProcessStateChangeRequest : Pos 28, 2 Bits
	// 	+ 0x0c8 ProcessStateChangeInProgress : Pos 30, 1 Bit
	// 	+ 0x0c8 InPrivate : Pos 31, 1 Bit
	// 	+ 0x0cc Flags : Uint4B
	// 	+ 0x0cc CreateReported : Pos 0, 1 Bit
	// 	+ 0x0cc NoDebugInherit : Pos 1, 1 Bit
	// 	+ 0x0cc ProcessExiting : Pos 2, 1 Bit
	// 	+ 0x0cc ProcessDelete : Pos 3, 1 Bit
	// 	+ 0x0cc ManageExecutableMemoryWrites : Pos 4, 1 Bit
	// 	+ 0x0cc VmDeleted : Pos 5, 1 Bit
	// 	+ 0x0cc OutswapEnabled : Pos 6, 1 Bit
	// 	+ 0x0cc Outswapped : Pos 7, 1 Bit
	// 	+ 0x0cc FailFastOnCommitFail : Pos 8, 1 Bit
	// 	+ 0x0cc Wow64VaSpace4Gb : Pos 9, 1 Bit
	// 	+ 0x0cc AddressSpaceInitialized : Pos 10, 2 Bits
	// 	+ 0x0cc SetTimerResolution : Pos 12, 1 Bit
	// 	+ 0x0cc BreakOnTermination : Pos 13, 1 Bit
	// 	+ 0x0cc DeprioritizeViews : Pos 14, 1 Bit
	// 	+ 0x0cc WriteWatch : Pos 15, 1 Bit
	// 	+ 0x0cc ProcessInSession : Pos 16, 1 Bit
	// 	+ 0x0cc OverrideAddressSpace : Pos 17, 1 Bit
	// 	+ 0x0cc HasAddressSpace : Pos 18, 1 Bit
	// 	+ 0x0cc LaunchPrefetched : Pos 19, 1 Bit
	// 	+ 0x0cc Background : Pos 20, 1 Bit
	// 	+ 0x0cc VmTopDown : Pos 21, 1 Bit
	// 	+ 0x0cc ImageNotifyDone : Pos 22, 1 Bit
	// 	+ 0x0cc PdeUpdateNeeded : Pos 23, 1 Bit
	// 	+ 0x0cc VdmAllowed : Pos 24, 1 Bit
	// 	+ 0x0cc ProcessRundown : Pos 25, 1 Bit
	// 	+ 0x0cc ProcessInserted : Pos 26, 1 Bit
	// 	+ 0x0cc DefaultIoPriority : Pos 27, 3 Bits
	// 	+ 0x0cc ProcessSelfDelete : Pos 30, 1 Bit
	// 	+ 0x0cc SetTimerResolutionLink : Pos 31, 1 Bit
	// 	+ 0x0d0 CreateTime : _LARGE_INTEGER
	// 	+ 0x0d8 ProcessQuotaUsage : [2] Uint4B
	// 	+ 0x0e0 ProcessQuotaPeak : [2] Uint4B
	// 	+ 0x0e8 PeakVirtualSize : Uint4B
	// 	+ 0x0ec VirtualSize : Uint4B
	// 	+ 0x0f0 SessionProcessLinks : _LIST_ENTRY
	// 	+ 0x0f8 ExceptionPortData : Ptr32 Void
	// 	+ 0x0f8 ExceptionPortValue : Uint4B
	// 	+ 0x0f8 ExceptionPortState : Pos 0, 3 Bits
	// 	+ 0x0fc Token : _EX_FAST_REF
	// 	+ 0x100 MmReserved : Uint4B
	// 	+ 0x104 AddressCreationLock : _EX_PUSH_LOCK
	// 	+ 0x108 PageTableCommitmentLock : _EX_PUSH_LOCK
	// 	+ 0x10c RotateInProgress : Ptr32 _ETHREAD
	// 	+ 0x110 ForkInProgress : Ptr32 _ETHREAD
	// 	+ 0x114 CommitChargeJob : Ptr32 _EJOB
	// 	+ 0x118 CloneRoot : _RTL_AVL_TREE
	// 	+ 0x11c NumberOfPrivatePages : Uint4B
	// 	+ 0x120 NumberOfLockedPages : Uint4B
	// 	+ 0x124 Win32Process : Ptr32 Void
	// 	+ 0x128 Job : Ptr32 _EJOB
	// 	+ 0x12c SectionObject : Ptr32 Void
	// 	+ 0x130 SectionBaseAddress : Ptr32 Void
	// 	+ 0x134 Cookie : Uint4B
	// 	+ 0x138 WorkingSetWatch : Ptr32 _PAGEFAULT_HISTORY
	// 	+ 0x13c Win32WindowStation : Ptr32 Void
	// 	+ 0x140 InheritedFromUniqueProcessId : Ptr32 Void
	// 	+ 0x144 LdtInformation : Ptr32 Void
	// 	+ 0x148 OwnerProcessId : Uint4B
	// 	+ 0x14c Peb : Ptr32 _PEB
	// 	+ 0x150 Session : Ptr32 _MM_SESSION_SPACE
	// 	+ 0x154 Spare1 : Ptr32 Void
	// 	+ 0x158 QuotaBlock : Ptr32 _EPROCESS_QUOTA_BLOCK
	// 	+ 0x15c ObjectTable : Ptr32 _HANDLE_TABLE
	// 	+ 0x160 DebugPort : Ptr32 Void
	// 	+ 0x164 PaeTop : Ptr32 Void
	// 	+ 0x168 DeviceMap : Ptr32 Void
	// 	+ 0x16c EtwDataSource : Ptr32 Void
	// 	+ 0x170 PageDirectoryPte : Uint8B
	// 	+ 0x178 ImageFilePointer : Ptr32 _FILE_OBJECT
	// 	+ 0x17c ImageFileName : [15] UChar
	// 	+ 0x18b PriorityClass : UChar
	// 	+ 0x18c SecurityPort : Ptr32 Void
	// 	+ 0x190 SeAuditProcessCreationInfo : _SE_AUDIT_PROCESS_CREATION_INFO
	// 	+ 0x194 JobLinks : _LIST_ENTRY
	// 	+ 0x19c HighestUserAddress : Ptr32 Void
	LIST_ENTRY ThreadListHead; // 	+ 0x1a0 ThreadListHead : _LIST_ENTRY
	// 	+ 0x1a8 ActiveThreads : Uint4B
	// 	+ 0x1ac ImagePathHash : Uint4B
	// 	+ 0x1b0 DefaultHardErrorProcessing : Uint4B
	// 	+ 0x1b4 LastThreadExitStatus : Int4B
	// 	+ 0x1b8 PrefetchTrace : _EX_FAST_REF
	// 	+ 0x1bc LockedPagesList : Ptr32 Void
	// 	+ 0x1c0 ReadOperationCount : _LARGE_INTEGER
	// 	+ 0x1c8 WriteOperationCount : _LARGE_INTEGER
	// 	+ 0x1d0 OtherOperationCount : _LARGE_INTEGER
	// 	+ 0x1d8 ReadTransferCount : _LARGE_INTEGER
	// 	+ 0x1e0 WriteTransferCount : _LARGE_INTEGER
	// 	+ 0x1e8 OtherTransferCount : _LARGE_INTEGER
	// 	+ 0x1f0 CommitChargeLimit : Uint4B
	// 	+ 0x1f4 CommitCharge : Uint4B
	// 	+ 0x1f8 CommitChargePeak : Uint4B
	// 	+ 0x200 Vm : _MMSUPPORT_FULL
	// 	+ 0x300 MmProcessLinks : _LIST_ENTRY
	// 	+ 0x308 ModifiedPageCount : Uint4B
	// 	+ 0x30c ExitStatus : Int4B
	// 	+ 0x310 VadRoot : _RTL_AVL_TREE
	// 	+ 0x314 VadHint : Ptr32 Void
	// 	+ 0x318 VadCount : Uint4B
	// 	+ 0x31c VadPhysicalPages : Uint4B
	// 	+ 0x320 VadPhysicalPagesLimit : Uint4B
	// 	+ 0x324 AlpcContext : _ALPC_PROCESS_CONTEXT
	// 	+ 0x334 TimerResolutionLink : _LIST_ENTRY
	// 	+ 0x33c TimerResolutionStackRecord : Ptr32 _PO_DIAG_STACK_RECORD
	// 	+ 0x340 RequestedTimerResolution : Uint4B
	// 	+ 0x344 SmallestTimerResolution : Uint4B
	// 	+ 0x348 ExitTime : _LARGE_INTEGER
	// 	+ 0x350 ActiveThreadsHighWatermark : Uint4B
	// 	+ 0x354 LargePrivateVadCount : Uint4B
	// 	+ 0x358 ThreadListLock : _EX_PUSH_LOCK
	// 	+ 0x35c WnfContext : Ptr32 Void
	// 	+ 0x360 ServerSilo : Ptr32 _EJOB
	// 	+ 0x364 SignatureLevel : UChar
	// 	+ 0x365 SectionSignatureLevel : UChar
	// 	+ 0x366 Protection : _PS_PROTECTION
	// 	+ 0x367 HangCount : Pos 0, 3 Bits
	// 	+ 0x367 GhostCount : Pos 3, 3 Bits
	// 	+ 0x367 PrefilterException : Pos 6, 1 Bit
	// 	+ 0x368 Flags3 : Uint4B
	// 	+ 0x368 Minimal : Pos 0, 1 Bit
	// 	+ 0x368 ReplacingPageRoot : Pos 1, 1 Bit
	// 	+ 0x368 Crashed : Pos 2, 1 Bit
	// 	+ 0x368 JobVadsAreTracked : Pos 3, 1 Bit
	// 	+ 0x368 VadTrackingDisabled : Pos 4, 1 Bit
	// 	+ 0x368 AuxiliaryProcess : Pos 5, 1 Bit
	// 	+ 0x368 SubsystemProcess : Pos 6, 1 Bit
	// 	+ 0x368 IndirectCpuSets : Pos 7, 1 Bit
	// 	+ 0x368 RelinquishedCommit : Pos 8, 1 Bit
	// 	+ 0x368 HighGraphicsPriority : Pos 9, 1 Bit
	// 	+ 0x368 CommitFailLogged : Pos 10, 1 Bit
	// 	+ 0x368 ReserveFailLogged : Pos 11, 1 Bit
	// 	+ 0x368 SystemProcess : Pos 12, 1 Bit
	// 	+ 0x368 HideImageBaseAddresses : Pos 13, 1 Bit
	// 	+ 0x368 AddressPolicyFrozen : Pos 14, 1 Bit
	// 	+ 0x368 ProcessFirstResume : Pos 15, 1 Bit
	// 	+ 0x368 ForegroundExternal : Pos 16, 1 Bit
	// 	+ 0x368 ForegroundSystem : Pos 17, 1 Bit
	// 	+ 0x368 HighMemoryPriority : Pos 18, 1 Bit
	// 	+ 0x368 EnableProcessSuspendResumeLogging : Pos 19, 1 Bit
	// 	+ 0x368 EnableThreadSuspendResumeLogging : Pos 20, 1 Bit
	// 	+ 0x368 SecurityDomainChanged : Pos 21, 1 Bit
	// 	+ 0x368 SecurityFreezeComplete : Pos 22, 1 Bit
	// 	+ 0x368 VmProcessorHost : Pos 23, 1 Bit
	// 	+ 0x36c DeviceAsid : Int4B
	// 	+ 0x370 SvmData : Ptr32 Void
	// 	+ 0x374 SvmProcessLock : _EX_PUSH_LOCK
	// 	+ 0x378 SvmLock : Uint4B
	// 	+ 0x37c SvmProcessDeviceListHead : _LIST_ENTRY
	// 	+ 0x388 LastFreezeInterruptTime : Uint8B
	// 	+ 0x390 DiskCounters : Ptr32 _PROCESS_DISK_COUNTERS
	// 	+ 0x394 PicoContext : Ptr32 Void
	// 	+ 0x398 HighPriorityFaultsAllowed : Uint4B
	// 	+ 0x39c InstrumentationCallback : Ptr32 Void
	// 	+ 0x3a0 EnergyContext : Ptr32 _PO_PROCESS_ENERGY_CONTEXT
	// 	+ 0x3a4 VmContext : Ptr32 Void
	// 	+ 0x3a8 SequenceNumber : Uint8B
	// 	+ 0x3b0 CreateInterruptTime : Uint8B
	// 	+ 0x3b8 CreateUnbiasedInterruptTime : Uint8B
	// 	+ 0x3c0 TotalUnbiasedFrozenTime : Uint8B
	// 	+ 0x3c8 LastAppStateUpdateTime : Uint8B
	// 	+ 0x3d0 LastAppStateUptime : Pos 0, 61 Bits
	// 	+ 0x3d0 LastAppState : Pos 61, 3 Bits
	// 	+ 0x3d8 SharedCommitCharge : Uint4B
	// 	+ 0x3dc SharedCommitLock : _EX_PUSH_LOCK
	// 	+ 0x3e0 SharedCommitLinks : _LIST_ENTRY
	// 	+ 0x3e8 AllowedCpuSets : Uint4B
	// 	+ 0x3ec DefaultCpuSets : Uint4B
	// 	+ 0x3e8 AllowedCpuSetsIndirect : Ptr32 Uint4B
	// 	+ 0x3ec DefaultCpuSetsIndirect : Ptr32 Uint4B
	// 	+ 0x3f0 DiskIoAttribution : Ptr32 Void
	// 	+ 0x3f4 DxgProcess : Ptr32 Void
	// 	+ 0x3f8 Win32KFilterSet : Uint4B
	// 	+ 0x400 ProcessTimerDelay : _PS_INTERLOCKED_TIMER_DELAY_VALUES
	// 	+ 0x408 KTimerSets : Uint4B
	// 	+ 0x40c KTimer2Sets : Uint4B
	// 	+ 0x410 ThreadTimerSets : Uint4B
	// 	+ 0x414 VirtualTimerListLock : Uint4B
	// 	+ 0x418 VirtualTimerListHead : _LIST_ENTRY
	// 	+ 0x420 WakeChannel : _WNF_STATE_NAME
	// 	+ 0x420 WakeInfo : _PS_PROCESS_WAKE_INFORMATION
	// 	+ 0x450 MitigationFlags : Uint4B
	// 	+ 0x450 MitigationFlagsValues : <anonymous - tag>
	// 	+0x454 MitigationFlags2 : Uint4B
	// 	+ 0x454 MitigationFlags2Values : <anonymous - tag>
	// 	+0x458 PartitionObject : Ptr32 Void
	// 	+ 0x460 SecurityDomain : Uint8B
	// 	+ 0x468 ParentSecurityDomain : Uint8B
	// 	+ 0x470 CoverageSamplerContext : Ptr32 Void
	// 	+ 0x474 MmHotPatchContext : Ptr32 Void

};

struct _MY_ETHREAD_WIN10_1909_X86_
{
	UCHAR TcbAndOthers[0x3bc]; // +0x000 Tcb              : _KTHREAD
	// 	+ 0x358 CreateTime : _LARGE_INTEGER
	// 	+ 0x360 ExitTime : _LARGE_INTEGER
	// 	+ 0x360 KeyedWaitChain : _LIST_ENTRY
	// 	+ 0x368 ChargeOnlySession : Ptr32 Void
	// 	+ 0x36c PostBlockList : _LIST_ENTRY
	// 	+ 0x36c ForwardLinkShadow : Ptr32 Void
	// 	+ 0x370 StartAddress : Ptr32 Void
	// 	+ 0x374 TerminationPort : Ptr32 _TERMINATION_PORT
	// 	+ 0x374 ReaperLink : Ptr32 _ETHREAD
	// 	+ 0x374 KeyedWaitValue : Ptr32 Void
	// 	+ 0x378 ActiveTimerListLock : Uint4B
	// 	+ 0x37c ActiveTimerListHead : _LIST_ENTRY
	// 	+ 0x384 Cid : _CLIENT_ID
	// 	+ 0x38c KeyedWaitSemaphore : _KSEMAPHORE
	// 	+ 0x38c AlpcWaitSemaphore : _KSEMAPHORE
	// 	+ 0x3a0 ClientSecurity : _PS_CLIENT_SECURITY_CONTEXT
	// 	+ 0x3a4 IrpList : _LIST_ENTRY
	// 	+ 0x3ac TopLevelIrp : Uint4B
	// 	+ 0x3b0 DeviceToVerify : Ptr32 _DEVICE_OBJECT
	// 	+ 0x3b4 Win32StartAddress : Ptr32 Void
	// 	+ 0x3b8 LegacyPowerObject : Ptr32 Void
	LIST_ENTRY ThreadListEntry; // 	+ 0x3bc ThreadListEntry : _LIST_ENTRY
	// 	+ 0x3c4 RundownProtect : _EX_RUNDOWN_REF
	// 	+ 0x3c8 ThreadLock : _EX_PUSH_LOCK
	// 	+ 0x3cc ReadClusterSize : Uint4B
	// 	+ 0x3d0 MmLockOrdering : Int4B
	// 	+ 0x3d4 CrossThreadFlags : Uint4B
	// 	+ 0x3d4 Terminated : Pos 0, 1 Bit
	// 	+ 0x3d4 ThreadInserted : Pos 1, 1 Bit
	// 	+ 0x3d4 HideFromDebugger : Pos 2, 1 Bit
	// 	+ 0x3d4 ActiveImpersonationInfo : Pos 3, 1 Bit
	// 	+ 0x3d4 HardErrorsAreDisabled : Pos 4, 1 Bit
	// 	+ 0x3d4 BreakOnTermination : Pos 5, 1 Bit
	// 	+ 0x3d4 SkipCreationMsg : Pos 6, 1 Bit
	// 	+ 0x3d4 SkipTerminationMsg : Pos 7, 1 Bit
	// 	+ 0x3d4 CopyTokenOnOpen : Pos 8, 1 Bit
	// 	+ 0x3d4 ThreadIoPriority : Pos 9, 3 Bits
	// 	+ 0x3d4 ThreadPagePriority : Pos 12, 3 Bits
	// 	+ 0x3d4 RundownFail : Pos 15, 1 Bit
	// 	+ 0x3d4 UmsForceQueueTermination : Pos 16, 1 Bit
	// 	+ 0x3d4 IndirectCpuSets : Pos 17, 1 Bit
	// 	+ 0x3d4 DisableDynamicCodeOptOut : Pos 18, 1 Bit
	// 	+ 0x3d4 ExplicitCaseSensitivity : Pos 19, 1 Bit
	// 	+ 0x3d4 PicoNotifyExit : Pos 20, 1 Bit
	// 	+ 0x3d4 DbgWerUserReportActive : Pos 21, 1 Bit
	// 	+ 0x3d4 ForcedSelfTrimActive : Pos 22, 1 Bit
	// 	+ 0x3d4 SamplingCoverage : Pos 23, 1 Bit
	// 	+ 0x3d4 ReservedCrossThreadFlags : Pos 24, 8 Bits
	// 	+ 0x3d8 SameThreadPassiveFlags : Uint4B
	// 	+ 0x3d8 ActiveExWorker : Pos 0, 1 Bit
	// 	+ 0x3d8 MemoryMaker : Pos 1, 1 Bit
	// 	+ 0x3d8 StoreLockThread : Pos 2, 2 Bits
	// 	+ 0x3d8 ClonedThread : Pos 4, 1 Bit
	// 	+ 0x3d8 KeyedEventInUse : Pos 5, 1 Bit
	// 	+ 0x3d8 SelfTerminate : Pos 6, 1 Bit
	// 	+ 0x3d8 RespectIoPriority : Pos 7, 1 Bit
	// 	+ 0x3d8 ActivePageLists : Pos 8, 1 Bit
	// 	+ 0x3d8 SecureContext : Pos 9, 1 Bit
	// 	+ 0x3d8 ZeroPageThread : Pos 10, 1 Bit
	// 	+ 0x3d8 WorkloadClass : Pos 11, 1 Bit
	// 	+ 0x3d8 ReservedSameThreadPassiveFlags : Pos 12, 20 Bits
	// 	+ 0x3dc SameThreadApcFlags : Uint4B
	// 	+ 0x3dc OwnsProcessAddressSpaceExclusive : Pos 0, 1 Bit
	// 	+ 0x3dc OwnsProcessAddressSpaceShared : Pos 1, 1 Bit
	// 	+ 0x3dc HardFaultBehavior : Pos 2, 1 Bit
	// 	+ 0x3dc StartAddressInvalid : Pos 3, 1 Bit
	// 	+ 0x3dc EtwCalloutActive : Pos 4, 1 Bit
	// 	+ 0x3dc SuppressSymbolLoad : Pos 5, 1 Bit
	// 	+ 0x3dc Prefetching : Pos 6, 1 Bit
	// 	+ 0x3dc OwnsVadExclusive : Pos 7, 1 Bit
	// 	+ 0x3dd SystemPagePriorityActive : Pos 0, 1 Bit
	// 	+ 0x3dd SystemPagePriority : Pos 1, 3 Bits
	// 	+ 0x3dd AllowUserWritesToExecutableMemory : Pos 4, 1 Bit
	// 	+ 0x3dd AllowKernelWritesToExecutableMemory : Pos 5, 1 Bit
	// 	+ 0x3dd OwnsVadShared : Pos 6, 1 Bit
	// 	+ 0x3e0 CacheManagerActive : UChar
	// 	+ 0x3e1 DisablePageFaultClustering : UChar
	// 	+ 0x3e2 ActiveFaultCount : UChar
	// 	+ 0x3e3 LockOrderState : UChar
	// 	+ 0x3e4 AlpcMessageId : Uint4B
	// 	+ 0x3e8 AlpcMessage : Ptr32 Void
	// 	+ 0x3e8 AlpcReceiveAttributeSet : Uint4B
	// 	+ 0x3ec AlpcWaitListEntry : _LIST_ENTRY
	// 	+ 0x3f4 ExitStatus : Int4B
	// 	+ 0x3f8 CacheManagerCount : Uint4B
	// 	+ 0x3fc IoBoostCount : Uint4B
	// 	+ 0x400 IoQoSBoostCount : Uint4B
	// 	+ 0x404 IoQoSThrottleCount : Uint4B
	// 	+ 0x408 KernelStackReference : Uint4B
	// 	+ 0x40c BoostList : _LIST_ENTRY
	// 	+ 0x414 DeboostList : _LIST_ENTRY
	// 	+ 0x41c BoostListLock : Uint4B
	// 	+ 0x420 IrpListLock : Uint4B
	// 	+ 0x424 ReservedForSynchTracking : Ptr32 Void
	// 	+ 0x428 CmCallbackListHead : _SINGLE_LIST_ENTRY
	// 	+ 0x42c ActivityId : Ptr32 _GUID
	// 	+ 0x430 SeLearningModeListHead : _SINGLE_LIST_ENTRY
	// 	+ 0x434 VerifierContext : Ptr32 Void
	// 	+ 0x438 AdjustedClientToken : Ptr32 Void
	// 	+ 0x43c WorkOnBehalfThread : Ptr32 Void
	// 	+ 0x440 PropertySet : _PS_PROPERTY_SET
	// 	+ 0x44c PicoContext : Ptr32 Void
	// 	+ 0x450 UserFsBase : Uint4B
	// 	+ 0x454 UserGsBase : Uint4B
	// 	+ 0x458 EnergyValues : Ptr32 _THREAD_ENERGY_VALUES
	// 	+ 0x45c CmDbgInfo : Ptr32 Void
	// 	+ 0x460 SelectedCpuSets : Uint4B
	// 	+ 0x460 SelectedCpuSetsIndirect : Ptr32 Uint4B
	// 	+ 0x464 Silo : Ptr32 _EJOB
	// 	+ 0x468 ThreadName : Ptr32 _UNICODE_STRING
	// 	+ 0x46c LastExpectedRunTime : Uint4B
	// 	+ 0x470 HeapData : Uint4B
	// 	+ 0x474 OwnerEntryListHead : _LIST_ENTRY
	// 	+ 0x47c DisownedOwnerEntryListLock : Uint4B
	// 	+ 0x480 DisownedOwnerEntryListHead : _LIST_ENTRY

};

struct _MY_KTHREAD_WIN10_1909_X86_
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
	// 	+ 0x058 CetUserShadowStack : Pos 20, 1 Bit
	// 	+ 0x058 BypassProcessFreeze : Pos 21, 1 Bit
	// 	+ 0x058 Reserved : Pos 22, 10 Bits
	// 	+ 0x058 MiscFlags : Int4B
	// 	+ 0x05c BamQosLevel : Pos 0, 2 Bits
	// 	+ 0x05c AutoAlignment : Pos 2, 1 Bit
	// 	+ 0x05c DisableBoost : Pos 3, 1 Bit
	// 	+ 0x05c AlertedByThreadId : Pos 4, 1 Bit
	// 	+ 0x05c QuantumDonation : Pos 5, 1 Bit
	// 	+ 0x05c EnableStackSwap : Pos 6, 1 Bit
	// 	+ 0x05c GuiThread : Pos 7, 1 Bit
	// 	+ 0x05c DisableQuantum : Pos 8, 1 Bit
	// 	+ 0x05c ChargeOnlySchedulingGroup : Pos 9, 1 Bit
	// 	+ 0x05c DeferPreemption : Pos 10, 1 Bit
	// 	+ 0x05c QueueDeferPreemption : Pos 11, 1 Bit
	// 	+ 0x05c ForceDeferSchedule : Pos 12, 1 Bit
	// 	+ 0x05c SharedReadyQueueAffinity : Pos 13, 1 Bit
	// 	+ 0x05c FreezeCount : Pos 14, 1 Bit
	// 	+ 0x05c TerminationApcRequest : Pos 15, 1 Bit
	// 	+ 0x05c AutoBoostEntriesExhausted : Pos 16, 1 Bit
	// 	+ 0x05c KernelStackResident : Pos 17, 1 Bit
	// 	+ 0x05c TerminateRequestReason : Pos 18, 2 Bits
	// 	+ 0x05c ProcessStackCountDecremented : Pos 20, 1 Bit
	// 	+ 0x05c RestrictedGuiThread : Pos 21, 1 Bit
	// 	+ 0x05c VpBackingThread : Pos 22, 1 Bit
	// 	+ 0x05c ThreadFlagsSpare : Pos 23, 1 Bit
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
	// 	+ 0x170 ReadyTime : Uint4B
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
	// 	+ 0x1e6 AbAllocationRegionCount : UChar
	// 	+ 0x1e7 SystemPriority : Char
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
	// 	+ 0x348 ThreadTimerDelay : Uint4B
	// 	+ 0x34c ThreadFlags2 : Int4B
	// 	+ 0x34c PpmPolicy : Pos 0, 2 Bits
	// 	+ 0x34c ThreadFlags2Reserved : Pos 2, 30 Bits
	// 	+ 0x350 AbWaitObject : Ptr32 Void

};
