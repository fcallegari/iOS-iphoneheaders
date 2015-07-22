/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIPageControl.h>

@protocol CheckForLocalCityDelegate;
@interface TabScrollIndicatorView : UIPageControl {

	id<CheckForLocalCityDelegate> _delegate;

}

@property (assign,nonatomic) id<CheckForLocalCityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<CheckForLocalCityDelegate>)arg1 ;
-(id<CheckForLocalCityDelegate>)delegate;
-(float)minimumWidth;
-(id)_pageIndicatorImageForPage:(int)arg1 ;
-(id)_pageIndicatorCurrentImageForPage:(int)arg1 ;
-(float)_indicatorSpacing;
-(CGRect)_modernBounds;
@end
