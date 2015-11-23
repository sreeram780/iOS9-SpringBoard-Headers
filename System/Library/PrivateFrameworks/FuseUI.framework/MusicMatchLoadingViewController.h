/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol OS_dispatch_source;
@class MusicMatchLoadingView, NSObject, NSString;

@interface MusicMatchLoadingViewController : UIViewController {

	MusicMatchLoadingView* _matchLoadingView;
	NSObject*<OS_dispatch_source> _updateTimerSource;
	NSString* _loadingTitle;

}

@property (nonatomic,retain) NSString * loadingTitle;              //@synthesize loadingTitle=_loadingTitle - In the implementation block
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setLoadingTitle:(NSString *)arg1 ;
-(void)_updateCloudProgressAnimated:(BOOL)arg1 ;
-(NSString *)loadingTitle;
@end

