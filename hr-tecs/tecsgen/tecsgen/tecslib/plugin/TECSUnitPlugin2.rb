class TECSUnitPlugin < CellPlugin

  # プラグイン引数名 => Proc
  # @@cell_list = {}      # gen_cdl_file'ed list to avoid duplicate generation
  # @@signature_list = {}

  #=== CellPlugin# initialize
  #cell::     Cell        セル（インスタンス）
  # このメソッドは、セルの構文解析が終わったところで呼び出される
  # この段階では意味解析が終わっていない
  def initialize( cell, option )
    dbgPrint "  #{self.class.name}: initialzie=#{cell.get_name} option=#{option}\n"
    super #/おそらく親クラスのinitialize関数を呼び出している/
    @cell = cell

    @plugin_arg_str = CDLString.remove_dquote option
    # @plugin_arg_str = option.gsub( /\A"(.*)/, '\1' )    # 前後の "" を取り除く
    # @plugin_arg_str.sub!( /(.*)"\z/, '\1' )
    @plugin_arg_list = {}
  end

  def gen_cdl_file file # celltype"tTECSUnit"を定義。呼び口の定義がテストターゲットによる
    # tTECSUnit の定義を生成する
    file.print <<EOT

celltype tTECSUnit {
    entry sTECSUnit eUnit;

    /*----- TECSInfo -----*/
    call nTECSInfo::sTECSInfo cTECSInfo;
    [dynamic,optional]
      call  nTECSInfo::sNamespaceInfo cNSInfo;
    [dynamic,optional]
      call  nTECSInfo::sRegionInfo    cRegionInfo;
    [dynamic,optional]
      call  nTECSInfo::sCellInfo      cCellInfo;
    [dynamic,optional]
      call  nTECSInfo::sSignatureInfo cSignatureInfo;
    [dynamic,optional]
      call  nTECSInfo::sCelltypeInfo  cCelltypeInfo;
    [dynamic,optional]
      call  nTECSInfo::sVarDeclInfo   cVarDeclInfo;
    [dynamic,optional]
      call  nTECSInfo::sTypeInfo      cTypeInfo;
    /*----- TECSInfo -----*/

    /*----- RawEntryDescriptor -----*/
    [dynamic,optional]
      call  nTECSInfo::sRawEntryDescriptorInfo   cREDInfo;
    [dynamic,optional]
      call  nTECSInfo::sEntryInfo     cEntryInfo;
    /*----- RawEntryDescriptor -----*/

    /*----- TECSUnit test -----*/
      /* プラグインにより自動生成される */
EOT
    # 必要な呼び口記述を行う
    print_all_call_port( file, Namespace.get_root )

    file.print <<EOT
    /*----- TECSUnit test -----*/

    attr {
      int16_t LEN = 256;
    };
    var {
      void *data;
      [size_is(LEN)]
        char *cell_entry;
    };
EOT

    file.print <<EOT

};
EOT
  end

  def print_all_call_port file, namespace
    namespace.travers_all_signature{ |sig|
      if  sig.get_namespace_path.to_s =~ /nTECSInfo::/ || \
          sig.get_namespace_path.to_s =~ /::s.*Task.*/ || \
          sig.get_namespace_path.to_s =~ /::sAccessor/ || \
          sig.get_namespace_path.to_s =~ /::sTECSUnit/ || \
          sig.get_namespace_path.to_s =~ /::sJSMN/ || \
          sig.get_namespace_path.to_s =~ /::s.*Kernel/ || \
          sig.get_namespace_path.to_s =~ /::s.*Semaphore/ || \
          sig.get_namespace_path.to_s =~ /::s.*Eventflag/ || \
          sig.get_namespace_path.to_s =~ /::s.*Dataqueue/ || \
          sig.get_namespace_path.to_s =~ /::sInitialize.*/ || \
          sig.get_namespace_path.to_s =~ /::s.*VM/ || \
          sig.get_namespace_path.to_s =~ /::sMain/ || \
          sig.get_namespace_path.to_s =~ /::s.*Alarm/ || \
          sig.get_namespace_path.to_s =~ /::sFixedSizeMemoryPool/ || \
          sig.get_namespace_path.to_s =~ /::sMessageBuffer/ || \
          sig.get_namespace_path.to_s =~ /::sTerminateRoutineBody/ || \
          sig.get_namespace_path.to_s =~ /::s.*HandlerBody/ || \
          sig.get_namespace_path.to_s =~ /::sConfigInterrupt/ || \
          sig.get_namespace_path.to_s =~ /::sCyclic/ || \
          sig.get_namespace_path.to_s =~ /::sMalloc/ then
        # ignnore these signatures
      else
        file.print <<EOT
    [dynamic, optional]
      call #{sig.get_namespace_path.to_s} c#{sig.get_name[1..-1]};
EOT
      end
    }
  end

#################################################################################################

  def gen_ep_func_body( file, b_singleton, ct_name, global_ct_name, sig_name, ep_name, func_name, func_global_name, func_type, paramSet )
    if func_name.to_s == "name" then
      print_main( file, Namespace.get_root )
    end
    if func_name.to_s == "boundary_value_test" then
      print_boundary_value_test( file, Namespace.get_root )
    end
  end

  def print_main( file, namespace )
    file.print <<EOT
    printf("!!!\n");
EOT
  end

  def print_boundary_value_test( file, namespace )
    file.print <<EOT
    printf("!!!!!!\n");
EOT
  end