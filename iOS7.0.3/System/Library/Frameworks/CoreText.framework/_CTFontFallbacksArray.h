/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreFoundation/NSArray.h>

@class NSArray, NSMutableArray;

@interface _CTFontFallbacksArray : NSArray {

	int _lock;
	const TBaseFont* _baseFont;
	unsigned _count;
	NSArray* _cascade;
	NSMutableArray* _fallbacks;

}
-(id)initWithBaseFont:(const TBaseFont*)arg1 cascade:(id)arg2 ;
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_CT1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
@end

