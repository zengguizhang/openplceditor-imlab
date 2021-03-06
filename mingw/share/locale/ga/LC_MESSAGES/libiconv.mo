??    .      ?  =   ?      ?  C   ?  9   5  o   o  B   ?  m   "  ?   ?  \   ?  ;   -  P   i  [   ?       @     N   Z  J   ?  D   ?  d   9  ?   ?  :   9	     t	     ?	     ?	  0   ?	     ?	  5   ?	  	   
     
  )   2
  "   \
  1   
  +   ?
  &   ?
  A     ;   F     ?  /   ?  7   ?  3   ?  :   .  ;   i  $   ?     ?     ?            2   $  ?  W  C   :  C   ~  k   ?  F   .  l   u  B   ?  W   %  J   }  W   ?  T         u  =   x  N   ?  N     B   T  h   ?  ?     1   ?     ?          
  ,   %     R  $   Z          ?  +   ?  (   ?  3   ?  ;   *  :   f  @   ?  5   ?       4      C   U  =   ?  E   ?  F     "   d     ?     ?     ?     ?  U   ?             $                                    %         )                 ,                         +      !   	                '      "   (   .   -                  
                  #          &      *            --byte-subst=FORMATSTRING   substitution for unconvertible bytes
   --help                      display this help and exit
   --unicode-subst=FORMATSTRING
                              substitution for unconvertible Unicode characters
   --version                   output version information and exit
   --widechar-subst=FORMATSTRING
                              substitution for unconvertible wide characters
   -c                          discard unconvertible characters
   -f ENCODING, --from-code=ENCODING
                              the encoding of the input
   -l, --list                  list the supported encodings
   -s, --silent                suppress error messages about conversion problems
   -t ENCODING, --to-code=ENCODING
                              the encoding of the output
 %s %s argument: A format directive with a size is not allowed here. %s argument: A format directive with a variable precision is not allowed here. %s argument: A format directive with a variable width is not allowed here. %s argument: The character '%c' is not a valid conversion specifier. %s argument: The character that terminates the format directive is not a valid conversion specifier. %s argument: The format string consumes more than one argument: %u argument. %s argument: The format string consumes more than one argument: %u arguments. %s argument: The string ends in the middle of a directive. %s: I/O error %s:%u:%u %s:%u:%u: cannot convert %s:%u:%u: incomplete character or shift sequence (stdin) Converts text from one encoding to another encoding.
 I/O error Informative output:
 Options controlling conversion problems:
 Options controlling error output:
 Options controlling the input and output format:
 Report bugs to <bug-gnu-libiconv@gnu.org>.
 Try `%s --help' for more information.
 Usage: %s [OPTION...] [-f ENCODING] [-t ENCODING] [INPUTFILE...]
 Usage: iconv [-c] [-s] [-f fromcode] [-t tocode] [file ...] Written by %s.
 cannot convert byte substitution to Unicode: %s cannot convert byte substitution to target encoding: %s cannot convert byte substitution to wide string: %s cannot convert unicode substitution to target encoding: %s cannot convert widechar substitution to target encoding: %s conversion from %s to %s unsupported conversion from %s unsupported conversion to %s unsupported or:    %s -l
 or:    iconv -l try '%s -l' to get the list of supported encodings Project-Id-Version: libiconv 1.12
Report-Msgid-Bugs-To: bug-gnu-libiconv@gnu.org
POT-Creation-Date: 2009-06-30 22:53+0200
PO-Revision-Date: 2008-01-02 14:58-0500
Last-Translator: Kevin Scannell <kscanne@gmail.com>
Language-Team: Irish <gaeilge-gnulinux@lists.sourceforge.net>
Language: ga
MIME-Version: 1.0
Content-Type: text/plain; charset=ISO-8859-1
Content-Transfer-Encoding: 8bit
Plural-Forms: nplurals=5; plural=n==1 ? 0 : n==2 ? 1 : (n>2 && n<7) ? 2 : (n>6 && n <11) ? 3 : 4;
   --byte-subst=TEAGHR?N       ionada?ocht do bhearta dothiontaithe
   --help                      taispe?in an chabhair seo agus scoir
   --unicode-subst=TEAGHR?N
                              ionada?ocht do charachtair dhothiontaithe Unicode
   --version                   taispe?in eolas faoin leagan agus scoir
   --widechar-subst=TEAGHR?N
                             ionada?ocht do charachtair leathana dhothiontaithe
   -c                        n? coinnigh carachtair dhothiontaithe
   -f IONCH?D?, --from-code=IONCH?D?
                              ionch?d? an ionchuir
   -l, --list                  taispe?in na hionch?duithe a dtaca?tear leo
   -s, --silent                n? taispe?in teachtaireachta? faoi fhadhbanna tiontaithe
   -t IONCH?D?, --to-code=IONCH?D?
                              ionch?d? an aschuir
 %s arg?int %s: N? cheada?tear treoir fhorm?idithe le m?id anseo. arg?int %s: N? cheada?tear treoir fhorm?idithe le beachtas athraitheach anseo. arg?int %s: N? cheada?tear treoir fhorm?idithe le leithead athraitheach anseo. arg?int %s: N?l carachtar '%c' bail? mar shonraitheoir tiontaithe. arg?int %s: An carachtar ag deireadh na treorach form?idithe, n?l s? bail? mar shonraitheoir tiontaithe. arg?int %s: ?s?ideann an teaghr?n form?idithe n?os m? n? aon arg?int amh?in: %u arg?int. arg?int %s: ?s?ideann an teaghr?n form?idithe n?os m? n? aon arg?int amh?in: %u arg?int. arg?int %s: ?s?ideann an teaghr?n form?idithe n?os m? n? aon arg?int amh?in: %u arg?int. arg?int %s: ?s?ideann an teaghr?n form?idithe n?os m? n? aon arg?int amh?in: %u n-arg?int. arg?int %s: ?s?ideann an teaghr?n form?idithe n?os m? n? aon arg?int amh?in: %u arg?int. arg?int %s: Deireadh an teaghr?in i l?r treorach. %s: Earr?id I/A %s:%u:%u %s:%u:%u: n? f?idir tiont? %s:%u:%u: carachtar n? seicheamh neamhioml?n (stdin) Tiontaigh ? ionch?d? go ceann eile.
 Earr?id I/A Aschur faisn?iseach:
 Roghanna a riala?onn fadhbanna tiontaithe:
 Roghanna a riala?onn aschur d'earr?id?:
 Roghanna a riala?onn form?id ionchurtha/aschurtha:
 Seol tuairisc? fabhtanna chuig <bug-gnu-libiconv@gnu.org>.
 Bain triail as `%s --help' chun tuilleadh eolais a fh?il.
 ?s?id: %s [ROGHA...] [-f IONCH?D?] [-t IONCH?D?] [INCHOMHAD...]
 ?s?id: iconv [-c] [-s] [-f c?d] [-t c?d] [comhad ...] Le %s.
 n? f?idir ionada?ocht bhirt a thiont? go Unicode: %s n? f?idir ionada?ocht bhirt a thiont? go dt? an sprioc-ionch?d?: %s n? f?idir ionada?ocht bhirt a thiont? go teaghr?n leathan: %s n? f?idir ionada?ocht unicode a thiont? go dt? an sprioc-ionch?d?: %s n? f?idir ionada?ocht widechar a thiont? go dt? an sprioc-ionch?d?: %s n? thaca?tear le tiont? ? %s go %s n? thaca?tear le tiont? ? %s n? thaca?tear le tiont? go %s n?:    %s -l
 n?:    iconv -l bain triail as '%s -l' chun liosta de na hionch?duithe a dtaca?tear leo a thaispe?int 