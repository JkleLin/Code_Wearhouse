package com.franklin;
import javax.swing.*;
import javax.swing.border.MatteBorder;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

public class Calculator {
    JTextField textField;
    JPanel myPanel;
    JFrame myFrame;
    JPanel buttonPanel;
    JButton btn7;
    JButton btn8;
    JButton btn9;
    JButton btnDiv;
    JButton btn4;
    JButton btn5;
    JButton btn6;
    JButton btnMul;
    JButton btn1;
    JButton btn2;
    JButton btn3;
    JButton btnAdd;
    JButton btn0;
    JButton btnDot;
    JButton btnEqu;
    JButton btnSub;

    char lastOp = ' ';
    float lastNum;
    float showingNum;
    boolean isClear = false;

    public void prepareGUI() {
        // 初始化frame & panel
        myFrame = new JFrame("计算器");
        myFrame.setLayout(new BorderLayout(10,5));
        myFrame.setSize(280,300);
        myPanel = new JPanel();
        myPanel.setLayout(new BorderLayout());
        // 初始化文本框
        textField = new JTextField();
        textField.setEditable(false);
        textField.setText("");
        textField.setFont(new Font("宋体", Font.BOLD, 30));
        textField.setHorizontalAlignment(JTextField.RIGHT);
        textField.setBorder(new MatteBorder(2, 2, 2, 2, new Color(192, 192, 192)));
        textField.addKeyListener(new KeyListener() {
            @Override
            public void keyTyped(KeyEvent e) {
                return;
            }

            @Override
            public void keyPressed(KeyEvent e) {
                System.out.println(e.getKeyCode());
                if (e.getKeyCode() == 8) {
                    String tfText = textField.getText();
                    if (tfText.length() > 0) {
                        textField.setText(tfText.substring(0, tfText.length() - 1));
                    }
                }
                else {
                    char keyChar = e.getKeyChar();
                    String keyStr = "" + keyChar;
                    calculatorText(keyStr);
                    System.out.println(keyStr);
                }
            }
            @Override
            public void keyReleased(KeyEvent e) {
                return;
            }
        });
        myPanel.add(textField, BorderLayout.NORTH);
        // 按钮布局
        buttonPanel = new JPanel();
        buttonPanel.setLayout(new GridLayout(4,4,5,5));
        // 按钮初始化
        btn7   = new JButton("7");
        btn8   = new JButton("8");
        btn9   = new JButton("9");
        btnDiv = new JButton("/");
        btn4   = new JButton("4");
        btn5   = new JButton("5");
        btn6   = new JButton("6");
        btnMul = new JButton("*");
        btn1   = new JButton("1");
        btn2   = new JButton("2");
        btn3   = new JButton("3");
        btnAdd = new JButton("+");
        btn0   = new JButton("0");
        btnDot = new JButton(".");
        btnEqu = new JButton("=");
        btnSub = new JButton("-");
        btn7.setActionCommand("7");
        btn8.setActionCommand("8");
        btn9.setActionCommand("9");
        btnDiv.setActionCommand("/");
        btn4.setActionCommand("4");
        btn5.setActionCommand("5");
        btn6.setActionCommand("6");
        btnMul.setActionCommand("*");
        btn1.setActionCommand("1");
        btn2.setActionCommand("2");
        btn3.setActionCommand("3");
        btnAdd.setActionCommand("+");
        btn0.setActionCommand("0");
        btnDot.setActionCommand(".");
        btnEqu.setActionCommand("=");
        btnSub.setActionCommand("-");
        // 添加事件
        btn7.addActionListener(new CalculatorBtnListener());
        btn8.addActionListener(new CalculatorBtnListener());
        btn9.addActionListener(new CalculatorBtnListener());
        btnDiv.addActionListener(new CalculatorBtnListener());
        btn4.addActionListener(new CalculatorBtnListener());
        btn5.addActionListener(new CalculatorBtnListener());
        btn6.addActionListener(new CalculatorBtnListener());
        btnMul.addActionListener(new CalculatorBtnListener());
        btn1.addActionListener(new CalculatorBtnListener());
        btn2.addActionListener(new CalculatorBtnListener());
        btn3.addActionListener(new CalculatorBtnListener());
        btnAdd.addActionListener(new CalculatorBtnListener());
        btn0.addActionListener(new CalculatorBtnListener());
        btnDot.addActionListener(new CalculatorBtnListener());
        btnEqu.addActionListener(new CalculatorBtnListener());
        btnSub.addActionListener(new CalculatorBtnListener());
        // 添加按钮到页面
        buttonPanel.add(btn7);
        buttonPanel.add(btn8);
        buttonPanel.add(btn9);
        buttonPanel.add(btnDiv);
        buttonPanel.add(btn4);
        buttonPanel.add(btn5);
        buttonPanel.add(btn6);
        buttonPanel.add(btnMul);
        buttonPanel.add(btn1);
        buttonPanel.add(btn2);
        buttonPanel.add(btn3);
        buttonPanel.add(btnAdd);
        buttonPanel.add(btn0);
        buttonPanel.add(btnDot);
        buttonPanel.add(btnEqu);
        buttonPanel.add(btnSub);
        myPanel.add(buttonPanel, BorderLayout.CENTER);



        myFrame.add(myPanel, BorderLayout.CENTER);
        myFrame.setLocationRelativeTo(null);
        myFrame.setVisible(true);
        myFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }

    private class CalculatorBtnListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            String command = e.getActionCommand();
            calculatorText(command);
        }
    }

    private void calculatorText(String command) {
        switch (command) {
            case "7":
                if (isClear){
                    textField.setText("7");
                    isClear = false;
                }
                else{
                    textField.setText(textField.getText() + '7');
                }
                break;
            case "8":
                if (isClear){
                    textField.setText("8");
                    isClear = false;
                }
                else{
                    textField.setText(textField.getText() + '8');
                }
                break;
            case "9":
                if (isClear){
                    textField.setText("9");
                    isClear = false;
                }
                else{
                    textField.setText(textField.getText() + '9');
                }
                break;
            case "/":
                showingNum = Float.valueOf(textField.getText());
                isClear = true;
                if (lastOp != ' ') {
                    lastNum = calculate(lastNum, lastOp, showingNum);
                    textField.setText(String.valueOf(lastNum));
                }
                lastOp = '/';
                lastNum = showingNum;
                break;
            case "4":
                if (isClear){
                    textField.setText("4");
                    isClear = false;
                }
                else{
                    textField.setText(textField.getText() + '4');
                }
                break;
            case "5":
                if (isClear){
                    textField.setText("5");
                    isClear = false;
                }
                else{
                    textField.setText(textField.getText() + '5');
                }
                break;
            case "6":
                if (isClear){
                    textField.setText("6");
                    isClear = false;
                }
                else{
                    textField.setText(textField.getText() + '6');
                }
                break;
            case "*":
                showingNum = Float.valueOf(textField.getText());
                isClear = true;
                if (lastOp != ' ') {
                    lastNum = calculate(lastNum, lastOp, showingNum);
                    textField.setText(String.valueOf(lastNum));
                }
                lastOp = '*';
                lastNum = showingNum;
                break;
            case "1":
                if (isClear){
                    textField.setText("1");
                    isClear = false;
                }
                else{
                    textField.setText(textField.getText() + '1');
                }
                break;
            case "2":
                if (isClear){
                    textField.setText("2");
                    isClear = false;
                }
                else{
                    textField.setText(textField.getText() + '2');
                }
                break;
            case "3":
                if (isClear){
                    textField.setText("3");
                    isClear = false;
                }
                else{
                    textField.setText(textField.getText() + '3');
                }
                break;
            case "+":
                showingNum = Float.valueOf(textField.getText());
                isClear = true;
                if (lastOp != ' ') {
                    lastNum = calculate(lastNum, lastOp, showingNum);
                    textField.setText(String.valueOf(lastNum));
                }
                lastOp = '+';
                lastNum = showingNum;
                break;
            case "0":
                textField.setText(textField.getText() + '0');
                break;
            case ".":
                if (isClear){
                    textField.setText("");
                }
                String tfText = textField.getText();
                if (tfText.length() == 0){
                    textField.setText("0.");
                }
                else if (tfText.matches("\\d*\\.\\d*$")){
                    break;
                }
                else {
                    textField.setText(tfText + ".");
                    break;
                }
            case "=":
                isClear = true;
                if (lastOp == ' '){
                    return;
                }
                else {
                    showingNum = Float.valueOf(textField.getText());
                    lastNum = calculate(lastNum, lastOp, showingNum);
                    textField.setText(String.valueOf(lastNum));
                    lastOp = ' ';
                }
                break;
            case "-":
                showingNum = Float.valueOf(textField.getText());
                isClear = true;
                if (lastOp != ' ') {
                    lastNum = calculate(lastNum, lastOp, showingNum);
                    textField.setText(String.valueOf(lastNum));
                }
                lastOp = '-';
                lastNum = showingNum;
                break;
        }
    }

    private float calculate(float num1, char op, float num2) {
        float ans = 0;
        switch (op){
            case '+':
                ans = num1 + num2;
                break;
            case '-':
                ans = num1 - num2;
                break;
            case '*':
                ans = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    ans = num1 / num2;
                }
                else {
                    ans = 0;
                }
                break;
        }
        return ans;
    }
}
