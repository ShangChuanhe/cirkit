function(add_addon_flags)
  foreach (dir ${addon_directories})
    string(REGEX REPLACE "cirkit-" "" def ${dir})
    string(REGEX REPLACE "-" "_" def ${def})
    string(TOUPPER ${def} def)
    add_definitions(-D${def})
    include_directories(addons/${dir}/src)
  endforeach()
  foreach (dir ${addon_include_directories})
    include_directories(${dir})
  endforeach()
  foreach (dir ${addon_link_directories})
    link_directories(${dir})
  endforeach()
endfunction(add_addon_flags)
