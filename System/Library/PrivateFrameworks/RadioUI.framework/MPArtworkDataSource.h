/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:27 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPArtworkDataSource <NSObject>
@optional
-(id)existingArtworkEffectResultForEffectType:(unsigned long long)arg1 catalog:(id)arg2 options:(id)arg3;
-(void)loadArtworkEffectResultForEffectType:(unsigned long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;

@required
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
-(id)existingRepresentationForArtworkCatalog:(id)arg1;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end

