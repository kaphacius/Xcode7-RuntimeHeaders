//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GKPhotoPicker : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    _Bool _cancelled;
    UIViewController *_viewController;
    UIView *_view;
    UIImagePickerController *_imagePicker;
    CDUnknownBlockType _completionHandler;
    long long _chooseButtonIndex;
    long long _takeButtonIndex;
    long long _pasteButtonIndex;
}

@property(nonatomic) long long pasteButtonIndex; // @synthesize pasteButtonIndex=_pasteButtonIndex;
@property(nonatomic) long long takeButtonIndex; // @synthesize takeButtonIndex=_takeButtonIndex;
@property(nonatomic) long long chooseButtonIndex; // @synthesize chooseButtonIndex=_chooseButtonIndex;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) UIImagePickerController *imagePicker; // @synthesize imagePicker=_imagePicker;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)didEnterBackground;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)editedImageFromImage:(id)arg1 cropRect:(struct CGRect)arg2;
- (void)dismissImagePickerAnimated:(_Bool)arg1;
- (void)showPopover;
- (void)presentImagePickerForSourceType:(long long)arg1;
- (void)pick;
- (void)_pick;
- (void)takePhoto;
- (void)choosePhoto;
- (void)deletePhoto;
- (void)setPhoto:(id)arg1;
- (void)cancel;
- (void)finish;
- (void)dealloc;
- (void)cancelAlertWithoutDelegateCallback;
- (id)initWithViewController:(id)arg1 photoView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end