/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:01 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OADClient, OADDrawableContainer;
#import <OfficeImport/OfficeImport-Structs.h>
@class OADDrawableProperties;

@interface OADDrawable : NSObject {

	BOOL mHidden;
	unsigned mId;
	unsigned mAltId;
	OADDrawableProperties* mDrawableProperties;
	id<OADClient> mClientData;
	OADDrawable*<OADDrawableContainer> mParent;

}
+(unsigned)generateOADDrawableId:(id)arg1 ;
-(id)createWordClientDataWithTextType:(int)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(id)description;
-(BOOL)hidden;
-(id)clientData;
-(unsigned)id;
-(id)parent;
-(id)drawableProperties;
-(void)setParent:(id)arg1 ;
-(void)setClientData:(id)arg1 ;
-(void)setId:(unsigned)arg1 ;
-(void)setAltId:(unsigned)arg1 ;
-(void)setDrawableProperties:(id)arg1 ;
-(unsigned)altId;
-(id)ensureClientDataOfClass:(Class)arg1 ;
-(id)createOrientedBoundsWithBounds:(CGRect)arg1 ;
-(void)removeUnnecessaryOverrides;
-(id)initWithPropertiesClass:(Class)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
@end

