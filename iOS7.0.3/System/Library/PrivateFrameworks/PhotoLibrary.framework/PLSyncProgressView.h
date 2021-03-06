/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, NSNumberFormatter;

@interface PLSyncProgressView : UIView {

	UIActivityIndicatorView* _spinner;
	UILabel* _infoLabel;
	NSNumberFormatter* _countFormatter;
	int _style;
	int _progressType;
	unsigned _currentCount;
	unsigned _totalCount;

}

@property (nonatomic,readonly) int style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) int progressType;                   //@synthesize progressType=_progressType - In the implementation block
@property (nonatomic,readonly) unsigned currentCount;              //@synthesize currentCount=_currentCount - In the implementation block
@property (nonatomic,readonly) unsigned totalCount;                //@synthesize totalCount=_totalCount - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)style;
-(id)initWithStyle:(int)arg1 ;
-(unsigned)totalCount;
-(id)_progressDescription;
-(int)progressType;
-(unsigned)currentCount;
-(void)setCurrentCount:(unsigned)arg1 totalCount:(unsigned)arg2 progressType:(int)arg3 ;
@end

