/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLCamera.h>

@interface MDLStereoscopicCamera : MDLCamera {

	float _interPupillaryDistance;
	float _leftVergence;
	float _rightVergence;
	float _overlap;

}

@property (assign,nonatomic) float interPupillaryDistance;                        //@synthesize interPupillaryDistance=_interPupillaryDistance - In the implementation block
@property (assign,nonatomic) float leftVergence;                                  //@synthesize leftVergence=_leftVergence - In the implementation block
@property (assign,nonatomic) float rightVergence;                                 //@synthesize rightVergence=_rightVergence - In the implementation block
@property (assign,nonatomic) float overlap;                                       //@synthesize overlap=_overlap - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MD0 leftViewMatrix; 
@property (nonatomic,readonly) SCD_Struct_MD0 rightViewMatrix; 
@property (nonatomic,readonly) SCD_Struct_MD0 leftProjectionMatrix; 
@property (nonatomic,readonly) SCD_Struct_MD0 rightProjectionMatrix; 
-(SCD_Struct_MD0)leftViewMatrix;
-(SCD_Struct_MD0)rightViewMatrix;
-(SCD_Struct_MD0)leftProjectionMatrix;
-(SCD_Struct_MD0)rightProjectionMatrix;
-(float)interPupillaryDistance;
-(void)setInterPupillaryDistance:(float)arg1 ;
-(float)leftVergence;
-(void)setLeftVergence:(float)arg1 ;
-(float)rightVergence;
-(void)setRightVergence:(float)arg1 ;
-(id)init;
-(void)setOverlap:(float)arg1 ;
-(float)overlap;
@end

