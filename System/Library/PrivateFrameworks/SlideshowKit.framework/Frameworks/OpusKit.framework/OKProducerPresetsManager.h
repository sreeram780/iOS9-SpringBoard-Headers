/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OKProducerPresetsManager : NSObject {

	NSMutableDictionary* _presetsByFamily;

}
+(id)defaultManager;
-(id)presetsForFamily:(id)arg1 ;
-(id)presetWithUniqueIdentifier:(id)arg1 ;
-(id)defaultPresetsForFamily:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_presetsByNameForFamily:(id)arg1 ;
-(id)_defaultPresetsByName;
-(id)defaultPresets;
@end

