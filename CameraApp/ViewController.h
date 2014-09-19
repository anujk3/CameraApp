//
//  ViewController.h
//  CameraApp
//
//  Created by Anuj Katiyal on 19/09/14.
//  Copyright (c) 2014 Katiyals. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *imageView;
- (IBAction)selectPhoto:(id)sender;
- (IBAction)takePhoto:(id)sender;

@end

