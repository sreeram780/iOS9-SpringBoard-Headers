/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:15 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicJSNativeViewController.h>
#import <libobjc.A.dylib/MusicJSAccountNativeViewController.h>

@protocol MusicJSAccountNativeViewController <JSExport,MusicJSNativeViewController>
@required
-(void)close;
-(void)setAccountDocument:(id)arg1 :(id)arg2;

@end


@protocol MusicJSAccountNativeViewControllerDelegate;
@class IKDOMDocument, IKAppDocument, NSDictionary, IKJSNavigationDocument;

@interface MusicJSAccountNativeViewController : MusicJSNativeViewController <MusicJSAccountNativeViewController> {

	IKDOMDocument* _accountJSDocument;
	IKAppDocument* _accountDocument;
	NSDictionary* _accountDocumentOptions;
	id<MusicJSAccountNativeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MusicJSAccountNativeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IKAppDocument * accountDocument;                                           //@synthesize accountDocument=_accountDocument - In the implementation block
@property (nonatomic,readonly) NSDictionary * accountDocumentOptions;                                     //@synthesize accountDocumentOptions=_accountDocumentOptions - In the implementation block
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
-(void)setDelegate:(id<MusicJSAccountNativeViewControllerDelegate>)arg1 ;
-(id<MusicJSAccountNativeViewControllerDelegate>)delegate;
-(void)close;
-(id)nativeViewIdentifier;
-(void)setAccountDocument:(id)arg1 :(id)arg2 ;
-(IKAppDocument *)accountDocument;
-(NSDictionary *)accountDocumentOptions;
@end

