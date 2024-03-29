//
//  CameraViewController.h
//  Ribbit
//
//  Created by Andrew Brotherton on 9/16/14.
//  Copyright (c) 2014 Treehouse. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface CameraViewController : UITableViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
- (IBAction)cancel:(id)sender;
- (IBAction)Send:(id)sender;

@property (nonatomic, strong) UIImagePickerController *imagePicker;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *videoFilePath;
@property (nonatomic, strong) NSArray *friends;
@property (nonatomic, strong) PFRelation *friendsRelation;
@property (nonatomic, strong) NSMutableArray *recipients;

- (void) uploadMessage;
- (UIImage *)resizeImage: (UIImage *)image toWidth:(float)width andHeight:(float)height;
@end
