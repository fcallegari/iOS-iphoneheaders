/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:44:15 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoard/FBProcess.h>
#import <FrontBoard/BKSProcessDelegate.h>
#import <FrontBoard/BSWatchdogDelegate.h>

@class BKSApplicationDataStore, NSMutableSet, NSMutableArray, FBApplicationProcessExitContext, FBProcessExecutionContext, FBApplicationWatchdog, BSMachSendRight, FBProcessCPUStatistics, BKSProcess, BKSProcessAssertion, FBApplicationInfo, NSString;

@interface FBApplicationProcess : FBProcess <BKSProcessDelegate, BSWatchdogDelegate> {

	BKSApplicationDataStore* _dataStore;
	NSMutableSet* _allowedLockedFilePaths;
	NSMutableArray* _queuedSceneBlocksToExecuteAfterLaunch;
	FBApplicationProcessExitContext* _exitContext;
	FBProcessExecutionContext* _executionContext;
	FBApplicationWatchdog* _watchdog;
	char _bootstrapped;
	char _bootstrapFailed;
	char _hasFinishedLaunching;
	double _launchWatchdogTimeRemaining;
	int _pendingExit;
	int _beingDebugged;
	BSMachSendRight* _taskNamePort;
	BSMachSendRight* _taskPort;
	BSMachSendRight* _gsEventPort;
	int _terminationReason;
	int _defaultSceneSuspendType;
	FBProcessCPUStatistics* _cpuStatistics;
	double _execTime;
	BKSProcess* _bksProcess;
	BKSProcessAssertion* _launchProcessAssertion;
	BKSProcessAssertion* _continuousProcessAssertion;
	char _supportsBackgroundTaskAssertions;
	char _supportsSuspendOnLock;
	char _recordingAudio;
	char _nowPlayingWithAudio;
	char _connectedToExternalAccessory;
	FBApplicationInfo* _applicationInfo;

}

@property (nonatomic,retain,readonly) FBApplicationInfo * applicationInfo;                                                        //@synthesize applicationInfo=_applicationInfo - In the implementation block
@property (nonatomic,retain) FBProcessExecutionContext * executionContext; 
@property (nonatomic,retain,readonly) FBApplicationProcessExitContext * exitContext; 
@property (assign,getter=isBeingDebugged,nonatomic) char beingDebugged; 
@property (assign,getter=isRecordingAudio,nonatomic) char recordingAudio;                                                         //@synthesize recordingAudio=_recordingAudio - In the implementation block
@property (assign,getter=isNowPlayingWithAudio,nonatomic) char nowPlayingWithAudio;                                               //@synthesize nowPlayingWithAudio=_nowPlayingWithAudio - In the implementation block
@property (assign,getter=isConnectedToExternalAccessory,nonatomic) char connectedToExternalAccessory;                             //@synthesize connectedToExternalAccessory=_connectedToExternalAccessory - In the implementation block
@property (assign,nonatomic) id<FBApplicationProcessDelegate> delegate; 
@property (getter=_queue_hasFinishedLaunching,nonatomic,readonly) char hasFinishedLaunching;                                      //@synthesize hasFinishedLaunching=_hasFinishedLaunching - In the implementation block
@property (getter=_queue_defaultSuspendType,nonatomic,readonly) int defaultSuspendType; 
@property (getter=_queue_cpuStatistics,nonatomic,retain,readonly) FBProcessCPUStatistics * cpuStatistics;                         //@synthesize cpuStatistics=_cpuStatistics - In the implementation block
@property (getter=_queue_execTime,nonatomic,readonly) double execTime; 
@property (getter=_queue_launchWatchdogTimeRemaining,nonatomic,readonly) double launchWatchdogTimeRemaining; 
@property (getter=_queue_terminationReason,nonatomic,readonly) int terminationReason; 
@property (getter=_queue_supportsSuspendOnLock,nonatomic,readonly) char supportsSuspendOnLock;                                    //@synthesize supportsSuspendOnLock=_supportsSuspendOnLock - In the implementation block
@property (getter=_queue_supportsBackgroundTaskAssertions,nonatomic,readonly) char supportsBackgroundTaskAssertions;              //@synthesize supportsBackgroundTaskAssertions=_supportsBackgroundTaskAssertions - In the implementation block
@property (assign,setter=_queue_setTaskPort:,getter=_queue_taskPort,nonatomic) BSMachSendRight * taskPort;                        //@synthesize taskPort=_taskPort - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)deleteAllJobs;
-(void)dealloc;
-(id)_workspace;
-(void)stop;
-(FBProcessExecutionContext *)executionContext;
-(void)setExecutionContext:(FBProcessExecutionContext *)arg1 ;
-(char)isSystemApplicationProcess;
-(id)_applicationWorkspace;
-(char)isApplicationProcess;
-(FBApplicationInfo *)applicationInfo;
-(void)killForReason:(int)arg1 andReport:(char)arg2 withDescription:(id)arg3 ;
-(int)_queue_effectiveVisibilityForSceneSettings:(id)arg1 ;
-(id)_createWorkspace;
-(id)_queue_name;
-(void)_queue_setTaskState:(int)arg1 ;
-(void)_queue_setVisibility:(int)arg1 ;
-(int)_queue_effectiveVisibilityForVisibility:(int)arg1 ;
-(void)_queue_callExitObservers;
-(void)_queue_processDidExit;
-(id)initWithBundleID:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3 ;
-(char)isPendingExit;
-(void)_queue_sceneLifecycleStateChanged:(id)arg1 ;
-(char)_queue_hasFinishedLaunching;
-(int)_queue_defaultSuspendType;
-(void)_queue_sceneNeedsGracefulExit:(id)arg1 withExitCompletion:(/*^block*/id)arg2 ;
-(id)_queue_cpuStatistics;
-(double)_queue_execTime;
-(int)_queue_terminationReason;
-(void)_queue_executeBlockAfterLaunchCompletes:(/*^block*/id)arg1 ;
-(double)_queue_launchWatchdogTimeRemaining;
-(char)_queue_supportsSuspendOnLock;
-(id)initWithApplicationInfo:(id)arg1 pid:(int)arg2 callOutQueue:(id)arg3 ;
-(id)_queue_executionContext;
-(void)killForReason:(int)arg1 andReport:(char)arg2 withDescription:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setPendingExit:(char)arg1 ;
-(void)_queue_killForReason:(int)arg1 andReport:(char)arg2 withDescription:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_queue_enumerateApplicationObserversWithBlock:(/*^block*/id)arg1 ;
-(id)_queue_GSEventPortName;
-(id)_queue_UIRemoteAppPortName;
-(char)_queue_bootstrapAndExec;
-(char)_queue_finishLaunch;
-(void)_queue_invalidateBKSProcess;
-(void)setRecordingAudio:(char)arg1 ;
-(void)setNowPlayingWithAudio:(char)arg1 ;
-(void)_queue_processReallyDidExit;
-(unsigned long long)_queue_noteExitedForForceQuit:(char)arg1 ;
-(void)_queue_cancelWatchdogTimer;
-(void)_queue_dropContinuousProcessAssertion;
-(void)_queue_dropLaunchProcessAssertion;
-(void)_queue_executeLaunchCompletionBlocks;
-(void)_queue_doGracefulKillWithCompletion:(/*^block*/id)arg1 withWatchdog:(char)arg2 ;
-(id)_queue_internalDebugEnvironmentVariables;
-(void)_queue_setAllowedLockedFilePaths:(id)arg1 ;
-(void)_queue_setupBKSProcess;
-(void)_queue_waitToExecOrExit;
-(void)_queue_setSupportsBackgroundTaskAssertions:(char)arg1 ;
-(void)_queue_setSupportsSuspendOnLock:(char)arg1 ;
-(void)_queue_setTaskPort:(id)arg1 ;
-(int)_queue_calculateDefaultSceneSuspendType;
-(void)_queue_takeLaunchProcessAssertion;
-(void)_queue_startWatchdogTimerOfType:(int)arg1 withDuration:(double)arg2 ;
-(int)_queue_bksVisibilityForVisibility:(int)arg1 ;
-(char)_queue_consideredUnderLock;
-(int)_queue_effectiveVisibilityForVisibility:(int)arg1 underLock:(char)arg2 ;
-(id)_queue_lockedFilePathsIgnoringAllowed;
-(void)_queue_watchdogTerminateWithReason:(int)arg1 format:(id)arg2 ;
-(char)_queue_isSystemApplication;
-(char)_queue_supportsContinuousBackgroundMode;
-(id)_queue_crashReportThermalsInfo;
-(void)_queue_killWithSignal:(int)arg1 ;
-(void)_queue_forceCrashReportWithReason:(int)arg1 description:(id)arg2 ;
-(char)isBeingDebugged;
-(char)_queue_shouldWatchdogWithDeclineReason:(id*)arg1 ;
-(int)_queue_ourTaskStateForBKSTaskState:(int)arg1 ;
-(id)_workspaceServer;
-(void)setBeingDebugged:(char)arg1 ;
-(void)process:(id)arg1 taskStateDidChange:(int)arg2 ;
-(void)processWillExpire:(id)arg1 ;
-(void)process:(id)arg1 isBeingDebugged:(char)arg2 ;
-(void)watchdogStarted:(id)arg1 ;
-(void)watchdogFired:(id)arg1 ;
-(void)watchdogCancelled:(id)arg1 ;
-(id)initWithApplicationInfo:(id)arg1 callOutQueue:(id)arg2 ;
-(FBApplicationProcessExitContext *)exitContext;
-(double)elapsedCPUTime;
-(id)GSEventPort;
-(id)GSEventPortName;
-(id)UIRemoteAppPortName;
-(char)bootstrapAndExec;
-(void)noteWorkspaceLocked:(char)arg1 ;
-(void)setConnectedToExternalAccessory:(char)arg1 ;
-(void)executeBlockAfterLaunchCompletes:(/*^block*/id)arg1 ;
-(char)_queue_supportsBackgroundTaskAssertions;
-(char)isRecordingAudio;
-(char)isNowPlayingWithAudio;
-(char)isConnectedToExternalAccessory;
-(id)_queue_taskPort;
-(void)launchIfNecessary;
@end

