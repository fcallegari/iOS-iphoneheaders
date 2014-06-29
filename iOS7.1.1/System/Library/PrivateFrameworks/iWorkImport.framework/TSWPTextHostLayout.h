/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDDrawableLayout.h>
#import <iWorkImport/TSWPTextEditingHostLayout.h>

@class TSWPShapeInfo, TSWPShapeLayout;

@interface TSWPTextHostLayout : TSDDrawableLayout <TSWPTextEditingHostLayout> {

	TSWPShapeInfo* _editingShapeInfo;
	TSWPShapeLayout* _editingShapeLayout;

}

@property (nonatomic,readonly) TSWPShapeLayout * editingShapeLayout;              //@synthesize editingShapeLayout=_editingShapeLayout - In the implementation block
@property (nonatomic,retain) TSWPShapeInfo * editingShape;                        //@synthesize editingShapeInfo=_editingShapeInfo - In the implementation block
-(void)updateChildrenFromInfo;
-(id)editingShape;
-(void)setEditingShape:(id)arg1 ;
-(id)editingShapeLayout;
-(void)dealloc;
@end
