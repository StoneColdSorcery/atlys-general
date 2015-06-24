
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name ShiftRegister -dir "C:/Users/Crazyfingers/Documents/Atlys-General/atlys-general/Shiftreg/planAhead_run_1" -part xc6slx45csg324-2
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "CBIOWrapper.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {Source/UART.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Source/DotDriver.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Source/ClockDivider.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {MessageHandler.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Source/ClockBaseTop.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Source/CBIOWrapper.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top CBIOWrapper $srcset
add_files [list {CBIOWrapper.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx45csg324-2
