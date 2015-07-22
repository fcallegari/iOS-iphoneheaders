/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:10 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIView, UIColor;

@interface TKPickerDividerTableViewCell : UITableViewCell {

	UIView* _dividerView;
	long long _contentBackdropOverlayBlendMode;

}

@property (nonatomic,retain) UIColor * contentBackgroundColor; 
@property (assign,nonatomic) long long contentBackdropOverlayBlendMode; 
@property (setter=_setDividerView:,nonatomic,retain) UIView * _dividerView;                                                       //@synthesize dividerView=_dividerView - In the implementation block
@property (assign,setter=_setContentBackdropOverlayBlendMode:,nonatomic) long long _contentBackdropOverlayBlendMode;              //@synthesize contentBackdropOverlayBlendMode=_contentBackdropOverlayBlendMode - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSeparatorStyle:(long long)arg1 ;
-(void)setContentBackdropOverlayBlendMode:(long long)arg1 ;
-(void)setContentBackgroundColor:(UIColor *)arg1 ;
-(CGRect)_dividerViewFrame;
-(void)_setDividerView:(id)arg1 ;
-(UIView *)_dividerView;
-(long long)_contentBackdropOverlayBlendMode;
-(void)_setContentBackdropOverlayBlendMode:(long long)arg1 ;
-(UIColor *)contentBackgroundColor;
-(long long)contentBackdropOverlayBlendMode;
@end
