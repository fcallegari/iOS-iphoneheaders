/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSURL, FBAFormResponse;

@interface FBAUploadTask : NSManagedObject

@property (retain) NSNumber * taskIdentifier; 
@property (retain) NSURL * fileURL; 
@property (retain) NSNumber * bytesToUpload; 
@property (retain) NSNumber * bytesUploaded; 
@property (assign) int taskState; 
@property (retain) FBAFormResponse * formResponse; 
@property (retain) NSNumber * primitiveTaskState; 
-(int)taskState;
-(void)setTaskState:(int)arg1 ;
@end
