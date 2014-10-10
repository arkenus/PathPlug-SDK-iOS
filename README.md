PathPlug iOS SDK (v1.0.0)
==================================

##Table of Contents

* [Installation](#installation)  
* [Setup](#setup)  
* [Delegates](#delegate-methods)  
* [Class Documents](#class-documents) 

Requirements
----------------------------------

- Minimum deployment target

  - iOS 8.0

- Auto Reference Counting (ARC)

  - PathPlug requires ARC.

- Frameworks

  - No need for additional frameworks  
  
### Installation 

  * Drag and drop to your project folder.
  

Setup
----------------------------------
### PrefixHeader.pch
You can import PathPlugSDK on PrefixHeader for easy access (optional)

      #import <PathPlugSDK/PathPlugSDK.h>


### Configuring PathPlug

You'll be needing two keys App Key and App Secret. You can get those from www.pathlug.com . You can perform setup on any view controller, like example shown below:


    - (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
    {

      // Override point for customization after application launch.

      // ...#import <PathPlugSDK/PathPlugSDK.h>

      [[PathPlug sharedPlug] initWithAppKey:@"AppKey" andAppSecret:@"AppSecret"];

      // ...

      return YES;
    }

###Singleton Object

PathPlugSDK initialises a singleton object that you can use anywhere on your app.

  	PathPlug *pathPlug = [PathPlug sharedPlug];

###Service Methods

 Stops PathPlug Service

    – stopService

Starts PathPlug Service

    – startService

Returns NSArray* of beacons for app

    – getBeaconList

###Public Properties
    assitanceRefreshInterval
    virtualTagRefreshInterval
    smartNoteRefreshInterval
    AssitanceEnabled
    HeatmapEnabled
    SmartNoteEnabled
    BeaconInfoEnabled
    VirtualTagEnabled
    dataRefreshInterval


Delegate Methods
---------------------

##pathPlug:getAssistanceData:

Returns audio sign interaction information encapsulated in a Plug Data

    - (void)pathPlug:(id)pathPlug getAssistanceData:(id)data

##pathPlug:getHeatmapData:forBeacon:

Fired when Heatmap is active and region enter/exit action happens

    - (void)pathPlug:(id)pathPlug getHeatmapData:(id)data forBeacon:(id)beacon

##pathPlug:getSmartNoteData:

Fired when a beacon with smartnote object is seen

      - (void)pathPlug:(id)pathPlug getSmartNoteData:(id)data

##pathPlug:getVirtualtagData:

Returns virtual tag interaction information encapsulated in a Plug Data

    - (void)pathPlug:(id)pathPlug getVirtualtagData:(id)data


##pathPlug:isFrameworkReady:

Fired when data is completely downloaded from API and ready to use

    - (void)pathPlug:(id)pathPlug isFrameworkReady:(id)result

##pathPlug:updatedBeaconData:andDistance:

Returns real time sightings of Beacons and their distances

    - (void)pathPlug:(id)pathPlug updatedBeaconData:(id)beacon andDistance:(id)distance
	

Class Documents
---------------------

You can access class documents for PathPlug [here](http://www.pathplug.com/public/documentation/ios/index.html)