#!/bin/sh
# Minha lista sh

##########################
# Fazer o download do simulador da Cisco Packet Trace
wget http://www.labcisco.com.br/app/Cisco-PT-620.tar.gz

# Descompactar o programa baixado
tar xvzf Cisco-PT-620.tar.gz

# Acessar o diretorio do programa
cd PacketTracer62Student

# Executar o instalador
sudo ./install

# Apos a instalacao, para rodar o programa
packettracer

# Depois que isso for feito o melhor a se fazer é criar um atalho na area de trabalho ou em outro lugar. :P
