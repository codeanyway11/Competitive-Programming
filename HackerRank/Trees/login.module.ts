import { NgModule, NO_ERRORS_SCHEMA, CUSTOM_ELEMENTS_SCHEMA } from '@angular/core';
import { IonicPageModule } from 'ionic-angular';
import { LoginPage } from './login';
import { FirebaseService } from '../../../providers/firebase-service'
import { AuthServiceProvider } from '../../../providers/auth-service'
import { BrowserTab } from '@ionic-native/browser-tab';
import { ConnectivityService } from '../../../config/connectivity-service';
import { SharedModule } from '../../../app/shared.module';

@NgModule({
  declarations: [
    LoginPage,
  ],
  imports: [
    SharedModule,
    IonicPageModule.forChild(LoginPage),
  ],
  exports:[
    LoginPage,
  ],
  providers:[
    BrowserTab,
    FirebaseService,
    AuthServiceProvider,
    ConnectivityService,
  ],
  schemas: [
    NO_ERRORS_SCHEMA,
    CUSTOM_ELEMENTS_SCHEMA
  ],
})
export class LoginPageModule {}
