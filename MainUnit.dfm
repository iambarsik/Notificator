object MainForm: TMainForm
  Left = 401
  Top = 209
  BorderStyle = bsDialog
  Caption = #1056#1077#1076#1072#1082#1090#1086#1088' '#1085#1072#1087#1086#1084#1080#1085#1072#1085#1080#1081
  ClientHeight = 706
  ClientWidth = 865
  Color = clScrollBar
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object sgEvents: TStringGrid
    Left = 8
    Top = 8
    Width = 849
    Height = 609
    ColCount = 2
    DefaultRowHeight = 20
    FixedCols = 0
    RowCount = 2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Verdana'
    Font.Style = []
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRowSelect, goThumbTracking]
    ParentFont = False
    PopupMenu = PopupMenu1
    TabOrder = 0
    OnDrawCell = sgEventsDrawCell
    ColWidths = (
      648
      185)
  end
  object pAdd: TPanel
    Left = 512
    Top = 656
    Width = 345
    Height = 41
    BevelInner = bvLowered
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1085#1072#1087#1086#1084#1080#1085#1072#1085#1080#1077
    Color = clSkyBlue
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    OnMouseDown = pAddMouseDown
    OnMouseUp = pAddMouseUp
  end
  object eText: TEdit
    Left = 8
    Top = 624
    Width = 529
    Height = 26
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
  end
  object cbDay: TComboBox
    Left = 552
    Top = 624
    Width = 73
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Verdana'
    Font.Style = []
    ItemHeight = 16
    ItemIndex = 0
    ParentFont = False
    TabOrder = 3
    Text = '1'
    Items.Strings = (
      '1'
      '2'
      '3'
      '4'
      '5'
      '6'
      '7'
      '8'
      '9'
      '10'
      '11'
      '12'
      '13'
      '14'
      '15'
      '16'
      '17'
      '18'
      '19'
      '20'
      '21'
      '22'
      '23'
      '24'
      '25'
      '26'
      '27'
      '28'
      '29'
      '30'
      '31')
  end
  object cbMonth: TComboBox
    Left = 632
    Top = 624
    Width = 145
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Verdana'
    Font.Style = []
    ItemHeight = 16
    ItemIndex = 0
    ParentFont = False
    TabOrder = 4
    Text = #1103#1085#1074#1072#1088#1103
    Items.Strings = (
      #1103#1085#1074#1072#1088#1103
      #1092#1077#1074#1088#1072#1083#1103
      #1084#1072#1088#1090#1072
      #1072#1087#1088#1077#1083#1103
      #1084#1072#1103
      #1080#1102#1085#1103
      #1080#1102#1083#1103
      #1072#1074#1075#1091#1089#1090#1072
      #1089#1077#1085#1090#1103#1073#1088#1103
      #1086#1082#1090#1103#1073#1088#1103
      #1085#1086#1103#1073#1088#1103
      #1076#1077#1082#1072#1073#1088#1103)
  end
  object cbYear: TComboBox
    Left = 784
    Top = 624
    Width = 73
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Verdana'
    Font.Style = []
    ItemHeight = 16
    ItemIndex = 0
    ParentFont = False
    TabOrder = 5
    Text = '2023'
    Items.Strings = (
      '2023'
      '2024'
      '2025')
  end
  object pExcel: TPanel
    Left = 8
    Top = 656
    Width = 297
    Height = 41
    BevelInner = bvLowered
    Caption = #1047#1072#1075#1088#1091#1079#1080#1090#1100' '#1089#1087#1080#1089#1086#1082' '#1080#1079' Excel'
    Color = clGreen
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
    OnMouseDown = pExcelMouseDown
    OnMouseUp = pExcelMouseUp
  end
  object OpenDialog1: TOpenDialog
    Left = 336
    Top = 664
  end
  object PopupMenu1: TPopupMenu
    Left = 376
    Top = 664
    object N6: TMenuItem
      Caption = #1059#1076#1072#1083#1080#1090#1100
      OnClick = N6Click
    end
  end
end
