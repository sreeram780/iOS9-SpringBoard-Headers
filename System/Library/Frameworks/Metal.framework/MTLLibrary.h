/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:35 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MTLLibrary <NSObject>
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSArray * functionNames; 
@required
-(NSArray *)functionNames;
-(id)newFunctionWithName:(id)arg1;
-(NSString *)label;
-(void)setLabel:(id)arg1;
-(id<MTLDevice>)device;

@end

