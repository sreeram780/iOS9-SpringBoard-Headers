/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, UIViewController;

@interface UIStoryboardSegue : NSObject {

	NSString* _identifier;
	UIViewController* _sourceViewController;
	UIViewController* _destinationViewController;
	/*^block*/id _performHandler;
	/*^block*/id _prepareHandler;
	id _sender;

}

@property (nonatomic,copy,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) UIViewController * sourceViewController;                   //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * destinationViewController;              //@synthesize destinationViewController=_destinationViewController - In the implementation block
@property (nonatomic,copy) id prepareHandler;                                             //@synthesize prepareHandler=_prepareHandler - In the implementation block
@property (nonatomic,copy) id performHandler;                                             //@synthesize performHandler=_performHandler - In the implementation block
@property (nonatomic,retain) id sender;                                                   //@synthesize sender=_sender - In the implementation block
+(id)segueWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 performHandler:(/*^block*/id)arg4 ;
-(id)init;
-(NSString *)identifier;
-(UIViewController *)sourceViewController;
-(id)sender;
-(UIViewController *)destinationViewController;
-(id)initWithIdentifier:(id)arg1 source:(id)arg2 destination:(id)arg3 ;
-(void)setPrepareHandler:(id)arg1 ;
-(void)setPerformHandler:(id)arg1 ;
-(void)setSender:(id)arg1 ;
-(void)_prepare;
-(void)perform;
-(id)performHandler;
-(id)prepareHandler;
@end

