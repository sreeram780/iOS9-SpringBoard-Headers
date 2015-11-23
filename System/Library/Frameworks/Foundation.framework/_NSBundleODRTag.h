/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:24:22 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _NSBundleODRTag : NSObject <NSSecureCoding> {

	double _preservationPriority;
	BOOL _alwaysPreserved;

}

@property (assign) double preservationPriority;              //@synthesize preservationPriority=_preservationPriority - In the implementation block
@property (assign) BOOL alwaysPreserved;                     //@synthesize alwaysPreserved=_alwaysPreserved - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)preservationPriority;
-(void)setPreservationPriority:(double)arg1 ;
-(BOOL)alwaysPreserved;
-(void)setAlwaysPreserved:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

