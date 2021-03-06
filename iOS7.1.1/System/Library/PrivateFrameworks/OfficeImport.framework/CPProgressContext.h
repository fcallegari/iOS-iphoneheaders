/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:05 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSUProgressContext, CPProgressStage, NSDate, NSMutableArray;

@interface CPProgressContext : NSObject {

	TSUProgressContext* m_parentProgressContext;
	CPProgressStage* m_currentStage;
	NSDate* m_lastReportTime;
	NSMutableArray* m_stackOfBranches;

}
+(id)contextForCurrentThread;
+(id)stageForCurrentThread;
+(void)setProgress:(double)arg1 ;
+(void)setMessage:(id)arg1 ;
+(void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 ;
+(void)endStage;
+(void)removeContextForCurrentThread;
+(void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 ;
+(void)advanceProgress:(double)arg1 ;
+(double)currentPosition;
+(void)createContextForCurrentThreadWithParentContext:(id)arg1 ;
+(void)addProgressObserver:(id)arg1 selector:(SEL)arg2 ;
+(void)removeProgressObserver:(id)arg1 ;
+(id)createBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3 ;
+(void)endBranch:(id)arg1 ;
+(void)pushBranch:(id)arg1 ;
+(void)popBranch;
-(void)dealloc;
-(id)initWithParentContext:(id)arg1 ;
-(id)currentStage;
-(id)rootStage;
-(void)reportProgress:(double)arg1 ;
@end

