<mxfile host="Electron">
  <diagram name="Page-1" id="9pHdlHi5dHyT8pj1BM_c">
    <mxGraphModel dx="4040" dy="2637" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <UserObject label="" mermaidData="{&#xa;  &quot;data&quot;: &quot;flowchart TD\n    debut([\&quot;Début\&quot;]) --&gt; args[\&quot;Lire les arguments de la ligne de commande\&quot;]\n    args --&gt; argsOk{\&quot;Arguments valides ?\&quot;}\n    argsOk --&gt;|non| usage[\&quot;Afficher l&#39;usage\&quot;]\n    usage --&gt; fin([\&quot;Fin\&quot;])\n    argsOk --&gt;|oui| lecture[\&quot;Lire le fichier d&#39;entrée (LecteurGrille)\&quot;]\n    lecture --&gt; formatOk{\&quot;Format conforme ?\&quot;}\n    formatOk --&gt;|non| erreur[\&quot;Afficher l&#39;erreur de format\&quot;]\n    erreur --&gt; fin\n    formatOk --&gt;|oui| mode{\&quot;Mode demandé ?\&quot;}\n    mode --&gt;|console| sortie0[\&quot;Créer le dossier de sortie et écrire la génération 0\&quot;]\n    mode --&gt;|graphique| fenetre[\&quot;Ouvrir la fenêtre SFML\&quot;]\n    sortie0 --&gt; calcul\n    fenetre --&gt; calcul\n    calcul[\&quot;Calculer la génération suivante (voir activité 2)\&quot;] --&gt; notif[\&quot;Notifier les observateurs\&quot;]\n    notif --&gt; stop{\&quot;Stable, N atteint ou fenêtre fermée ?\&quot;}\n    stop --&gt;|non| attente[\&quot;Mode graphique : attendre le délai et traiter les événements\&quot;]\n    attente --&gt; calcul\n    stop --&gt;|oui| fin\n &quot;,&#xa;  &quot;config&quot;: null&#xa;}" id="LjJRi6eThOkWuu854lNl-1">
          <mxCell connectable="0" parent="1" style="group;transparentBounds=1;editIcon=1;lockedGroup=0;groupPadding=10;" vertex="1">
            <mxGeometry as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Début" mermaidId="n:debut" mermaidBaseStyle="html=1;rounded=1;whiteSpace=wrap;arcSize=50;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Début" id="LjJRi6eThOkWuu854lNl-2">
          <mxCell parent="LjJRi6eThOkWuu854lNl-1" style="html=1;rounded=1;whiteSpace=wrap;arcSize=50;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="39" width="67" x="538" y="30" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Lire les arguments de la ligne de commande" mermaidId="n:args" mermaidBaseStyle="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Lire les arguments de la ligne de commande" id="LjJRi6eThOkWuu854lNl-3">
          <mxCell parent="LjJRi6eThOkWuu854lNl-1" style="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="54" width="377" x="383" y="119" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Arguments valides ?" mermaidId="n:argsOk" mermaidBaseStyle="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Arguments valides ?" id="LjJRi6eThOkWuu854lNl-4">
          <mxCell parent="LjJRi6eThOkWuu854lNl-1" style="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="242" width="242" x="451" y="223" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Afficher l&#39;usage" mermaidId="n:usage" mermaidBaseStyle="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Afficher l&#39;usage" id="LjJRi6eThOkWuu854lNl-5">
          <mxCell parent="LjJRi6eThOkWuu854lNl-1" style="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="54" width="170" x="30" y="1740" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Fin" mermaidId="n:fin" mermaidBaseStyle="html=1;rounded=1;whiteSpace=wrap;arcSize=50;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Fin" id="LjJRi6eThOkWuu854lNl-6">
          <mxCell parent="LjJRi6eThOkWuu854lNl-1" style="html=1;rounded=1;whiteSpace=wrap;arcSize=50;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="39" width="60" x="345" y="2065" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Lire le fichier d&#39;entrée (LecteurGrille)" mermaidId="n:lecture" mermaidBaseStyle="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Lire le fichier d&#39;entrée (LecteurGrille)" id="LjJRi6eThOkWuu854lNl-7">
          <mxCell parent="LjJRi6eThOkWuu854lNl-1" style="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="54" width="332" x="536" y="534" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Format conforme ?" mermaidId="n:formatOk" mermaidBaseStyle="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Format conforme ?" id="LjJRi6eThOkWuu854lNl-8">
          <mxCell parent="LjJRi6eThOkWuu854lNl-1" style="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="232" width="232" x="586" y="638" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Afficher l&#39;erreur de format" mermaidId="n:erreur" mermaidBaseStyle="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Afficher l&#39;erreur de format" id="LjJRi6eThOkWuu854lNl-9">
          <mxCell parent="LjJRi6eThOkWuu854lNl-1" style="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="54" width="250" x="250" y="1740" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Mode demandé ?" mermaidId="n:mode" mermaidBaseStyle="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Mode demandé ?" id="LjJRi6eThOkWuu854lNl-10">
          <mxCell parent="LjJRi6eThOkWuu854lNl-1" style="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="206" width="206" x="797" y="939" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Créer le dossier de sortie et écrire la génération 0" mermaidId="n:sortie0" mermaidBaseStyle="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Créer le dossier de sortie et écrire la génération 0" id="LjJRi6eThOkWuu854lNl-11">
          <mxCell parent="LjJRi6eThOkWuu854lNl-1" style="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="54" width="421" x="486" y="1214" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Ouvrir la fenêtre SFML" mermaidId="n:fenetre" mermaidBaseStyle="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Ouvrir la fenêtre SFML" id="LjJRi6eThOkWuu854lNl-12">
          <mxCell parent="LjJRi6eThOkWuu854lNl-1" style="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="54" width="221" x="975" y="1214" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Calculer la génération suivante (voir activité 2)" mermaidId="n:calcul" mermaidBaseStyle="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Calculer la génération suivante (voir activité 2)" id="LjJRi6eThOkWuu854lNl-13">
          <mxCell parent="LjJRi6eThOkWuu854lNl-1" style="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="54" width="400" x="700" y="1337" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Notifier les observateurs" mermaidId="n:notif" mermaidBaseStyle="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Notifier les observateurs" id="LjJRi6eThOkWuu854lNl-14">
          <mxCell parent="LjJRi6eThOkWuu854lNl-1" style="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="54" width="236" x="654" y="1441" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Stable, N atteint ou fenêtre fermée ?" mermaidId="n:stop" mermaidBaseStyle="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Stable, N atteint ou fenêtre fermée ?" id="LjJRi6eThOkWuu854lNl-15">
          <mxCell parent="LjJRi6eThOkWuu854lNl-1" style="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="443" width="443" x="550" y="1545" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Mode graphique : attendre le délai et traiter les événements" mermaidId="n:attente" mermaidBaseStyle="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Mode graphique : attendre le délai et traiter les événements" id="LjJRi6eThOkWuu854lNl-16">
          <mxCell parent="LjJRi6eThOkWuu854lNl-1" style="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="54" width="497" x="763" y="2057" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:debut-&gt;args#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.51;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="" id="LjJRi6eThOkWuu854lNl-17">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-2" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.51;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="LjJRi6eThOkWuu854lNl-3">
            <mxGeometry relative="1" as="geometry">
              <Array as="points" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:args-&gt;argsOk#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="" id="LjJRi6eThOkWuu854lNl-18">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-3" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="LjJRi6eThOkWuu854lNl-4">
            <mxGeometry relative="1" as="geometry">
              <Array as="points" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="non" mermaidId="e:argsOk-&gt;usage#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.67;entryX=0.5;entryY=0;" mermaidBaseValue="non" id="LjJRi6eThOkWuu854lNl-19">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-4" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.67;entryX=0.5;entryY=0;rounded=0;" target="LjJRi6eThOkWuu854lNl-5">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="115" y="499" />
                <mxPoint x="115" y="561" />
                <mxPoint x="115" y="613" />
                <mxPoint x="115" y="754" />
                <mxPoint x="115" y="904" />
                <mxPoint x="115" y="1042" />
                <mxPoint x="115" y="1180" />
                <mxPoint x="115" y="1241" />
                <mxPoint x="115" y="1303" />
                <mxPoint x="115" y="1364" />
                <mxPoint x="115" y="1416" />
                <mxPoint x="115" y="1468" />
                <mxPoint x="115" y="1520" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:usage-&gt;fin#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0;entryY=0.31;" mermaidBaseValue="" id="LjJRi6eThOkWuu854lNl-20">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-5" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0;entryY=0.31;rounded=0;" target="LjJRi6eThOkWuu854lNl-6">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="115" y="2023" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="oui" mermaidId="e:argsOk-&gt;lecture#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.92;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="oui" id="LjJRi6eThOkWuu854lNl-21">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-4" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.92;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="LjJRi6eThOkWuu854lNl-7">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="702" y="499" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:lecture-&gt;formatOk#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="" id="LjJRi6eThOkWuu854lNl-22">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-7" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="LjJRi6eThOkWuu854lNl-8">
            <mxGeometry relative="1" as="geometry">
              <Array as="points" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="non" mermaidId="e:formatOk-&gt;erreur#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.73;entryX=0.5;entryY=0;" mermaidBaseValue="non" id="LjJRi6eThOkWuu854lNl-23">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-8" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.73;entryX=0.5;entryY=0;rounded=0;" target="LjJRi6eThOkWuu854lNl-9">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="375" y="904" />
                <mxPoint x="375" y="1042" />
                <mxPoint x="375" y="1180" />
                <mxPoint x="375" y="1241" />
                <mxPoint x="375" y="1303" />
                <mxPoint x="375" y="1364" />
                <mxPoint x="375" y="1416" />
                <mxPoint x="375" y="1468" />
                <mxPoint x="375" y="1520" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:erreur-&gt;fin#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="" id="LjJRi6eThOkWuu854lNl-24">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-9" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="LjJRi6eThOkWuu854lNl-6">
            <mxGeometry relative="1" as="geometry">
              <Array as="points" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="oui" mermaidId="e:formatOk-&gt;mode#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.88;entryX=0.5;entryY=0;" mermaidBaseValue="oui" id="LjJRi6eThOkWuu854lNl-25">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-8" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.88;entryX=0.5;entryY=0;rounded=0;" target="LjJRi6eThOkWuu854lNl-10">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="900" y="904" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="console" mermaidId="e:mode-&gt;sortie0#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.84;entryX=0.5;entryY=0;" mermaidBaseValue="console" id="LjJRi6eThOkWuu854lNl-26">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-10" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.84;entryX=0.5;entryY=0;rounded=0;" target="LjJRi6eThOkWuu854lNl-11">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="696" y="1180" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="graphique" mermaidId="e:mode-&gt;fenetre#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.87;entryX=0.5;entryY=0;" mermaidBaseValue="graphique" id="LjJRi6eThOkWuu854lNl-27">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-10" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.87;entryX=0.5;entryY=0;rounded=0;" target="LjJRi6eThOkWuu854lNl-12">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="1085" y="1180" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:sortie0-&gt;calcul#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.28;entryY=0;" mermaidBaseValue="" id="LjJRi6eThOkWuu854lNl-28">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-11" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.28;entryY=0;rounded=0;" target="LjJRi6eThOkWuu854lNl-13">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="696" y="1303" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:fenetre-&gt;calcul#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.7;entryY=0;" mermaidBaseValue="" id="LjJRi6eThOkWuu854lNl-29">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-12" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.7;entryY=0;rounded=0;" target="LjJRi6eThOkWuu854lNl-13">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="1085" y="1303" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:calcul-&gt;notif#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.33;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="" id="LjJRi6eThOkWuu854lNl-30">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-13" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.33;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="LjJRi6eThOkWuu854lNl-14">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="772" y="1416" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:notif-&gt;stop#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="" id="LjJRi6eThOkWuu854lNl-31">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-14" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="LjJRi6eThOkWuu854lNl-15">
            <mxGeometry relative="1" as="geometry">
              <Array as="points" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="non" mermaidId="e:stop-&gt;attente#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.72;exitY=1;entryX=0.39;entryY=0;" mermaidBaseValue="non" id="LjJRi6eThOkWuu854lNl-32">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-15" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.72;exitY=1;entryX=0.39;entryY=0;rounded=0;" target="LjJRi6eThOkWuu854lNl-16">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="883" y="2023" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:attente-&gt;calcul#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.52;exitY=0;entryX=0.67;entryY=1;" mermaidBaseValue="" id="LjJRi6eThOkWuu854lNl-33">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-16" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.52;exitY=0;entryX=0.67;entryY=1;rounded=0;" target="LjJRi6eThOkWuu854lNl-13">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="1028" y="2023" />
                <mxPoint x="1028" y="1767" />
                <mxPoint x="1028" y="1520" />
                <mxPoint x="1028" y="1468" />
                <mxPoint x="1028" y="1416" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="oui" mermaidId="e:stop-&gt;fin#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.14;exitY=1;entryX=1;entryY=0.28;" mermaidBaseValue="oui" id="LjJRi6eThOkWuu854lNl-34">
          <mxCell edge="1" parent="LjJRi6eThOkWuu854lNl-1" source="LjJRi6eThOkWuu854lNl-15" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.14;exitY=1;entryX=1;entryY=0.28;rounded=0;" target="LjJRi6eThOkWuu854lNl-6">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="589" y="2023" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
