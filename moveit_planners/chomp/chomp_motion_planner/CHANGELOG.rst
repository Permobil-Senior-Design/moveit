^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Changelog for package chomp_motion_planner
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

1.0.10 (2022-03-06)
-------------------

1.0.9 (2022-01-09)
------------------

1.0.8 (2021-05-23)
------------------
* Sanitize CHOMP initialization method parameter (`#2540 <https://github.com/ros-planning/moveit/issues/2540>`_)
* Contributors: Cong Liu

1.0.7 (2020-11-20)
------------------

1.0.6 (2020-08-19)
------------------
* [maint] Migrate to clang-format-10
* [maint] Optimize includes (`#2229 <https://github.com/ros-planning/moveit/issues/2229>`_)
* Contributors: Markus Vieth, Robert Haschke

1.0.5 (2020-07-08)
------------------

1.0.4 (2020-05-30)
------------------

1.0.3 (2020-04-26)
------------------
* [maint] Apply clang-tidy fix to entire code base (`#1394 <https://github.com/ros-planning/moveit/issues/1394>`_)
* [maint] Windows build fixes
  * Fix header inclusion and other MSVC build errors (`#1636 <https://github.com/ros-planning/moveit/issues/1636>`_)
  * Remove GCC extensions (`#1583 <https://github.com/ros-planning/moveit/issues/1583>`_)
  * Fix binary artifact install locations. (`#1575 <https://github.com/ros-planning/moveit/issues/1575>`_)
* [maint] Use CMAKE_CXX_STANDARD to enforce c++14 (`#1607 <https://github.com/ros-planning/moveit/issues/1607>`_)
* [fix]   Fix possible division-by-zero (`#1809 <https://github.com/ros-planning/moveit/issues/1809>`_)
* Contributors: Max Krichenbauer, Robert Haschke, Sean Yen, Yu, Yan

1.0.2 (2019-06-28)
------------------
* [fix] Fix chomp planner (`#1512 <https://github.com/ros-planning/moveit/issues/1512>`_)
  * Fix start-state handling
  * remove time parameterization from planning code
* Contributors: Robert Haschke

1.0.1 (2019-03-08)
------------------
* [improve] Apply clang tidy fix to entire code base (Part 1) (`#1366 <https://github.com/ros-planning/moveit/issues/1366>`_)
* Contributors: Robert Haschke, Yu, Yan

1.0.0 (2019-02-24)
------------------
* [fix] catkin_lint issues (`#1341 <https://github.com/ros-planning/moveit/issues/1341>`_)
* Contributors: Robert Haschke

0.10.8 (2018-12-24)
-------------------

0.10.7 (2018-12-13)
-------------------

0.10.6 (2018-12-09)
-------------------
* [fix] memory leak (ChompOptimizer)
* [fix] Set last_state for active joints only (`#1222 <https://github.com/ros-planning/moveit/issues/1222>`_)
* [maintenance] Rearranged CHOMP-related modules within moveit_planners/chomp (`#1251 <https://github.com/ros-planning/moveit/issues/1251>`_)
* [maintenance] Replaced Eigen::Affine3d -> Eigen::Isometry3d (`#1096 <https://github.com/ros-planning/moveit/issues/1096>`_)
* [maintenance] Remove ChompParameters::getNonConstParams() (`#1196 <https://github.com/ros-planning/moveit/issues/1196>`_)
* [maintenance] Code Cleanup (`#1179 <https://github.com/ros-planning/moveit/issues/1179>`_)
* Contributors: Dave Coleman, Michael Görner, Robert Haschke, Shingo Kitagawa

0.10.5 (2018-11-01)
-------------------

0.10.4 (2018-10-29)
-------------------

0.10.3 (2018-10-29)
-------------------

0.10.2 (2018-10-24)
-------------------
* [fix] Eigen alignment issuses due to missing aligned allocation (`#1039 <https://github.com/ros-planning/moveit/issues/1039>`_)
* [fix] various compiler warnings (`#1038 <https://github.com/ros-planning/moveit/issues/1038>`_)
* [fix] changelogs: migration from tf -> tf2 only accidentally became part of 0.9.12's changelog
* [capability] Addition of CHOMP planning adapter for optimizing result of other planners (`#1012 <https://github.com/ros-planning/moveit/issues/1012>`_)
* [capability] Failure recovery options for CHOMP by tweaking parameters (`#987 <https://github.com/ros-planning/moveit/issues/987>`_)
* [capability] cleanup of unused parameters and code + addition of trajectory initialization methods (linear, cubic, quintic-spline) (`#960 <https://github.com/ros-planning/moveit/issues/960>`_)
* Contributors: Adrian Zwiener, Raghavender Sahdev, Robert Haschke

0.10.1 (2018-05-25)
-------------------
* [fix] for chomp fixed base joint bug (`#870 <https://github.com/ros-planning/moveit/issues/870>`_)
* [maintenance] MoveIt! tf2 migration (`#830 <https://github.com/ros-planning/moveit/issues/830>`_)
* [maintenance] switch to ROS_LOGGER from CONSOLE_BRIDGE (`#874 <https://github.com/ros-planning/moveit/issues/874>`_)
* Contributors: Bence Magyar, Dave Coleman, Ian McMahon, Mike Lautman, Xiaojian Ma

0.9.11 (2017-12-25)
-------------------

0.9.10 (2017-12-09)
-------------------

0.9.9 (2017-08-06)
------------------
* [improve] Chomp use PlanningScene (`#546 <https://github.com/ros-planning/moveit/issues/546>`_) to partially address `#305 <https://github.com/ros-planning/moveit/issues/305>`_
* Contributors: Simon Schmeisser

0.9.8 (2017-06-21)
------------------

0.9.7 (2017-06-05)
------------------

0.9.6 (2017-04-12)
------------------

0.9.5 (2017-03-08)
------------------

0.9.4 (2017-02-06)
------------------

0.9.3 (2016-11-16)
------------------

0.9.2 (2016-11-05)
------------------
* [Maintenance] Auto format codebase using clang-format (`#284 <https://github.com/ros-planning/moveit/issues/284>`_)
* Contributors: Dave Coleman, Isaac I.Y. Saito

0.9.0 (2016-10-19)
------------------
* Use shared_ptr typedefs in collision_distance_field and chomp.
* Fix CHOMP planner and CollisionDistanceField (`#155 <https://github.com/ros-planning/moveit/issues/155>`_)
  * Copy collision_distance_field package
  * Resurrect chomp
  * remove some old Makefiles and manifests
  * Correct various errors
  * Code formatting, author, description, version, etc
  * Add definitions for c++11. Nested templates problem.
  * Add name to planner plugin.
  * Change getJointModels to getActiveJointModels.
  * Call robot_state::RobotState::update in setRobotStateFromPoint.
  * Create README.md
  * Improve package.xml, CMake config and other changes suggested by jrgnicho.
  * Remove some commented code, add scaling factors to computeTimeStampes
  * Add install targets in moveit_experimental and chomp
  * Add install target for headers in chomp pkgs.
  * Remove unnecessary debugging ROS_INFO.
  * Port collision_distance_field test to indigo.
  * Remove one assertion that makes collision_distance_field test to fail.
* Contributors: Chittaranjan Srinivas Swaminathan, Maarten de Vries

0.8.3 (2016-08-21)
------------------
