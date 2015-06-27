/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:18 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableArray.h>

@class _PFArray, NSMutableArray;

@interface _PFMutableProxyArray : NSMutableArray {

	int _cd_rc;
	unsigned _editCount;
	unsigned _offset;
	unsigned _limit;
	_PFArray* _originalArray;
	NSMutableArray* _updatedObjectsArray;
	CFArrayRef _indicesVeneer;

}
-(id)newArrayFromObjectIDs;
-(id)arrayFromObjectIDs;
-(unsigned)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)initWithPFArray:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_rehash;
-(id)initWithPFArray:(id)arg1 ;
-(id)retain;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(void)addObject:(id)arg1 ;
-(unsigned)indexOfObject:(id)arg1 ;
-(unsigned)retainCount;
-(id)subarrayWithRange:(NSRange)arg1 ;
-(void)removeLastObject;
-(unsigned)indexOfObjectIdenticalTo:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)removeObjectAtIndex:(unsigned)arg1 ;
-(char)_tryRetain;
-(char)_isDeallocating;
-(id)managedObjectIDAtIndex:(unsigned)arg1 ;
-(unsigned)indexOfObjectIdenticalTo:(id)arg1 inRange:(NSRange)arg2 ;
-(unsigned)indexOfObject:(id)arg1 inRange:(NSRange)arg2 ;
-(oneway void)release;
-(void)finalize;
@end
