/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSSecureCoding.h>

@class GKAchievement, GKPlayer, GKGame, UIImage;

@interface GKAchievementSharingInfo : NSObject <NSCoding, NSSecureCoding> {

	BOOL _complete;
	GKAchievement* _achievement;
	GKPlayer* _player;
	GKGame* _game;
	UIImage* _iconImage;
	UIImage* _badgeImage;

}

@property (nonatomic,retain) GKAchievement * achievement;              //@synthesize achievement=_achievement - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                        //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGame * game;                            //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                      //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) UIImage * badgeImage;                     //@synthesize badgeImage=_badgeImage - In the implementation block
@property (assign,nonatomic) BOOL complete;                            //@synthesize complete=_complete - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)setAchievement:(id)arg1 ;
-(id)achievement;
-(void)setBadgeImage:(id)arg1 ;
-(id)badgeImage;
-(id)operationThatBlocksUntilLoaded;
-(id)thumbnailForActivityType:(id)arg1 ;
-(id)itemsForActivityType:(id)arg1 ;
-(id)subjectForEmailActivity;
-(id)initWithAchievement:(id)arg1 forGame:(id)arg2 playerID:(id)arg3 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)iconImage;
-(void)setComplete:(BOOL)arg1 ;
-(BOOL)complete;
-(void)setIconImage:(id)arg1 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

