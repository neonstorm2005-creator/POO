<mxfile host="Electron">
  <diagram name="Page-1" id="56ZlrqA_LrAliB6WO2f7">
    <mxGraphModel dx="2828" dy="1846" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <UserObject label="" mermaidData="{&#xa;  &quot;data&quot;: &quot;flowchart TD\n    d([\&quot;Début : cellule à la position p\&quot;]) --&gt; obs{\&quot;Cellule obstacle ?\&quot;}\n    obs --&gt;|oui| garde[\&quot;Conserver l&#39;état (EtatObstacle::suivant)\&quot;]\n    obs --&gt;|non| compte[\&quot;Compter les voisines vivantes via la topologie\&quot;]\n    compte --&gt; vivante{\&quot;Cellule vivante ?\&quot;}\n    vivante --&gt;|oui| surv{\&quot;RegleDeVie::survivre(n) ?\&quot;}\n    vivante --&gt;|non| naiss{\&quot;RegleDeVie::naitre(n) ?\&quot;}\n    surv --&gt;|oui| v[\&quot;Nouvel état : EtatVivant partagé\&quot;]\n    surv --&gt;|non| m[\&quot;Nouvel état : EtatMort partagé\&quot;]\n    naiss --&gt;|oui| v\n    naiss --&gt;|non| m\n    garde --&gt; f([\&quot;Fin\&quot;])\n    v --&gt; f\n    m --&gt; f\n &quot;,&#xa;  &quot;config&quot;: null&#xa;}" id="dAO3-KapuPdIHKaHLvQ4-1">
          <mxCell connectable="0" parent="1" style="group;transparentBounds=1;editIcon=1;lockedGroup=0;groupPadding=10;" vertex="1">
            <mxGeometry as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Début : cellule à la position p" mermaidId="n:d" mermaidBaseStyle="html=1;rounded=1;whiteSpace=wrap;arcSize=50;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Début : cellule à la position p" id="dAO3-KapuPdIHKaHLvQ4-2">
          <mxCell parent="dAO3-KapuPdIHKaHLvQ4-1" style="html=1;rounded=1;whiteSpace=wrap;arcSize=50;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="39" width="237" x="461" y="30" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Cellule obstacle ?" mermaidId="n:obs" mermaidBaseStyle="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Cellule obstacle ?" id="dAO3-KapuPdIHKaHLvQ4-3">
          <mxCell parent="dAO3-KapuPdIHKaHLvQ4-1" style="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="218" width="218" x="471" y="119" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Conserver l&#39;état (EtatObstacle::suivant)" mermaidId="n:garde" mermaidBaseStyle="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Conserver l&#39;état (EtatObstacle::suivant)" id="dAO3-KapuPdIHKaHLvQ4-4">
          <mxCell parent="dAO3-KapuPdIHKaHLvQ4-1" style="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="54" width="344" x="30" y="1155" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Compter les voisines vivantes via la topologie" mermaidId="n:compte" mermaidBaseStyle="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Compter les voisines vivantes via la topologie" id="dAO3-KapuPdIHKaHLvQ4-5">
          <mxCell parent="dAO3-KapuPdIHKaHLvQ4-1" style="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="54" width="386" x="571" y="406" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Cellule vivante ?" mermaidId="n:vivante" mermaidBaseStyle="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Cellule vivante ?" id="dAO3-KapuPdIHKaHLvQ4-6">
          <mxCell parent="dAO3-KapuPdIHKaHLvQ4-1" style="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="205" width="205" x="662" y="510" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="RegleDeVie::survivre(n) ?" mermaidId="n:surv" mermaidBaseStyle="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="RegleDeVie::survivre(n) ?" id="dAO3-KapuPdIHKaHLvQ4-7">
          <mxCell parent="dAO3-KapuPdIHKaHLvQ4-1" style="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="302" width="302" x="442" y="783" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="RegleDeVie::naitre(n) ?" mermaidId="n:naiss" mermaidBaseStyle="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="RegleDeVie::naitre(n) ?" id="dAO3-KapuPdIHKaHLvQ4-8">
          <mxCell parent="dAO3-KapuPdIHKaHLvQ4-1" style="rhombus;html=1;strokeWidth=1;whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="282" width="282" x="794" y="794" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Nouvel état : EtatVivant partagé" mermaidId="n:v" mermaidBaseStyle="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Nouvel état : EtatVivant partagé" id="dAO3-KapuPdIHKaHLvQ4-9">
          <mxCell parent="dAO3-KapuPdIHKaHLvQ4-1" style="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="54" width="294" x="424" y="1155" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Nouvel état : EtatMort partagé" mermaidId="n:m" mermaidBaseStyle="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Nouvel état : EtatMort partagé" id="dAO3-KapuPdIHKaHLvQ4-10">
          <mxCell parent="dAO3-KapuPdIHKaHLvQ4-1" style="html=1;whiteSpace=wrap;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="54" width="281" x="817" y="1155" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Fin" mermaidId="n:f" mermaidBaseStyle="html=1;rounded=1;whiteSpace=wrap;arcSize=50;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Fin" id="dAO3-KapuPdIHKaHLvQ4-11">
          <mxCell parent="dAO3-KapuPdIHKaHLvQ4-1" style="html=1;rounded=1;whiteSpace=wrap;arcSize=50;strokeWidth=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="39" width="60" x="541" y="1259" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:d-&gt;obs#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="" id="dAO3-KapuPdIHKaHLvQ4-12">
          <mxCell edge="1" parent="dAO3-KapuPdIHKaHLvQ4-1" source="dAO3-KapuPdIHKaHLvQ4-2" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="dAO3-KapuPdIHKaHLvQ4-3">
            <mxGeometry relative="1" as="geometry">
              <Array as="points" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="oui" mermaidId="e:obs-&gt;garde#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.69;entryX=0.5;entryY=0;" mermaidBaseValue="oui" id="dAO3-KapuPdIHKaHLvQ4-13">
          <mxCell edge="1" parent="dAO3-KapuPdIHKaHLvQ4-1" source="dAO3-KapuPdIHKaHLvQ4-3" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.69;entryX=0.5;entryY=0;rounded=0;" target="dAO3-KapuPdIHKaHLvQ4-4">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="202" y="371" />
                <mxPoint x="202" y="433" />
                <mxPoint x="202" y="485" />
                <mxPoint x="202" y="612" />
                <mxPoint x="202" y="749" />
                <mxPoint x="202" y="935" />
                <mxPoint x="202" y="1120" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="non" mermaidId="e:obs-&gt;compte#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.89;entryX=0.5;entryY=0;" mermaidBaseValue="non" id="dAO3-KapuPdIHKaHLvQ4-14">
          <mxCell edge="1" parent="dAO3-KapuPdIHKaHLvQ4-1" source="dAO3-KapuPdIHKaHLvQ4-3" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.89;entryX=0.5;entryY=0;rounded=0;" target="dAO3-KapuPdIHKaHLvQ4-5">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="764" y="371" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:compte-&gt;vivante#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="" id="dAO3-KapuPdIHKaHLvQ4-15">
          <mxCell edge="1" parent="dAO3-KapuPdIHKaHLvQ4-1" source="dAO3-KapuPdIHKaHLvQ4-5" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="dAO3-KapuPdIHKaHLvQ4-6">
            <mxGeometry relative="1" as="geometry">
              <Array as="points" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="oui" mermaidId="e:vivante-&gt;surv#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.9;entryX=0.5;entryY=0;" mermaidBaseValue="oui" id="dAO3-KapuPdIHKaHLvQ4-16">
          <mxCell edge="1" parent="dAO3-KapuPdIHKaHLvQ4-1" source="dAO3-KapuPdIHKaHLvQ4-6" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.9;entryX=0.5;entryY=0;rounded=0;" target="dAO3-KapuPdIHKaHLvQ4-7">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="593" y="749" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="non" mermaidId="e:vivante-&gt;naiss#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.9;entryX=0.5;entryY=0;" mermaidBaseValue="non" id="dAO3-KapuPdIHKaHLvQ4-17">
          <mxCell edge="1" parent="dAO3-KapuPdIHKaHLvQ4-1" source="dAO3-KapuPdIHKaHLvQ4-6" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.9;entryX=0.5;entryY=0;rounded=0;" target="dAO3-KapuPdIHKaHLvQ4-8">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="935" y="749" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="oui" mermaidId="e:surv-&gt;v#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.99;entryX=0.25;entryY=0;" mermaidBaseValue="oui" id="dAO3-KapuPdIHKaHLvQ4-18">
          <mxCell edge="1" parent="dAO3-KapuPdIHKaHLvQ4-1" source="dAO3-KapuPdIHKaHLvQ4-7" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.99;entryX=0.25;entryY=0;rounded=0;" target="dAO3-KapuPdIHKaHLvQ4-9">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="402" y="1120" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="non" mermaidId="e:surv-&gt;m#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.98;entryX=0.23;entryY=0;" mermaidBaseValue="non" id="dAO3-KapuPdIHKaHLvQ4-19">
          <mxCell edge="1" parent="dAO3-KapuPdIHKaHLvQ4-1" source="dAO3-KapuPdIHKaHLvQ4-7" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.98;entryX=0.23;entryY=0;rounded=0;" target="dAO3-KapuPdIHKaHLvQ4-10">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="786" y="1120" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="oui" mermaidId="e:naiss-&gt;v#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.98;entryX=0.76;entryY=0;" mermaidBaseValue="oui" id="dAO3-KapuPdIHKaHLvQ4-20">
          <mxCell edge="1" parent="dAO3-KapuPdIHKaHLvQ4-1" source="dAO3-KapuPdIHKaHLvQ4-8" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.98;entryX=0.76;entryY=0;rounded=0;" target="dAO3-KapuPdIHKaHLvQ4-9">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="742" y="1120" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="non" mermaidId="e:naiss-&gt;m#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.62;exitY=1;entryX=0.53;entryY=0;" mermaidBaseValue="non" id="dAO3-KapuPdIHKaHLvQ4-21">
          <mxCell edge="1" parent="dAO3-KapuPdIHKaHLvQ4-1" source="dAO3-KapuPdIHKaHLvQ4-8" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#E8E8E88D,#2a2a2a8D);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.62;exitY=1;entryX=0.53;entryY=0;rounded=0;" target="dAO3-KapuPdIHKaHLvQ4-10">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="980" y="1120" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:garde-&gt;f#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0;entryY=0.41;" mermaidBaseValue="" id="dAO3-KapuPdIHKaHLvQ4-22">
          <mxCell edge="1" parent="dAO3-KapuPdIHKaHLvQ4-1" source="dAO3-KapuPdIHKaHLvQ4-4" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0;entryY=0.41;rounded=0;" target="dAO3-KapuPdIHKaHLvQ4-11">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="202" y="1234" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:v-&gt;f#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="" id="dAO3-KapuPdIHKaHLvQ4-23">
          <mxCell edge="1" parent="dAO3-KapuPdIHKaHLvQ4-1" source="dAO3-KapuPdIHKaHLvQ4-9" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="dAO3-KapuPdIHKaHLvQ4-11">
            <mxGeometry relative="1" as="geometry">
              <Array as="points" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:m-&gt;f#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=1;entryY=0.41;" mermaidBaseValue="" id="dAO3-KapuPdIHKaHLvQ4-24">
          <mxCell edge="1" parent="dAO3-KapuPdIHKaHLvQ4-1" source="dAO3-KapuPdIHKaHLvQ4-10" style="curved=1;startArrow=none;endArrow=block;endSize=7;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=1;entryY=0.41;rounded=0;" target="dAO3-KapuPdIHKaHLvQ4-11">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="957" y="1234" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
