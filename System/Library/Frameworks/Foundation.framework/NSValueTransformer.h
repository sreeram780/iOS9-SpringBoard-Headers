/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:21 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSValueTransformer : NSObject
+(id)_transformerRegistry;
+(id)valueTransformerNames;
+(id)valueTransformerForName:(id)arg1 ;
+(void)setValueTransformer:(id)arg1 forName:(id)arg2 ;
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(id)reverseTransformedValue:(id)arg1 ;
-(id)transformedValue:(id)arg1 ;
@end

