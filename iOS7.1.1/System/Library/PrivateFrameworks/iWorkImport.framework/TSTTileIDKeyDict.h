/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>

@interface TSTTileIDKeyDict : TSPContainedObject {

	hash_map<unsigned int, SFUtility::ObjcSharedPtr<NSObject>, TSTIntHasher, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, SFUtility::ObjcSharedPtr<NSObject> > > >* mMap;

}
-(void)saveToArchive:(TileStorage*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const TileStorage*)arg1 unarchiver:(id)arg2 owner:(id)arg3 ;
-(id)tileForID:(SCD_Struct_TS493)arg1 ;
-(void)setTile:(id)arg1 forID:(SCD_Struct_TS493)arg2 ;
-(void)removeTileForID:(SCD_Struct_TS493)arg1 ;
-(void)applyFunction:(/*function pointer*/ void*)arg1 withState:(void*)arg2 ;
-(void)makeTilesPerformSelector:(SEL)arg1 ;
-(id)initWithOwner:(id)arg1 ;
-(void)dealloc;
-(long long)count;
-(void)removeAllTiles;
@end
