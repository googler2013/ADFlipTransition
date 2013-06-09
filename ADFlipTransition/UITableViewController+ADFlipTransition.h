//
//  UITableViewController+ADFlipTransition.h
//  ADFlipTransition
//
//  Created by Adam Debono on 9/06/13.
//  Copyright (c) 2013 Adam Debono. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableViewController (ADFlipTransition)

- (void)flipToViewController:(UIViewController *)destinationViewController fromItemAtIndexPath:(NSIndexPath *)indexPath withCompletion:(void (^)(void))completion;

@end
