//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKGamePointsCompareSectionHeaderView : GKHeaderWithUnderlineView
{
    unsigned char _platform;
    GKLabel *_titleLabel;
    GKLabel *_friendLabel;
    GKLabel *_meLabel;
}

+ (id)phoneMetrics;
+ (id)padMetrics;
@property(retain, nonatomic) GKLabel *meLabel; // @synthesize meLabel=_meLabel;
@property(retain, nonatomic) GKLabel *friendLabel; // @synthesize friendLabel=_friendLabel;
@property(retain, nonatomic) GKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned char platform; // @synthesize platform=_platform;
- (id)titleForPlatform:(unsigned char)arg1;
- (void)updateGutterConstraints;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end