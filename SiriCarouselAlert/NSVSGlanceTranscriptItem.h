//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface NSVSGlanceTranscriptItem : NSVSViewControllerTranscriptItem
{
    id <CUISGlanceController> _glanceController;
    NSVSGlanceServiceViewControllerDelegate *_glanceDelegate;
    _Bool _viewDidLoad;
}

+ (id)transcriptItemWithGlanceController:(id)arg1 transcriptGlanceDelegate:(id)arg2;
- (_Bool)viewDidLoad;
- (void).cxx_destruct;
- (id)description;
- (struct CGSize)sizeThatFitsScreenSize:(struct CGSize)arg1;
- (id)viewController;
- (id)duetIdentifier;
- (void)didSettle;
- (void)setGlanceController:(id)arg1 transcriptGlanceDelegate:(id)arg2;
- (id)initWithCellClass:(Class)arg1;

@end