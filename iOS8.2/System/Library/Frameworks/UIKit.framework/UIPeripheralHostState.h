/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSDictionary;

@interface UIPeripheralHostState : NSObject {

	UIPeripheralAnimationGeometry _geometry;
	NSDictionary* _screenGeometry;
	char _inPositionIsDestination;

}

@property (assign,nonatomic) UIPeripheralAnimationGeometry geometry;              //@synthesize geometry=_geometry - In the implementation block
@property (nonatomic,retain) NSDictionary * screenGeometry;                       //@synthesize screenGeometry=_screenGeometry - In the implementation block
@property (assign,nonatomic) char inPositionIsDestination;                        //@synthesize inPositionIsDestination=_inPositionIsDestination - In the implementation block
+(id)stateWithGeometry:(UIPeripheralAnimationGeometry)arg1 inPositionIsDestination:(char)arg2 ;
-(void)dealloc;
-(UIPeripheralAnimationGeometry)geometry;
-(void)setGeometry:(UIPeripheralAnimationGeometry)arg1 ;
-(void)setInPositionIsDestination:(char)arg1 ;
-(void)setScreenGeometry:(NSDictionary *)arg1 ;
-(NSDictionary *)screenGeometry;
-(char)inPositionIsDestination;
@end

