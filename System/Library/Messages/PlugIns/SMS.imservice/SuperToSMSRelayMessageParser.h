/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:10 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Messages/PlugIns/SMS.imservice/SMS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SMS/SMS-Structs.h>
#import <IMFoundation/IMFromSuperParserContext.h>

@class NSMutableString, NSString;

@interface SuperToSMSRelayMessageParser : IMFromSuperParserContext {

	NSMutableString* _outHTML;
	BOOL _isSimpleString;

}

@property (nonatomic,retain,readonly) NSString * outHTML;              //@synthesize outHTML=_outHTML - In the implementation block
@property (nonatomic,readonly) BOOL isSimpleString;                    //@synthesize isSimpleString=_isSimpleString - In the implementation block
-(void)dealloc;
-(id)name;
-(id)initWithAttributedString:(id)arg1 ;
-(BOOL)isSimpleString;
-(NSString *)outHTML;
-(id)resultsForLogging;
-(id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(NSRange)arg3 ;
-(BOOL)shouldPreprocess;
-(void)parserDidEnd:(id)arg1 ;
-(void)parserDidStart:(id)arg1 bodyAttributes:(id)arg2 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 emoji:(id)arg9 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 characters:(id)arg4 ;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 fileTransferGUID:(id)arg4 filename:(id)arg5 bookmark:(id)arg6 width:(id)arg7 height:(id)arg8 ;
@end

