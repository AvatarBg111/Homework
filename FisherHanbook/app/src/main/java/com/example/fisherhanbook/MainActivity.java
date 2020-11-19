package com.example.fisherhanbook;

import android.content.Intent;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;

import com.example.fisherhanbook.Setings.SettingsActivity;
import com.google.android.material.floatingactionbutton.FloatingActionButton;
import com.google.android.material.navigation.NavigationView;
import com.google.android.material.snackbar.Snackbar;

import androidx.annotation.NonNull;
import androidx.appcompat.app.ActionBarDrawerToggle;
import androidx.core.view.GravityCompat;
import androidx.navigation.NavController;
import androidx.navigation.Navigation;
import androidx.navigation.ui.AppBarConfiguration;
import androidx.navigation.ui.NavigationUI;
import androidx.drawerlayout.widget.DrawerLayout;
import androidx.appcompat.app.AppCompatActivity;
import androidx.appcompat.widget.Toolbar;

import java.util.ArrayList;
import java.util.Arrays;

public class MainActivity extends AppCompatActivity implements NavigationView.OnNavigationItemSelectedListener {
    private AppBarConfiguration mAppBarConfiguration;
    private ListView list1;
    private String[] array;
    private ArrayAdapter<String> adapter1;
    private Toolbar toolbar;
    private int menu_line;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        list1 = findViewById(R.id.HomeList);
        array = getResources().getStringArray(R.array.Project_array);
        adapter1 = new ArrayAdapter<>(this, android.R.layout.simple_list_item_1, new ArrayList<String>(Arrays.asList(array)));
        list1.setAdapter(adapter1);
        toolbar = findViewById(R.id.toolbar);
        setSupportActionBar(toolbar);
        DrawerLayout drawer = findViewById(R.id.drawer_layout);
        NavigationView navigationView = findViewById(R.id.nav_view);
        ActionBarDrawerToggle toggle = new ActionBarDrawerToggle(
                this, drawer, toolbar, R.string.open_drawer, R.string.close_drawer );
        drawer.addDrawerListener(toggle);
        toggle.syncState();
        navigationView.setNavigationItemSelectedListener(this);
        list1.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                Intent intent = new Intent(MainActivity.this, Text_Content_Activity.class);
                intent.putExtra("category", menu_line);
                intent.putExtra("position", position);
                startActivity(intent);
            }
        });

/*        // Passing each menu ID as a set of Ids because each
        // menu should be considered as top level destinations.
        mAppBarConfiguration = new AppBarConfiguration.Builder(
                R.id.nav_project, R.id.nav_resources, R.id.nav_directory, R.id.nav_about)
                .setDrawerLayout(drawer)
                .build();
        NavController navController = Navigation.findNavController(this, R.id.nav_host_fragment);
        NavigationUI.setupActionBarWithNavController(this, navController, mAppBarConfiguration);
        NavigationUI.setupWithNavController(navigationView, navController);*/
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        toolbar.setTitle(R.string.menu_project);
        return true;
    }

    public boolean onOptionsItemSelected(MenuItem item) {
        int id = item.getItemId();

        if(id == R.id.action_settings) {
            Intent i = new Intent(MainActivity.this, SettingsActivity.class);
            startActivity(i);
        }
        return super.onOptionsItemSelected(item);
    }

/*    @Override
    public boolean onSupportNavigateUp() {
        NavController navController = Navigation.findNavController(this, R.id.nav_host_fragment);
        return NavigationUI.navigateUp(navController, mAppBarConfiguration)
                || super.onSupportNavigateUp();
    }*/

    @Override
    //public boolean onNavigationItemSelected(@NonNull MenuItem item) {
    public boolean onNavigationItemSelected(MenuItem item) {
        //
        int id = item.getItemId();
        if(id == R.id.nav_project){
            fillArray(R.string.menu_project, R.array.Project_array, 0);
        }else if(id == R.id.nav_resources){
            fillArray(R.string.menu_resources, R.array.Resources_array, 1);
        }else if(id == R.id.nav_directory){
            fillArray(R.string.menu_directory, R.array.Dictionary_array, 2);
        }else if(id == R.id.nav_about){
            fillArray(R.string.menu_about, R.array.About_array,3);
        }

        DrawerLayout drawer = findViewById(R.id.drawer_layout);
        drawer.closeDrawer(GravityCompat.START);
        return true;
    }

    private void fillArray (int title, int arrayList, int index) {
        menu_line = index;
        toolbar.setTitle(title);
        array = getResources().getStringArray(arrayList);
        adapter1.clear();
        adapter1.addAll(array);
        adapter1.notifyDataSetChanged();
    }
}