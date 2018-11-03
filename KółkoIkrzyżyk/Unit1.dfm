object Form1: TForm1
  Left = 208
  Top = 125
  Width = 617
  Height = 386
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object pole1: TImage
    Left = 24
    Top = 24
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole1Click
  end
  object pole2: TImage
    Left = 120
    Top = 24
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole2Click
  end
  object pole3: TImage
    Left = 216
    Top = 24
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole3Click
  end
  object pole4: TImage
    Left = 24
    Top = 120
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole4Click
  end
  object pole5: TImage
    Left = 120
    Top = 120
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole5Click
  end
  object pole6: TImage
    Left = 216
    Top = 120
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole6Click
  end
  object pole7: TImage
    Left = 24
    Top = 216
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole7Click
  end
  object pole8: TImage
    Left = 120
    Top = 216
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole8Click
  end
  object pole9: TImage
    Left = 216
    Top = 216
    Width = 100
    Height = 100
    Cursor = crHandPoint
    OnClick = pole9Click
  end
  object Label1: TLabel
    Left = 408
    Top = 24
    Width = 164
    Height = 36
    Caption = 'Tura Gracza'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -31
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object tura: TImage
    Left = 472
    Top = 80
    Width = 30
    Height = 30
  end
  object BitBtn1: TBitBtn
    Left = 432
    Top = 128
    Width = 113
    Height = 33
    Cursor = crHandPoint
    Caption = 'Od Nowa'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = FormCreate
  end
end
