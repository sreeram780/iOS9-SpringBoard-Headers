/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSArray, CADisplayMode, NSString;

@interface CADisplay : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSArray * availableModes; 
@property (nonatomic,retain) CADisplayMode * currentMode; 
@property (nonatomic,readonly) CADisplayMode * preferredMode; 
@property (nonatomic,copy) NSString * colorMode; 
@property (assign) BOOL allowsVirtualModes; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) CGRect frame; 
@property (nonatomic,readonly) CGRect safeBounds; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * deviceName; 
@property (readonly) unsigned displayId; 
@property (readonly) unsigned seed; 
@property (readonly) unsigned connectionSeed; 
@property (readonly) NSString * uniqueId; 
@property (getter=isSupported,readonly) BOOL supported; 
@property (readonly) long long tag; 
@property (readonly) int processId; 
@property (getter=isExternal,readonly) BOOL external; 
@property (readonly) double refreshRate; 
@property (getter=isOverscanned,readonly) BOOL overscanned; 
@property (nonatomic,copy) NSString * overscanAdjustment; 
@property (readonly) double overscanAmount; 
@property (readonly) CGSize overscanAmounts; 
@property (getter=isCloned,readonly) BOOL cloned; 
@property (getter=isCloningSupported,readonly) BOOL cloningSupported; 
+(id)TVOutDisplay;
+(id)mainDisplay;
+(id)displays;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)isSupported;
-(id)_initWithDisplay:(Display*)arg1 ;
-(unsigned)connectionSeed;
-(NSString *)colorMode;
-(void)setColorMode:(NSString *)arg1 ;
-(BOOL)allowsVirtualModes;
-(void)setAllowsVirtualModes:(BOOL)arg1 ;
-(CGRect)safeBounds;
-(double)overscanAmount;
-(BOOL)isCloned;
-(CGRect)bounds;
-(CGRect)frame;
-(id)description;
-(NSString *)name;
-(unsigned)displayId;
-(long long)tag;
-(CADisplayMode *)currentMode;
-(void)update;
-(NSArray *)availableModes;
-(BOOL)isOverscanned;
-(NSString *)overscanAdjustment;
-(void)setOverscanAdjustment:(NSString *)arg1 ;
-(double)refreshRate;
-(BOOL)isCloningSupported;
-(CADisplayMode *)preferredMode;
-(void)setCurrentMode:(CADisplayMode *)arg1 ;
-(CGSize)overscanAmounts;
-(unsigned)seed;
-(BOOL)isExternal;
-(NSString *)uniqueId;
-(void)_invalidate;
-(NSString *)deviceName;
-(int)processId;
@end

