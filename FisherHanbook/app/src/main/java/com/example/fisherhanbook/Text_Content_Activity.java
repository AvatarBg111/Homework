package com.example.fisherhanbook;

import android.content.Intent;
import android.content.SharedPreferences;
import android.graphics.Typeface;
import android.os.Bundle;
import android.preference.PreferenceManager;
import android.widget.ImageView;
import android.widget.TextView;

import androidx.annotation.Nullable;
import androidx.appcompat.app.ActionBar;
import androidx.appcompat.app.AppCompatActivity;

public class Text_Content_Activity extends AppCompatActivity {
    private ActionBar actionBar;
    private TextView text_content;
    private Typeface face1, face2;
    private ImageView iContent;
    private SharedPreferences def_pref;
    private int category = 0;
    private int position = 0;
    private String[] array_title_project = {"Идея", "Описание", "Реализация", "Изпълнение"};
    private String[] array_title_resources = {"Технологии", "Езици", "Програми"};
    private String[] array_title_directory = {"STM32F407", "MCP39F511", "ESP32", "HTTPS"};
    private String[] array_title_about = {"Екип", "Дейности", "Готовност"};
    private int[] array_image_project = {R.drawable.smart_e_meter, R.drawable.box_din_01, R.drawable.smart_e_meter, R.drawable.smart_e_meter};
    private int[] array_image_resources = {R.drawable.smart_e_meter, R.drawable.smart_e_meter, R.drawable.smart_e_meter};
    private int[] array_image_directory = {R.drawable.smart_e_meter, R.drawable.smart_e_meter, R.drawable.smart_e_meter, R.drawable.smart_e_meter};
    private int[] array_image_about = {R.drawable.smart_e_meter, R.drawable.smart_e_meter, R.drawable.smart_e_meter};
    private int[] array_project = {R.string.idea, R.string.description, R.string.realization, R.string.performance};
    private int[] array_resources = {R.string.technologies, R.string.languages, R.string.programs};
    private int[] array_directory = {R.string.stm32f407, R.string.mcp39f511, R.string.esp32, R.string.https};
    private int[] array_about = {R.string.team, R.string.activities, R.string.readiness};

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.text_content);
        init();
        reciveIntent();
    }

    private void reciveIntent() {
        Intent i = getIntent();
        if(i != null) {
            category = i.getIntExtra("category", 0);
            position = i.getIntExtra("position", 0);
        }

        switch (category) {
            case 0:
                actionBar.setTitle(array_title_project[position]);
                iContent.setImageResource(array_image_project[position]);
                text_content.setText(array_project[position]);
                break;
            case 1:
                actionBar.setTitle(array_title_resources[position]);
                iContent.setImageResource(array_image_resources[position]);
                text_content.setText(array_resources[position]);
                break;
            case 2:
                actionBar.setTitle(array_title_directory[position]);
                iContent.setImageResource(array_image_directory[position]);
                text_content.setText(array_directory[position]);
                break;
            case 3:
                actionBar.setTitle(array_title_about[position]);
                iContent.setImageResource(array_image_about[position]);
                text_content.setText(array_about[position]);
                break;
        }
    }

    private void init() {
        def_pref = PreferenceManager.getDefaultSharedPreferences(this);
        actionBar = getSupportActionBar();
        text_content = findViewById(R.id.text_main_content);
        iContent = findViewById(R.id.imageContent);
        face1 = Typeface.createFromAsset(this.getAssets(), "fonts/Ubuntu/Ubuntu-Light.ttf");
        face2 = Typeface.createFromAsset(this.getAssets(), "fonts/Caveat/Caveat-Bold.ttf");
        text_content.setTypeface(face1);
        String text = def_pref.getString("main_text_size", "Среден");
        if(text != null) {
            switch (text) {
                case "Голям":
                    text_content.setTextSize(22);
                    break;
                case "Среден":
                    text_content.setTextSize(19);
                    break;
                case "Малък":
                    text_content.setTextSize(16);
                    break;
            }
        }
    }
}