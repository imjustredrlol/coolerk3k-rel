#pragma once

#include <string>

// Lua UI we execute
std::string LuaUI = R"(
--[you skid.

-- Instances:

local c0OIerk3k = Instance.new("ScreenGui")
local c0OIerk3k_2 = Instance.new("Frame")
local Frame = Instance.new("Frame")
local UICorner = Instance.new("UICorner")
local TextLabel = Instance.new("TextLabel")
local UICorner_2 = Instance.new("UICorner")
local TxtBox = Instance.new("TextBox")
local UICorner_3 = Instance.new("UICorner")
local Execute = Instance.new("TextButton")
local UICorner_4 = Instance.new("UICorner")
local Clear = Instance.new("TextButton")
local UICorner_5 = Instance.new("UICorner")
local FEB = Instance.new("TextLabel")
local DEX = Instance.new("ImageButton")
local UICorner_6 = Instance.new("UICorner")
local RSPY = Instance.new("ImageButton")
local UICorner_7 = Instance.new("UICorner")
local extra1 = Instance.new("ImageButton")
local UICorner_8 = Instance.new("UICorner")
local extra2 = Instance.new("ImageButton")
local UICorner_9 = Instance.new("UICorner")
local extra3 = Instance.new("ImageButton")
local UICorner_10 = Instance.new("UICorner")
local extra4 = Instance.new("ImageButton")
local UICorner_11 = Instance.new("UICorner")

-- Properties:

c0OIerk3k.Name = "c0OIerk3k"
c0OIerk3k.Parent = game.Players.LocalPlayer:WaitForChild("PlayerGui")
c0OIerk3k.ZIndexBehavior = Enum.ZIndexBehavior.Sibling

c0OIerk3k_2.Name = "c0OIerk3k"
c0OIerk3k_2.Parent = c0OIerk3k
c0OIerk3k_2.BackgroundColor3 = Color3.fromRGB(85, 0, 0)
c0OIerk3k_2.BorderColor3 = Color3.fromRGB(0, 0, 0)
c0OIerk3k_2.BorderSizePixel = 0
c0OIerk3k_2.Position = UDim2.new(0.274712652, 0, 0.185162008, 0)
c0OIerk3k_2.Size = UDim2.new(0, 322, 0, 363)

Frame.Parent = c0OIerk3k_2
Frame.BackgroundColor3 = Color3.fromRGB(170, 0, 0)
Frame.BorderColor3 = Color3.fromRGB(0, 0, 0)
Frame.BorderSizePixel = 0
Frame.Size = UDim2.new(0, 323, 0, 45)

UICorner.Parent = Frame

TextLabel.Parent = Frame
TextLabel.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
TextLabel.BackgroundTransparency = 1.000
TextLabel.BorderColor3 = Color3.fromRGB(0, 0, 0)
TextLabel.BorderSizePixel = 0
TextLabel.Size = UDim2.new(0, 323, 0, 45)
TextLabel.Font = Enum.Font.FredokaOne
TextLabel.Text = "c0OIerk3k v1.1"
TextLabel.TextColor3 = Color3.fromRGB(0, 0, 0)
TextLabel.TextScaled = true
TextLabel.TextSize = 14.000
TextLabel.TextWrapped = true

UICorner_2.Parent = c0OIerk3k_2

TxtBox.Name = "TxtBox"
TxtBox.Parent = c0OIerk3k_2
TxtBox.BackgroundColor3 = Color3.fromRGB(170, 0, 0)
TxtBox.BorderColor3 = Color3.fromRGB(0, 0, 0)
TxtBox.BorderSizePixel = 0
TxtBox.Position = UDim2.new(0.0372670814, 0, 0.146005511, 0)
TxtBox.Size = UDim2.new(0, 230, 0, 261)
TxtBox.Font = Enum.Font.SourceSansBold
TxtBox.Text = "-- execute smth (made by c0OIerkidd)"
TxtBox.TextColor3 = Color3.fromRGB(255, 0, 0)
TxtBox.TextScaled = true
TxtBox.TextSize = 14.000
TxtBox.TextWrapped = true
TxtBox.TextXAlignment = Enum.TextXAlignment.Left
TxtBox.TextYAlignment = Enum.TextYAlignment.Top

UICorner_3.Parent = TxtBox

Execute.Name = "Execute"
Execute.Parent = c0OIerk3k_2
Execute.BackgroundColor3 = Color3.fromRGB(170, 0, 0)
Execute.BorderColor3 = Color3.fromRGB(0, 0, 0)
Execute.BorderSizePixel = 0
Execute.Position = UDim2.new(0.773291945, 0, 0.146005511, 0)
Execute.Size = UDim2.new(0, 66, 0, 57)
Execute.Font = Enum.Font.LuckiestGuy
Execute.Text = "Execute"
Execute.TextColor3 = Color3.fromRGB(255, 0, 0)
Execute.TextSize = 14.000

UICorner_4.Parent = Execute

Clear.Name = "Clear"
Clear.Parent = c0OIerk3k_2
Clear.BackgroundColor3 = Color3.fromRGB(170, 0, 0)
Clear.BorderColor3 = Color3.fromRGB(0, 0, 0)
Clear.BorderSizePixel = 0
Clear.Position = UDim2.new(0.773291945, 0, 0.338842988, 0)
Clear.Size = UDim2.new(0, 66, 0, 57)
Clear.Font = Enum.Font.LuckiestGuy
Clear.Text = "clear"
Clear.TextColor3 = Color3.fromRGB(255, 0, 0)
Clear.TextSize = 14.000

UICorner_5.Parent = Clear

FEB.Name = "FEB"
FEB.Parent = c0OIerk3k_2
FEB.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
FEB.BackgroundTransparency = 1.000
FEB.BorderColor3 = Color3.fromRGB(0, 0, 0)
FEB.BorderSizePixel = 0
FEB.Position = UDim2.new(-0.00310549536, 0, 0.865013778, 0)
FEB.Size = UDim2.new(0, 117, 0, 25)
FEB.Font = Enum.Font.Unknown
FEB.Text = "Force FEBypass Enabled!"
FEB.TextColor3 = Color3.fromRGB(255, 0, 0)
FEB.TextSize = 14.000
FEB.TextXAlignment = Enum.TextXAlignment.Left

DEX.Name = "DEX"
DEX.Parent = c0OIerk3k_2
DEX.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
DEX.BorderColor3 = Color3.fromRGB(0, 0, 0)
DEX.BorderSizePixel = 0
DEX.Position = UDim2.new(0.773292005, 0, 0.528925598, 0)
DEX.Size = UDim2.new(0, 65, 0, 63)
DEX.Image = "rbxasset://textures/ui/GuiImagePlaceholder.png"

UICorner_6.Parent = DEX

RSPY.Name = "RSPY"
RSPY.Parent = c0OIerk3k_2
RSPY.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
RSPY.BorderColor3 = Color3.fromRGB(0, 0, 0)
RSPY.BorderSizePixel = 0
RSPY.Position = UDim2.new(0.773292005, 0, 0.741046846, 0)
RSPY.Size = UDim2.new(0, 65, 0, 63)
RSPY.Image = "rbxasset://textures/ui/GuiImagePlaceholder.png"

UICorner_7.Parent = RSPY

extra1.Name = "extra 1"
extra1.Parent = c0OIerk3k_2
extra1.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
extra1.BorderColor3 = Color3.fromRGB(0, 0, 0)
extra1.BorderSizePixel = 0
extra1.Position = UDim2.new(0.62732929, 0, 0.881542683, 0)
extra1.Size = UDim2.new(0, 39, 0, 34)
extra1.Image = "rbxasset://textures/ui/GuiImagePlaceholder.png"

UICorner_8.Parent = extra1

extra2.Name = "extra 2"
extra2.Parent = c0OIerk3k_2
extra2.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
extra2.BorderColor3 = Color3.fromRGB(0, 0, 0)
extra2.BorderSizePixel = 0
extra2.Position = UDim2.new(0.493788928, 0, 0.914600551, 0)
extra2.Size = UDim2.new(0, 33, 0, 22)
extra2.Image = "rbxasset://textures/ui/GuiImagePlaceholder.png"

UICorner_9.Parent = extra2

extra3.Name = "extra 3"
extra3.Parent = c0OIerk3k_2
extra3.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
extra3.BorderColor3 = Color3.fromRGB(0, 0, 0)
extra3.BorderSizePixel = 0
extra3.Position = UDim2.new(0.360248536, 0, 0.914600551, 0)
extra3.Size = UDim2.new(0, 33, 0, 22)
extra3.Image = "rbxasset://textures/ui/GuiImagePlaceholder.png"

UICorner_10.Parent = extra3

extra4.Name = "extra 4"
extra4.Parent = c0OIerk3k_2
extra4.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
extra4.BorderColor3 = Color3.fromRGB(0, 0, 0)
extra4.BorderSizePixel = 0
extra4.Position = UDim2.new(0.217391402, 0, 0.914600551, 0)
extra4.Size = UDim2.new(0, 33, 0, 22)
extra4.Image = "rbxasset://textures/ui/GuiImagePlaceholder.png"

UICorner_11.Parent = extra4

-- Scripts:

local function BSSTQYB_fake_script() -- Execute.FE Execute 
	local script = Instance.new('LocalScript', Execute)

	game:GetService("ReplicatedFirst"):RemoveDefaultLoadingScreen()
	
	game.Players.PlayerAdded:Connect(function(player)
		if game:GetService("Workspace").FilteringEnabled then
			player:SetAttribute("FilteringEnabled", true)
		end
	end)
end
coroutine.wrap(BSSTQYB_fake_script)()
local function WLEFBD_fake_script() -- Execute.Loadstring 
	local script = Instance.new('LocalScript', Execute)

	local button = script.Parent
	local textbox = script.Parent.Parent.TxtBox
	
	button.MouseButton1Click:Connect(function()
		loadstring(textbox.Text)()
	end)
end
coroutine.wrap(WLEFBD_fake_script)()
local function YNNRPBT_fake_script() -- Clear.Clear 
	local script = Instance.new('LocalScript', Clear)

	local button = script.Parent
	local textbox = script.Parent.Parent.TxtBox
	
	button.MouseButton1Click:Connect(function()
		textbox.Text = "Script Cleared!"
		wait(0.5)
		textbox.Text = ""
	end)
end
coroutine.wrap(YNNRPBT_fake_script)()
local function DFLVP_fake_script() -- c0OIerk3k_2.Force FE 
	local script = Instance.new('LocalScript', c0OIerk3k_2)

	game:GetService("ReplicatedFirst"):RemoveDefaultLoadingScreen()
	
	game.Players.PlayerAdded:Connect(function(player)
		if game:GetService("Workspace").FilteringEnabled then
			player:SetAttribute("FilteringEnabled", true)
		end
	end)
end
coroutine.wrap(DFLVP_fake_script)()
local function TYNNB_fake_script() -- c0OIerk3k_2.Smooth GUI Dragging 
	local script = Instance.new('LocalScript', c0OIerk3k_2)

	local UserInputService = game:GetService("UserInputService")
	local runService = (game:GetService("RunService"));
	
	local gui = script.Parent
	
	local dragging
	local dragInput
	local dragStart
	local startPos
	
	function Lerp(a, b, m)
		return a + (b - a) * m
	end;
	
	local lastMousePos
	local lastGoalPos
	local DRAG_SPEED = (8); -- // The speed of the UI darg.
	function Update(dt)
		if not (startPos) then return end;
		if not (dragging) and (lastGoalPos) then
			gui.Position = UDim2.new(startPos.X.Scale, Lerp(gui.Position.X.Offset, lastGoalPos.X.Offset, dt * DRAG_SPEED), startPos.Y.Scale, Lerp(gui.Position.Y.Offset, lastGoalPos.Y.Offset, dt * DRAG_SPEED))
			return 
		end;
	
		local delta = (lastMousePos - UserInputService:GetMouseLocation())
		local xGoal = (startPos.X.Offset - delta.X);
		local yGoal = (startPos.Y.Offset - delta.Y);
		lastGoalPos = UDim2.new(startPos.X.Scale, xGoal, startPos.Y.Scale, yGoal)
		gui.Position = UDim2.new(startPos.X.Scale, Lerp(gui.Position.X.Offset, xGoal, dt * DRAG_SPEED), startPos.Y.Scale, Lerp(gui.Position.Y.Offset, yGoal, dt * DRAG_SPEED))
	end;
	
	gui.InputBegan:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseButton1 or input.UserInputType == Enum.UserInputType.Touch then
			dragging = true
			dragStart = input.Position
			startPos = gui.Position
			lastMousePos = UserInputService:GetMouseLocation()
	
			input.Changed:Connect(function()
				if input.UserInputState == Enum.UserInputState.End then
					dragging = false
				end
			end)
		end
	end)
	
	gui.InputChanged:Connect(function(input)
		if input.UserInputType == Enum.UserInputType.MouseMovement or input.UserInputType == Enum.UserInputType.Touch then
			dragInput = input
		end
	end)
	
	runService.Heartbeat:Connect(Update)
end
coroutine.wrap(TYNNB_fake_script)()
