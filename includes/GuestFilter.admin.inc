<?php
function GuestFilter_admin_settings_form($form, &$form_state) {
    $form = array();
    $form['GuesetFilter_Default_ForwardingSettings'] = array(
		'#type' => 'fieldset',
     	'#title' => t('Default Form Forwarding Address'),
		'#description' => t('Please enter in the URL the form should be sent too.'),
	);
	$form['stsform_Default_ForwardingSettings']['stsform_Default_status'] = array(
	 	'#type' => 'checkbox',
	 	'#title' => t('Turn on default forwarding address'),
	);
	$form['stsform_Default_ForwardingSettings']['stsform_Default_check'] = array(
	 	'#type' => 'container',
	 	'#states' => array(
	 		'visible' => array(
	 			':input[name="stsform_Default_status"]' => array('checked' => TRUE),
			),	
	 	),
	);
 
	//$form['#validate'][] = 'stsform_admin_settings_validate';

	//$form['#submit'] = array(
		//'stsform_admin_settings_submit',
	//);
    return system_settings_form($form);
    
}