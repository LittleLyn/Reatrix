//
//  ViewController.mm
//  ReatrixDemo
//
//  Created by Lyn on 2019/5/29.
//  Copyright © 2019 Vin-Ex. All rights reserved.
//

#import "ViewController.h"
#import "ReatrixMac.h"
#include "DemoApplication.h"

@interface ViewController()
{
    ReatrixMac *_rtx;
}
@end

@implementation ViewController

- (void)loadView
{
    NSWindow *window = [[NSApplication sharedApplication] keyWindow];
    CGSize size = [window contentRectForFrameRect:window.contentLayoutRect].size;
    _rtx = [[ReatrixMac alloc] initWithFrame:NSMakeRect(0, 0, size.width, size.height)];
    DemoApplication *application = new DemoApplication();
    [_rtx loadApplication:application];
    self.view = _rtx.view;
}

- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}


@end
