/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLFunctionSPI.h>

@protocol MTLDevice;
@class NSString, NSArray;

@interface _MTLFunction : NSObject <MTLFunctionSPI> {

	id<MTLDevice> _device;
	unsigned long long _functionType;
	NSString* _name;
	MTLLibraryData* _libraryData;
	id _vendorPrivate;
	NSArray* _vertexAttributes;

}

@property (readonly) id<MTLDevice> device;                          //@synthesize device=_device - In the implementation block
@property (readonly) unsigned long long functionType;               //@synthesize functionType=_functionType - In the implementation block
@property (readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (readonly) MTLLibraryData* libraryData;                   //@synthesize libraryData=_libraryData - In the implementation block
@property (copy) NSString * filePath; 
@property (assign) long long lineNumber; 
@property (readonly) id vendorPrivate;                              //@synthesize vendorPrivate=_vendorPrivate - In the implementation block
@property (readonly) unsigned long long bitCodeOffset; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * vertexAttributes; 
-(unsigned long long)functionType;
-(MTLLibraryData*)libraryData;
-(id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(MTLLibraryData*)arg3 device:(id)arg4 ;
-(void)setVendorPrivate:(id)arg1 ;
-(id)vendorPrivate;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(id<MTLDevice>)device;
@end

