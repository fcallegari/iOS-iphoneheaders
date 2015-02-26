/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertButton.h>

@class UIImageView, UIImage;

@interface UIAlertMediaButton : UIAlertButton {

	UIImageView* _checkmarkView;
	UIImage* _tableIcon;
	UIImage* _highlightedTableIcon;

}

@property (nonatomic,readonly) UIImageView * checkmarkView; 
@property (nonatomic,retain) UIImage * tableIcon;                         //@synthesize tableIcon=_tableIcon - In the implementation block
@property (nonatomic,retain) UIImage * highlightedTableIcon;              //@synthesize highlightedTableIcon=_highlightedTableIcon - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTableIcon:(id)arg1 ;
-(void)setHighlightedTableIcon:(id)arg1 ;
-(id)checkmarkView;
-(id)tableIcon;
-(id)highlightedTableIcon;
@end
