class DayZTool: WorkbenchPlugin
{
	void RunCustomCommand(string cmd){
		Print(cmd);
		Workbench.RunCmd(cmd);
	}
	
	override void Configure() 
	{
		Workbench.ScriptDialog("Mission directory","", this);
	}
	
	[ButtonAttribute("OK")]
	void DialogOk()
	{
	}
};

[WorkbenchPluginAttribute("DayZ Run Client", "Just for testing", "ctrl+3", "", {"ScriptEditor", "ResourceManager"})]
class RunDayzClientTool: DayZTool
{
	[Attribute("P:/StartDebugClient.bat", "fileeditbox", "Path to missions dir", "")]
	string RunClientCmd;
	
	override void Run()
	{
		RunCustomCommand(RunClientCmd);
	}
}

[WorkbenchPluginAttribute("DayZ Run Server", "Just for testing", "ctrl+4", "", {"ScriptEditor", "ResourceManager"})]
class RunDayzServerTool: DayZTool
{
	[Attribute("P:/StartDebugServer.bat", "fileeditbox", "Path to missions dir", "")]
	string RunServerCmd;
	
	override void Run()
	{
		RunCustomCommand(RunServerCmd);
	}
}

[WorkbenchPluginAttribute("DayZ Restart Client/Server", "Just for testing", "ctrl+1", "", {"ScriptEditor", "ResourceManager"})]
class StartClientServerDayzTool: DayZTool
{
	[Attribute("P:/StartDebugAll.bat", "fileeditbox", "Path to missions dir", "")]
	string RestartCmd;
	
	override void Run()
	{
		RunCustomCommand(RestartCmd);
	}
}

[WorkbenchPluginAttribute("DayZ Kill Client/Server", "Just for testing", "ctrl+2", "", {"ScriptEditor", "ResourceManager"})]
class KillClientServerDayzTool: DayZTool
{
	[Attribute("P:/StopDebugAll.bat", "fileeditbox", "Path to missions dir", "")]
	string StopCmd;
	
	override void Run()
	{
		RunCustomCommand(StopCmd);
	}
}





[WorkbenchPluginAttribute("Restart Workbench", "Just for testing", "ctrl+0", "", {"ScriptEditor", "ResourceManager"})]
class RestartWorkbench: DayZTool
{
	[Attribute("P:/StartWorkbench.bat", "fileeditbox", "Path to missions dir", "")]
	string RestartCmd;
	
	override void Run()
	{
		RunCustomCommand(RestartCmd);
	}
};

[WorkbenchPluginAttribute("Copy Game/Server Files", "Just for testing", "ctrl+9", "", {"ScriptEditor", "ResourceManager"})]
class CopyGameFilesDayzTool: DayZTool
{
	[Attribute("P:/CopyGameFiles.bat", "fileeditbox", "Path to missions dir", "")]
	string CopyGameCmd;
	
	override void Run()
	{
		RunCustomCommand(CopyGameCmd);
	}
};

[WorkbenchPluginAttribute("Refresh Script Editor Files", "Just for testing", "ctrl+8", "", {"ScriptEditor", "ResourceManager"})]
class RefreshSettingsDayzTool: DayZTool
{
	[Attribute("P:/UserSettings_EDIT_ME.bat", "fileeditbox", "Path to missions dir", "")]
	string RefreshSettingsCmd;
	
	override void Run()
	{
		RunCustomCommand(RefreshSettingsCmd);
	}
};

