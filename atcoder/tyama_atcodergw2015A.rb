#!/usr/bin/ruby
puts [0,25].product([0,39],[0,51],[0,76],[0,163],[0,111],[0,58,136],[0,128],[0,133],[0,138]).map{|e|e.reduce(:+)}.sort.uniq