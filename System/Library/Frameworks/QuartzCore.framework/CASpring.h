/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:42 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, CALayer, CAValueFunction;

@interface CASpring : NSObject <NSCopying, NSMutableCopying, NSCoding> {

	NSString* _name;
	CALayer* _layerA;
	CALayer* _layerB;
	CGPoint _attachmentPointA;
	CGPoint _attachmentPointB;
	CAValueFunction* _function;
	double _stiffness;
	double _damping;
	double _restLength;
	BOOL _enabled;
	id _delegate;
	void* _priv;

}

@property (copy) NSString * name; 
@property (getter=isEnabled) BOOL enabled; 
@property (retain) CALayer * layerA; 
@property (retain) CALayer * layerB; 
@property (assign) CGPoint attachmentPointA; 
@property (assign) CGPoint attachmentPointB; 
@property (retain) CAValueFunction * function; 
@property (assign) double restLength; 
@property (assign) double stiffness; 
@property (assign) double damping; 
@property (__weak) id delegate; 
+(id)defaultValueForKey:(id)arg1 ;
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)spring;
-(CAValueFunction *)function;
-(double)stiffness;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(CALayer *)layerA;
-(CALayer *)layerB;
-(CGPoint)attachmentPointA;
-(CGPoint)attachmentPointB;
-(double)restLength;
-(void)setRestLength:(double)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(double)damping;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setLayerA:(CALayer *)arg1 ;
-(void)setAttachmentPointA:(CGPoint)arg1 ;
-(void)setLayerB:(CALayer *)arg1 ;
-(void)setAttachmentPointB:(CGPoint)arg1 ;
-(void)setFunction:(CAValueFunction *)arg1 ;
@end

