<mxfile host="Electron">
  <diagram name="Page-1" id="wE_x-4wjaFIDIbq46DhV">
    <mxGraphModel dx="2828" dy="1846" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <UserObject label="" mermaidData="{&#xa;  &quot;data&quot;: &quot;sequenceDiagram\n    actor U as Utilisateur\n    participant A as Application\n    participant F as InterfaceGraphique\n    participant S as Simulation\n    participant E as Evenements SFML\n \n    U-&gt;&gt;A: main fichier.txt --gui 100\n    A-&gt;&gt;F: creer(simulation, delai 100 ms)\n    A-&gt;&gt;F: lancer()\n \n    loop tant que la fenêtre est ouverte\n        F-&gt;&gt;E: pollEvent()\n        alt touche Espace\n            F-&gt;&gt;F: basculerPause()\n        else touche plus ou moins\n            F-&gt;&gt;F: modifierDelai()\n        else fermeture de la fenêtre\n            F-&gt;&gt;F: fermer()\n        end\n \n        alt non en pause et délai écoulé\n            F-&gt;&gt;S: iterer()\n            S-&gt;&gt;S: calculerSuivante et echanger\n            S-&gt;&gt;F: surGeneration(grille, generation)\n        end\n \n        F-&gt;&gt;F: dessiner(grille)\n    end\n &quot;,&#xa;  &quot;config&quot;: null&#xa;}" id="3Qk0bvLuKZpZX-Pxpya4-1">
          <mxCell connectable="0" parent="1" style="group;transparentBounds=1;editIcon=1;lockedGroup=0;groupPadding=10;" vertex="1">
            <mxGeometry as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Utilisateur" mermaidId="n:U" mermaidBaseStyle="html=1;shape=umlLifeline;perimeter=lifelinePerimeter;whiteSpace=wrap;container=1;dropTarget=0;collapsible=0;recursiveResize=0;outlineConnect=0;portConstraint=eastwest;newEdgeStyle={&quot;edgeStyle&quot;:&quot;elbowEdgeStyle&quot;,&quot;elbow&quot;:&quot;vertical&quot;,&quot;curved&quot;:0,&quot;rounded&quot;:0};lifelineDashed=0;strokeWidth=2;rounded=1;absoluteArcSize=1;arcSize=6;lifelineColor=light-dark(#9370DB,#cccccc);participant=seqActorStick;verticalAlign=bottom;align=center;spacingBottom=4;size=90;lifelineMirror=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Utilisateur" id="3Qk0bvLuKZpZX-Pxpya4-2">
          <mxCell parent="3Qk0bvLuKZpZX-Pxpya4-1" style="html=1;shape=umlLifeline;perimeter=lifelinePerimeter;whiteSpace=wrap;container=1;dropTarget=0;collapsible=0;recursiveResize=0;outlineConnect=0;portConstraint=eastwest;newEdgeStyle={&quot;edgeStyle&quot;:&quot;elbowEdgeStyle&quot;,&quot;elbow&quot;:&quot;vertical&quot;,&quot;curved&quot;:0,&quot;rounded&quot;:0};lifelineDashed=0;strokeWidth=2;rounded=1;absoluteArcSize=1;arcSize=6;lifelineColor=light-dark(#9370DB,#cccccc);participant=seqActorStick;verticalAlign=bottom;align=center;spacingBottom=4;size=90;lifelineMirror=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="1251" width="150" x="30" y="30" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Application" mermaidId="n:A" mermaidBaseStyle="html=1;shape=umlLifeline;perimeter=lifelinePerimeter;whiteSpace=wrap;container=1;dropTarget=0;collapsible=0;recursiveResize=0;outlineConnect=0;portConstraint=eastwest;newEdgeStyle={&quot;edgeStyle&quot;:&quot;elbowEdgeStyle&quot;,&quot;elbow&quot;:&quot;vertical&quot;,&quot;curved&quot;:0,&quot;rounded&quot;:0};lifelineDashed=0;strokeWidth=2;rounded=1;absoluteArcSize=1;arcSize=6;lifelineColor=light-dark(#9370DB,#cccccc);size=65;lifelineMirror=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Application" id="3Qk0bvLuKZpZX-Pxpya4-3">
          <mxCell parent="3Qk0bvLuKZpZX-Pxpya4-1" style="html=1;shape=umlLifeline;perimeter=lifelinePerimeter;whiteSpace=wrap;container=1;dropTarget=0;collapsible=0;recursiveResize=0;outlineConnect=0;portConstraint=eastwest;newEdgeStyle={&quot;edgeStyle&quot;:&quot;elbowEdgeStyle&quot;,&quot;elbow&quot;:&quot;vertical&quot;,&quot;curved&quot;:0,&quot;rounded&quot;:0};lifelineDashed=0;strokeWidth=2;rounded=1;absoluteArcSize=1;arcSize=6;lifelineColor=light-dark(#9370DB,#cccccc);size=65;lifelineMirror=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="1226" width="150" x="259" y="30" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="InterfaceGraphique" mermaidId="n:F" mermaidBaseStyle="html=1;shape=umlLifeline;perimeter=lifelinePerimeter;whiteSpace=wrap;container=1;dropTarget=0;collapsible=0;recursiveResize=0;outlineConnect=0;portConstraint=eastwest;newEdgeStyle={&quot;edgeStyle&quot;:&quot;elbowEdgeStyle&quot;,&quot;elbow&quot;:&quot;vertical&quot;,&quot;curved&quot;:0,&quot;rounded&quot;:0};lifelineDashed=0;strokeWidth=2;rounded=1;absoluteArcSize=1;arcSize=6;lifelineColor=light-dark(#9370DB,#cccccc);size=65;lifelineMirror=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="InterfaceGraphique" id="3Qk0bvLuKZpZX-Pxpya4-4">
          <mxCell parent="3Qk0bvLuKZpZX-Pxpya4-1" style="html=1;shape=umlLifeline;perimeter=lifelinePerimeter;whiteSpace=wrap;container=1;dropTarget=0;collapsible=0;recursiveResize=0;outlineConnect=0;portConstraint=eastwest;newEdgeStyle={&quot;edgeStyle&quot;:&quot;elbowEdgeStyle&quot;,&quot;elbow&quot;:&quot;vertical&quot;,&quot;curved&quot;:0,&quot;rounded&quot;:0};lifelineDashed=0;strokeWidth=2;rounded=1;absoluteArcSize=1;arcSize=6;lifelineColor=light-dark(#9370DB,#cccccc);size=65;lifelineMirror=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="1226" width="150" x="534" y="30" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Simulation" mermaidId="n:S" mermaidBaseStyle="html=1;shape=umlLifeline;perimeter=lifelinePerimeter;whiteSpace=wrap;container=1;dropTarget=0;collapsible=0;recursiveResize=0;outlineConnect=0;portConstraint=eastwest;newEdgeStyle={&quot;edgeStyle&quot;:&quot;elbowEdgeStyle&quot;,&quot;elbow&quot;:&quot;vertical&quot;,&quot;curved&quot;:0,&quot;rounded&quot;:0};lifelineDashed=0;strokeWidth=2;rounded=1;absoluteArcSize=1;arcSize=6;lifelineColor=light-dark(#9370DB,#cccccc);size=65;lifelineMirror=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Simulation" id="3Qk0bvLuKZpZX-Pxpya4-5">
          <mxCell parent="3Qk0bvLuKZpZX-Pxpya4-1" style="html=1;shape=umlLifeline;perimeter=lifelinePerimeter;whiteSpace=wrap;container=1;dropTarget=0;collapsible=0;recursiveResize=0;outlineConnect=0;portConstraint=eastwest;newEdgeStyle={&quot;edgeStyle&quot;:&quot;elbowEdgeStyle&quot;,&quot;elbow&quot;:&quot;vertical&quot;,&quot;curved&quot;:0,&quot;rounded&quot;:0};lifelineDashed=0;strokeWidth=2;rounded=1;absoluteArcSize=1;arcSize=6;lifelineColor=light-dark(#9370DB,#cccccc);size=65;lifelineMirror=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="1226" width="150" x="822" y="30" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="Evenements SFML" mermaidId="n:E" mermaidBaseStyle="html=1;shape=umlLifeline;perimeter=lifelinePerimeter;whiteSpace=wrap;container=1;dropTarget=0;collapsible=0;recursiveResize=0;outlineConnect=0;portConstraint=eastwest;newEdgeStyle={&quot;edgeStyle&quot;:&quot;elbowEdgeStyle&quot;,&quot;elbow&quot;:&quot;vertical&quot;,&quot;curved&quot;:0,&quot;rounded&quot;:0};lifelineDashed=0;strokeWidth=2;rounded=1;absoluteArcSize=1;arcSize=6;lifelineColor=light-dark(#9370DB,#cccccc);size=65;lifelineMirror=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" mermaidBaseValue="Evenements SFML" id="3Qk0bvLuKZpZX-Pxpya4-6">
          <mxCell parent="3Qk0bvLuKZpZX-Pxpya4-1" style="html=1;shape=umlLifeline;perimeter=lifelinePerimeter;whiteSpace=wrap;container=1;dropTarget=0;collapsible=0;recursiveResize=0;outlineConnect=0;portConstraint=eastwest;newEdgeStyle={&quot;edgeStyle&quot;:&quot;elbowEdgeStyle&quot;,&quot;elbow&quot;:&quot;vertical&quot;,&quot;curved&quot;:0,&quot;rounded&quot;:0};lifelineDashed=0;strokeWidth=2;rounded=1;absoluteArcSize=1;arcSize=6;lifelineColor=light-dark(#9370DB,#cccccc);size=65;lifelineMirror=1;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;" vertex="1">
            <mxGeometry height="1226" width="150" x="1022" y="30" as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="loop" mermaidId="n:f0" mermaidBaseStyle="html=1;shape=umlFrame;dashed=1;fixDash=1;dashPattern=2 2;strokeWidth=2;pointerEvents=0;dropTarget=0;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontSize=16;align=center;verticalAlign=middle;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);height=20;width=50;" mermaidBaseValue="loop" id="3Qk0bvLuKZpZX-Pxpya4-7">
          <mxCell parent="3Qk0bvLuKZpZX-Pxpya4-1" style="html=1;shape=umlFrame;dashed=1;fixDash=1;dashPattern=2 2;strokeWidth=2;pointerEvents=0;dropTarget=0;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontSize=16;align=center;verticalAlign=middle;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);height=20;width=50;" vertex="1">
            <mxGeometry height="934" width="688" x="509" y="237" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="3Qk0bvLuKZpZX-Pxpya4-8" parent="3Qk0bvLuKZpZX-Pxpya4-7" style="text;strokeColor=none;fillColor=none;align=center;verticalAlign=middle;whiteSpace=wrap;fontSize=16;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="[tant que la fenêtre est ouverte]" vertex="1">
          <mxGeometry height="16" width="634" x="54" y="2" as="geometry" />
        </mxCell>
        <UserObject label="alt" mermaidId="n:f1" mermaidBaseStyle="html=1;shape=umlFrame;dashed=1;fixDash=1;dashPattern=2 2;strokeWidth=2;pointerEvents=0;dropTarget=0;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontSize=16;align=center;verticalAlign=middle;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);height=20;width=50;" mermaidBaseValue="alt" id="3Qk0bvLuKZpZX-Pxpya4-9">
          <mxCell parent="3Qk0bvLuKZpZX-Pxpya4-1" style="html=1;shape=umlFrame;dashed=1;fixDash=1;dashPattern=2 2;strokeWidth=2;pointerEvents=0;dropTarget=0;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontSize=16;align=center;verticalAlign=middle;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);height=20;width=50;" vertex="1">
            <mxGeometry height="415" width="180" x="519" y="362" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="3Qk0bvLuKZpZX-Pxpya4-10" parent="3Qk0bvLuKZpZX-Pxpya4-9" style="text;strokeColor=none;fillColor=none;align=center;verticalAlign=middle;whiteSpace=wrap;fontSize=16;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="[touche Espace]" vertex="1">
          <mxGeometry height="16" width="126" x="54" y="2" as="geometry" />
        </mxCell>
        <mxCell id="3Qk0bvLuKZpZX-Pxpya4-11" parent="3Qk0bvLuKZpZX-Pxpya4-9" style="shape=line;dashed=1;fixDash=1;dashPattern=2 2;strokeColor=light-dark(#9370DB,#cccccc);" vertex="1">
          <mxGeometry height="1" width="180" y="181" as="geometry" />
        </mxCell>
        <mxCell id="3Qk0bvLuKZpZX-Pxpya4-12" parent="3Qk0bvLuKZpZX-Pxpya4-9" style="text;strokeColor=none;fillColor=none;align=center;verticalAlign=middle;whiteSpace=wrap;fontSize=16;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="[touche plus ou moins]" vertex="1">
          <mxGeometry height="16" width="180" y="183" as="geometry" />
        </mxCell>
        <mxCell id="3Qk0bvLuKZpZX-Pxpya4-13" parent="3Qk0bvLuKZpZX-Pxpya4-9" style="shape=line;dashed=1;fixDash=1;dashPattern=2 2;strokeColor=light-dark(#9370DB,#cccccc);" vertex="1">
          <mxGeometry height="1" width="180" y="331" as="geometry" />
        </mxCell>
        <mxCell id="3Qk0bvLuKZpZX-Pxpya4-14" parent="3Qk0bvLuKZpZX-Pxpya4-9" style="text;strokeColor=none;fillColor=none;align=center;verticalAlign=middle;whiteSpace=wrap;fontSize=16;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="[fermeture de la fenêtre]" vertex="1">
          <mxGeometry height="16" width="180" y="333" as="geometry" />
        </mxCell>
        <UserObject label="alt" mermaidId="n:f2" mermaidBaseStyle="html=1;shape=umlFrame;dashed=1;fixDash=1;dashPattern=2 2;strokeWidth=2;pointerEvents=0;dropTarget=0;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontSize=16;align=center;verticalAlign=middle;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);height=20;width=50;" mermaidBaseValue="alt" id="3Qk0bvLuKZpZX-Pxpya4-15">
          <mxCell parent="3Qk0bvLuKZpZX-Pxpya4-1" style="html=1;shape=umlFrame;dashed=1;fixDash=1;dashPattern=2 2;strokeWidth=2;pointerEvents=0;dropTarget=0;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontSize=16;align=center;verticalAlign=middle;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);height=20;width=50;" vertex="1">
            <mxGeometry height="270" width="468" x="519" y="787" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="3Qk0bvLuKZpZX-Pxpya4-16" parent="3Qk0bvLuKZpZX-Pxpya4-15" style="text;strokeColor=none;fillColor=none;align=center;verticalAlign=middle;whiteSpace=wrap;fontSize=16;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="[non en pause et délai écoulé]" vertex="1">
          <mxGeometry height="16" width="414" x="54" y="2" as="geometry" />
        </mxCell>
        <UserObject label="main fichier.txt --gui 100" mermaidId="e:U-&gt;A#0" mermaidBaseStyle="endArrow=block;endSize=9;verticalAlign=bottom;edgeStyle=elbowEdgeStyle;elbow=vertical;curved=0;rounded=0;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="main fichier.txt --gui 100" id="3Qk0bvLuKZpZX-Pxpya4-17">
          <mxCell edge="1" parent="3Qk0bvLuKZpZX-Pxpya4-1" source="3Qk0bvLuKZpZX-Pxpya4-2" style="endArrow=block;endSize=9;verticalAlign=bottom;edgeStyle=elbowEdgeStyle;elbow=vertical;curved=0;rounded=0;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" target="3Qk0bvLuKZpZX-Pxpya4-3">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="220" y="139" />
              </Array>
              <mxPoint x="105" y="139" as="sourcePoint" />
              <mxPoint x="334" y="139" as="targetPoint" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="creer(simulation, delai 100 ms)" mermaidId="e:A-&gt;F#0" mermaidBaseStyle="endArrow=block;endSize=9;verticalAlign=bottom;edgeStyle=elbowEdgeStyle;elbow=vertical;curved=0;rounded=0;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="creer(simulation, delai 100 ms)" id="3Qk0bvLuKZpZX-Pxpya4-18">
          <mxCell edge="1" parent="3Qk0bvLuKZpZX-Pxpya4-1" source="3Qk0bvLuKZpZX-Pxpya4-3" style="endArrow=block;endSize=9;verticalAlign=bottom;edgeStyle=elbowEdgeStyle;elbow=vertical;curved=0;rounded=0;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" target="3Qk0bvLuKZpZX-Pxpya4-4">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="472" y="183" />
              </Array>
              <mxPoint x="334" y="183" as="sourcePoint" />
              <mxPoint x="609" y="183" as="targetPoint" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="lancer()" mermaidId="e:A-&gt;F#1" mermaidBaseStyle="endArrow=block;endSize=9;verticalAlign=bottom;edgeStyle=elbowEdgeStyle;elbow=vertical;curved=0;rounded=0;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="lancer()" id="3Qk0bvLuKZpZX-Pxpya4-19">
          <mxCell edge="1" parent="3Qk0bvLuKZpZX-Pxpya4-1" source="3Qk0bvLuKZpZX-Pxpya4-3" style="endArrow=block;endSize=9;verticalAlign=bottom;edgeStyle=elbowEdgeStyle;elbow=vertical;curved=0;rounded=0;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" target="3Qk0bvLuKZpZX-Pxpya4-4">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="472" y="227" />
              </Array>
              <mxPoint x="334" y="227" as="sourcePoint" />
              <mxPoint x="609" y="227" as="targetPoint" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="pollEvent()" mermaidId="e:F-&gt;E#0" mermaidBaseStyle="endArrow=block;endSize=9;verticalAlign=bottom;edgeStyle=elbowEdgeStyle;elbow=vertical;curved=0;rounded=0;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="pollEvent()" id="3Qk0bvLuKZpZX-Pxpya4-20">
          <mxCell edge="1" parent="3Qk0bvLuKZpZX-Pxpya4-1" source="3Qk0bvLuKZpZX-Pxpya4-4" style="endArrow=block;endSize=9;verticalAlign=bottom;edgeStyle=elbowEdgeStyle;elbow=vertical;curved=0;rounded=0;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" target="3Qk0bvLuKZpZX-Pxpya4-6">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="853" y="312" />
              </Array>
              <mxPoint x="609" y="312" as="sourcePoint" />
              <mxPoint x="1097" y="312" as="targetPoint" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:F-&gt;F#0" mermaidBaseStyle="edgeStyle=none;curved=1;endArrow=block;endSize=9;verticalAlign=bottom;align=center;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="" id="3Qk0bvLuKZpZX-Pxpya4-21">
          <mxCell edge="1" parent="3Qk0bvLuKZpZX-Pxpya4-1" source="3Qk0bvLuKZpZX-Pxpya4-4" style="edgeStyle=none;curved=1;endArrow=block;endSize=9;verticalAlign=bottom;align=center;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;rounded=0;" target="3Qk0bvLuKZpZX-Pxpya4-4">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="644" y="437" />
                <mxPoint x="648" y="449" />
                <mxPoint x="644" y="461" />
              </Array>
              <mxPoint x="609" y="437" as="sourcePoint" />
              <mxPoint x="609" y="461" as="targetPoint" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <mxCell id="3Qk0bvLuKZpZX-Pxpya4-22" parent="3Qk0bvLuKZpZX-Pxpya4-1" style="text;html=1;strokeColor=none;fillColor=none;align=center;verticalAlign=middle;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;fontColor=light-dark(#333333,#cccccc);" value="basculerPause()" vertex="1">
          <mxGeometry height="18" width="200" x="509" y="413" as="geometry" />
        </mxCell>
        <UserObject label="" mermaidId="e:F-&gt;F#1" mermaidBaseStyle="edgeStyle=none;curved=1;endArrow=block;endSize=9;verticalAlign=bottom;align=center;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="" id="3Qk0bvLuKZpZX-Pxpya4-23">
          <mxCell edge="1" parent="3Qk0bvLuKZpZX-Pxpya4-1" source="3Qk0bvLuKZpZX-Pxpya4-4" style="edgeStyle=none;curved=1;endArrow=block;endSize=9;verticalAlign=bottom;align=center;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;rounded=0;" target="3Qk0bvLuKZpZX-Pxpya4-4">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="644" y="587" />
                <mxPoint x="648" y="599" />
                <mxPoint x="644" y="611" />
              </Array>
              <mxPoint x="609" y="587" as="sourcePoint" />
              <mxPoint x="609" y="611" as="targetPoint" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <mxCell id="3Qk0bvLuKZpZX-Pxpya4-24" parent="3Qk0bvLuKZpZX-Pxpya4-1" style="text;html=1;strokeColor=none;fillColor=none;align=center;verticalAlign=middle;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;fontColor=light-dark(#333333,#cccccc);" value="modifierDelai()" vertex="1">
          <mxGeometry height="18" width="200" x="509" y="563" as="geometry" />
        </mxCell>
        <UserObject label="" mermaidId="e:F-&gt;F#2" mermaidBaseStyle="edgeStyle=none;curved=1;endArrow=block;endSize=9;verticalAlign=bottom;align=center;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="" id="3Qk0bvLuKZpZX-Pxpya4-25">
          <mxCell edge="1" parent="3Qk0bvLuKZpZX-Pxpya4-1" source="3Qk0bvLuKZpZX-Pxpya4-4" style="edgeStyle=none;curved=1;endArrow=block;endSize=9;verticalAlign=bottom;align=center;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;rounded=0;" target="3Qk0bvLuKZpZX-Pxpya4-4">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="644" y="737" />
                <mxPoint x="648" y="749" />
                <mxPoint x="644" y="761" />
              </Array>
              <mxPoint x="609" y="737" as="sourcePoint" />
              <mxPoint x="609" y="761" as="targetPoint" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <mxCell id="3Qk0bvLuKZpZX-Pxpya4-26" parent="3Qk0bvLuKZpZX-Pxpya4-1" style="text;html=1;strokeColor=none;fillColor=none;align=center;verticalAlign=middle;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;fontColor=light-dark(#333333,#cccccc);" value="fermer()" vertex="1">
          <mxGeometry height="18" width="200" x="509" y="713" as="geometry" />
        </mxCell>
        <UserObject label="iterer()" mermaidId="e:F-&gt;S#0" mermaidBaseStyle="endArrow=block;endSize=9;verticalAlign=bottom;edgeStyle=elbowEdgeStyle;elbow=vertical;curved=0;rounded=0;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="iterer()" id="3Qk0bvLuKZpZX-Pxpya4-27">
          <mxCell edge="1" parent="3Qk0bvLuKZpZX-Pxpya4-1" source="3Qk0bvLuKZpZX-Pxpya4-4" style="endArrow=block;endSize=9;verticalAlign=bottom;edgeStyle=elbowEdgeStyle;elbow=vertical;curved=0;rounded=0;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" target="3Qk0bvLuKZpZX-Pxpya4-5">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="753" y="862" />
              </Array>
              <mxPoint x="609" y="862" as="sourcePoint" />
              <mxPoint x="897" y="862" as="targetPoint" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:S-&gt;S#0" mermaidBaseStyle="edgeStyle=none;curved=1;endArrow=block;endSize=9;verticalAlign=bottom;align=center;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="" id="3Qk0bvLuKZpZX-Pxpya4-28">
          <mxCell edge="1" parent="3Qk0bvLuKZpZX-Pxpya4-1" source="3Qk0bvLuKZpZX-Pxpya4-5" style="edgeStyle=none;curved=1;endArrow=block;endSize=9;verticalAlign=bottom;align=center;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;rounded=0;" target="3Qk0bvLuKZpZX-Pxpya4-5">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="932" y="963" />
                <mxPoint x="936" y="975" />
                <mxPoint x="932" y="987" />
              </Array>
              <mxPoint x="897" y="963" as="sourcePoint" />
              <mxPoint x="897" y="987" as="targetPoint" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <mxCell id="3Qk0bvLuKZpZX-Pxpya4-29" parent="3Qk0bvLuKZpZX-Pxpya4-1" style="text;html=1;strokeColor=none;fillColor=none;align=center;verticalAlign=middle;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;fontColor=light-dark(#333333,#cccccc);" value="calculerSuivante et echanger" vertex="1">
          <mxGeometry height="18" width="200" x="797" y="939" as="geometry" />
        </mxCell>
        <UserObject label="surGeneration(grille, generation)" mermaidId="e:S-&gt;F#0" mermaidBaseStyle="endArrow=block;endSize=9;verticalAlign=bottom;edgeStyle=elbowEdgeStyle;elbow=vertical;curved=0;rounded=0;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="surGeneration(grille, generation)" id="3Qk0bvLuKZpZX-Pxpya4-30">
          <mxCell edge="1" parent="3Qk0bvLuKZpZX-Pxpya4-1" source="3Qk0bvLuKZpZX-Pxpya4-5" style="endArrow=block;endSize=9;verticalAlign=bottom;edgeStyle=elbowEdgeStyle;elbow=vertical;curved=0;rounded=0;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" target="3Qk0bvLuKZpZX-Pxpya4-4">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="753" y="1047" />
              </Array>
              <mxPoint x="897" y="1047" as="sourcePoint" />
              <mxPoint x="609" y="1047" as="targetPoint" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:F-&gt;F#3" mermaidBaseStyle="edgeStyle=none;curved=1;endArrow=block;endSize=9;verticalAlign=bottom;align=center;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="" id="3Qk0bvLuKZpZX-Pxpya4-31">
          <mxCell edge="1" parent="3Qk0bvLuKZpZX-Pxpya4-1" source="3Qk0bvLuKZpZX-Pxpya4-4" style="edgeStyle=none;curved=1;endArrow=block;endSize=9;verticalAlign=bottom;align=center;fontSize=16;labelBackgroundColor=none;strokeWidth=1.5;strokeColor=light-dark(#333333,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;rounded=0;" target="3Qk0bvLuKZpZX-Pxpya4-4">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="644" y="1131" />
                <mxPoint x="648" y="1143" />
                <mxPoint x="644" y="1155" />
              </Array>
              <mxPoint x="609" y="1131" as="sourcePoint" />
              <mxPoint x="609" y="1155" as="targetPoint" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <mxCell id="3Qk0bvLuKZpZX-Pxpya4-32" parent="3Qk0bvLuKZpZX-Pxpya4-1" style="text;html=1;strokeColor=none;fillColor=none;align=center;verticalAlign=middle;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontSize=16;fontColor=light-dark(#333333,#cccccc);" value="dessiner(grille)" vertex="1">
          <mxGeometry height="18" width="200" x="509" y="1107" as="geometry" />
        </mxCell>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
