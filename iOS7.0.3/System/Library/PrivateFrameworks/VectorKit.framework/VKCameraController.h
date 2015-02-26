/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:00 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol VGLCanvas, VKCameraControllerDelegate;
@class VKCamera;

@interface VKCameraController : NSObject {

	VKCamera* _camera;
	<VGLCanvas>* _canvas;
	<VKCameraControllerDelegate>* _delegate;
	BOOL _gesturing;
	int _animating;

}

@property (nonatomic,retain) VKCamera * camera;                                    //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic) <VGLCanvas> * canvas;                                 //@synthesize canvas=_canvas - In the implementation block
@property (assign,nonatomic) <VKCameraControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isGesturing,nonatomic) BOOL gesturing;                    //@synthesize gesturing=_gesturing - In the implementation block
@property (getter=isAnimating,nonatomic,readonly) BOOL animating; 
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(BOOL)isAnimating;
-(id)camera;
-(void)setCamera:(id)arg1 ;
-(id)canvas;
-(void)setCanvas:(id)arg1 ;
-(BOOL)isGesturing;
-(void)setGesturing:(BOOL)arg1 ;
-(id)detailedDescription;
-(void)canvasDidLayout;
-(void)beginAnimating;
-(void)endAnimating:(BOOL)arg1 ;
@end
