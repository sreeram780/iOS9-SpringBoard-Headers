/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:50 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSArray, NSMutableSet, NSSet;

@interface SKUIPageComponentContext : NSObject <NSCopying> {

	NSDictionary* _componentDictionary;
	NSArray* _ineligibleGratisIdentifiers;
	NSDictionary* _items;
	long long _layoutStyle;
	double _pageGenerationTime;
	NSDictionary* _platformKeyProfileOverrides;
	NSMutableSet* _unavailableItems;

}

@property (nonatomic,copy) NSDictionary * componentDictionary;                          //@synthesize componentDictionary=_componentDictionary - In the implementation block
@property (nonatomic,copy) NSDictionary * items;                                        //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                     //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,readonly) double pageGenerationTime;                               //@synthesize pageGenerationTime=_pageGenerationTime - In the implementation block
@property (nonatomic,copy) NSDictionary * platformKeyProfileOverrides;                  //@synthesize platformKeyProfileOverrides=_platformKeyProfileOverrides - In the implementation block
@property (nonatomic,copy) NSArray * ineligibleGratisIdentifiers;                       //@synthesize ineligibleGratisIdentifiers=_ineligibleGratisIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allUnavailableItemIdentifiers;              //@synthesize unavailableItems=_unavailableItems - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)items;
-(void)setItems:(NSDictionary *)arg1 ;
-(NSDictionary *)componentDictionary;
-(double)pageGenerationTime;
-(void)addUnavailableItemIdentifiers:(id)arg1 ;
-(BOOL)isUnavailableItemIdentifier:(id)arg1 ;
-(id)itemForItemIdentifier:(id)arg1 ;
-(void)setUnavailableItemIdentifiers:(id)arg1 ;
-(NSSet *)allUnavailableItemIdentifiers;
-(void)setComponentDictionary:(NSDictionary *)arg1 ;
-(NSArray *)ineligibleGratisIdentifiers;
-(void)setIneligibleGratisIdentifiers:(NSArray *)arg1 ;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(NSDictionary *)platformKeyProfileOverrides;
-(void)setPlatformKeyProfileOverrides:(NSDictionary *)arg1 ;
@end

