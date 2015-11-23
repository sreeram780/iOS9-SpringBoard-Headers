/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:31 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingTableViewCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol MPAVRoutingViewControllerDelegate;
@class UITableView, NSArray, MPWeakTimer, MPAVRoutingController, UIColor, NSString;

@interface MPAVRoutingViewController : UIViewController <MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	NSArray* _cachedRoutes;
	MPWeakTimer* _updateTimer;
	MPAVRoutingController* _routingController;
	UIColor* _tableCellsBackgroundColor;
	UIColor* _tableCellsContentColor;
	int _airPlayPasswordAlertDidAppearToken;
	int _airPlayPasswordAlertDidCancelToken;
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
	BOOL _cachedShowAirPlayDebugButton;
	BOOL _hasCachedAirPlayDebugButtonStatus;
	BOOL _needsDisplayedRoutesUpdate;
	BOOL _suspendedDiscoveryModeDueToApplicationState;
	long long _discoveryModeBeforeEnteringBackground;
	BOOL _allowMirroring;
	unsigned long long _style;
	id<MPAVRoutingViewControllerDelegate> _delegate;
	unsigned long long _avItemType;

}

@property (nonatomic,readonly) unsigned long long style;                                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVRoutingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=setAVItemType:,nonatomic) unsigned long long avItemType;                //@synthesize avItemType=_avItemType - In the implementation block
@property (assign,nonatomic) BOOL allowMirroring;                                                //@synthesize allowMirroring=_allowMirroring - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(BOOL)arg2 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(id)_routesWhereMirroringIsPreferred;
-(void)_setNeedsDisplayedRoutesUpdate;
-(void)_beginRouteDiscovery;
-(void)_endRouteDiscovery;
-(double)_tableViewHeightAccordingToDataSource;
-(unsigned long long)_tableViewNumberOfRows;
-(unsigned long long)_routeIndexForTableViewIndex:(unsigned long long)arg1 ;
-(BOOL)_shouldShowAirPlayDebugButton;
-(unsigned long long)_debugButtonTableViewIndex;
-(id)_displayedRoutes;
-(BOOL)_shouldShowMirroringCellForRoute:(id)arg1 ;
-(void)_showAirPlayDebug;
-(void)_pickRoute:(id)arg1 ;
-(unsigned long long)_tableViewIndexForRouteIndex:(unsigned long long)arg1 ;
-(double)_normalCellHeight;
-(double)_expandedCellHeight;
-(double)_tableViewHeaderViewHeight;
-(double)_tableViewFooterViewHeight;
-(void)_serviceWillPresentAuthenticationPromptNotification:(id)arg1 ;
-(void)_updateDisplayedRoutes;
-(void)_setupUpdateTimerIfNecessary;
-(void)setAVItemType:(unsigned long long)arg1 ;
-(id)_tableCellsBackgroundColor;
-(id)_tableCellsContentColor;
-(void)_setTableCellsBackgroundColor:(id)arg1 ;
-(void)_setTableCellsContentColor:(id)arg1 ;
-(unsigned long long)avItemType;
-(BOOL)allowMirroring;
-(void)setAllowMirroring:(BOOL)arg1 ;
-(void)setDelegate:(id<MPAVRoutingViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id<MPAVRoutingViewControllerDelegate>)delegate;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(unsigned long long)style;
-(void)viewWillLayoutSubviews;
-(id)_tableView;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
@end

