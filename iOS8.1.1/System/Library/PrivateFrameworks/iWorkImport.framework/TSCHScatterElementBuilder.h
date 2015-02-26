/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:31 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHLineAreaScatterElementBuilder.h>

@interface TSCHScatterElementBuilder : TSCHLineAreaScatterElementBuilder
-(unsigned long long)countOfHitCheckRegionsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementPaths:(const CGPath*)arg4 outSelectionKnobLocations:(id*)arg5 ;
-(void)p_addTopStroke:(SCD_Struct_TS449*)arg1 toPath:(CGPathRef)arg2 withPointsArray:(SCD_Struct_TS447*)arg3 withCount:(unsigned long long)arg4 lineType:(int)arg5 ;
-(void)p_addKnobsForPoint:(CGPoint)arg1 strokedUnitSymbolRect:(CGRect)arg2 toKnobSet:(id)arg3 symbolsShowing:(BOOL)arg4 ;
-(BOOL)needsSeparateHitTestingPaths;
@end
