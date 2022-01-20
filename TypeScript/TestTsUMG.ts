
import * as UE from 'ue'



class TestTsUMG extends UE.TestUMG {

    //@no-blueprint
    //viewWidget: UE.Game.Test.TsUMG.TsUMG_C;

    Destruct(): void {
        //    this.viewWidget.VerticalBox_55.ClearChildren();
        //    this.viewWidget.RemoveFromParent();
        //this.viewWidget = undefined;
        //    this.RootCanvas.ClearChildren();
        //    this.RootCanvas.RemoveFromParent();
        //    this.RootCanvas = undefined;
    }

    PreConstruct(IsDesignTime: boolean): void {
        let world = this.GetWorld();
        let pc = UE.GameplayStatics.GetPlayerController(world, 0);
        let viewClass = UE.Class.Load("WidgetBlueprint'/Game/Test/TsUMG.TsUMG_C'");
        UE.WidgetBlueprintLibrary.Create(pc, viewClass, undefined);
        //UE.UMGManager.CreateWidget(pc, viewClass) as UE.Game.Test.TsUMG.TsUMG_C;
        //this.RootCanvas.AddChild(viewWidget);
        // let widgetSlot = this.RootCanvas.AddChildToCanvas(this.viewWidget);
        // widgetSlot.SetAnchors(new UE.Anchors(new UE.Vector2D(0, 0), new UE.Vector2D(1, 1)));
        // widgetSlot.SetOffsets(new UE.Margin(0, 0, 0, 0));

        // let childClass = UE.Class.Load("WidgetBlueprint'/Game/Test/DynamicUMG.DynamicUMG_C'");
        // for(let i =0; i <5; ++i)
        // {
        //     let itemWidget = UE.UMGManager.CreateWidget(world, childClass) as UE.Game.Test.DynamicUMG.DynamicUMG_C;
        //     this.viewWidget.VerticalBox_55.AddChildToVerticalBox(itemWidget);
        // }
    }

}
export default TestTsUMG;