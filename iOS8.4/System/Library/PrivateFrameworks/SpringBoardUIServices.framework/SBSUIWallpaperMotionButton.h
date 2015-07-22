/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardFoundation/SBFButton.h>

@class UILabel, _UIBackdropView;

@interface SBSUIWallpaperMotionButton : SBFButton {

	UILabel* _leftLabel;
	UILabel* _rightLabel;
	double _maxRightLabelWidth;
	_UIBackdropView* _backdropView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateForStateChange;
-(double)_maxRightLabelWidth;
-(id)_newBackdropView;
-(double)_labelHorizontalPadding;
-(double)_separationWidth;
@end
