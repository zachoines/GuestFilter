<?php
function GuestFilter_style_form($form, &$form_state) {
    $form = array();
	
	// //Sets up the forwarding form
	// $form['GuestFilter_ForwardingSettings'] = array(
	// 	'#type' => 'fieldset',
    //  	'#title' => t('Forwarding Settings'),
	// 	'#description' => t('Please enter in the URL the form should be sent too.'),
	// );
	// $form['GuestFilter_ForwardingSettings']['GuestFilter_status'] = array(
	//  	'#type' => 'checkbox',
	//  	'#title' => t('Turn on Forwarding'),
	// );
	// $form['GuestFilter_ForwardingSettings']['GuestFilter_check'] = array(
	//  	'#type' => 'container',
	//  	'#states' => array(
	//  		'visible' => array(
	//  			':input[name="GuestFilter_status"]' => array('checked' => TRUE),
	// 		),	
	//  	),
	// );
	// $form['GuestFilter_ForwardingSettings']['GuestFilter_check']['GuestFilter_URL'] = array(
	//  	'#type' => 'textfield',
    // 	'#title' => t('Enter URL Name'),
	// );
	// $form['#submit'] = array(
	// 	'GuestFilter_form_submit',
	// ); 

	// $form['nid'] = array(
	// 	'#type' => 'value',
	// 	//'#value' => $node->nid, 
 	// );
	// $form['submit'] = array(
	// 	'#type' => 'submit',
	// 	'#value' => t('Save Configuration'),
  	// );
	
	return $form;
}
 


//check for entered url
// function  GuestFilter_form_validate($form, &$form_state) {
// 	$url = $form_state['values']['GuestFilter_URL'];
// 	$forwarding = $form_state['values']['GuestFilter_status'];
// 	$GuestFilter_defaultStatus = variable_get('GuestFilter_defaultStatus');
// 	$url = trim($url); 

// 	//If no default URL is specified and forwarding is on
// 	if (($forwarding == 1) && ($GuestFilter_defaultStatus == 0)) {
// 		if ($url == "") {
// 			form_set_error('GuestFilter_URL', 'Please enter a url.');
// 		}
// 	} 
// }

// function GuestFilter_form_submit($form, &$form_state) {
// 	//redirect to another site
	
// }



 