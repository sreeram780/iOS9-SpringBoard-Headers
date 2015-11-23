/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:54 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@class NSMapTable, NSArray;

@interface UIDynamicItemBehavior : UIDynamicBehavior {

	BOOL _useDefaultViewPropertiesApplier;
	struct {
		unsigned elasticityChanged : 1;
		unsigned frictionChanged : 1;
		unsigned densityChanged : 1;
		unsigned resistanceChanged : 1;
		unsigned angularResistanceChanged : 1;
		unsigned rotationEnabledChanged : 1;
		unsigned useDefaultViewPropertiesApplierChanged : 1;
		unsigned chargeChanged : 1;
		unsigned dynamicChanged : 1;
	}  _stateFlags;
	NSMapTable* _cachedAngularVelocities;
	NSMapTable* _cachedLinearVelocities;
	BOOL _anchored;
	BOOL _allowsRotation;
	double _elasticity;
	double _friction;
	double _density;
	double _resistance;
	double _angularResistance;
	double _charge;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (assign,nonatomic) double elasticity;                            //@synthesize elasticity=_elasticity - In the implementation block
@property (assign,nonatomic) double friction;                              //@synthesize friction=_friction - In the implementation block
@property (assign,nonatomic) double density;                               //@synthesize density=_density - In the implementation block
@property (assign,nonatomic) double resistance;                            //@synthesize resistance=_resistance - In the implementation block
@property (assign,nonatomic) double angularResistance;                     //@synthesize angularResistance=_angularResistance - In the implementation block
@property (assign,nonatomic) double charge;                                //@synthesize charge=_charge - In the implementation block
@property (assign,getter=isAnchored,nonatomic) BOOL anchored;              //@synthesize anchored=_anchored - In the implementation block
@property (assign,nonatomic) BOOL allowsRotation;                          //@synthesize allowsRotation=_allowsRotation - In the implementation block
+(BOOL)_isPrimitiveBehavior;
-(id)init;
-(id)description;
-(double)charge;
-(void)setCharge:(double)arg1 ;
-(void)removeItem:(id)arg1 ;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)setElasticity:(double)arg1 ;
-(void)setFriction:(double)arg1 ;
-(void)setResistance:(double)arg1 ;
-(void)setDensity:(double)arg1 ;
-(void)setAllowsRotation:(BOOL)arg1 ;
-(double)elasticity;
-(double)friction;
-(double)density;
-(double)resistance;
-(double)angularResistance;
-(BOOL)allowsRotation;
-(BOOL)isAnchored;
-(void)_configureBody:(id)arg1 forView:(id)arg2 ;
-(void)_reevaluate:(unsigned long long)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)setAngularResistance:(double)arg1 ;
-(void)setAnchored:(BOOL)arg1 ;
-(void)addLinearVelocity:(CGPoint)arg1 forItem:(id)arg2 ;
-(CGPoint)linearVelocityForItem:(id)arg1 ;
-(void)_setPosition:(CGPoint)arg1 forItem:(id)arg2 ;
-(CGPoint)_positionForItem:(id)arg1 ;
-(void)_setAngle:(double)arg1 forItem:(id)arg2 ;
-(double)_angleForItem:(id)arg1 ;
-(void)addAngularVelocity:(double)arg1 forItem:(id)arg2 ;
-(double)angularVelocityForItem:(id)arg1 ;
-(double)_elasticityForItem:(id)arg1 ;
-(double)_frictionForItem:(id)arg1 ;
-(double)_densityForItem:(id)arg1 ;
-(double)_resistanceForItem:(id)arg1 ;
-(double)_angularResistanceForItem:(id)arg1 ;
-(double)_massForItem:(id)arg1 ;
-(BOOL)_rotationEnabledForItem:(id)arg1 ;
-(void)applyImpulse:(CGPoint)arg1 toItem:(id)arg2 ;
-(BOOL)useDefaultViewPropertiesApplier;
-(void)setUseDefaultViewPropertiesApplier:(BOOL)arg1 ;
@end

