/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, FBSDisplayLayoutElement;

@interface FBDisplayLayoutElement : NSObject <BSDescriptionProviding> {

	Class _elementClass;
	NSString* _identifier;
	FBSDisplayLayoutElement* _element;
	unsigned long long _displayType;
	BOOL _activated;

}

@property (nonatomic,readonly) unsigned long long displayType;                        //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain,readonly) FBSDisplayLayoutElement * element;              //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) Class elementClass;                                    //@synthesize elementClass=_elementClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(NSString *)identifier;
-(void)deactivate;
-(void)activate;
-(unsigned long long)displayType;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)activateWithBuilder:(/*^block*/id)arg1 ;
-(id)initWithDisplayType:(unsigned long long)arg1 identifier:(id)arg2 elementClass:(Class)arg3 ;
-(void)updateWithBuilder:(/*^block*/id)arg1 ;
-(Class)elementClass;
-(FBSDisplayLayoutElement *)element;
@end
