/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:27:17 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLPhotoEditModel.h>

@class _UIDynamicValueAnimation, NSString, NSDictionary, NSArray;

@interface PLPhotoEditMutableModel : PLPhotoEditModel {

	long long _transactionDepth;
	_UIDynamicValueAnimation* _currentCopyAnimation;

}

@property (nonatomic,copy) NSString * effectFilterName; 
@property (assign,nonatomic) long long effectFilterVersion; 
@property (assign,getter=isSmartToneEnabled,nonatomic) BOOL smartToneEnabled; 
@property (assign,nonatomic) double autoSmartToneLevel; 
@property (nonatomic,copy) NSString * autoSmartToneIdentifier; 
@property (assign,nonatomic) double smartToneLevel; 
@property (assign,nonatomic) double brightnessLevelOffset; 
@property (assign,nonatomic) double contrastLevelOffset; 
@property (assign,nonatomic) double exposureLevelOffset; 
@property (assign,nonatomic) double highlightsLevelOffset; 
@property (assign,nonatomic) double shadowsLevelOffset; 
@property (assign,nonatomic) double blackPointLevelOffset; 
@property (nonatomic,copy) NSDictionary * smartToneStatistics; 
@property (assign,getter=isSmartColorEnabled,nonatomic) BOOL smartColorEnabled; 
@property (assign,nonatomic) double autoSmartColorLevel; 
@property (nonatomic,copy) NSString * autoSmartColorIdentifier; 
@property (assign,nonatomic) double smartColorLevel; 
@property (assign,nonatomic) double colorContrastLevelOffset; 
@property (assign,nonatomic) double colorVibrancyLevelOffset; 
@property (assign,nonatomic) double colorCastLevelOffset; 
@property (nonatomic,copy) NSDictionary * smartColorStatistics; 
@property (assign,getter=isSmartBWEnabled,nonatomic) BOOL smartBWEnabled; 
@property (nonatomic,copy) NSDictionary * smartBWStatistics; 
@property (assign,nonatomic) double smartBWLevel; 
@property (assign,nonatomic) double bwStrengthLevelOffset; 
@property (assign,nonatomic) double bwNeutralGammaLevelOffset; 
@property (assign,nonatomic) double bwToneLevelOffset; 
@property (assign,nonatomic) double bwHueLevelOffset; 
@property (assign,nonatomic) double bwGrainLevelOffset; 
@property (assign,getter=isWhiteBalanceEnabled,nonatomic) BOOL whiteBalanceEnabled; 
@property (assign,nonatomic) double whiteBalanceFaceI; 
@property (assign,nonatomic) double whiteBalanceFaceQ; 
@property (assign,nonatomic) double whiteBalanceFaceStrength; 
@property (assign,nonatomic) double whiteBalanceFaceWarmth; 
@property (assign,nonatomic) long long appliedOrientation; 
@property (assign,nonatomic) CGRect normalizedCropRect; 
@property (assign,nonatomic) double straightenAngle; 
@property (assign,getter=isAutoCropped,nonatomic) BOOL autoCropped; 
@property (nonatomic,copy) NSDictionary * autoWhiteBalanceSettings; 
@property (nonatomic,copy) NSString * autoWhiteBalanceIdentifier; 
@property (nonatomic,copy) NSArray * redEyeCorrections; 
@property (nonatomic,copy) NSArray * autoRedEyeCorrections; 
@property (nonatomic,copy) NSArray * legacyAutoEnhanceFilters; 
@property (assign,nonatomic) BOOL legacyAutoEnhanceIsOn; 
-(void)pl_setNormalizedCropRectForDataCrop:(CGRect)arg1 straightenAngle:(double)arg2 imageGeometry:(id)arg3 ;
-(void)pl_setCropConstraintForDataConstraint:(CGSize)arg1 imageGeometry:(id)arg2 ;
-(void)copyValuesFromModel:(id)arg1 animated:(BOOL)arg2 ;
-(void)performChangesWithBlock:(/*^block*/id)arg1 ;
-(void)setRedEyeCorrections:(NSArray *)arg1 ;
-(void)setAppliedOrientation:(long long)arg1 ;
-(void)setStraightenAngle:(double)arg1 ;
-(void)setCropConstraintWidth:(long long)arg1 height:(long long)arg2 ;
-(void)setNormalizedCropRect:(CGRect)arg1 ;
-(void)setAutoCropped:(BOOL)arg1 ;
-(void)removeRedEyeCorrections:(id)arg1 ;
-(void)addRedEyeCorrections:(id)arg1 ;
-(void)setSmartToneEnabled:(BOOL)arg1 ;
-(void)setSmartToneLevel:(double)arg1 ;
-(void)setSmartColorEnabled:(BOOL)arg1 ;
-(void)setSmartColorLevel:(double)arg1 ;
-(void)setWhiteBalanceEnabled:(BOOL)arg1 ;
-(void)setWhiteBalanceFaceI:(double)arg1 ;
-(void)setWhiteBalanceFaceQ:(double)arg1 ;
-(void)setWhiteBalanceFaceStrength:(double)arg1 ;
-(void)setWhiteBalanceFaceWarmth:(double)arg1 ;
-(void)setSmartToneStatistics:(NSDictionary *)arg1 ;
-(void)setSmartColorStatistics:(NSDictionary *)arg1 ;
-(void)setAutoSmartToneIdentifier:(NSString *)arg1 ;
-(void)setAutoSmartToneLevel:(double)arg1 ;
-(void)setAutoSmartColorIdentifier:(NSString *)arg1 ;
-(void)setAutoSmartColorLevel:(double)arg1 ;
-(void)setAutoWhiteBalanceIdentifier:(NSString *)arg1 ;
-(void)setAutoWhiteBalanceSettings:(NSDictionary *)arg1 ;
-(void)setAutoRedEyeCorrections:(NSArray *)arg1 ;
-(void)setLegacyAutoEnhanceFilters:(NSArray *)arg1 ;
-(void)setLegacyAutoEnhanceIsOn:(BOOL)arg1 ;
-(void)setEffectFilterName:(NSString *)arg1 ;
-(void)setEffectFilterVersion:(long long)arg1 ;
-(void)setSmartBWStatistics:(NSDictionary *)arg1 ;
-(void)setBrightnessLevelOffset:(double)arg1 ;
-(void)setContrastLevelOffset:(double)arg1 ;
-(void)setExposureLevelOffset:(double)arg1 ;
-(void)setHighlightsLevelOffset:(double)arg1 ;
-(void)setShadowsLevelOffset:(double)arg1 ;
-(void)setBlackPointLevelOffset:(double)arg1 ;
-(void)setColorContrastLevelOffset:(double)arg1 ;
-(void)setColorVibrancyLevelOffset:(double)arg1 ;
-(void)setColorCastLevelOffset:(double)arg1 ;
-(void)setSmartBWLevel:(double)arg1 ;
-(void)setSmartBWEnabled:(BOOL)arg1 ;
-(void)setBwStrengthLevelOffset:(double)arg1 ;
-(void)setBwNeutralGammaLevelOffset:(double)arg1 ;
-(void)setBwToneLevelOffset:(double)arg1 ;
-(void)setBwHueLevelOffset:(double)arg1 ;
-(void)setBwGrainLevelOffset:(double)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_newModelChangeAnimation;
-(void)_setLevelInstanceVariable:(double*)arg1 toValue:(double)arg2 ;
@end

