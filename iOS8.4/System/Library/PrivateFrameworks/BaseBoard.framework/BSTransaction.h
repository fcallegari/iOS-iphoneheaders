/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BaseBoard/BSWatchdogProviding.h>

@protocol BSLogging;
@class NSMutableSet, NSString, NSDate, NSMutableDictionary, NSMutableArray, NSHashTable, NSSet, NSArray;

@interface BSTransaction : NSObject <BSWatchdogProviding> {

	BSTransaction* _parentTransaction;
	NSMutableSet* _lifeAssertions;
	BOOL _failed;
	BOOL _interrupted;
	unsigned long long _state;
	NSString* _failureReason;
	NSDate* _startTime;
	NSMutableDictionary* _milestonesToHandlers;
	NSMutableArray* _childTransactions;
	NSMutableSet* _milestones;
	NSHashTable* _observers;
	NSMutableArray* _auditHistory;
	BOOL _buildAuditHistory;
	id<BSLogging> _debugLogger;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,retain,readonly) NSSet * milestones; 
@property (nonatomic,retain,readonly) NSArray * childTransactions; 
@property (getter=isInterrupted,nonatomic,readonly) BOOL interrupted; 
@property (getter=isInterruptable,nonatomic,readonly) BOOL interruptable; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (getter=isFailed,nonatomic,readonly) BOOL failed;                            //@synthesize failed=_failed - In the implementation block
@property (nonatomic,copy) id completionBlock; 
@property (nonatomic,retain) BSTransaction * parentTransaction;                        //@synthesize parentTransaction=_parentTransaction - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                               //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInterrupted;
-(BOOL)isFailed;
-(void)interrupt;
-(void)_enumerateObserversWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isComplete;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(unsigned long long)state;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(unsigned long long)_state;
-(void)begin;
-(void)_setState:(unsigned long long)arg1 ;
-(BOOL)isRunning;
-(void)addObserver:(id)arg1 ;
-(void)_debugLogWithFormat:(id)arg1 ;
-(void)_setParentTransaction:(id)arg1 assertIfNecessary:(BOOL)arg2 ;
-(void)_enumerateChildTransactionsWithBlock:(/*^block*/id)arg1 ;
-(void)_addChildTransaction:(id)arg1 ;
-(void)_removeChildTransaction:(id)arg1 ;
-(void)_willBegin;
-(void)_didBegin;
-(void)_preventTransactionCompletionForReason:(id)arg1 andExecuteBlock:(/*^block*/id)arg2 ;
-(BOOL)_isRootTransaction;
-(BOOL)isInterruptable;
-(void)interruptWithReason:(id)arg1 ;
-(void)_interruptWithReason:(id)arg1 force:(BOOL)arg2 ;
-(void)_failNow;
-(id)_stringForMilestones:(id)arg1 ;
-(BOOL)removeMilestones:(id)arg1 ;
-(BOOL)_removeMilestones:(id)arg1 ignoringAuditHistory:(BOOL)arg2 ;
-(void)_didSatisfyMilestone:(id)arg1 ;
-(id)_descriptionForDebugging:(BOOL)arg1 indentLevel:(unsigned long long)arg2 ;
-(void)_checkAndReportIfCompleted;
-(void)_noteTransactionStateInAuditHistory;
-(id)_parentTransaction;
-(id)_stringForState:(unsigned long long)arg1 ;
-(void)_setParentTransaction:(id)arg1 ;
-(void)_didAddChildTransaction:(id)arg1 ;
-(void)_willRemoveChildTransaction:(id)arg1 ;
-(void)_willFailWithReason:(id)arg1 ;
-(void)_noteCompleted;
-(void)_notifyObserversOfCompletion;
-(void)_noteChildTransactionCompleted:(id)arg1 ;
-(void)_willInterruptWithReason:(id)arg1 ;
-(BOOL)_areChildTransactionsComplete;
-(BOOL)_shouldComplete;
-(void)_addLifeAssertion:(id)arg1 ;
-(void)_removeLifeAssertion:(id)arg1 ;
-(id)_loggingProem;
-(NSArray *)childTransactions;
-(BOOL)hasChildTransactionsOfClass:(Class)arg1 ;
-(id)childTransactionsOfClass:(Class)arg1 ;
-(void)removeAllChildTransactionsOfClass:(Class)arg1 ;
-(void)removeChildTransaction:(id)arg1 ;
-(void)removeAllChildTransactions;
-(void)listenForSatisfiedMilestone:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_evaluateCompletion;
-(BOOL)buildAuditHistory;
-(id)auditHistory;
-(id)debugLogger;
-(BOOL)_isRootTransactionComplete;
-(BOOL)_isParentTransactionComplete;
-(void)_forceInterrupt;
-(id)_stringForInterruptReason:(id)arg1 ;
-(BSTransaction *)parentTransaction;
-(void)setParentTransaction:(BSTransaction *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)addChildTransaction:(id)arg1 ;
-(void)_willAddChildTransaction:(id)arg1 ;
-(void)_didRemoveChildTransaction:(id)arg1 ;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)failWithReason:(id)arg1 ;
-(void)_didComplete;
-(void)_addAuditHistory:(id)arg1 ;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)setDebugLogger:(id)arg1 ;
-(void)setBuildAuditHistory:(BOOL)arg1 ;
-(void)removeAllMilestones;
-(void)addMilestone:(id)arg1 ;
-(void)satisfyMilestone:(id)arg1 ;
-(void)_begin;
-(BOOL)isWaitingForMilestone:(id)arg1 ;
-(BOOL)removeMilestone:(id)arg1 ;
-(void)evaluateMilestone:(id)arg1 withEvaluator:(/*^block*/id)arg2 ;
-(void)_didInterruptWithReason:(id)arg1 ;
-(double)watchdogTimeout;
-(BOOL)shouldWatchdog:(id*)arg1 ;
-(NSSet *)milestones;
-(void)addMilestones:(id)arg1 ;
@end
