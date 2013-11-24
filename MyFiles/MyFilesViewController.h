//
//  MyFilesViewController.h
//  MyFiles
//
//  Created by Sean Gray on 11/24/2013.
//  Copyright (c) 2013 RVC Student. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MyFilesViewController : UIViewController
@property (retain, nonatomic) IBOutlet UIView *WebView;
- (IBAction)btnLocal:(id)sender;
- (IBAction)btnWeb:(id)sender;


@end
