/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:17 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/CKBalloonChatItem.h>

@class NSString;

@interface CKLocatingChatItem : CKBalloonChatItem

@property (nonatomic,copy,readonly) NSString * locationText; 
-(id)description;
-(id)message;
-(id)time;
-(id)sender;
-(Class)balloonViewClass;
-(BOOL)isFromMe;
-(BOOL)failed;
-(void)configureBalloonView:(id)arg1 ;
-(NSString *)locationText;
@end
