/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:04 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@interface NSCFArray : NSMutableArray
+(bool)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)replaceObjectsInRange:(NSRange)arg1 withObjects:(id*)arg2 count:(unsigned long long)arg3 ;
-(bool)containsObject:(id)arg1 inRange:(NSRange)arg2 ;
-(oneway void)release;
-(id)retain;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)retainCount;
-(void)removeLastObject;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(Class)classForCoder;
-(void)sortUsingFunction:(/*function pointer*/ void*)arg1 context:(void*)arg2 ;
-(bool)_tryRetain;
-(bool)_isDeallocating;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void)finalize;
@end

