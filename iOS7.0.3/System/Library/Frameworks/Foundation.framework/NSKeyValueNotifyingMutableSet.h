/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueMutableSet.h>

@class NSMutableSet;

@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet {

	NSMutableSet* _mutableSet;

}
+(SCD_Struct_NS32*)_proxyNonGCPoolPointer;
+(id)_proxyShare;
-(void)setSet:(id)arg1 ;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(void)removeObject:(id)arg1 ;
-(unsigned)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(id)objectEnumerator;
-(void)unionSet:(id)arg1 ;
-(id)member:(id)arg1 ;
@end

