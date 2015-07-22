/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewFlowLayout.h>

@class TKTheme;

@interface TKGridLayout : UICollectionViewFlowLayout {

	TKTheme* _theme;
	float _rowHeight;

}

@property (nonatomic,retain) TKTheme * theme;              //@synthesize theme=_theme - In the implementation block
@property (assign) float rowHeight;                        //@synthesize rowHeight=_rowHeight - In the implementation block
-(void)setRowHeight:(float)arg1 ;
-(float)rowHeight;
-(TKTheme *)theme;
-(void)setTheme:(TKTheme *)arg1 ;
@end
