/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusFoundation/OFUIViewController.h>
#import <libobjc.A.dylib/OFUIPagingViewDelegate.h>

@class OFUIPagingView, NSString;

@interface OFUIPagingViewController : OFUIViewController <OFUIPagingViewDelegate> {

	OFUIPagingView* pagingView;

}

@property (nonatomic,retain) OFUIPagingView * pagingView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)pagingViewClass;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillUnload;
-(void)viewDidUnload;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(OFUIPagingView *)pagingView;
-(long long)numberOfPagesInPagingView:(id)arg1 ;
-(id)viewForPageInPagingView:(id)arg1 atIndex:(long long)arg2 ;
-(void)setPagingView:(OFUIPagingView *)arg1 ;
@end

