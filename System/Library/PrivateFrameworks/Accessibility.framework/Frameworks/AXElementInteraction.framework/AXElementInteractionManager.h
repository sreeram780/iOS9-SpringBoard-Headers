/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:14 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXElementInteraction.framework/AXElementInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXElementInteraction/AXElementInteraction-Structs.h>
#import <AXElementInteraction/AXUIClientDelegate.h>

@protocol AXElementInteractionManagerDelegate;
@class AXElement, AXUIClient, NSString;

@interface AXElementInteractionManager : NSObject <AXUIClientDelegate> {

	BOOL _interactionEnabled;
	AXElement* _focusedElement;
	AXObserverRef _axEventObserver;
	AXUIClient* _client;
	BOOL _displayCursor;
	id<AXElementInteractionManagerDelegate> _delegate;

}

@property (assign,nonatomic) id<AXElementInteractionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL displayCursor;                                            //@synthesize displayCursor=_displayCursor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)setDelegate:(id<AXElementInteractionManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AXElementInteractionManagerDelegate>)delegate;
-(void)setDisplayCursor:(BOOL)arg1 ;
-(void)_initializeAXObserver;
-(void)initializeFocus;
-(int)_registerForAXNotifications:(BOOL)arg1 ;
-(void)_sendMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 errorHandler:(/*^block*/id)arg3 ;
-(id)_allowDelegateToDecideElement:(id)arg1 ;
-(void)_highlightElement:(id)arg1 ;
-(BOOL)_moveFocusByHitTesting:(long long)arg1 ;
-(void)_moveToElement:(id)arg1 ;
-(id)_clientIdentifier;
-(void)startInteractionMode;
-(void)endInteractionMode;
-(void)_handleScreenChange;
-(void)_handleLayoutChange;
-(id)focusedElement;
-(id)_handleOpaqueElements:(id)arg1 startElement:(id)arg2 direction:(long long)arg3 ;
-(BOOL)performDirectionalNavigation:(long long)arg1 ;
-(BOOL)performActivate;
-(void)_sendMessageWithIdentifier:(unsigned long long)arg1 errorHandler:(/*^block*/id)arg2 ;
-(BOOL)displayCursor;
-(id)_client;
@end

