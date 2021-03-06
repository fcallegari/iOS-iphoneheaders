/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface SKUIDividerView : UIView {

	long long _dividerOrientation;
	double _dividerSize;

}

@property (nonatomic,retain) UIColor * dividerColor; 
@property (assign,nonatomic) long long dividerOrientation;              //@synthesize dividerOrientation=_dividerOrientation - In the implementation block
@property (assign,nonatomic) double dividerSize;                        //@synthesize dividerSize=_dividerSize - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)dividerColor;
-(void)setDividerOrientation:(long long)arg1 ;
-(void)setDividerSize:(double)arg1 ;
-(void)setDividerColor:(UIColor *)arg1 ;
-(long long)dividerOrientation;
-(double)dividerSize;
@end

