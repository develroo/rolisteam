/*************************************************************************
 *	   Copyright (C) 2007 by Romain Campioni   			                 *
 *	   Copyright (C) 2009 by Renaud Guezennec                            *
 *       http://renaudguezennec.homelinux.org/accueil,3.html             *
 *                                                                       *
 *   rolisteam is free software; you can redistribute it and/or modify   *
 *   it under the terms of the GNU General Public License as published   *
 *   by the Free Software Foundation; either version 2 of the License,   *
 *   or (at your option) any later version.                              *
 *                                                                       *
 *   This program is distributed in the hope that it will be useful,     *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of      *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the       *
 *   GNU General Public License for more details.                        *
 *                                                                       *
 *   You should have received a copy of the GNU General Public License   *
 *   along with this program; if not, write to the                       *
 *   Free Software Foundation, Inc.,                                     *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.           *
 *************************************************************************/


/********************************************************************/
/* Variables globales utilisees dans l'application.                 */
/********************************************************************/


#ifndef VARIABLES_GLOBALES_H
#define VARIABLES_GLOBALES_H

#include <QCursor>
#include <QString>
#include <QList>

#include "toolsbar.h"
#include "map/charactertoken.h"
#include "initialisation.h"
#include "widgets/colorselector.h"

class NetworkManager;
class NetworkLink;
class MainWindow;

// Fonction globale, declaree dans MainWindow.cpp
void notifyUser(QString message);

// Fonctions globales, declaree dans NetworkManager.cpp
void emettre(char *donnees, quint32 taille, NetworkLink *sauf = 0);


//extern QString         G_idJoueurLocal;

// Declarees dans NetworkManager.cpp
extern bool G_joueur;


// Declarees dans DessinPerso.cpp, initialiser dans MainWindow.cpp
extern QList<DessinPerso::etatDeSante> G_etatsDeSante;

// Declarees dans ColorSelector.cpp
extern couleurSelectionee G_couleurCourante;
//extern QColor G_couleurMasque;

// Declarees dans ToolBar.cpp
//extern ToolBar::Tool G_outilCourant;
//extern QString G_texteCourant;
//extern QString G_nomPnjCourant;
//extern int G_numeroPnjCourant;

// Declarees dans CircleDisplayer.cpp
//extern int G_diametreTraitCourant;

// Declarees dans MainWindow.cpp
extern bool G_affichageNomPj;
extern bool G_affichageNomPnj;
extern bool G_affichageNumeroPnj;


#endif
