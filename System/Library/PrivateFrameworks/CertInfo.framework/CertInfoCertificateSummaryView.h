/*
* This header is generated by classdump-dyld 0.7
* on Sunday, November 22, 2015 at 10:25:39 PM Eastern Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSString, NSDate, CertInfoCertificateHeaderCell, CertInfoCertificateSummaryDescriptionCell;

@interface CertInfoCertificateSummaryView : UIView <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	NSString* _trustTitle;
	NSString* _trustSubtitle;
	NSString* _purpose;
	NSDate* _expirationDate;
	/*^block*/id _moreDetailsSelectedBlock;
	CertInfoCertificateHeaderCell* _headerCell;
	CertInfoCertificateSummaryDescriptionCell* _descriptionCell;

}

@property (nonatomic,readonly) UITableView * tableView;                                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSString * trustTitle;                                                    //@synthesize trustTitle=_trustTitle - In the implementation block
@property (nonatomic,retain) NSString * trustSubtitle;                                                 //@synthesize trustSubtitle=_trustSubtitle - In the implementation block
@property (nonatomic,retain) NSString * purpose;                                                       //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                                                  //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,retain) CertInfoCertificateHeaderCell * headerCell;                               //@synthesize headerCell=_headerCell - In the implementation block
@property (nonatomic,retain) CertInfoCertificateSummaryDescriptionCell * descriptionCell;              //@synthesize descriptionCell=_descriptionCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_configureCell:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(NSString *)trustTitle;
-(void)setTrustTitle:(NSString *)arg1 ;
-(NSString *)trustSubtitle;
-(void)setTrustSubtitle:(NSString *)arg1 ;
-(void)setMoreDetailsSelectedBlock:(/*^block*/id)arg1 ;
-(void)setHeaderCell:(CertInfoCertificateHeaderCell *)arg1 ;
-(void)setDescriptionCell:(CertInfoCertificateSummaryDescriptionCell *)arg1 ;
-(id)_cellForReuseIdentifier:(id)arg1 ;
-(CertInfoCertificateHeaderCell *)headerCell;
-(CertInfoCertificateSummaryDescriptionCell *)descriptionCell;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)purpose;
-(void)setPurpose:(NSString *)arg1 ;
@end

