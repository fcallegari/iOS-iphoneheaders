/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKValueWithCaptionBubbleControl.h>

@class NSString, NSAttributedString, GKLabel;

@interface GKTextBubbleControl : GKValueWithCaptionBubbleControl

@property (nonatomic,@dynamic,retain) NSString * text; 
@property (nonatomic,@dynamic,retain) NSAttributedString * attributedText; 
@property (nonatomic,@dynamic,retain) GKLabel * textLabel; 
-(void)setTextLabel:(id)arg1 ;
-(void)setCaptionText:(id)arg1 ;
-(void)setAttributedCaptionText:(id)arg1 ;
-(void)setCaptionLabel:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)text;
-(void)setAttributedText:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)attributedText;
-(id)textLabel;
@end
