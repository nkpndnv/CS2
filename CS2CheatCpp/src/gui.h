#pragma once
#include <d3d11.h>
#include <dwmapi.h>
#include <windowsx.h>
#include <Windows.h>
#include <chrono>

namespace gui
{
	// imgui�ؼ�״̬
	inline bool exit = true;
	inline bool menuToggle = true;
	inline bool enableBoxEsp = false;// ����͸��
	inline bool enableBoneEsp = true;// ����͸��
	inline bool enableHealth = true;// ���Ѫ��
	inline bool enableAimbot = true;// ������ͷ
	inline bool enableAutoAttack = true;// ������ͷ����ǹ
	inline bool enableRcs = true; // ����������
	inline bool enableRadar = true;// �״�
	inline bool enableFlash = true; // ������
	inline bool enableBhop = true;// ����
	inline bool enableWeapon = true; // ��ʾ��ҵ�ǰ������
	inline bool enableTeamMode = true; // �Ŷ�ģʽ
	inline int fov = 0;// ��Ұ�Ƕ�
	inline float fovAimbot = 50.f; // fov����ԲȦ
	inline float fovAimbotColor[] = { 1.f, 1.f, 1.f, 1.f };
	inline int speed = 0;// ��ǰ�ٶ�
	inline int maxSpeed = 0;// ����ٶ�

	// win32api window��ر���
	inline HWND overlay = nullptr;
	inline WNDCLASSEXW windowClass = {};

	// directx��ر���
	inline DXGI_SWAP_CHAIN_DESC sd{};
	inline ID3D11Device* device{ nullptr };
	inline ID3D11DeviceContext* device_context{ nullptr };
	inline IDXGISwapChain* swap_chain{ nullptr };
	inline ID3D11RenderTargetView* render_target_view{ nullptr };
	inline D3D_FEATURE_LEVEL level{};

	// ���ڵĴ���������
	void CreateHWindow(
		const char* windowName,
		const char* className,
		HINSTANCE instance,
		INT cmd_show) noexcept;
	void DestroyHWindow() noexcept;

	// directx�豸�Ĵ���������
	bool CreateDevice() noexcept;
	void ResetDevice() noexcept;
	void DestroyDevice() noexcept;

	// ImGui�Ĵ���������
	void CreateImGui() noexcept;
	void DestroyImGui() noexcept;

	void BeginRender() noexcept;
	void EndRender() noexcept;
	void Render() noexcept;
}