object FormEvents: TFormEvents
  Left = 555
  Top = 136
  BorderStyle = bsSingle
  Caption = #1040#1082#1090#1080#1074#1085#1099#1077' '#1089#1086#1073#1099#1090#1080#1103
  ClientHeight = 592
  ClientWidth = 590
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object sgEvents: TStringGrid
    Left = 9
    Top = 8
    Width = 576
    Height = 289
    ColCount = 2
    DefaultRowHeight = 20
    FixedCols = 0
    RowCount = 2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Verdana'
    Font.Style = []
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRowSelect]
    ParentFont = False
    PopupMenu = PopupMenu1
    TabOrder = 0
    ColWidths = (
      430
      133)
  end
  object MainMenu1: TMainMenu
    Left = 168
    Top = 344
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N2: TMenuItem
        Caption = #1054#1090#1082#1088#1099#1090#1100' '#1088#1077#1076#1072#1082#1090#1086#1088
        OnClick = N2Click
      end
      object N5: TMenuItem
        Caption = #1042#1099#1093#1086#1076
        OnClick = N5Click
      end
    end
    object N3: TMenuItem
      Caption = #1057#1087#1088#1072#1074#1082#1072
      object N4: TMenuItem
        Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077
      end
    end
  end
  object Timer1: TTimer
    Interval = 60000
    OnTimer = Timer1Timer
    Left = 64
    Top = 352
  end
  object PopupMenu1: TPopupMenu
    Left = 272
    Top = 368
    object N6: TMenuItem
      Caption = #1059#1076#1072#1083#1080#1090#1100
      OnClick = N6Click
    end
  end
end
