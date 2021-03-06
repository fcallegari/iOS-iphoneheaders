/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class VKPolylineOverlayPainter, StarkChromeViewController, VKAttributedRoute, VKAttributedRouteMatch, MKMapItem;

@interface StarkRouteGeniusAnnotationsManager : NSObject {

	VKPolylineOverlayPainter* _routeLinePainter;
	StarkChromeViewController* _chrome;
	VKAttributedRoute* _attributedRoute;
	VKAttributedRouteMatch* _match;
	MKMapItem* _destination;

}

@property (assign,nonatomic,__weak) StarkChromeViewController * chrome;              //@synthesize chrome=_chrome - In the implementation block
@property (nonatomic,retain) VKAttributedRoute * attributedRoute;                    //@synthesize attributedRoute=_attributedRoute - In the implementation block
@property (nonatomic,retain) VKAttributedRouteMatch * match;                         //@synthesize match=_match - In the implementation block
@property (nonatomic,retain) MKMapItem * destination;                                //@synthesize destination=_destination - In the implementation block
-(id)chrome;
-(id)attributedRoute;
-(UIEdgeInsets)_mapViewInsets;
-(void)_eraseRoute:(id)arg1 ;
-(void)setAttributedRoute:(id)arg1 ;
-(void)_drawRoute:(id)arg1 ;
-(void)recenterCameraOnRouteAnimated:(BOOL)arg1 ;
-(void)setChrome:(id)arg1 ;
-(id)match;
-(void)setMatch:(id)arg1 ;
-(id)mapViewCurrentRouteMatch:(id)arg1 ;
-(id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2 ;
-(id)destination;
-(void)setDestination:(id)arg1 ;
-(void).cxx_destruct;
-(void)clearAnnotations;
-(id)mapView;
@end

