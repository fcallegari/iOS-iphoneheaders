/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:40 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@class CKChatItem;

@interface CKTranscriptCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {

	CGRect _targetFrame;
	CGRect _currentFrame;
	float _easing;
	float _targetEasing;
	char _orientation;
	CATransform3D _contentTransform3D;
	float _targetCenterY;
	float _currentCenterY;
	float _height;
	float _factor;
	char _hidden;
	CKChatItem* _chatItem;

}

@property (nonatomic,readonly) CATransform3D contentTransform3D;              //@synthesize contentTransform3D=_contentTransform3D - In the implementation block
@property (nonatomic,retain) CKChatItem * chatItem;                           //@synthesize chatItem=_chatItem - In the implementation block
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CATransform3D)contentTransform3D;
-(CKChatItem *)chatItem;
-(void)setChatItem:(CKChatItem *)arg1 ;
@end
