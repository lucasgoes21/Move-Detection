# Move-Detection
ATP - Preject 3

Algumas câmeras de vigilância e hardwares de videomonitoramento possuem um
mecanismo que detecta variações nas imagens no decorrer do tempo. Esse mecanismo é
utilizado para detecção de movimento, utilizado, por exemplo, para notificar o dono de uma
determinada loja de uma possível invasão.
Assim, dado um conjunto de frames, crie um programa que detecta a movimentação na
imagem. Para isso, será fornecido um conjunto de imagens extraídas a cada 1 segundo de
vídeos de câmeras de vigilância. Cada frame possui 320 pixels de largura, 240 pixels de
altura e 3 canais (red, green and blue). Essas imagens estão no formato RGB, ou seja, cada
imagem é um arquivo BINÁRIO contendo 1 byte para cada pixel, ou seja, 256 valores,
sendo 0 preto e 255 branco. Dessa maneira, cada arquivo possui exatamente 320 * 240 * 3
= 230400 pixels. Como 1 pixel = 1 byte, cada arquivo possui exatamente 230400 bytes.
Faça:
Você terá acesso a 2 vídeos cujos frames estão nas pastas video1 e video2. Faça um
programa que leia o array de pixels de cada frame na memória. Considere o primeiro frame
de cada vídeo como referência. Assim, percorra os frames restantes e verifique se eles são
muito diferentes do frame de referência. Se forem muito diferentes, quer dizer que alguma
pessoa, veículo ou animal passou na frente do campo de visão da câmera, e então salve
em um arquivo o momento exato em que isso acontece.
- Para o video 2, utilize toda a tela como área de comparação.
- Para o video 1, utilize somente a área inferior direita com o frame de referência,
como mostra o quadrado vermelho na imagem abaixo.
Como comparar 2 frames.

![](https://cdn.discordapp.com/attachments/824607253297889322/1350617879992860783/image.png?ex=67d7646b&is=67d612eb&hm=b5c875af0c4296d536d8a43c8c414b193d5f3d52661bf3a72fa5a29b09249818&)

Como descrito anteriormente, você terá que comparar cada frames dos vídeos com o frame
de referência de cada vídeo (que será o 1º frame). Para isso, basta subtrair o valor de cada
pixel do 1º frame com o respectivo pixel do 2º frame, calcular o módulo, fazer isso com
todos os pixels subsequentes e somar o resultado. Se os 2 frames forem exatamente iguais,
o resultado será 0. Se os 2 frames forem diferentes, o resultado será um número grande.
Quanto maior o valor resultante, maior a diferença entre os 2. Verifique um valor limiar
suficientemente alto para que o seu programa detecte quando uma pessoa passar na frente
da câmera, mas que não detecte reflexos ou sombras. Quando o seu programa detectar
algo, escreva em qual frame houve a detecção em um arquivo.

