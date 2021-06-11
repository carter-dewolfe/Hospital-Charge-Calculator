Public Class Form1
    Dim dailyCharge As Int16 = 350
    Public Function CalcStayCharge(ByVal stayLength As Int16) As Double
        Return dailyCharge * stayLength
    End Function

    Public Function CalcMiscCharge(ByVal medCharge As Double, ByVal surgeryCharge As Double, ByVal labCharge As Double, ByVal rehabCharge As Double) As Double
        Return medCharge + surgeryCharge + labCharge + rehabCharge
    End Function

    Public Function CalcTotalCharge(ByVal stayLength As Int16, ByVal medCharge As Double, ByVal surgeryCharge As Double, ByVal labCharge As Double, ByVal rehabCharge As Double) As Double
        Return CalcStayCharge(stayLength) + CalcMiscCharge(medCharge, surgeryCharge, labCharge, rehabCharge)
    End Function


    Private Sub btnCalc_Click(sender As Object, e As EventArgs) Handles btnCalc.Click
        lblStay.Text = CalcStayCharge(txtDays.Text)
        lblMisc.Text = CalcMiscCharge(txtMed.Text, txtSurgery.Text, txtLab.Text, txtRehab.Text)
        lblTotal.Text = CalcTotalCharge(txtDays.Text, txtMed.Text, txtSurgery.Text, txtLab.Text, txtRehab.Text)
    End Sub
End Class
