/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebBookmark, NSString;

@interface FolderPickerItem : NSObject {

	WebBookmark* _bookmark;
	unsigned _depth;

}

@property (nonatomic,readonly) WebBookmark * bookmark;              //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) unsigned depth;                      //@synthesize depth=_depth - In the implementation block
-(NSString *)title;
-(id)_initWithBookmark:(id)arg1 depth:(unsigned)arg2 ;
-(WebBookmark *)bookmark;
-(unsigned)depth;
@end
