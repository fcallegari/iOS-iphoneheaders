/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TUAudioPlayer;

@interface PHAudioInterruptionController : NSObject {

	TUAudioPlayer* _player;

}

@property (nonatomic,retain) TUAudioPlayer * player;              //@synthesize player=_player - In the implementation block
+(id)sharedInstance;
-(void)_handleManagesAudioInterruptionsChange:(id)arg1 ;
-(void)_callInvitationSent:(id)arg1 ;
-(void)_callConnected:(id)arg1 ;
-(void)_callShouldSuppressRingtoneChanged:(id)arg1 ;
-(void)_handleTelephonyCallAudioFinishedNotification:(id)arg1 ;
-(void)_videoCallStatusChanged:(id)arg1 ;
-(void)_videoCallInvitationSent:(id)arg1 ;
-(void)_videoCallConnected:(id)arg1 ;
-(void)_updateAudioInterruptionsForCall:(id)arg1 ;
-(void)_beginInterruptionForCall:(id)arg1 ;
-(void)_updateAudioInterruptionsForVideoCall:(id)arg1 ;
-(void)_cancelDelayedEndInterruption;
-(void)stopRinging;
-(void)_ringForIncomingCall;
-(void)stopSounds;
-(void)playEndedSound;
-(void)_endInterruptionAfterDelay;
-(void)_endInterruption;
-(void)_captureInterruptionIfNecessaryFromCall:(id)arg1 ;
-(void)playConnectedSound;
-(void)playOutgoingRingingSound;
-(void)_playRingtoneForIncomingCall:(id)arg1 ;
-(void)playUpgradeSound;
-(void)playCallWaitingSound;
-(void)_delayedPlayOutgoingRingSound;
-(void)playFailedSound;
-(void)dealloc;
-(id)init;
-(void)_callStatusChanged:(id)arg1 ;
-(void)setPlayer:(TUAudioPlayer *)arg1 ;
-(TUAudioPlayer *)player;
@end

