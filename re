Enter file contents here


private void jButton1ActionPerformed(java.awt.event.ActionEvent evt) {                                         
int x= Integer.parseInt(textox.getText());
int y= Integer.parseInt(textoy.getText());
    
jLabel3.setText(new opera().dividir(x,y));


    }catch(ArithmeticException a){
     resultado.setText("no acepto cero");
    
    }catch(ValoresNoNegativosExeption e){
    
    resultado.setText(e.getMessage());
    

}
    


