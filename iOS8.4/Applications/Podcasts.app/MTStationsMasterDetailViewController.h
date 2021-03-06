/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/MTMasterDetailViewController.h>
#import <Podcasts/MTSourceListDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class MTPodcastPlaylistSheetViewController, UITabBarItem, UINavigationController, NSString;

@interface MTStationsMasterDetailViewController : MTMasterDetailViewController <MTSourceListDelegate, UIAlertViewDelegate, UINavigationControllerDelegate> {

	MTPodcastPlaylistSheetViewController* _newPlaylistController;
	UITabBarItem* _tabBarItem;

}

@property (nonatomic,readonly) UINavigationController * masterViewController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sourceList:(id)arg1 didSelectItemUuid:(id)arg2 atIndexPath:(id)arg3 ;
-(void)sourceList:(id)arg1 didUpdateSelectedItemUuid:(id)arg2 ;
-(id)newMasterViewController;
-(id)newDetailViewController;
-(id)newDetailNavControllerWithRootViewController:(id)arg1 ;
-(void)animatePopToRootViewController:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)tabBarItem;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(id)popToRootViewControllerAnimated:(char)arg1 ;
@end

