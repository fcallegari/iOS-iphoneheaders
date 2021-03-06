/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UISwitch;

@interface PKSettingTableCell : UITableViewCell {

	id _target;
	SEL _action;
	UISwitch* _settingSwitch;

}

@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (nonatomic,readonly) id target;                           //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL action;                          //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) UISwitch * settingSwitch;              //@synthesize settingSwitch=_settingSwitch - In the implementation block
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(UISwitch *)settingSwitch;
-(void)setSettingSwitch:(UISwitch *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(SEL)action;
-(id)target;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
@end

