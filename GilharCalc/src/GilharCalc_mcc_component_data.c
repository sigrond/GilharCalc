/*
 * MATLAB Compiler: 4.13 (R2010a)
 * Date: Sat Apr 29 21:56:56 2017
 * Arguments: "-B" "macro_default" "-o" "GilharCalc" "-W" "WinMain:GilharCalc"
 * "-T" "link:exe" "-d"
 * "C:\Users\U¿ytkownik\Documents\GitHub\GilharCalc\GilharCalc\src" "-w"
 * "enable:specified_file_mismatch" "-w" "enable:repeated_file" "-w"
 * "enable:switch_ignored" "-w" "enable:missing_lib_sentinel" "-w"
 * "enable:demo_license" "-v"
 * "C:\Users\U¿ytkownik\Documents\GitHub\GilharCalc\GilharCalc.m" 
 */

#include "mclmcrrt.h"

#ifdef __cplusplus
extern "C" {
#endif
const unsigned char __MCC_GilharCalc_session_key[] = {
    '9', '6', 'E', '6', '4', '0', 'E', 'B', '0', '3', 'D', 'C', '6', '0', 'D',
    'A', '4', '8', '3', '2', 'B', 'A', 'B', '0', '3', 'A', '2', '4', 'C', '6',
    'D', 'F', '1', '1', 'C', '0', '6', '7', 'A', '6', '8', '4', '7', '1', '5',
    'D', 'B', '1', 'F', 'A', 'C', '3', 'B', '0', 'F', 'C', '4', 'F', '6', '4',
    'C', 'E', '1', 'B', 'C', '2', 'F', 'D', 'A', '1', '6', '9', '6', 'D', '8',
    '5', 'F', '1', 'E', 'F', '5', '5', '6', 'C', '3', '8', '2', 'F', 'B', '2',
    '0', 'C', 'A', 'D', '4', 'F', 'E', 'D', '3', 'F', '0', '4', '0', '0', 'E',
    '8', 'B', '9', '9', '8', 'D', 'D', '9', '6', '9', '7', '3', '0', 'D', 'B',
    '8', '2', '4', '4', '9', '5', 'C', '0', 'F', '9', 'A', '7', '0', '8', '0',
    'F', 'F', '3', '9', '3', '7', '6', 'F', 'D', 'A', 'F', '2', '4', '0', '3',
    '4', '1', 'E', '2', '0', '6', 'A', '6', 'D', '1', '3', '1', 'B', '0', '6',
    '9', '7', '1', '3', 'C', '6', '8', 'E', 'B', '8', '0', '7', '8', '9', '6',
    '3', '9', '2', '4', '0', 'F', '0', '4', '4', 'F', 'B', '0', '4', 'B', '1',
    '9', 'A', '7', '3', 'A', 'F', '9', 'C', '1', 'E', '3', '3', 'C', 'B', '3',
    'A', '7', '9', 'D', 'C', '2', '6', '4', '7', 'B', '5', 'D', '6', '7', '5',
    '8', '0', 'B', 'B', '4', '8', '5', 'A', 'D', '1', '0', '6', 'A', '6', 'C',
    '5', 'B', 'A', '9', 'D', 'B', '1', '9', '1', 'E', 'E', '4', 'B', '1', '3',
    'D', '\0'};

const unsigned char __MCC_GilharCalc_public_key[] = {
    '3', '0', '8', '1', '9', 'D', '3', '0', '0', 'D', '0', '6', '0', '9', '2',
    'A', '8', '6', '4', '8', '8', '6', 'F', '7', '0', 'D', '0', '1', '0', '1',
    '0', '1', '0', '5', '0', '0', '0', '3', '8', '1', '8', 'B', '0', '0', '3',
    '0', '8', '1', '8', '7', '0', '2', '8', '1', '8', '1', '0', '0', 'C', '4',
    '9', 'C', 'A', 'C', '3', '4', 'E', 'D', '1', '3', 'A', '5', '2', '0', '6',
    '5', '8', 'F', '6', 'F', '8', 'E', '0', '1', '3', '8', 'C', '4', '3', '1',
    '5', 'B', '4', '3', '1', '5', '2', '7', '7', 'E', 'D', '3', 'F', '7', 'D',
    'A', 'E', '5', '3', '0', '9', '9', 'D', 'B', '0', '8', 'E', 'E', '5', '8',
    '9', 'F', '8', '0', '4', 'D', '4', 'B', '9', '8', '1', '3', '2', '6', 'A',
    '5', '2', 'C', 'C', 'E', '4', '3', '8', '2', 'E', '9', 'F', '2', 'B', '4',
    'D', '0', '8', '5', 'E', 'B', '9', '5', '0', 'C', '7', 'A', 'B', '1', '2',
    'E', 'D', 'E', '2', 'D', '4', '1', '2', '9', '7', '8', '2', '0', 'E', '6',
    '3', '7', '7', 'A', '5', 'F', 'E', 'B', '5', '6', '8', '9', 'D', '4', 'E',
    '6', '0', '3', '2', 'F', '6', '0', 'C', '4', '3', '0', '7', '4', 'A', '0',
    '4', 'C', '2', '6', 'A', 'B', '7', '2', 'F', '5', '4', 'B', '5', '1', 'B',
    'B', '4', '6', '0', '5', '7', '8', '7', '8', '5', 'B', '1', '9', '9', '0',
    '1', '4', '3', '1', '4', 'A', '6', '5', 'F', '0', '9', '0', 'B', '6', '1',
    'F', 'C', '2', '0', '1', '6', '9', '4', '5', '3', 'B', '5', '8', 'F', 'C',
    '8', 'B', 'A', '4', '3', 'E', '6', '7', '7', '6', 'E', 'B', '7', 'E', 'C',
    'D', '3', '1', '7', '8', 'B', '5', '6', 'A', 'B', '0', 'F', 'A', '0', '6',
    'D', 'D', '6', '4', '9', '6', '7', 'C', 'B', '1', '4', '9', 'E', '5', '0',
    '2', '0', '1', '1', '1', '\0'};

static const char * MCC_GilharCalc_matlabpath_data[] = 
  { "GilharCalc/", "$TOOLBOXDEPLOYDIR/", "$TOOLBOXMATLABDIR/general/",
    "$TOOLBOXMATLABDIR/ops/", "$TOOLBOXMATLABDIR/lang/",
    "$TOOLBOXMATLABDIR/elmat/", "$TOOLBOXMATLABDIR/randfun/",
    "$TOOLBOXMATLABDIR/elfun/", "$TOOLBOXMATLABDIR/specfun/",
    "$TOOLBOXMATLABDIR/matfun/", "$TOOLBOXMATLABDIR/datafun/",
    "$TOOLBOXMATLABDIR/polyfun/", "$TOOLBOXMATLABDIR/funfun/",
    "$TOOLBOXMATLABDIR/sparfun/", "$TOOLBOXMATLABDIR/scribe/",
    "$TOOLBOXMATLABDIR/graph2d/", "$TOOLBOXMATLABDIR/graph3d/",
    "$TOOLBOXMATLABDIR/specgraph/", "$TOOLBOXMATLABDIR/graphics/",
    "$TOOLBOXMATLABDIR/uitools/", "$TOOLBOXMATLABDIR/strfun/",
    "$TOOLBOXMATLABDIR/imagesci/", "$TOOLBOXMATLABDIR/iofun/",
    "$TOOLBOXMATLABDIR/audiovideo/", "$TOOLBOXMATLABDIR/timefun/",
    "$TOOLBOXMATLABDIR/datatypes/", "$TOOLBOXMATLABDIR/verctrl/",
    "$TOOLBOXMATLABDIR/codetools/", "$TOOLBOXMATLABDIR/helptools/",
    "$TOOLBOXMATLABDIR/winfun/", "$TOOLBOXMATLABDIR/winfun/NET/",
    "$TOOLBOXMATLABDIR/demos/", "$TOOLBOXMATLABDIR/timeseries/",
    "$TOOLBOXMATLABDIR/hds/", "$TOOLBOXMATLABDIR/guide/",
    "$TOOLBOXMATLABDIR/plottools/", "toolbox/local/",
    "$TOOLBOXMATLABDIR/datamanager/", "toolbox/compiler/" };

static const char * MCC_GilharCalc_classpath_data[] = 
  { "" };

static const char * MCC_GilharCalc_libpath_data[] = 
  { "" };

static const char * MCC_GilharCalc_app_opts_data[] = 
  { "" };

static const char * MCC_GilharCalc_run_opts_data[] = 
  { "" };

static const char * MCC_GilharCalc_warning_state_data[] = 
  { "off:MATLAB:dispatcher:nameConflict" };


mclComponentData __MCC_GilharCalc_component_data = { 

  /* Public key data */
  __MCC_GilharCalc_public_key,

  /* Component name */
  "GilharCalc",

  /* Component Root */
  "",

  /* Application key data */
  __MCC_GilharCalc_session_key,

  /* Component's MATLAB Path */
  MCC_GilharCalc_matlabpath_data,

  /* Number of directories in the MATLAB Path */
  39,

  /* Component's Java class path */
  MCC_GilharCalc_classpath_data,
  /* Number of directories in the Java class path */
  0,

  /* Component's load library path (for extra shared libraries) */
  MCC_GilharCalc_libpath_data,
  /* Number of directories in the load library path */
  0,

  /* MCR instance-specific runtime options */
  MCC_GilharCalc_app_opts_data,
  /* Number of MCR instance-specific runtime options */
  0,

  /* MCR global runtime options */
  MCC_GilharCalc_run_opts_data,
  /* Number of MCR global runtime options */
  0,
  
  /* Component preferences directory */
  "GilharCalc_937FEB6F97A5D69169AA8E04C5983A81",

  /* MCR warning status data */
  MCC_GilharCalc_warning_state_data,
  /* Number of MCR warning status modifiers */
  1,

  /* Path to component - evaluated at runtime */
  NULL

};

#ifdef __cplusplus
}
#endif


