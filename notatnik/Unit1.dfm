object Form1: TForm1
  Left = 107
  Top = 163
  Width = 928
  Height = 480
  Caption = 'NotatnikCpp'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Tresc: TMemo
    Left = 0
    Top = 0
    Width = 912
    Height = 421
    Align = alClient
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Arial Narrow'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnKeyDown = TrescKeyDown
  end
  object MainMenu1: TMainMenu
    Left = 8
    object Plik1: TMenuItem
      Caption = '&Plik'
      object Nowy1: TMenuItem
        Caption = 'Nowy'
        OnClick = Nowy1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Otwz1: TMenuItem
        Caption = 'Otw'#243'rz'
        OnClick = Otwz1Click
      end
      object Zapisz1: TMenuItem
        Caption = 'Zapisz    Ctrl+S'
        OnClick = Zapisz1Click
      end
      object Zapiszjako1: TMenuItem
        Caption = 'Zapisz jako'
        OnClick = Zapiszjako1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Zakocz1: TMenuItem
        Caption = 'Zako'#324'cz'
        OnClick = Zakocz1Click
      end
    end
    object Edycja1: TMenuItem
      Caption = '&Edycja'
      object Wytnij1: TMenuItem
        Caption = 'Wytnij   Ctrl+X'
        OnClick = Wytnij1Click
      end
      object KopiujCtrlc1: TMenuItem
        Caption = 'Kopiuj Ctrl+C'
        OnClick = KopiujCtrlc1Click
      end
      object WklejCtrlV1: TMenuItem
        Caption = 'Wklej Ctrl+V'
        OnClick = WklejCtrlV1Click
      end
    end
    object Fromat1: TMenuItem
      Caption = 'Format'
      object Zawijaniewierszy1: TMenuItem
        Caption = 'Zawijanie wierszy'
        Checked = True
        OnClick = Zawijaniewierszy1Click
      end
      object Czcionka1: TMenuItem
        Caption = 'Czcionka'
        OnClick = Czcionka1Click
      end
    end
    object Pomoc1: TMenuItem
      Caption = 'Pomoc'
      object Informacje1: TMenuItem
        Caption = 'Informacje'
        object Oprogramie1: TMenuItem
          Caption = 'O programie'
          OnClick = Oprogramie1Click
        end
        object ZapraszamnaBlog1: TMenuItem
          Caption = 'Zapraszam na bloga'
          OnClick = ZapraszamnaBlog1Click
        end
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Pliki tekstowe(.txt)|*txt|Wszystkie pliki|*.*'
    Left = 32
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Plik tekstowy (txt)|*.txt|Dowolny plik|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 56
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    MinFontSize = 0
    MaxFontSize = 0
    Left = 80
  end
end
