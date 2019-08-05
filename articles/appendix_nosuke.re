= 自宅基板とその悩み

//flushright{
nosuke@電脳のツボ
//}

== はじめに

こんにちは、nosukeといいます。
突然ですが、本コラムでは「基板」を自宅で動かすことで、
ゲームセンターのゲームを自宅で好きなだけ遊ぶという、
本誌の趣旨と完全に逆行するような筆者の趣味の話を紹介したいと思います。
といっても、ただ趣味を紹介するだけでは面白くないので、
合わせて自宅基板勢の端くれである筆者の悩みについても書いてみます。


== 基板とは

最初に、基板について簡単にご紹介しましょう。
本来、「基板」という言葉は、絶縁体でできた板の上に回路を配線したものや、
その上にCPUやRAMなどをはじめとする様々な電子部品を実装した状態の裸の電子機器などを指します。
一方、ここでいう「基板」は、簡単に言ってしまうとゲームセンターで動いている
ビデオゲーム (画面に映像を出力して遊ぶタイプのゲーム) の中身を指します。

ゲームセンターで稼働しているビデオゲームの多くは、
おおまかに「筐体」と「基板」の2つの要素に分解することができます。
筐体は画面やスピーカー、コントロールパネル
 (レバーやボタン、ハンドル、ガンなどの操作系)、
コイン投入口などがついた、プレイヤーが直接触れる外側の部分です。

一方、基板は、筐体の中で動作している電子機器部分で、
プレイヤーの操作を受け付け、映像や音声を出力するといった
ビデオゲームの中核となる機能を提供します。
身近なところでは一般的な据え置き型の家庭用ゲーム機に近いと言えるでしょう。
そこで以下では、家庭用ゲーム機との相違点を通じて基板の特徴を掘り下げてみます。


=== 無骨な外見

まず、一番わかりやすい外見上のお話をしましょう。
家庭用ゲーム機は、デザインの好みはあれど、どれもそれなりに一般家庭に
置かれることを想定したデザインとなっています。
これに対し、基板は非常に無骨な外見をしていることがほとんどです。
すなわち、多くの場合、基板は完全に裸の状態か、一部分のみがカバーで保護されているような状態で、
外部から基板上の回路や電子部品 (の一部) に直接アクセスできるようになっています。
綺麗な樹脂製のケースで保護された家庭用ゲーム機とはだいぶ趣が異なります。

=== 多様性のあるハードウェア

据え置き型の家庭用ゲーム機のハードウェア部分 (本体) を
作って販売している (いた) 主要なメーカーは、
黎明期の混沌とした時代を除くと、任天堂、セガ、NEC、
ソニー、マイクロソフトなどの数社に限定され、
それ以外の大多数のゲームメーカーは、独自に本体を作ることはせずに、
任天堂やセガ、ソニーなどの
販売する本体にゲームソフトのみを供給する形で市場に参入しています。
そのため、各ゲームメーカーは、基本的にハードウェアに関して大きな自由度はなく、
ゲームソフト側で工夫を凝らして作品を作り上げるのが一般的です。

これに対し、基板については
各ゲームメーカーが独自にハードウェアを開発し、
その上でソフトウェアを作り込むことが行われていました。
そのため、基板は非常に多様性に富んでいます。
しかしながら、そのせいで信号品質などにばらつきが生じ、
基板によっては特別な調整や機材との相性問題など、
様々な運用ノウハウが必要となる事態にも繋がっています。


=== 特定ソフト専用の本体

家庭用ゲーム機では、
本体に対して脱着可能なカートリッジや光学メディアなどの形式で
ゲームソフトが供給されており、
これを交換することで同じ本体上で
異なるゲームが動作するようになるのが一般的です。
一度ゲーム機本体を買えば、
その後はゲームソフトを買い足すだけで新しいゲームで遊ぶことができます。

基板においても、
MVS (業務用NEOGEO) などのように、
ゲームソフト部分を入れ替えることで、
動作するゲームを変更できるものが多数存在しますが、
その一方で、ゲーム機本体としての機能とゲームソフトとしての機能が
一体化しており、ゲームソフト部分だけを入れ替えることができないもの、
すなわち特定のゲームしか遊ぶことのできない基板というのも多数存在します。
また、物理的にはゲームソフト部分を入れ替えられるような
構造となっているにも関わらず、
何かしらの事情によってメーカーからはゲームソフト部分のみが単独で販売されず、
実質本体機能とゲームソフト部分が一体化している基板も
存在します。


=== 高性能(だった) 


基板は、ある時期までは、同世代の家庭用ゲーム機に比べると、
高機能なグラフィックチップや音源チップを搭載していたり、
CPUの動作周波数が高かったり、
RAMやROMの容量が大きかったりと、非常にリッチなハードウェア構成となっていることが多く、
表現力や処理速度、ユーザエクスペリエンスなどの面で同世代の家庭用ゲーム機を圧倒する
傾向にありました。
家庭用ゲーム機に比べて製品サイクルが短く、単価も大幅に高いことから
実現できたのでしょう。

このせいで、アーケードゲームを、
比較的スペックが近い同世代の家庭用ゲーム機に移植した場合であっても、
キャラのモーションのパターンやステージ数が減っていたり、
サンプリングボイスがガビガビになっていたり、
光学メディア故の長い読み込み時間が発生したりといった
明確な差が生じていました。

なお、このような傾向は2000年前半頃の基板でも見られますが、
家庭用ゲーム機やパソコンの高性能化が進んだ現在では、
ほとんどなくなったものと考えられます。


=== 筐体で動かす前提の設計

基板は、筐体の中で動かすことのみを前提として設計されています。
そのため、
当たり前ではありますが、
一般家庭で動かすことはあらゆる点で想定されていません。
テレビに直接入力可能な映像・音声信号は出力されないのが普通であり、
ACアダプタが1個あれば動くような単純な電源構成にはなっていないケースがほとんどです。


== 売ってるの？ 一般人が買えるの？ 

基板はお金を取って遊ばせることのできる業務用のゲームですが、
基板を買うにあたり免許など特別なものは必要ありません。
お金さえあれば誰でも買うことができます。
個人で基板を買う際は、
個人向けに基板を販売している専門店や、
ヤフオクやeBayなどの個人売買の仕組みを利用するのが一般的です。

=== 専門店で買う

現在、基板を商品として恒常的に扱っていて、なおかつ個人に販売している
専門店は、筆者の知る限り、国内で9店あります。
これら店舗で扱っているものの多くは中古品ですが、
新作発売時などは、お店を通じて新品を取り寄せて買うことも可能です。
もちろん、新作かつ新品なので、ものすごいお値段になります
(筆者も一度だけ、新品の新作基板をお店を通じて買ったことがあります)。


=== 個人売買で買う

個人売買といっても、個人だけでなく、
リサイクル業者やゲームセンター自身が出品していることも多々あります。
また、前述の専門店も、店頭では売りにくいものをヤフオクなどで
販売していることがあります。
個人売買では、一般的に、
専門店で買う場合に比べて安く手に入れることができますが、
当然購入物のサポートは一切期待できないため、
その辺は一長一短といったところでしょう。


=== でも実は買えないことも多い

基板は、元々絶対的な流通量が家庭用ゲーム機に比べて少ないのが一般的であり、
中古で購入してもゲームセンターなどで稼働させて
収益を得ることが許されている特殊な
製品でもあることから、
1万円前後から数万円程度の価格で取り引きされるのが割と普通です。
当然、人気タイトルであったり、付属品が揃っていたりすれば、
そこから金額はさらに跳ね上がり、数十万円になることもあります。
そのため「(売ってはいるけど高すぎて)買えない」という状況が発生します。

また、欲しがる人が全然居ないようなマイナーなゲームだと、
お店では数千円程度の値段しかつかないものの、
そもそも中古市場に全然流通しないという、
「(欲しいものが売られていないために)買えない」ということも往々にして起こります。


== 一般家庭で動かせるの？

それでは、いよいよ基板を自宅で動かすという話に移りましょう。
基板は、最近のネットワーク認証が必要な特殊なものなどを除けば、
大概は筐体がなくても家庭で動かして遊ぶことができます。
そのためにどういうものが必要になるのか、本当は1つ1つ細かく
技術的な情報を交えて書きたかったのですが、
あまりに長大になるため、不本意ながらここでは結論だけ書きます。

基板を家庭で動かすには、
筐体の持つ電源やモニタ、スピーカー、
コントロールパネル (操作系)、コインシューターなどに
相当する役割を一通り提供できる環境が必要になります。
これらのうち、モニタ以外の機能は、
コントロールボックスと呼ばれる装置を導入するだけで賄うことが可能となります。
コントロールボックスは、内部に筐体相当の電源ユニットを持ち、
基板から出てくる
アナログRGBの映像信号を家庭用テレビやパソコン用モニタに
出力可能な形式の信号に変換する機能や、
スピーカーを直接駆動することが前提の基板の音声信号を
ラインレベルに変換する機能などを提供し、
さらにプレーに必要となるレバーやボタン、
クレジット投入スイッチなどを備えています。
前述の基板を扱っている専門店などで購入することができます。

また、コントロールボックスは、構造的にそれほど複雑なものではないので、
個人で部品を寄せ集めて自作することも可能です。
筆者は基板を触るようになった当初から、
市販のコントロールボックスは利用せずに、自作のコントロールボックス相当の環境で基板を稼働させています。



== 自宅基板の悩み


さて、
なんちゃって基板入門的な話はこれくらいにして、ここからは
自宅基板における筆者の悩みをいくつかご紹介しましょう。
自宅基板勢に共通する悩みもあれば、
筆者だからこその悩みもあるかもしれません。
ひとまず、悩みを書く前に、前提となる筆者の自宅基板クラスタ的なスペックを簡単に
ご紹介しておきます。

 * 基板歴 12年ちょっと (2019年8月時点)
 * 所有タイトル数約1,300 (2019年8月時点)
 * すべて自宅保管 (レンタル倉庫など不使用)
 * 筐体なし・自作コントロールボックス使用
 * ブラウン管なし・液晶モニタ (回転可能にした32インチのREGZA) 使用

ちなみに、ありがちな「家族の理解」系の話題については、
有り難いことに今のところ悩みになっていないため、ここでは扱いません。



=== なかなか動かせない

コントロールボックスがあれば
理論上は自宅で基板を動かせるようになるのですが、
そうは言っても色々と面倒なことが多々あるため、
せっかく基板があるのに腰が重くて
なかなか動かせないというのが実情だったりします。
まずはその辺の面倒なところをご紹介しましょう。

==== 配線の整備

大概のコントロールボックスは、JAMMAと呼ばれる規格のコネクタに接続するための
ケーブル (ハーネス) を標準で備えており、
基板側がこの規格に準拠していれば、大抵のゲームは繋ぐだけで動くのですが、
基板側がJAMMA規格にない入力を利用するようなゲーム
(ボタンを6個使用するものなど) の場合や、
規格にない信号 (ステレオ音声など) を出力したい場合、
そもそも基板がJAMMAと異なる形状やピン配置のものの場合などは、
コネクタの形状やピン配置を変換するケーブル (変換ハーネス) を
別途自作するなどして追加する必要があったりします。

筆者はこの辺の配線加工をつい後回しにしがちで、
追加ボタン用の配線やステレオ音声出力用の配線、
3P・4P向けの配線などを作っていないケースが少なくなく、
そのせいできちんと遊べない基板が結構な数あったりします。

==== 電源の使い分け

一般的なコントロールボックスの電源やJAMMA規格向けの電源は
+5V、+12Vおよび -5Vの3種類の電圧の出力に対応していることが多いです。
一方、JAMMAの後継の規格であるJVS規格では、
+3.3Vが追加され、-5Vが廃止になったため、
JVS規格向けの電源は+5V、+12Vおよび+3.3Vの3種類の電圧の出力に
対応しているケースが多いです。
その結果、動かす基板によって、2種類の
電源を使い分けなければならないという状況が発生します。

筆者は、これが辛かったことから、かつてはパソコン用のATX電源を使っていました
(ATX電源は、マイナーながら -5Vの出力に対応しているものもあるため、
必要な電圧がそれなりに揃います)。
ただ、ATX電源だと電圧の調整が一切できないのが不便なため、
最近になってJVS規格準拠の大型の電源をベースにし、
直接供給されない -5Vについては
コントロールボックス内で DC-DCコンバータを利用して
生成することで電源を一本化することに成功しました。


==== 特殊な操作系の準備

基板の中には
麻雀パネルやパドル、トラックボール、キーボードなどの特殊な入力デバイス
を利用するものもあり、
これらを動かすには、コントロールボックスを介さずに
基板と直接配線する必要があります。

筆者も、
元々筐体で使われていた各種コントロールパネルをいくつか所持してはいるのですが、
きちんとコネクタの加工・整備ができていないものも少なくなく、
それが済んでいるものであっても
引っ張り出してきて設置して配線するだけで一苦労なため、
なかなかこれらを利用したゲームで遊べていないのが実情です。


==== 基板自体の設置

基板の中には、その大きさや重さのせいで、それ自体を
設置するのが大変なものがあります。
たとえば、
セガのMODEL2と呼ばれる基板は、
金属製のケースで覆われており、
全体の大きさは幅40cm×奥行き50cm×高さ12cmほど、
重さは7kgほどあります。

また、大きさや重さは大したことないものの、部品点数が多くて
設置に手間がかかるものも存在します。
たとえば、同じくセガのNAOMIと呼ばれる基板では、
GD-ROMで供給されているゲームを動かす場合、
NAOMI基板に対してDIMMボードと呼ばれる装置を取り付け、
さらに外付けのGD-ROMドライブや
JAMMA規格の入力を受け付けるためのIOボード、
+3.3Vを供給できる電源など、多数のコンポーネントを配置する必要があります。

筆者の場合、
これら基板の設置には、
通常の基板に比べて体感で3倍ほどの気合が必要です。


==== 映像まわりの調整

基板によっては映像の同期信号のクセが強すぎて、
コントロールボックス経由だと、
いざ電源を入れても映像が正常に表示されないことがよくあります。
特に、コントロールボックスで基板のアナログRGB信号を
S映像などに変換して家庭用テレビに映す場合などは、
同期が取れないなどの
様々なトラブルがあったと聞きます。


筆者の場合、
特殊な映像信号のサポートに定評のある
マイコンソフト社のアップスキャンコンバータ
XRGB-mini Framemeisterを利用し、
それをもってしても対応できないクセのある同期信号については
ノーチラス社のNRS-1という装置で同期信号を補正することで、
映像周りの悩みをほぼ解消しています。
ちなみに、以前は、使っていたアップスキャンコンバータ (マイコンソフト社の
XRGB-3) が24kHzに対応していなかったため、
24kHzのゲームを動かすときのみ同期信号を加工した上で
アナログRGB 24kHzに対応した液晶モニタに直接入力して映すことを行っていました。
また、クセがある同期信号の基板に対しては、
さらに別のアップスキャンコンバータを間に噛ませるなど、基板ごとに
試行錯誤を行うことで対応しており、非常に手間でした。


==== 画面の縦置き

モニタの縦置き問題も、古くから自宅で基板を動かす上で
問題となってきたテーマの1つです。
縦スクロールのSTGなど、
筐体側でモニタを縦向きにして遊ぶことを前提とした基板の場合、
家庭で動かす場合も画面を物理的に縦にする必要があります。
コントロールボックスの映像をブラウン管のテレビやパソコンモニタに
出力している場合、このあたりで苦労することも多かったようです。

筆者の場合、
普段基板の映像を出力するのに利用している液晶モニタは、
スタンドを変更して常時自由に回転できるようにしてあるため、
回すこと自体について苦労はないのですが、
リビングにあるより大画面のテレビはさすがに回転できないため、
リビングでは縦画面ゲームを遊べないという点がちょっと不満だったりします
(リビングで基板を動かす機会が今後どれくらいあるのかわかりませんが)。




=== 所有しているだけでも大変

筆者の場合、特に数が多いということもあるのでしょうが、
基板は、ただ所有するだけでも結構大変です。
どのような点が大変なのか、いくつかご紹介します。



==== 手厚い保護が必須

既に述べたように、多くの基板では回路や電子部品が剥き出しとなっています。
そのため、迂闊に素の状態でその辺に置いたままにしておくと、
ものがぶつかって回路が傷ついたり部品がもげたりするリスクがあります。
また、何より静電気によって電気的に壊れる可能性もあります。

筆者は、このような剥き出しの基板については、
専門店のやり方に倣って
静電防止タイプのエアキャップで全体を包み、
さらに養生テープで固定することで開け閉めできるようにしています。
特に、オークションなどで入手した基板は、
静電防止でないタイプのエアキャップで雑に巻かれていたりするため、
いつでも巻き直せるよう、
静電防止タイプのエアキャップをロールで買い、
養生テープと合わせて常備しています。


==== 当然場所を食う

先程述べたMODEL2のような基板はやや特殊な例ですが、
通常の基板であっても、
剥き出しのタイプのものだと、幅や奥行きは20cm〜35cm程度のものが一般的で、
表面に大きなヒートシンク (大概はアンプ用) が搭載されていたり、
基板自体が複数階建ての構造になっていたりすると、厚みも5cmくらいに
なったりします。
これをエアキャップで巻いたものを何十枚と置くとなると、
あっという間に空間は埋まってしまいます。


前述の通り、筆者は現在1,300タイトルほど基板を所有していますが、
置き場所に余裕があるわけではないため、
その置き方には常に悩まされ続けています。
現在は、カートリッジや光学メディアなどは、DVDなどの保管に適したサイズの棚に
みっちり詰め込み、
それ以外の一般的な基板については、天井近くの高さにまで延長した
スチールシェルフに並べて保管しています。
その際、少しでも多くの基板を、安全かつアクセス可能な形で置くべく、
同じ段にはなるべく同じ高さの基板を並べることで
基板と上の棚板の間の無駄な空間を減らし、
それによって棚板を1段分多く確保するといった工夫を行っています。
また、ジャンク基板などについては、より高密度に保管すべく、
コンテナボックスに詰め込んだ状態でスチールシェルフに置いています。
百聞は一見にしかずなので、機会があれば写真にてご紹介したいところです。


==== 引っ越しが超大変

当たり前ですが、基板は引っ越しの際も、丁寧な梱包や
ゆとりある箱詰めが必要になるため、かなりの荷物となることは
想像に難くないことでしょう。

筆者は、恐ろしいことに、1,000枚クラスの基板を
所持する状態になってから、4回引っ越しを行いました。
しかもそのうち2回は、なぜか引越し業者に頼らずに、何日もかけて
自力で運んでいます。
正直腰が壊れるかと思いました。
するつもりもありませんが、もう二度と引っ越しはしたくないですね・・・。


=== 故障との戦い

基板は本当によく壊れます。
パソコン関係の笑い話で「何もしていないのに壊れた」というのがありますが、
基板についてはこれが本当に頻繁に起こります。
筆者を悩ませる基板の故障パターンをいくつかご紹介します。

==== 1ヶ月で壊れる基板

信じられない話かもしれませんが、
1ヶ月ほど動かさずに放置しただけで
起動しなくなる基板が存在します。
これら基板では、ゲームの違法コピー対策の一環として、基板の起動に必要な
セキュリティ情報が揮発性のRAMに書き込まれているのですが、
そのRAMをバッテリーバックアップしているのが、
リチウム電池などの数年〜数十年持つような電池ではなく、充電式の電池なのです。
電池は、基板に通電されている間に充電されますが、
電源を切って1ヶ月も放置すれば空になってしまいます。
その結果、RAMに記録されていたセキュリティ情報も消失していしまい、
その後の充電状態に関係なくゲームは起動しなくなってしまいます。
かつては、こうなると復活させるにはメーカー修理が必須で、
数千円〜数万円もの修理代がかかりました。
筆者の知る範囲では、1990年前後の、Kabukiと呼ばれるZ80ベースのCPUを搭載した
カプコンのクイズゲームなどの基板と、
ケイブの怒首領蜂大往生BLのみがこのような方式を採用しています。

筆者は以前、
幸運にもKabukiを搭載した電池切れしていない基板を入手する機会に恵まれ、
月一回の充電を行うことでバッテリーを維持し、
その後仕事の関係で長期海外赴任となった際は知人に無理言って
毎月充電してもらっていたのですが、
帰国後、基板が手元に戻った直後に、十分に充電されていたはずの電池が切れて
基板が故障する事態が起こりました。
知人にお願いしてまで維持してきた電池が切れてしまったこともショックでしたが、
それ以上に、毎月充電してくれた知人の努力が完全に無駄になってしまったのが
非常に申し訳なく、辛かったのを覚えています。

ちなみに、Kabukiについては、2019年2月末(!)にカプコンが修理をやめたため、
現在ではメーカー修理で直すことはできませんが、
一方で最近になって海外で個人レベルで改造なしに修理する方法が確立されたため、
毎月充電しなければならないという苦労から解放されました。
また、怒首領蜂大往生BLについても、
特殊なBIOS ROMを用意することで改造なしに復活させる方法が確立しているため
(こちらは筆者が自力で編み出しました)、
こちらも悩みからは解放されています。




==== 保管している間に腐蝕して壊れる

基板の中には、
粗悪な電解コンデンサや充電池を搭載しているせいで、動いているうちに
液漏れを起こして回路やパーツを腐蝕させ、
断線などによる故障を引き起こすものがあります。

筆者の経験では、
電解コンデンサでは
ナムコのNA-1・2シリーズやアイレムのM92基板など、
電池では
IGSのPGM基板とその派生品
などがこのケースに該当します
(ちなみにPGM基板の派生品には、先ほど1ヶ月放置しただけで壊れるとご紹介した
ケイブの怒首領蜂大往生BLも含まれます)。
これらは、問題のある部品をさっさと良品に交換してしまうのが
良いのですが、腐食が進行して後からダメージが出てくることもあるようなので、
油断なりません。

==== 普通に動かし続けると壊れる

基板には、ハイスコアや設定などを保存する目的で EEPROMを
搭載しているものが少なくありませんが、このEEPROMには書き換え回数に
上限があり、あまりに何度も書き換えると壊れて中身が
おかしな値になってしまうことがあります。
そして、そんなEEPROMに対して、デモが1周するたびに
書き込みを行うようなゲームが存在します。
このようなゲームは、長期間稼働させ続けると、
ある日突然EEPROMが書き換えられなくなって、
起動時にエラーが出たり、
ゲームがバグってまともに進行しなくなったりします。

筆者の知る限り、ビデオシステムのソニックウィングスリミテッドと
D3パブリッシャーのTHEブロックくずしが
これに該当します。
このタイプの故障は、
「この基板はこう壊れがちである」というパターンに落とし込めるため、
知っている人は知っている系の故障パターンなのでしょうが、
知らないと要因にたどり着くまでに非常に悩まされます。
特に、
THEブロックくずしの場合、同じ基板を利用している別のゲームと
マザーボード部分 (本体に相当する基板) を交換することで
原因の絞り込みが可能なのですが、
ソニックウィングスリミテッドは
同じマザーボードを利用したゲームが他にないため、
原因の切り分けに苦労しました。




==== 電池が切れると壊れる

基板も、家庭用ゲーム機のソフトと同様、違法コピーとの戦いが
長く行われてきました。
前述の充電池が切れたら壊れる基板も、その対策のやりすぎ版と言えますが、
そこまでいかなくとも、同様に数年から数十年してリチウム電池が切れたら
セキュリティ情報が消失して壊れる基板は多数存在します。
これらは、特にカプコンやセガの基板に特に多く見られます。
電池が切れる前に交換できればよいのですが、交換自体が難しかったり、
電池の入手性が悪かったりと、話は簡単ではありません。

筆者も、久しぶりに起動しようとしたらまったく画面が出ず、
テスターで調べてみたら電池が切れていたなんていうケースに何度も遭遇しました。
非常にストレスが溜まる話ではありますが、
現在では解析が進んで、
一度電池切れした後でも
プログラムを改造することなく復活させることが可能なものもが大半となっているため、
だいぶ状況は改善しています。
また、カプコンのCPS2基板に搭載されているリチウム電池は、
液漏れを引き起こしたり、場合によっては爆発して腐食性のガスを発生させて
周囲の基板を巻き込んでダメにする可能性もあるため、
電池切れとは別に不安材料の1つとなっていましたが、昨年、
CPicS2@<fn>{CPicS2}というハードウェアを開発して電池を取り外すことに成功したため、
現在では不安は解消しています。


//footnote[CPicS2][https://drive.google.com/file/d/180AWq9GFnb8pE9_ZfbmxtGXof9Q7DOY6/view]

==== カスタムパーツ故障の不安

基板の多くは、カスタムパーツと呼ばれる、
特定の基板のために開発された、一般的に市場には出回っていない部品を
搭載しています。
これが故障すると、修理するには
同じ部品を搭載した別の故障基板から部品を移植して
復活させる、いわゆるニコイチのような手法を取らざるを得ません。
しかしながら、
基板の絶対数が減っている現在では、こういった修理は次第に難しく
なっていくものと考えられ、将来に対して不安が残る状況となっています。


最近になって、一部のカスタムパーツについては解析が進み、
互換品が作られるようになっていたりもします。
今後は、こういった流れが主流となり、サステイナビリティの高い
修理が行われるようになることが期待されます。


==== それ以外にも故障パターンは様々

これまで紹介した以外にも、
基板は物理的・電気的によく壊れたりもします。
これは、基板が元々頑丈な筐体の中で動かす前提のものであることから
基板単独で見ると保護が甘いことや、
基板の設置を行うのは一般人ではなく機材の扱いに長けたプロ
(のはず) であることから、デザイン的に不親切な部分が多く、
故障に繋がるミスを未然に防ぐような工夫が十分になされていないといった
ことなどの、
基板ならではの事情も背景にありそうです。
また、発売してから数ヶ月程度の間に一気に稼がせ、
その後は廃棄 (もしくはメーカーが回収して部品を再利用) といったケースの
多いアーケードゲーム故に、「そこさえ乗り切れば」という考えが
あったのかもしれません。

基板の故障に関する経験談と、それに対する悩みや文句は、まだまだ山のように
あるのですが、
誌面の都合上、これくらいに留めたいと思います。
もっと色々な基板の故障について詳しく知りたいという奇特な方は、
拙著「俺の基板がこんなに動かないわけがない」シリーズ@<fn>{kibanbook}をご覧になってください。

//footnote[kibanbook][俺の基板がこんなに動かないわけがない　http://www.dentsubo.net/circle/oreita.html]


== それでも基板を自宅で動かす理由

これまで述べたように、自宅で基板を動かして遊ぶのは、
家庭用ゲーム機で遊ぶのとは比較にならないくらい
悩みを伴う趣味と言えます。
正直なところ、「面白いビデオゲームで遊ぶ」
や「過去の名作で遊ぶ」ということを目的として考えると、基板は
恐ろしくコストパフォーマンスが悪い手段であり、
純粋に「ゲームが好きな人」にはあまりにおすすめできない世界です。


ですが、それでも基板を所持し、自宅で動かしている人は、筆者を含め大勢居ます。
何でわざわざこんな面倒なものを扱っているのでしょうか。
これは本当に人それぞれであるため、この問に対しては
何か1つの答えを出すことは難しいでしょう。

筆者の場合は、元々は子供の頃の憧憬を追いかけるところから
始まったのですが、
基板をいじっているうちに、次第に基板の奥深さにはまり込み、
現在では「基板に触れること自体が楽しくて仕方がない」という理由で
基板を所有し、故障と戦いながら、動かすことを続けています。
環境を整えて初めて動いたときのワクワクする思い、
集めて比べることの面白さ、
故障の原因を突き止めて修理し、見事に復活させたときの達成感。
メーカー各社が工夫を凝らし、様々な思いを込めて作った
ハードウェアそのものがもたらす体験が、
十数年もの間、筆者を突き動かし続けています。



== おわりに

というわけで、本稿では、
自宅で基板を動かして遊ぶという話と、
それについての筆者のお悩みについてご紹介しました。
ここまで読んだ上で、それでもまだ
興味津々な場合は、是非、沼にお越しいただければと思います。

それでは、長くなりましたが、本コラムはこれでおしまいです。
最後までお読み頂き、ありがとうございました。
またどこかでお会いしましょう。



