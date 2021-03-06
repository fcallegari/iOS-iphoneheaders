/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:16 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@interface TSTCell : NSObject <NSCopying> {

	SCD_Struct_TS494* mPrivate;

}
+(id)cell;
-(void)inflateFromStorageRef:(TSTCellStorage*)arg1 dataStore:(id)arg2 suppressingFormulaInflation:(char)arg3 ;
-(id)applyCellDiff:(id)arg1 ;
-(void)inflateFromStorageRef:(TSTCellStorage*)arg1 dataStore:(id)arg2 ;
-(id)initWithStorageRef:(TSTCellStorage*)arg1 dataStore:(id)arg2 ;
-(char)isCellContentsEqualToCell:(id)arg1 ;
-(void)applyFormulaResult:(const TSCEValue*)arg1 context:(id)arg2 hasWarnings:(char)arg3 outWriteDidBeginOrEndWithTextCell:(char*)arg4 ;
-(void)applyFormulaResult:(const TSCEValue*)arg1 ;
-(void)writeToStorageRef:(TSTCellStorage*)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCell:(id)arg1 ;
@end

