/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:51 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, UIViewController;

@interface UIViewControllerAction : NSObject {

	NSString* _name;
	int _transition;
	/*^block*/id _completion;
	double _curlUpRevealedHeight;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;                                   //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL animated; 
@property (assign,nonatomic) int transition;                                                             //@synthesize transition=_transition - In the implementation block
@property (nonatomic,copy) id completion;                                                                //@synthesize completion=_completion - In the implementation block
@property (assign,setter=_setCurlUpRevealedHeight:,nonatomic) double _curlUpRevealedHeight;              //@synthesize curlUpRevealedHeight=_curlUpRevealedHeight - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(double)_curlUpRevealedHeight;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setTransition:(int)arg1 ;
-(int)transition;
-(id)initWithViewController:(id)arg1 name:(id)arg2 transition:(int)arg3 ;
-(BOOL)animated;
-(void)_setCurlUpRevealedHeight:(double)arg1 ;
-(UIViewController *)viewController;
@end

