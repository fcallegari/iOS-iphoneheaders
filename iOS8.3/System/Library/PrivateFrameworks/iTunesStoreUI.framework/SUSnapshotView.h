/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:39:42 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView;

@interface SUSnapshotView : UIView {

	UIView* _imageView;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)snapshotView:(id)arg1 usingIOSurface:(char)arg2 ;
-(void)_takeIOSurfaceSnapshotOfView:(id)arg1 ;
-(void)_takeCGSnapshotOfView:(id)arg1 ;
@end
