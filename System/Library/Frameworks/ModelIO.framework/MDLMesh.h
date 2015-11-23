/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:36 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLObject.h>

@class NSMutableArray, MDLVertexDescriptor, NSArray;

@interface MDLMesh : MDLObject {

	NSMutableArray* _submeshes;
	NSMutableArray* _vertexBuffers;
	MDLVertexDescriptor* _vertexDescriptor;
	MDLAABB _bounds;
	unsigned long long _vertexCount;

}

@property (nonatomic,readonly) SCD_Struct_MD19 boundingBox; 
@property (nonatomic,copy) MDLVertexDescriptor * vertexDescriptor; 
@property (nonatomic,readonly) unsigned long long vertexCount;                  //@synthesize vertexCount=_vertexCount - In the implementation block
@property (nonatomic,retain,readonly) NSArray * vertexBuffers; 
@property (nonatomic,retain,readonly) NSMutableArray * submeshes; 
+(id)meshWithSCNGeometry:(id)arg1 ;
+(id)newBoxWithDimensions:(long long)arg1 segments:(BOOL)arg2 geometryType:(id)arg3 ;
+(id)newIcosahedronWithRadius:(float)arg1 inwardNormals:(BOOL)arg2 allocator:(id)arg3 ;
+(id)newEllipsoidWithRadii:(unsigned long long)arg1 radialSegments:(unsigned long long)arg2 verticalSegments:(long long)arg3 geometryType:(BOOL)arg4 inwardNormals:(BOOL)arg5 hemisphere:(id)arg6 ;
+(id)newCylinderWithHeight:(float)arg1 radii:(unsigned long long)arg2 radialSegments:(unsigned long long)arg3 verticalSegments:(long long)arg4 geometryType:(BOOL)arg5 inwardNormals:(id)arg6 ;
+(id)newEllipticalConeWithHeight:(float)arg1 radii:(unsigned long long)arg2 radialSegments:(unsigned long long)arg3 verticalSegments:(long long)arg4 geometryType:(BOOL)arg5 inwardNormals:(id)arg6 ;
+(id)newPlaneWithDimensions:(long long)arg1 segments:(id)arg2 ;
+(id)newSubdividedMesh:(id)arg1 submeshIndex:(unsigned long long)arg2 subdivisionLevels:(unsigned long long)arg3 ;
+(id)createVertexBuffers:(id)arg1 vertexCount:(unsigned long long)arg2 srcDescriptor:(id)arg3 dstDescriptor:(id)arg4 zone:(id)arg5 ;
-(BOOL)generateAmbientOcclusionTextureWithSize:(long long)arg1 raysPerSample:(float)arg2 attenuationFactor:(id)arg3 objectsToConsider:(id)arg4 vertexAttributeNamed:(id)arg5 ;
-(BOOL)generateAmbientOcclusionVertexColorsWithRaysPerSample:(long long)arg1 attenuationFactor:(float)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 ;
-(BOOL)generateLightMapTextureWithTextureSize:(id)arg1 lightsToConsider:(id)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 ;
-(BOOL)generateAmbientOcclusionVertexColorsWithQuality:(float)arg1 attenuationFactor:(float)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 ;
-(BOOL)generateAmbientOcclusionTextureWithQuality:(float)arg1 attenuationFactor:(float)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 materialPropertyNamed:(id)arg5 ;
-(BOOL)generateLightMapVertexColorsWithLightsToConsider:(id)arg1 objectsToConsider:(id)arg2 vertexAttributeNamed:(id)arg3 ;
-(BOOL)generateLightMapTextureWithQuality:(float)arg1 lightsToConsider:(id)arg2 objectsToConsider:(id)arg3 vertexAttributeNamed:(id)arg4 materialPropertyNamed:(id)arg5 ;
-(void)_enumerateSubmeshesUsingBlock:(/*^block*/id)arg1 stopPointer:(BOOL*)arg2 ;
-(int)submeshCount;
-(void)enumerateSubmeshesUsingBlock:(/*^block*/id)arg1 ;
-(void)addNormalsWithAttributeNamed:(id)arg1 creaseThreshold:(float)arg2 ;
-(void)makeVerticesUnique;
-(void)addAttributeWithName:(id)arg1 format:(unsigned long long)arg2 ;
-(void)_calculateTangentBasisFromPositions:(float*)arg1 positionStride:(long long)arg2 normals:(float*)arg3 normalStride:(long long)arg4 uvs:(float*)arg5 uvStride:(long long)arg6 tangents:(float*)arg7 tangentsStride:(long long)arg8 bitagents:(float*)arg9 bitangentStride:(long long)arg10 ;
-(void)_calculateFaceNormalsFromPositions:(float*)arg1 positionStride:(long long)arg2 normals:(float*)arg3 normalStride:(long long)arg4 creaseThreshold:(float)arg5 ;
-(void)addTangentBasisForTextureCoordinateAttributeNamed:(id)arg1 tangentAttributeNamed:(id)arg2 bitangentAttributeNamed:(id)arg3 ;
-(void)addTangentBasisForTextureCoordinateAttributeNamed:(id)arg1 normalAttributeNamed:(id)arg2 tangentAttributeNamed:(id)arg3 ;
-(void)makeRegularBijectiveAttributeNamed:(id)arg1 ;
-(id)initWithVertexBuffer:(id)arg1 vertexCount:(unsigned long long)arg2 descriptor:(id)arg3 submeshes:(id)arg4 ;
-(id)vertexAttributeDataForAttributeNamed:(id)arg1 ;
-(void)debugPrintToFile:(_sFILE*)arg1 ;
-(id)initWithVertexBuffers:(id)arg1 vertexCount:(unsigned long long)arg2 descriptor:(id)arg3 submeshes:(id)arg4 ;
-(MDLVertexDescriptor *)vertexDescriptor;
-(NSMutableArray *)submeshes;
-(NSArray *)vertexBuffers;
-(void)setVertexDescriptor:(MDLVertexDescriptor *)arg1 ;
-(SCD_Struct_MD19)boundingBox;
-(unsigned long long)vertexCount;
@end

