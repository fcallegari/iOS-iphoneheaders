/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:16:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class UILabel;

@interface ACSportsAthleteComparisonHeaderView : SiriUIContentCollectionViewCell {

	UILabel* _playerColumnLabel;
	UILabel* _statColumnLabel;
	BOOL _showPlayerImage;

}

@property (assign,nonatomic) BOOL showPlayerImage;              //@synthesize showPlayerImage=_showPlayerImage - In the implementation block
+(double)contentHeight;
-(BOOL)showPlayerImage;
-(void)configureWithSnippetItemDetails:(id)arg1 ;
-(void)setShowPlayerImage:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end

