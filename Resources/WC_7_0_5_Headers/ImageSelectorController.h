//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "ILocationMgrExt.h"
#import "MMImagePickerManagerDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCMultiImageScannerDelegate.h"
#import "WCSelectorViewDataSource.h"
#import "WCSelectorViewDelegate.h"

@class NSMutableArray, NSString, SightDraft, UINavigationController, WCSelectorView;

@interface ImageSelectorController : MMObject <ILocationMgrExt, WCSelectorViewDelegate, WCSelectorViewDataSource, WCActionSheetDelegate, WCMultiImageScannerDelegate, MMImagePickerManagerDelegate>
{
    NSMutableArray *_arrImages;
    WCSelectorView *_selectorView;
    UINavigationController *_navigationController;
    id <SelectorControllerDelegate> _delegate;
    _Bool _bChoosed;
    struct CGSize _imgSize;
    _Bool _isSupportVideo;
    _Bool _isFromWCList;
    SightDraft *_sightDraft;
    unsigned long long _type;
    NSString *_sessionID;
}

- (void).cxx_destruct;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) NSMutableArray *arrImages; // @synthesize arrImages=_arrImages;
@property(nonatomic) _Bool bChoosed; // @synthesize bChoosed=_bChoosed;
- (void)dealloc;
@property(nonatomic) __weak id <SelectorControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didSelectViewAtIndex:(unsigned long long)arg1;
- (void)dragToDeleteViewAtIndex:(long long)arg1;
- (id)getViewController;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize=_imgSize;
- (id)init;
@property(nonatomic) _Bool isFromWCList; // @synthesize isFromWCList=_isFromWCList;
@property(nonatomic) _Bool isSupportVideo; // @synthesize isSupportVideo=_isSupportVideo;
- (void)moveItemAtIndexPath:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (unsigned long long)numbersOfViews;
- (void)onAddViews:(id)arg1;
- (void)onDeleteItemAtIndex:(unsigned long long)arg1;
- (void)onDeleteViewAtIndex:(unsigned long long)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(_Bool)arg3 isMuted:(_Bool)arg4 editVideoAttr:(id)arg5;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)reportWcSelectImageEvent:(unsigned int)arg1;
@property(retain, nonatomic) WCSelectorView *selectorView; // @synthesize selectorView=_selectorView;
@property(nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) SightDraft *sightDraft; // @synthesize sightDraft=_sightDraft;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (_Bool)shouldShowDeleteView;
- (void)showActionSheet:(id)arg1;
- (void)showImagePicker:(long long)arg1;
- (struct CGSize)sizeForViews;
- (unsigned long long)type:(unsigned long long)arg1;
- (id)viewAtIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

