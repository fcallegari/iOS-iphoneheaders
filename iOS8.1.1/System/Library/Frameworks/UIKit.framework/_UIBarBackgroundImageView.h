/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:29 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class UIView, UIImageView;

@interface _UIBarBackgroundImageView : UIImageView {

	UIView* _topStripView;
	UIImageView* _customImageContainer;
	BOOL _translucent;

}

@property (assign,getter=isTranslucent,nonatomic) BOOL translucent;              //@synthesize translucent=_translucent - In the implementation block
-(void)setImage:(id)arg1 ;
-(BOOL)isTranslucent;
-(id)image;
-(id)topStripView;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)updateTopStripViewCreateIfNecessary;
-(void)removeTopStripView;
@end
