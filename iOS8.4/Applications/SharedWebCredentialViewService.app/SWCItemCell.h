/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/SharedWebCredentialViewService.app/SharedWebCredentialViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSDictionary, UIView;

@interface SWCItemCell : UITableViewCell {

	NSDictionary* _dict;
	char _isTicked;
	UIView* _bottomLine;
	UIView* _bottomLineSelected;
	UIView* _topLine;
	UIView* _topLineSelected;
	char _showSeparator;
	char _showTopSeparator;
	id _userInfo;

}

@property (nonatomic,readonly) id userInfo;                   //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) char showSeparator;              //@synthesize showSeparator=_showSeparator - In the implementation block
-(void)setTicked:(char)arg1 ;
-(void)setShowTopSeparator:(char)arg1 ;
-(void)setShowSeparator:(char)arg1 ;
-(char)showSeparator;
-(void)layoutSubviews;
-(id)initWithDictionary:(id)arg1 ;
-(id)userInfo;
@end
