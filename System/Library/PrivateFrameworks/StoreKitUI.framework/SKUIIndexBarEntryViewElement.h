/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIViewElement;

@interface SKUIIndexBarEntryViewElement : SKUIViewElement {

	NSString* _targetIndexBarEntryID;
	long long _visibilityPriority;

}

@property (nonatomic,readonly) SKUIViewElement * childElement; 
@property (nonatomic,copy,readonly) NSString * targetIndexBarEntryID;              //@synthesize targetIndexBarEntryID=_targetIndexBarEntryID - In the implementation block
@property (nonatomic,readonly) long long visibilityPriority;                       //@synthesize visibilityPriority=_visibilityPriority - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)visibilityPriority;
-(SKUIViewElement *)childElement;
-(NSString *)targetIndexBarEntryID;
@end

