/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GKChallengeEventHandlerDelegate, GKChallengeEventHandlerUIDelegate;
@class GKChallengeInternal;

@interface GKChallengeEventHandler : NSObject {

	id<GKChallengeEventHandlerDelegate> _delegateWeak;
	id<GKChallengeEventHandlerUIDelegate> _uiDelegate;
	GKChallengeInternal* _pendingReceivedChallenge;
	GKChallengeInternal* _pendingCompletedChallenge;

}

@property (assign,nonatomic) id<GKChallengeEventHandlerDelegate> delegate;                  //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (nonatomic,retain) GKChallengeInternal * pendingReceivedChallenge;                //@synthesize pendingReceivedChallenge=_pendingReceivedChallenge - In the implementation block
@property (nonatomic,retain) GKChallengeInternal * pendingCompletedChallenge;               //@synthesize pendingCompletedChallenge=_pendingCompletedChallenge - In the implementation block
@property (nonatomic,retain) id<GKChallengeEventHandlerUIDelegate> uiDelegate;              //@synthesize uiDelegate=_uiDelegate - In the implementation block
+(Class)uiDelegateClass;
+(id)challengeEventHandler;
-(void)dealloc;
-(void)setDelegate:(id<GKChallengeEventHandlerDelegate>)arg1 ;
-(id<GKChallengeEventHandlerDelegate>)delegate;
-(id<GKChallengeEventHandlerUIDelegate>)uiDelegate;
-(void)setUiDelegate:(id<GKChallengeEventHandlerUIDelegate>)arg1 ;
-(void)receivedChallengeSelected:(id)arg1 ;
-(void)completedChallengeSelected:(id)arg1 ;
-(void)challengeReceived:(id)arg1 ;
-(void)challengeCompleted:(id)arg1 ;
-(void)setPendingReceivedChallenge:(GKChallengeInternal *)arg1 ;
-(void)setPendingCompletedChallenge:(GKChallengeInternal *)arg1 ;
-(void)showBannerForChallenge:(id)arg1 complete:(/*^block*/id)arg2 ;
-(GKChallengeInternal *)pendingReceivedChallenge;
-(GKChallengeInternal *)pendingCompletedChallenge;
@end

