/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:26:16 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityViewDescriptor.h>

@class NSArray;

@interface MusicCompositeEntityViewDescriptor : MusicEntityViewDescriptor {

	NSArray* _entityViewDescriptors;

}

@property (nonatomic,copy) NSArray * entityViewDescriptors;              //@synthesize entityViewDescriptors=_entityViewDescriptors - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)entityViewDescriptors;
-(id)initWithEntityViewDescriptors:(id)arg1 ;
-(void)enumerateContentDescriptorsUsingBlock:(/*^block*/id)arg1 ;
-(id)contentDescriptorForIndexPath:(id)arg1 ;
-(void)enumerateSectionHeaderContentDescriptorsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)allowsSectionHeaderForSectionIndex:(unsigned long long)arg1 ;
-(id)sectionHeaderContentDescriptorForSectionIndex:(unsigned long long)arg1 ;
-(void)setEntityViewDescriptors:(NSArray *)arg1 ;
-(void)_setEntityProviderForEntityViewDescriptors:(id)arg1 ;
-(id)_providerListEntityProvider;
-(id)_entityViewDescriptorForEntityProvider:(id)arg1 ;
-(void)setEntityProvider:(id)arg1 ;
@end

