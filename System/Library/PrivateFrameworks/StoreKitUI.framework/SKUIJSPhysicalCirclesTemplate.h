/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:53 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKUIJSPhysicalCirclesTemplate.h>

@protocol SKUIJSPhysicalCirclesTemplate <JSExport>
@required
-(void)afterDOMUpdate:(id)arg1;
-(void)performFinishAnimation:(id)arg1;
-(void)performResetAnimation:(id)arg1;

@end


@class SKUIPhysicalCirclesTemplateDOMFeature;

@interface SKUIJSPhysicalCirclesTemplate : IKJSObject <SKUIJSPhysicalCirclesTemplate> {

	SKUIPhysicalCirclesTemplateDOMFeature* _feature;

}
-(id)initWithAppContext:(id)arg1 DOMFeature:(id)arg2 ;
-(void)_performAnimationWithType:(long long)arg1 callback:(id)arg2 ;
-(void)afterDOMUpdate:(id)arg1 ;
-(void)performFinishAnimation:(id)arg1 ;
-(void)performResetAnimation:(id)arg1 ;
@end

