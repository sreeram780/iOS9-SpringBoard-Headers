/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:45 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/SCNAnimatable.h>
#import <libobjc.A.dylib/SCNShadable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SCNProgram, NSDictionary, SCNMaterialProperty, SCNOrderedDictionary, NSString, NSMutableDictionary, SCNShadableHelper, NSArray;

@interface SCNMaterial : NSObject <SCNAnimatable, SCNShadable, NSCopying, NSSecureCoding> {

	C3DMaterialRef _material;
	SCNMaterialProperty* _ambient;
	SCNMaterialProperty* _diffuse;
	SCNMaterialProperty* _specular;
	SCNMaterialProperty* _emission;
	SCNMaterialProperty* _reflective;
	SCNMaterialProperty* _transparent;
	SCNMaterialProperty* _multiply;
	SCNMaterialProperty* _normal;
	SCNMaterialProperty* _ambientOcclusion;
	SCNMaterialProperty* _selfIllumination;
	SCNOrderedDictionary* _animations;
	NSString* _name;
	NSMutableDictionary* _valuesForUndefinedKeys;
	float _shininess;
	float _transparency;
	float _indexOfRefraction;
	float _fresnelExponent;
	long long _transparencyMode;
	NSString* _lightingModelName;
	long long _cullMode;
	SCNShadableHelper* _shadableHelper;
	BOOL _isPresentationInstance;
	BOOL _litPerPixel;
	BOOL _doubleSided;
	BOOL _locksAmbientWithDiffuse;
	BOOL _avoidsOverLighting;
	BOOL _writesToDepthBuffer;
	BOOL _readsFromDepthBuffer;
	long long _fillMode;
	long long _blendMode;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) SCNMaterialProperty * diffuse; 
@property (nonatomic,readonly) SCNMaterialProperty * ambient; 
@property (nonatomic,readonly) SCNMaterialProperty * specular; 
@property (nonatomic,readonly) SCNMaterialProperty * emission; 
@property (nonatomic,readonly) SCNMaterialProperty * transparent; 
@property (nonatomic,readonly) SCNMaterialProperty * reflective; 
@property (nonatomic,readonly) SCNMaterialProperty * multiply; 
@property (nonatomic,readonly) SCNMaterialProperty * normal; 
@property (nonatomic,readonly) SCNMaterialProperty * ambientOcclusion; 
@property (nonatomic,readonly) SCNMaterialProperty * selfIllumination; 
@property (assign,nonatomic) double shininess; 
@property (assign,nonatomic) double transparency; 
@property (nonatomic,copy) NSString * lightingModelName; 
@property (assign,getter=isLitPerPixel,nonatomic) BOOL litPerPixel; 
@property (assign,getter=isDoubleSided,nonatomic) BOOL doubleSided; 
@property (assign,nonatomic) long long cullMode; 
@property (assign,nonatomic) long long transparencyMode; 
@property (assign,nonatomic) BOOL locksAmbientWithDiffuse; 
@property (assign,nonatomic) BOOL writesToDepthBuffer; 
@property (assign,nonatomic) BOOL readsFromDepthBuffer; 
@property (assign,nonatomic) double fresnelExponent; 
@property (assign,nonatomic) long long blendMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * animationKeys; 
@property (nonatomic,retain) SCNProgram * program; 
@property (nonatomic,copy) NSDictionary * shaderModifiers; 
+(id)materialWithMDLMaterial:(id)arg1 ;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(BOOL)accessInstanceVariablesDirectly;
+(id)materialWithMaterialRef:(C3DMaterialRef)arg1 ;
+(id)materialWithColor:(id)arg1 ;
+(id)materialWithContents:(id)arg1 ;
+(id)materialNamed:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)material;
-(id)debugQuickLookData;
-(id)debugQuickLookObject;
-(id)_integrateModelKitComputedMaps:(id)arg1 withGeometry:(id)arg2 node:(id)arg3 texturePathProvider:(/*^block*/id)arg4 vertexAttributeNamed:(id)arg5 materialPropertyNamed:(id)arg6 filePath:(id)arg7 ;
-(long long)fillMode;
-(SCNMaterialProperty *)selfIllumination;
-(void*)__CFObject;
-(C3DSceneRef)sceneRef;
-(void)_syncObjCAnimations;
-(_C3DAnimationManager*)animationManager;
-(void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(BOOL)isAnimationForKeyPaused:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2 ;
-(void)handleBindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)presentationInstance;
-(void)setCullMode:(long long)arg1 ;
-(void)_syncObjCModel;
-(void)_syncEntityObjCModel;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 property:(id)arg2 ;
-(id)initWithMaterialRef:(C3DMaterialRef)arg1 ;
-(C3DMaterialRef)materialRef;
-(void)setProgram:(SCNProgram *)arg1 ;
-(id)initPresentationMaterialWithMaterialRef:(C3DMaterialRef)arg1 ;
-(id)presentationMaterial;
-(_C3DEffectCommonProfile*)commonProfile;
-(Class)_materialPropertyClass;
-(SCNMaterialProperty *)ambientOcclusion;
-(void)_setupMaterialProperty:(id*)arg1 ;
-(id)_property:(id*)arg1 ;
-(void)_setAttributes:(id)arg1 ;
-(long long)cullMode;
-(SCNProgram *)program;
-(BOOL)avoidsOverLighting;
-(void)setAvoidsOverLighting:(BOOL)arg1 ;
-(BOOL)readsFromDepthBuffer;
-(void)setReadsFromDepthBuffer:(BOOL)arg1 ;
-(void)_setupShadableHelperIfNeeded;
-(NSDictionary *)shaderModifiers;
-(void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_customEncodingOfSCNMaterial:(id)arg1 ;
-(void)_customDecodingOfSCNMaterial:(id)arg1 ;
-(void)setIndexOfRefraction:(double)arg1 ;
-(double)indexOfRefraction;
-(C3DMaterialRef)materialRefCreateIfNeeded;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)copy;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)animationKeys;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(id)contents;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setFillMode:(long long)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(void)removeAllAnimations;
-(void)setContents:(id)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)content;
-(id)properties;
-(BOOL)isDoubleSided;
-(void)setDoubleSided:(BOOL)arg1 ;
-(void)addAnimation:(id)arg1 ;
-(void)setBlendMode:(long long)arg1 ;
-(SCNMaterialProperty *)normal;
-(long long)blendMode;
-(void)setContent:(id)arg1 ;
-(id)scene;
-(SCNMaterialProperty *)diffuse;
-(void)setFresnelExponent:(double)arg1 ;
-(double)fresnelExponent;
-(SCNMaterialProperty *)ambient;
-(SCNMaterialProperty *)emission;
-(NSString *)lightingModelName;
-(void)setLightingModelName:(NSString *)arg1 ;
-(BOOL)isLitPerPixel;
-(void)setLitPerPixel:(BOOL)arg1 ;
-(BOOL)locksAmbientWithDiffuse;
-(void)setLocksAmbientWithDiffuse:(BOOL)arg1 ;
-(SCNMaterialProperty *)multiply;
-(SCNMaterialProperty *)reflective;
-(double)shininess;
-(void)setShininess:(double)arg1 ;
-(SCNMaterialProperty *)specular;
-(double)transparency;
-(void)setTransparency:(double)arg1 ;
-(long long)transparencyMode;
-(void)setTransparencyMode:(long long)arg1 ;
-(SCNMaterialProperty *)transparent;
-(BOOL)writesToDepthBuffer;
-(void)setWritesToDepthBuffer:(BOOL)arg1 ;
-(void)setShaderModifiers:(NSDictionary *)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

