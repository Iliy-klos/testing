object Form4: TForm4
  Left = 0
  Top = 0
  Hint = 'Text'
  ActiveControl = Text
  Caption = #1055#1088#1086#1089#1084#1086#1090#1088#1077#1090#1100' '#1089#1086#1076#1077#1088#1078#1080#1084#1086#1077' '#1092#1072#1081#1083#1072
  ClientHeight = 509
  ClientWidth = 727
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  ShowHint = True
  PixelsPerInch = 96
  TextHeight = 13
  object Path: TButton
    Left = 8
    Top = 403
    Width = 241
    Height = 52
    Align = alCustom
    Caption = 'Get Path'
    TabOrder = 0
    OnClick = PathClick
  end
  object Edit1: TEdit
    Left = 8
    Top = 376
    Width = 449
    Height = 21
    Align = alCustom
    TabOrder = 1
    TextHint = 'Path for file'
  end
  object Text: TRichEdit
    Left = 0
    Top = 0
    Width = 727
    Height = 361
    Hint = 'Text'
    Align = alTop
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    Lines.Strings = (
      'Text')
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    WantTabs = True
    Zoom = 100
  end
  object ReadOnly: TCheckBox
    Left = 608
    Top = 370
    Width = 105
    Height = 31
    Caption = 'ReadOnly'
    Ctl3D = False
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = [fsBold]
    ParentCtl3D = False
    ParentFont = False
    TabOrder = 3
    OnClick = ReadOnlyClick
  end
  object SaveAs: TButton
    Left = 472
    Top = 430
    Width = 75
    Height = 25
    Caption = 'Save'
    TabOrder = 4
    OnClick = SaveAsClick
  end
end
