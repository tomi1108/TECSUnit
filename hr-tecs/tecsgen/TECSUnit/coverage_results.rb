puts "| Function | Line Coverage |"
puts "|:---:|:---:|"
coverage_results = File.read("coverage_results.txt")
function_coverage_data = {}
file_coverage_data = {}
lines_coverage_data = {}
output = "" #出力する表の行
current_function = ""
current_file = ""
line_data = "" #実行した関数名、ファイル名を含む一文
lines = "" #実行した関数のコード行数
func_name = "" #実行した関数の定義を含むファイルの.cを省いたファイル名
total_lines = 0
total_val = 0.0
file_array = []
file_array_count = 0
coverage_results.each_line do |line|
  if line.include?("Function '")
  	line_data = line
    current_function = line.split("'")[1]
  elsif line.include?("File '")
  	line_data = line.to_s
    current_file = line.split("'")[1]
  elsif line.include?("Lines executed:")
    percentage = line.split(":")[1].split("%")[0].to_f
    lines = line.split("of")[1].split("\n")[0]
    if percentage > 0
    	if line_data.include?("Function '")
        puts "| " + current_function + " | " + line.delete("Lines executed:").chomp + " |"
#    		puts line
#    		puts ""
    		lines_coverage_data[current_function] = lines
    	elsif line_data.include?("File '")
    		func_name = line_data.split("/")[1].split(".")[0]
    		for count in 1..lines_coverage_data.length do
    			if lines_coverage_data.keys[count-1].include?(func_name)
    				total_lines += lines_coverage_data[lines_coverage_data.keys[count-1]].to_i
    				total_val += function_coverage_data[lines_coverage_data.keys[count-1]] * lines_coverage_data[lines_coverage_data.keys[count-1]].to_f
    			end
    		end
    		coverage_rate = total_val / total_lines
        file_array[file_array_count] = "| " + current_file.sub(/src\//, '') { |match|  } + " | " + coverage_rate.to_s + " of " + total_lines.to_s + " |"
        file_array_count += 1
#        puts "| File: " + current_file.sub(/src\//, '') { |match|  } + " | " + coverage_rate.to_s + " of " + total_lines.to_s + " |"
#    		puts line_data
#    		puts "Lines executed:" + coverage_rate.to_s + " of " + total_lines.to_s
#    		puts ""
    		total_lines = 0
    		total_val = 0.0
    	end
        if current_function != ""
            function_coverage_data[current_function] = percentage
        elsif current_file != ""
            file_coverage_data[current_file] = percentage
        end
    end
    line_data = ""
    current_function = ""
    current_file = ""
    lines = ""
  end
end

puts "| File | Line Coverage |"
puts file_array

# puts "Function coverage data : #{function_coverage_data}"
# puts "File coverage data : #{file_coverage_data}"
# puts "Lines coverage data :#{lines_coverage_data}"