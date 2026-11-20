<mxfile host="Electron">
  <diagram name="Page-1" id="LWaSVjLSCOO9EwP_XgLN">
    <mxGraphModel dx="3535" dy="2308" grid="1" gridSize="10" guides="1" tooltips="1" connect="1" arrows="1" fold="1" page="1" pageScale="1" pageWidth="827" pageHeight="1169" math="0" shadow="0">
      <root>
        <mxCell id="0" />
        <mxCell id="1" parent="0" />
        <UserObject label="" mermaidData="{&#xa;  &quot;data&quot;: &quot;classDiagram\n    direction TB\n \n    class Application {\n        +executer(args) int\n    }\n \n    class Simulation {\n        -Grille grille\n        -Grille tampon\n        -shared_ptr~RegleDeVie~ regle\n        -int generation\n        -vector~IObservateur~ observateurs\n        +iterer() void\n        +estStable() bool\n        +ajouterObservateur(IObservateur) void\n        +getGrille() Grille\n        +getGeneration() int\n    }\n \n    class IObservateur {\n        &lt;&lt;interface&gt;&gt;\n        +surGeneration(Grille, int) void\n    }\n \n    class InterfaceConsole {\n        -EcrivainGrille ecrivain\n        -string dossierSortie\n        +surGeneration(Grille, int) void\n    }\n \n    class InterfaceGraphique {\n        -int delaiMs\n        +surGeneration(Grille, int) void\n        +lancer() void\n    }\n \n    class LecteurGrille {\n        +lire(string) Grille\n    }\n \n    class EcrivainGrille {\n        +ecrire(Grille, string, int) void\n    }\n \n    class Grille {\n        -int largeur\n        -int hauteur\n        -vector~Cellule~ cellules\n        -shared_ptr~Topologie~ topologie\n        +getCellule(Position) Cellule\n        +setCellule(Position, Cellule) void\n        +nombreVoisinesVivantes(Position) int\n        +calculerSuivante(RegleDeVie, Grille) void\n        +sontIdentiques(Grille) bool\n    }\n \n    class Position {\n        +int x\n        +int y\n    }\n \n    class Cellule {\n        -EtatPtr etat\n        +estVivante() bool\n        +evoluer(RegleDeVie, int) Cellule\n    }\n \n    class Etat {\n        &lt;&lt;abstract&gt;&gt;\n        +estVivant() bool\n        +suivant(RegleDeVie, int) EtatPtr\n    }\n \n    class EtatVivant {\n        +estVivant() bool\n        +suivant(RegleDeVie, int) EtatPtr\n    }\n \n    class EtatMort {\n        +estVivant() bool\n        +suivant(RegleDeVie, int) EtatPtr\n    }\n \n    class EtatObstacle {\n        -bool vivant\n        +estVivant() bool\n        +suivant(RegleDeVie, int) EtatPtr\n    }\n \n    class RegleDeVie {\n        &lt;&lt;abstract&gt;&gt;\n        +naitre(int) bool\n        +survivre(int) bool\n    }\n \n    class RegleConway {\n        +naitre(int) bool\n        +survivre(int) bool\n    }\n \n    class Topologie {\n        &lt;&lt;abstract&gt;&gt;\n        +resoudre(Position, int, int) optional~Position~\n    }\n \n    class TopologiePlane {\n        +resoudre(Position, int, int) optional~Position~\n    }\n \n    class TopologieTorique {\n        +resoudre(Position, int, int) optional~Position~\n    }\n \n    Application ..&gt; LecteurGrille : utilise\n    Application ..&gt; Simulation : crée\n    Application ..&gt; InterfaceConsole : crée\n    Application ..&gt; InterfaceGraphique : crée\n \n    Simulation \&quot;1\&quot; --&gt; \&quot;1\&quot; Grille : modifie\n    Simulation \&quot;1\&quot; --&gt; \&quot;1\&quot; RegleDeVie : applique\n    Simulation \&quot;1\&quot; o-- \&quot;0..*\&quot; IObservateur : notifie\n \n    IObservateur &lt;|.. InterfaceConsole : réalise\n    IObservateur &lt;|.. InterfaceGraphique : réalise\n    InterfaceConsole --&gt; EcrivainGrille : utilise\n \n    LecteurGrille ..&gt; Grille : crée\n    Grille \&quot;1\&quot; *-- \&quot;n\&quot; Cellule : contient\n    Grille --&gt; Topologie : utilise\n    Grille ..&gt; Position : indexe\n \n    Cellule --&gt; Etat : possède\n    Cellule ..&gt; RegleDeVie : dépend\n    Etat ..&gt; RegleDeVie : dépend\n \n    Etat &lt;|-- EtatVivant\n    Etat &lt;|-- EtatMort\n    Etat &lt;|-- EtatObstacle\n \n    RegleDeVie &lt;|-- RegleConway\n \n    Topologie &lt;|-- TopologiePlane\n    Topologie &lt;|-- TopologieTorique\n &quot;,&#xa;  &quot;config&quot;: null&#xa;}" id="8jb3gisp6OWQMb0NYCPl-174">
          <mxCell connectable="0" parent="1" style="group;transparentBounds=1;editIcon=1;lockedGroup=0;groupPadding=10;" vertex="1">
            <mxGeometry as="geometry" />
          </mxCell>
        </UserObject>
        <UserObject label="&lt;b&gt;Application&lt;/b&gt;" mermaidId="n:Application" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;Application&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-175">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="120" width="202" x="2308" y="130" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-176" parent="8jb3gisp6OWQMb0NYCPl-175" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="202" y="60" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-177" parent="8jb3gisp6OWQMb0NYCPl-175" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+executer(args) int" vertex="1">
          <mxGeometry height="24" width="202" y="84" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;Simulation&lt;/b&gt;" mermaidId="n:Simulation" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;Simulation&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-178">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="336" width="349" x="2000" y="324" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-179" parent="8jb3gisp6OWQMb0NYCPl-178" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="-Grille grille" vertex="1">
          <mxGeometry height="24" width="349" y="60" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-180" parent="8jb3gisp6OWQMb0NYCPl-178" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="-Grille tampon" vertex="1">
          <mxGeometry height="24" width="349" y="84" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-181" parent="8jb3gisp6OWQMb0NYCPl-178" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="-shared_ptr&lt;RegleDeVie&gt; regle" vertex="1">
          <mxGeometry height="24" width="349" y="108" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-182" parent="8jb3gisp6OWQMb0NYCPl-178" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="-int generation" vertex="1">
          <mxGeometry height="24" width="349" y="132" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-183" parent="8jb3gisp6OWQMb0NYCPl-178" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="-vector&lt;IObservateur&gt; observateurs" vertex="1">
          <mxGeometry height="24" width="349" y="156" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-184" parent="8jb3gisp6OWQMb0NYCPl-178" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="349" y="180" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-185" parent="8jb3gisp6OWQMb0NYCPl-178" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+iterer() void" vertex="1">
          <mxGeometry height="24" width="349" y="204" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-186" parent="8jb3gisp6OWQMb0NYCPl-178" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+estStable() bool" vertex="1">
          <mxGeometry height="24" width="349" y="228" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-187" parent="8jb3gisp6OWQMb0NYCPl-178" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+ajouterObservateur(IObservateur) void" vertex="1">
          <mxGeometry height="24" width="349" y="252" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-188" parent="8jb3gisp6OWQMb0NYCPl-178" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+getGrille() Grille" vertex="1">
          <mxGeometry height="24" width="349" y="276" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-189" parent="8jb3gisp6OWQMb0NYCPl-178" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+getGeneration() int" vertex="1">
          <mxGeometry height="24" width="349" y="300" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;IObservateur&lt;/b&gt;" mermaidId="n:IObservateur" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=72;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;spacingTop=24;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;IObservateur&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-190">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=72;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;spacingTop=24;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="144" width="296" x="2175" y="818" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-191" parent="8jb3gisp6OWQMb0NYCPl-190" style="text;html=1;strokeColor=none;fillColor=none;align=center;verticalAlign=middle;fontSize=16;movable=0;resizable=0;rotatable=0;points=[];fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="«interface»" vertex="1">
          <mxGeometry height="24" width="296" y="12" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-192" parent="8jb3gisp6OWQMb0NYCPl-190" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="296" y="84" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-193" parent="8jb3gisp6OWQMb0NYCPl-190" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+surGeneration(Grille, int) void" vertex="1">
          <mxGeometry height="24" width="296" y="108" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;InterfaceConsole&lt;/b&gt;" mermaidId="n:InterfaceConsole" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;InterfaceConsole&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-194">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="168" width="311" x="2272" y="1120" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-195" parent="8jb3gisp6OWQMb0NYCPl-194" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="-EcrivainGrille ecrivain" vertex="1">
          <mxGeometry height="24" width="311" y="60" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-196" parent="8jb3gisp6OWQMb0NYCPl-194" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="-string dossierSortie" vertex="1">
          <mxGeometry height="24" width="311" y="84" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-197" parent="8jb3gisp6OWQMb0NYCPl-194" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="311" y="108" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-198" parent="8jb3gisp6OWQMb0NYCPl-194" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+surGeneration(Grille, int) void" vertex="1">
          <mxGeometry height="24" width="311" y="132" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;InterfaceGraphique&lt;/b&gt;" mermaidId="n:InterfaceGraphique" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;InterfaceGraphique&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-199">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="168" width="320" x="2632" y="1120" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-200" parent="8jb3gisp6OWQMb0NYCPl-199" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="-int delaiMs" vertex="1">
          <mxGeometry height="24" width="320" y="60" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-201" parent="8jb3gisp6OWQMb0NYCPl-199" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="320" y="84" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-202" parent="8jb3gisp6OWQMb0NYCPl-199" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+surGeneration(Grille, int) void" vertex="1">
          <mxGeometry height="24" width="320" y="108" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-203" parent="8jb3gisp6OWQMb0NYCPl-199" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+lancer() void" vertex="1">
          <mxGeometry height="24" width="320" y="132" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;LecteurGrille&lt;/b&gt;" mermaidId="n:LecteurGrille" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;LecteurGrille&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-204">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="120" width="201" x="1534" y="432" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-205" parent="8jb3gisp6OWQMb0NYCPl-204" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="201" y="60" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-206" parent="8jb3gisp6OWQMb0NYCPl-204" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+lire(string) Grille" vertex="1">
          <mxGeometry height="24" width="201" y="84" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;EcrivainGrille&lt;/b&gt;" mermaidId="n:EcrivainGrille" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;EcrivainGrille&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-207">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="120" width="291" x="2282" y="1386" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-208" parent="8jb3gisp6OWQMb0NYCPl-207" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="291" y="60" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-209" parent="8jb3gisp6OWQMb0NYCPl-207" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+ecrire(Grille, string, int) void" vertex="1">
          <mxGeometry height="24" width="291" y="84" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;Grille&lt;/b&gt;" mermaidId="n:Grille" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;Grille&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-210">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="312" width="348" x="1492" y="734" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-211" parent="8jb3gisp6OWQMb0NYCPl-210" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="-int largeur" vertex="1">
          <mxGeometry height="24" width="348" y="60" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-212" parent="8jb3gisp6OWQMb0NYCPl-210" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="-int hauteur" vertex="1">
          <mxGeometry height="24" width="348" y="84" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-213" parent="8jb3gisp6OWQMb0NYCPl-210" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="-vector&lt;Cellule&gt; cellules" vertex="1">
          <mxGeometry height="24" width="348" y="108" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-214" parent="8jb3gisp6OWQMb0NYCPl-210" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="-shared_ptr&lt;Topologie&gt; topologie" vertex="1">
          <mxGeometry height="24" width="348" y="132" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-215" parent="8jb3gisp6OWQMb0NYCPl-210" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="348" y="156" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-216" parent="8jb3gisp6OWQMb0NYCPl-210" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+getCellule(Position) Cellule" vertex="1">
          <mxGeometry height="24" width="348" y="180" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-217" parent="8jb3gisp6OWQMb0NYCPl-210" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+setCellule(Position, Cellule) void" vertex="1">
          <mxGeometry height="24" width="348" y="204" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-218" parent="8jb3gisp6OWQMb0NYCPl-210" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+nombreVoisinesVivantes(Position) int" vertex="1">
          <mxGeometry height="24" width="348" y="228" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-219" parent="8jb3gisp6OWQMb0NYCPl-210" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+calculerSuivante(RegleDeVie, Grille) void" vertex="1">
          <mxGeometry height="24" width="348" y="252" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-220" parent="8jb3gisp6OWQMb0NYCPl-210" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+sontIdentiques(Grille) bool" vertex="1">
          <mxGeometry height="24" width="348" y="276" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;Position&lt;/b&gt;" mermaidId="n:Position" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;Position&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-221">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="144" width="93" x="1961" y="1132" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-222" parent="8jb3gisp6OWQMb0NYCPl-221" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+int x" vertex="1">
          <mxGeometry height="24" width="93" y="60" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-223" parent="8jb3gisp6OWQMb0NYCPl-221" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+int y" vertex="1">
          <mxGeometry height="24" width="93" y="84" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-224" parent="8jb3gisp6OWQMb0NYCPl-221" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="93" y="108" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;Cellule&lt;/b&gt;" mermaidId="n:Cellule" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;Cellule&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-225">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="168" width="288" x="712" y="1120" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-226" parent="8jb3gisp6OWQMb0NYCPl-225" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="-EtatPtr etat" vertex="1">
          <mxGeometry height="24" width="288" y="60" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-227" parent="8jb3gisp6OWQMb0NYCPl-225" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="288" y="84" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-228" parent="8jb3gisp6OWQMb0NYCPl-225" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+estVivante() bool" vertex="1">
          <mxGeometry height="24" width="288" y="108" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-229" parent="8jb3gisp6OWQMb0NYCPl-225" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+evoluer(RegleDeVie, int) Cellule" vertex="1">
          <mxGeometry height="24" width="288" y="132" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;Etat&lt;/b&gt;" mermaidId="n:Etat" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=72;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;spacingTop=24;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;Etat&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-230">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=72;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;spacingTop=24;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="168" width="299" x="371" y="1362" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-231" parent="8jb3gisp6OWQMb0NYCPl-230" style="text;html=1;strokeColor=none;fillColor=none;align=center;verticalAlign=middle;fontSize=16;movable=0;resizable=0;rotatable=0;points=[];fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="«abstract»" vertex="1">
          <mxGeometry height="24" width="299" y="12" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-232" parent="8jb3gisp6OWQMb0NYCPl-230" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="299" y="84" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-233" parent="8jb3gisp6OWQMb0NYCPl-230" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+estVivant() bool" vertex="1">
          <mxGeometry height="24" width="299" y="108" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-234" parent="8jb3gisp6OWQMb0NYCPl-230" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+suivant(RegleDeVie, int) EtatPtr" vertex="1">
          <mxGeometry height="24" width="299" y="132" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;EtatVivant&lt;/b&gt;" mermaidId="n:EtatVivant" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;EtatVivant&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-235">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="144" width="299" x="30" y="1616" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-236" parent="8jb3gisp6OWQMb0NYCPl-235" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="299" y="60" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-237" parent="8jb3gisp6OWQMb0NYCPl-235" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+estVivant() bool" vertex="1">
          <mxGeometry height="24" width="299" y="84" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-238" parent="8jb3gisp6OWQMb0NYCPl-235" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+suivant(RegleDeVie, int) EtatPtr" vertex="1">
          <mxGeometry height="24" width="299" y="108" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;EtatMort&lt;/b&gt;" mermaidId="n:EtatMort" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;EtatMort&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-239">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="144" width="292" x="379" y="1616" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-240" parent="8jb3gisp6OWQMb0NYCPl-239" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="292" y="60" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-241" parent="8jb3gisp6OWQMb0NYCPl-239" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+estVivant() bool" vertex="1">
          <mxGeometry height="24" width="292" y="84" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-242" parent="8jb3gisp6OWQMb0NYCPl-239" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+suivant(RegleDeVie, int) EtatPtr" vertex="1">
          <mxGeometry height="24" width="292" y="108" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;EtatObstacle&lt;/b&gt;" mermaidId="n:EtatObstacle" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;EtatObstacle&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-243">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="168" width="307" x="721" y="1604" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-244" parent="8jb3gisp6OWQMb0NYCPl-243" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="-bool vivant" vertex="1">
          <mxGeometry height="24" width="307" y="60" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-245" parent="8jb3gisp6OWQMb0NYCPl-243" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="307" y="84" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-246" parent="8jb3gisp6OWQMb0NYCPl-243" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+estVivant() bool" vertex="1">
          <mxGeometry height="24" width="307" y="108" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-247" parent="8jb3gisp6OWQMb0NYCPl-243" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+suivant(RegleDeVie, int) EtatPtr" vertex="1">
          <mxGeometry height="24" width="307" y="132" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;RegleDeVie&lt;/b&gt;" mermaidId="n:RegleDeVie" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=72;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;spacingTop=24;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;RegleDeVie&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-248">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=72;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;spacingTop=24;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="168" width="196" x="1078" y="1604" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-249" parent="8jb3gisp6OWQMb0NYCPl-248" style="text;html=1;strokeColor=none;fillColor=none;align=center;verticalAlign=middle;fontSize=16;movable=0;resizable=0;rotatable=0;points=[];fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="«abstract»" vertex="1">
          <mxGeometry height="24" width="196" y="12" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-250" parent="8jb3gisp6OWQMb0NYCPl-248" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="196" y="84" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-251" parent="8jb3gisp6OWQMb0NYCPl-248" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+naitre(int) bool" vertex="1">
          <mxGeometry height="24" width="196" y="108" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-252" parent="8jb3gisp6OWQMb0NYCPl-248" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+survivre(int) bool" vertex="1">
          <mxGeometry height="24" width="196" y="132" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;RegleConway&lt;/b&gt;" mermaidId="n:RegleConway" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;RegleConway&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-253">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="144" width="203" x="1074" y="1822" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-254" parent="8jb3gisp6OWQMb0NYCPl-253" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="203" y="60" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-255" parent="8jb3gisp6OWQMb0NYCPl-253" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+naitre(int) bool" vertex="1">
          <mxGeometry height="24" width="203" y="84" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-256" parent="8jb3gisp6OWQMb0NYCPl-253" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+survivre(int) bool" vertex="1">
          <mxGeometry height="24" width="203" y="108" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;Topologie&lt;/b&gt;" mermaidId="n:Topologie" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=72;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;spacingTop=24;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;Topologie&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-257">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=72;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;spacingTop=24;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="144" width="398" x="1393" y="1132" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-258" parent="8jb3gisp6OWQMb0NYCPl-257" style="text;html=1;strokeColor=none;fillColor=none;align=center;verticalAlign=middle;fontSize=16;movable=0;resizable=0;rotatable=0;points=[];fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="«abstract»" vertex="1">
          <mxGeometry height="24" width="398" y="12" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-259" parent="8jb3gisp6OWQMb0NYCPl-257" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="398" y="84" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-260" parent="8jb3gisp6OWQMb0NYCPl-257" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+resoudre(Position, int, int) optional&lt;Position&gt;" vertex="1">
          <mxGeometry height="24" width="398" y="108" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;TopologiePlane&lt;/b&gt;" mermaidId="n:TopologiePlane" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;TopologiePlane&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-261">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="120" width="414" x="1120" y="1386" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-262" parent="8jb3gisp6OWQMb0NYCPl-261" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="414" y="60" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-263" parent="8jb3gisp6OWQMb0NYCPl-261" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+resoudre(Position, int, int) optional&lt;Position&gt;" vertex="1">
          <mxGeometry height="24" width="414" y="84" as="geometry" />
        </mxCell>
        <UserObject label="&lt;b&gt;TopologieTorique&lt;/b&gt;" mermaidId="n:TopologieTorique" mermaidBaseStyle="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" mermaidBaseValue="&lt;b&gt;TopologieTorique&lt;/b&gt;" id="8jb3gisp6OWQMb0NYCPl-264">
          <mxCell parent="8jb3gisp6OWQMb0NYCPl-174" style="swimlane;html=1;fontStyle=1;fontSize=16;align=center;verticalAlign=middle;horizontal=1;childLayout=stackLayout;startSize=48;horizontalStack=0;resizeParent=1;resizeParentMax=0;resizeLast=0;collapsible=0;marginTop=12;marginBottom=12;stackSpacing=0;swimlaneFillColor=light-dark(#ECECFF,#1f2020);whiteSpace=wrap;fillColor=light-dark(#ECECFF,#1f2020);strokeColor=light-dark(#9370DB,#cccccc);fontColor=light-dark(#333333,#cccccc);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;" vertex="1">
            <mxGeometry height="120" width="421" x="1584" y="1386" as="geometry" />
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-265" parent="8jb3gisp6OWQMb0NYCPl-264" style="line;strokeWidth=1;fillColor=none;spacingLeft=3;spacingRight=3;rotatable=0;points=[];strokeColor=inherit;" vertex="1">
          <mxGeometry height="24" width="421" y="60" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-266" parent="8jb3gisp6OWQMb0NYCPl-264" style="text;fontSize=16;strokeColor=none;fillColor=none;align=left;verticalAlign=middle;spacingLeft=10;spacingRight=12;spacingBottom=2;overflow=hidden;rotatable=0;points=[[0,0.5],[1,0.5]];portConstraint=eastwest;fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);" value="+resoudre(Position, int, int) optional&lt;Position&gt;" vertex="1">
          <mxGeometry height="24" width="421" y="84" as="geometry" />
        </mxCell>
        <UserObject label="utilise" mermaidId="e:Application-&gt;LecteurGrille#0" mermaidBaseStyle="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.61;entryX=0.5;entryY=0;" mermaidBaseValue="utilise" id="8jb3gisp6OWQMb0NYCPl-267">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-175" style="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.61;entryX=0.5;entryY=0;fixDash=1;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-204">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="1634" y="287" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="crée" mermaidId="e:Application-&gt;Simulation#0" mermaidBaseStyle="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.85;entryX=0.5;entryY=0;" mermaidBaseValue="crée" id="8jb3gisp6OWQMb0NYCPl-268">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-175" style="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.85;entryX=0.5;entryY=0;fixDash=1;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-178">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="2175" y="287" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="crée" mermaidId="e:Application-&gt;InterfaceConsole#0" mermaidBaseStyle="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.89;entryX=0.93;entryY=0;" mermaidBaseValue="crée" id="8jb3gisp6OWQMb0NYCPl-269">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-175" style="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.89;entryX=0.93;entryY=0;fixDash=1;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-194">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="2619" y="287" />
                <mxPoint x="2619" y="492" />
                <mxPoint x="2619" y="697" />
                <mxPoint x="2619" y="890" />
                <mxPoint x="2619" y="1083" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="crée" mermaidId="e:Application-&gt;InterfaceGraphique#0" mermaidBaseStyle="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.69;entryX=0.58;entryY=0;" mermaidBaseValue="crée" id="8jb3gisp6OWQMb0NYCPl-270">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-175" style="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.69;entryX=0.58;entryY=0;fixDash=1;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-199">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="2827" y="287" />
                <mxPoint x="2827" y="492" />
                <mxPoint x="2827" y="697" />
                <mxPoint x="2827" y="890" />
                <mxPoint x="2827" y="1083" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="modifie" mermaidId="e:Simulation-&gt;Grille#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.04;exitY=1;entryX=1;entryY=0.16;" mermaidBaseValue="modifie" id="8jb3gisp6OWQMb0NYCPl-271">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-178" style="curved=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.04;exitY=1;entryX=1;entryY=0.16;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-210">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="1979" y="697" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-272" parent="8jb3gisp6OWQMb0NYCPl-271" style="edgeLabel;resizable=0;labelBackgroundColor=none;fontSize=11;spacing=8;align=right;verticalAlign=top;" value="1" vertex="1">
          <mxGeometry relative="1" x="-1" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-273" parent="8jb3gisp6OWQMb0NYCPl-271" style="edgeLabel;resizable=0;labelBackgroundColor=none;fontSize=11;spacing=8;align=left;verticalAlign=bottom;" value="1" vertex="1">
          <mxGeometry relative="1" x="1" as="geometry" />
        </mxCell>
        <UserObject label="applique" mermaidId="e:Simulation-&gt;RegleDeVie#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.37;exitY=1;entryX=1;entryY=0.42;" mermaidBaseValue="applique" id="8jb3gisp6OWQMb0NYCPl-274">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-178" style="curved=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.37;exitY=1;entryX=1;entryY=0.42;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-248">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="2120" y="697" />
                <mxPoint x="2120" y="890" />
                <mxPoint x="2120" y="1083" />
                <mxPoint x="2120" y="1204" />
                <mxPoint x="2120" y="1325" />
                <mxPoint x="2120" y="1446" />
                <mxPoint x="2120" y="1567" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-275" parent="8jb3gisp6OWQMb0NYCPl-274" style="edgeLabel;resizable=0;labelBackgroundColor=none;fontSize=11;spacing=8;align=right;verticalAlign=top;" value="1" vertex="1">
          <mxGeometry relative="1" x="-1" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-276" parent="8jb3gisp6OWQMb0NYCPl-274" style="edgeLabel;resizable=0;labelBackgroundColor=none;fontSize=11;spacing=8;align=left;verticalAlign=bottom;" value="1" vertex="1">
          <mxGeometry relative="1" x="1" as="geometry" />
        </mxCell>
        <UserObject label="notifie" mermaidId="e:Simulation-&gt;IObservateur#0" mermaidBaseStyle="curved=1;startArrow=mermaidDiamond;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.85;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="notifie" id="8jb3gisp6OWQMb0NYCPl-277">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-178" style="curved=1;startArrow=mermaidDiamond;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.85;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-190">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="2323" y="697" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-278" parent="8jb3gisp6OWQMb0NYCPl-277" style="edgeLabel;resizable=0;labelBackgroundColor=none;fontSize=11;spacing=8;align=right;verticalAlign=top;" value="1" vertex="1">
          <mxGeometry relative="1" x="-1" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-279" parent="8jb3gisp6OWQMb0NYCPl-277" style="edgeLabel;resizable=0;labelBackgroundColor=none;fontSize=11;spacing=8;align=left;verticalAlign=bottom;" value="0..*" vertex="1">
          <mxGeometry relative="1" x="1" as="geometry" />
        </mxCell>
        <UserObject label="réalise" mermaidId="e:IObservateur-&gt;InterfaceConsole#0" mermaidBaseStyle="curved=1;dashed=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.41;exitY=1;entryX=0.11;entryY=0;" mermaidBaseValue="réalise" id="8jb3gisp6OWQMb0NYCPl-280">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-190" style="curved=1;dashed=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.41;exitY=1;entryX=0.11;entryY=0;fixDash=1;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-194">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="2253" y="1083" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="réalise" mermaidId="e:IObservateur-&gt;InterfaceGraphique#0" mermaidBaseStyle="curved=1;dashed=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.73;exitY=1;entryX=0;entryY=0.1;" mermaidBaseValue="réalise" id="8jb3gisp6OWQMb0NYCPl-281">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-190" style="curved=1;dashed=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.73;exitY=1;entryX=0;entryY=0.1;fixDash=1;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-199">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="2505" y="1083" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="utilise" mermaidId="e:InterfaceConsole-&gt;EcrivainGrille#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="utilise" id="8jb3gisp6OWQMb0NYCPl-282">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-194" style="curved=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-207">
            <mxGeometry relative="1" as="geometry">
              <Array as="points" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="crée" mermaidId="e:LecteurGrille-&gt;Grille#0" mermaidBaseStyle="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.43;entryY=0;" mermaidBaseValue="crée" id="8jb3gisp6OWQMb0NYCPl-283">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-204" style="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.43;entryY=0;fixDash=1;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-210">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="1634" y="697" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="contient" mermaidId="e:Grille-&gt;Cellule#0" mermaidBaseStyle="curved=1;startArrow=mermaidDiamond;startSize=17;startFill=1;endArrow=none;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.63;entryX=0.5;entryY=0;" mermaidBaseValue="contient" id="8jb3gisp6OWQMb0NYCPl-284">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-210" style="curved=1;startArrow=mermaidDiamond;startSize=17;startFill=1;endArrow=none;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.63;entryX=0.5;entryY=0;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-225">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="856" y="1083" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-285" parent="8jb3gisp6OWQMb0NYCPl-284" style="edgeLabel;resizable=0;labelBackgroundColor=none;fontSize=11;spacing=8;align=right;verticalAlign=top;" value="1" vertex="1">
          <mxGeometry relative="1" x="-1" as="geometry" />
        </mxCell>
        <mxCell id="8jb3gisp6OWQMb0NYCPl-286" parent="8jb3gisp6OWQMb0NYCPl-284" style="edgeLabel;resizable=0;labelBackgroundColor=none;fontSize=11;spacing=8;align=left;verticalAlign=bottom;" value="n" vertex="1">
          <mxGeometry relative="1" x="1" as="geometry" />
        </mxCell>
        <UserObject label="utilise" mermaidId="e:Grille-&gt;Topologie#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.33;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="utilise" id="8jb3gisp6OWQMb0NYCPl-287">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-210" style="curved=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.33;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-257">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="1592" y="1083" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="indexe" mermaidId="e:Grille-&gt;Position#0" mermaidBaseStyle="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.81;entryX=0.51;entryY=0;" mermaidBaseValue="indexe" id="8jb3gisp6OWQMb0NYCPl-288">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-210" style="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.81;entryX=0.51;entryY=0;fixDash=1;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-221">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="2008" y="1083" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="possède" mermaidId="e:Cellule-&gt;Etat#0" mermaidBaseStyle="curved=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.81;entryX=0.5;entryY=0;" mermaidBaseValue="possède" id="8jb3gisp6OWQMb0NYCPl-289">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-225" style="curved=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.81;entryX=0.5;entryY=0;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-230">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="520" y="1325" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="dépend" mermaidId="e:Cellule-&gt;RegleDeVie#0" mermaidBaseStyle="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.99;exitY=1;entryX=0.08;entryY=0;" mermaidBaseValue="dépend" id="8jb3gisp6OWQMb0NYCPl-290">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-225" style="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0.99;exitY=1;entryX=0.08;entryY=0;fixDash=1;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-248">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="1058" y="1325" />
                <mxPoint x="1058" y="1446" />
                <mxPoint x="1058" y="1567" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="dépend" mermaidId="e:Etat-&gt;RegleDeVie#0" mermaidBaseStyle="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.8;entryX=0;entryY=0.43;" mermaidBaseValue="dépend" id="8jb3gisp6OWQMb0NYCPl-291">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-230" style="curved=1;dashed=1;startArrow=none;endArrow=classic;endSize=9;strokeColor=light-dark(#333333,#cccccc);html=1;fontSize=16;labelBackgroundColor=light-dark(#ECECFF,#1f2020);fontFamily=Trebuchet MS,Verdana,Arial,sans-serif;fontColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.8;entryX=0;entryY=0.43;fixDash=1;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-248">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="156" y="1567" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:Etat-&gt;EtatVivant#0" mermaidBaseStyle="curved=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.84;entryX=0.55;entryY=0;" mermaidBaseValue="" id="8jb3gisp6OWQMb0NYCPl-292">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-230" style="curved=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);exitX=0;exitY=0.84;entryX=0.55;entryY=0;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-235">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="203" y="1567" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:Etat-&gt;EtatMort#0" mermaidBaseStyle="curved=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);exitX=0.56;exitY=1;entryX=0.54;entryY=0;" mermaidBaseValue="" id="8jb3gisp6OWQMb0NYCPl-293">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-230" style="curved=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);exitX=0.56;exitY=1;entryX=0.54;entryY=0;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-239">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="548" y="1567" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:Etat-&gt;EtatObstacle#0" mermaidBaseStyle="curved=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.79;entryX=0.55;entryY=0;" mermaidBaseValue="" id="8jb3gisp6OWQMb0NYCPl-294">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-230" style="curved=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);exitX=1;exitY=0.79;entryX=0.55;entryY=0;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-243">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="897" y="1567" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:RegleDeVie-&gt;RegleConway#0" mermaidBaseStyle="curved=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="" id="8jb3gisp6OWQMb0NYCPl-295">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-248" style="curved=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);exitX=0.5;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-253">
            <mxGeometry relative="1" as="geometry">
              <Array as="points" />
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:Topologie-&gt;TopologiePlane#0" mermaidBaseStyle="curved=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);exitX=0.1;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="" id="8jb3gisp6OWQMb0NYCPl-296">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-257" style="curved=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);exitX=0.1;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-261">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="1327" y="1325" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
        <UserObject label="" mermaidId="e:Topologie-&gt;TopologieTorique#0" mermaidBaseStyle="curved=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);exitX=0.8;exitY=1;entryX=0.5;entryY=0;" mermaidBaseValue="" id="8jb3gisp6OWQMb0NYCPl-297">
          <mxCell edge="1" parent="8jb3gisp6OWQMb0NYCPl-174" source="8jb3gisp6OWQMb0NYCPl-257" style="curved=1;startArrow=mermaidExtension;startSize=17;startFill=0;endArrow=none;strokeColor=light-dark(#333333,#cccccc);exitX=0.8;exitY=1;entryX=0.5;entryY=0;rounded=0;" target="8jb3gisp6OWQMb0NYCPl-264">
            <mxGeometry relative="1" as="geometry">
              <Array as="points">
                <mxPoint x="1794" y="1325" />
              </Array>
            </mxGeometry>
          </mxCell>
        </UserObject>
      </root>
    </mxGraphModel>
  </diagram>
</mxfile>
