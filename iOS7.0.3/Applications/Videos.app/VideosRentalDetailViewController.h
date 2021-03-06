/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Videos/VideosMovieDetailViewController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class VideosRentalTimeRemainingLabel;

@interface VideosRentalDetailViewController : VideosMovieDetailViewController <UIAlertViewDelegate> {

	VideosRentalTimeRemainingLabel* _expirationLabel;
	BOOL _playAtTime;
	double _startTime;

}
-(void)playButtonPressed:(id)arg1 ;
-(void)_playAtTime:(double)arg1 ;
-(id)expirationLabel;
-(id)initWithMediaItem:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void).cxx_destruct;
@end

