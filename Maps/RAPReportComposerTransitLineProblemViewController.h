//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface RAPReportComposerTransitLineProblemViewController : RAPReportTableViewController
{
    RAPTransitLineQuestion *_question;
    RAPTransitLineAndProblemQuestion *_lineAndProblemQuestion;
    RAPReportComposerTransitLinePickerPart *_whichLinePart;
    RAPTablePart *_problemPart;
    RAPTableCheckmarkRadioSection *_problemSection;
    RAPReportComposerCommentPart *_commentPart;
}

- (void).cxx_destruct;
- (id)_problemSection;
- (id)tablePartsAfterDownload;
- (void)downloadAndDisplayTransitLines;
- (id)tableParts;
- (void)setTransitLinesMUIDsToDownloadIfNecessary;
- (void)dealloc;
- (id)initWithReport:(id)arg1 lineQuestion:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end