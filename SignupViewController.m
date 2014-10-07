//
//  SignupViewController.m
//  Ribbit
//
//  Created by Andrew Brotherton on 9/6/14.
//  Copyright (c) 2014 Treehouse. All rights reserved.
//

#import "SignupViewController.h"
#import <Parse/Parse.h>

@interface SignupViewController ()

@end

@implementation SignupViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (IBAction)signup:(id)sender {
    PFUser *user = [PFUser user];
user.username = @"my name";
user.password = @"my pass";
user.email = @"email@example.com";

// other fields can be set just like with PFObject
user[@"phone"] = @"415-392-0202";

[user signUpInBackgroundWithBlock:^(BOOL succeeded, NSError *error) {
if (!error) {
// Hooray! Let them use the app now.
} else {
NSString *errorString = [error userInfo][@"error"];
// Show the errorString somewhere and let the user try again.
}
}];
}

@end
