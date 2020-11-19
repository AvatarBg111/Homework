package com.example.fisherhanbook;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.view.animation.Animation;
import android.view.animation.AnimationUtils;
import android.widget.Button;
import android.widget.ImageView;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

public class Logo_Activity extends AppCompatActivity {
    private Animation logoAnim,buttonLogoAnim ;
    //private Button bAnim;
    private ImageView logoImage;

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.logo_activity);
        init();
        startMainActivity();
    }

    private void init() {
        logoAnim = AnimationUtils.loadAnimation(getApplicationContext(),R.anim.logo_anim);
        buttonLogoAnim = AnimationUtils.loadAnimation(getApplicationContext(),R.anim.button_anim);

        logoImage = findViewById(R.id.logoView);
        //bAnim = findViewById(R.id.buttonWelcome);

        logoImage.startAnimation(logoAnim);
        //bAnim.startAnimation(buttonLogoAnim);
    }

    public void onClickWelcome(View view) {
        Intent i = new Intent(Logo_Activity.this, MainActivity.class);
        startActivity(i);
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        finish();
    }

    private void startMainActivity() {
        new Thread(new Runnable() {
            @Override
            public void run() {
                try {
                    Thread.sleep(2000);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
                Intent i = new Intent(Logo_Activity.this, MainActivity.class);
                startActivity(i);
            }
        }).start();
    }
}
