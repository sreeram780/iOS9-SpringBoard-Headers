/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:12 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/SBSDisplayLayoutElement.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBSDisplayLayoutElement.h>
@class NSString;


@protocol FBSDisplayLayoutElement <FBSUIApplicationLayoutElement>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect referenceFrame; 
@property (nonatomic,readonly) long long level; 
@required
-(CGRect)frame;
-(NSString *)identifier;
-(long long)level;
-(CGRect)referenceFrame;

@end


@class NSString, BSMutableSettings;

@interface FBSDisplayLayoutElement : NSObject <SBSDisplayLayoutElement, NSCopying, BSXPCCoding, BSSettingDescriptionProvider, BSDescriptionProviding, FBSDisplayLayoutElement> {

	NSString* _identifier;
	NSString* _bundleIdentifier;
	CGRect _frame;
	CGRect _referenceFrame;
	long long _level;
	BOOL _fillsDisplayBounds;
	BOOL _application;
	BOOL _keyboardFocus;
	BSMutableSettings* _otherSettings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSpringBoardElement,nonatomic,readonly) BOOL springBoardElement; 
@property (nonatomic,readonly) long long layoutRole; 
@property (nonatomic,copy) NSString * identifier;                                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGRect referenceFrame;                                                //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (assign,nonatomic) long long level;                                                      //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) BOOL fillsDisplayBounds;                                              //@synthesize fillsDisplayBounds=_fillsDisplayBounds - In the implementation block
@property (assign,getter=isUIApplicationElement,nonatomic) BOOL UIApplicationElement;              //@synthesize application=_application - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                            //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasKeyboardFocus;                                                //@synthesize keyboardFocus=_keyboardFocus - In the implementation block
@property (nonatomic,copy,readonly) BSMutableSettings * otherSettings;                             //@synthesize otherSettings=_otherSettings - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                         //@synthesize frame=_frame - In the implementation block
-(long long)layoutRole;
-(BOOL)isSpringBoardElement;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)identifier;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(long long)arg1 ;
-(long long)level;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(Class)fallbackXPCEncodableClass;
-(BSMutableSettings *)otherSettings;
-(BOOL)isUIApplicationElement;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)hasKeyboardFocus;
-(BOOL)fillsDisplayBounds;
-(void)setFillsDisplayBounds:(BOOL)arg1 ;
-(void)setUIApplicationElement:(BOOL)arg1 ;
-(void)setHasKeyboardFocus:(BOOL)arg1 ;
-(void)setOtherSettings:(BSMutableSettings *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(CGRect)referenceFrame;
-(void)setReferenceFrame:(CGRect)arg1 ;
@end

