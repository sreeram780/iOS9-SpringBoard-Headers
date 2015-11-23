/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:46 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>

@protocol SLRemoteComposeViewControllerDelegateProtocol;
@interface SLRemoteComposeViewController : _UIRemoteViewController {

	id<SLRemoteComposeViewControllerDelegateProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<SLRemoteComposeViewControllerDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SLRemoteComposeViewControllerDelegateProtocol>)arg1 ;
-(id<SLRemoteComposeViewControllerDelegateProtocol>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
@end

