#include "ps2_vu1_impl.inl"

template <>
VU1InterpreterAccess::StepResult VU1InterpreterAccess::fastBlock<0x390AE9C7C1A68D47ull, 0u>(VU1Interpreter &vu, Vu1FastCtx &ctx)
{
    uint64_t cyc = ctx.cycle;
    const uint64_t budget = ctx.budget;
    const uint8_t *const mem = ctx.mem;
    uint32_t epc = 0u;
    bool tk = false;
    (void)mem;
    switch (vu.m_state.pc)
    {
    case 0x0u: goto seg_0000;
    case 0x8u: goto pc_0008;
    case 0x10u: goto pc_0010;
    case 0x18u: goto pc_0018;
    case 0x20u: goto pc_0020;
    case 0x28u: goto pc_0028;
    case 0x30u: goto pc_0030;
    case 0x38u: goto pc_0038;
    case 0x40u: goto pc_0040;
    case 0x48u: goto pc_0048;
    case 0x50u: goto pc_0050;
    case 0x58u: goto pc_0058;
    case 0x60u: goto pc_0060;
    case 0x68u: goto pc_0068;
    case 0x70u: goto pc_0070;
    case 0x78u: goto pc_0078;
    case 0x80u: goto pc_0080;
    case 0x88u: goto pc_0088;
    case 0x90u: goto pc_0090;
    case 0x98u: goto pc_0098;
    case 0xA0u: goto pc_00A0;
    case 0xA8u: goto pc_00A8;
    case 0xB0u: goto seg_00B0;
    case 0xB8u: goto seg_00B8;
    case 0xC0u: goto pc_00C0;
    case 0xC8u: goto pc_00C8;
    case 0xD0u: goto pc_00D0;
    case 0xD8u: goto pc_00D8;
    case 0xE0u: goto pc_00E0;
    case 0xE8u: goto pc_00E8;
    case 0xF0u: goto pc_00F0;
    case 0xF8u: goto pc_00F8;
    case 0x100u: goto pc_0100;
    case 0x108u: goto pc_0108;
    case 0x110u: goto pc_0110;
    case 0x118u: goto pc_0118;
    case 0x120u: goto pc_0120;
    case 0x128u: goto pc_0128;
    case 0x130u: goto pc_0130;
    case 0x138u: goto pc_0138;
    case 0x140u: goto pc_0140;
    case 0x148u: goto pc_0148;
    case 0x150u: goto pc_0150;
    case 0x158u: goto pc_0158;
    case 0x160u: goto pc_0160;
    case 0x168u: goto pc_0168;
    case 0x170u: goto pc_0170;
    case 0x178u: goto pc_0178;
    case 0x180u: goto pc_0180;
    case 0x188u: goto pc_0188;
    case 0x190u: goto pc_0190;
    case 0x198u: goto pc_0198;
    case 0x1A0u: goto pc_01A0;
    case 0x1A8u: goto pc_01A8;
    case 0x1B0u: goto pc_01B0;
    case 0x1B8u: goto pc_01B8;
    case 0x1C0u: goto pc_01C0;
    case 0x1C8u: goto pc_01C8;
    case 0x1D0u: goto pc_01D0;
    case 0x1D8u: goto pc_01D8;
    case 0x1E0u: goto pc_01E0;
    case 0x1E8u: goto pc_01E8;
    case 0x1F0u: goto pc_01F0;
    case 0x1F8u: goto pc_01F8;
    case 0x200u: goto pc_0200;
    case 0x208u: goto pc_0208;
    case 0x210u: goto pc_0210;
    case 0x218u: goto pc_0218;
    case 0x220u: goto pc_0220;
    case 0x228u: goto pc_0228;
    case 0x230u: goto pc_0230;
    case 0x238u: goto pc_0238;
    case 0x240u: goto pc_0240;
    case 0x248u: goto pc_0248;
    case 0x250u: goto pc_0250;
    case 0x258u: goto pc_0258;
    case 0x260u: goto pc_0260;
    case 0x268u: goto pc_0268;
    case 0x270u: goto pc_0270;
    case 0x278u: goto pc_0278;
    case 0x280u: goto pc_0280;
    case 0x288u: goto pc_0288;
    case 0x290u: goto pc_0290;
    case 0x298u: goto pc_0298;
    case 0x2A0u: goto pc_02A0;
    case 0x2A8u: goto pc_02A8;
    case 0x2B0u: goto pc_02B0;
    case 0x2B8u: goto pc_02B8;
    case 0x2C0u: goto pc_02C0;
    case 0x2C8u: goto pc_02C8;
    case 0x2D0u: goto pc_02D0;
    case 0x2D8u: goto pc_02D8;
    case 0x2E0u: goto pc_02E0;
    case 0x2E8u: goto pc_02E8;
    case 0x2F0u: goto pc_02F0;
    case 0x2F8u: goto pc_02F8;
    case 0x300u: goto pc_0300;
    case 0x308u: goto pc_0308;
    case 0x310u: goto pc_0310;
    case 0x318u: goto pc_0318;
    case 0x320u: goto pc_0320;
    case 0x328u: goto pc_0328;
    case 0x330u: goto pc_0330;
    case 0x338u: goto pc_0338;
    case 0x340u: goto pc_0340;
    case 0x348u: goto pc_0348;
    case 0x350u: goto pc_0350;
    case 0x358u: goto pc_0358;
    case 0x360u: goto pc_0360;
    case 0x368u: goto pc_0368;
    case 0x370u: goto pc_0370;
    case 0x378u: goto pc_0378;
    case 0x380u: goto pc_0380;
    case 0x388u: goto pc_0388;
    case 0x390u: goto pc_0390;
    case 0x398u: goto pc_0398;
    case 0x3A0u: goto pc_03A0;
    case 0x3A8u: goto seg_03A8;
    case 0x3B0u: goto pc_03B0;
    case 0x3B8u: goto pc_03B8;
    case 0x3C0u: goto seg_03C0;
    case 0x3C8u: goto seg_03C8;
    case 0x3D0u: goto pc_03D0;
    case 0x3D8u: goto pc_03D8;
    case 0x3E0u: goto pc_03E0;
    case 0x3E8u: goto pc_03E8;
    case 0x3F0u: goto pc_03F0;
    case 0x3F8u: goto pc_03F8;
    default: return StepResult::Fallback;
    }
pc_0000:
        if (cyc >= budget) { epc = 0x0u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[0] + 192);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0008:
        if (cyc >= budget) { epc = 0x8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 1u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[1][0] = cyc + 4u;
            vu.m_vfReady[1][1] = cyc + 4u;
            vu.m_vfReady[1][2] = cyc + 4u;
            vu.m_vfReady[1][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0010:
        if (cyc >= budget) { epc = 0x10u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x10u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 2u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[2][0] = cyc + 4u;
            vu.m_vfReady[2][1] = cyc + 4u;
            vu.m_vfReady[2][2] = cyc + 4u;
            vu.m_vfReady[2][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0018:
        if (cyc >= budget) { epc = 0x18u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x18u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 3u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[3][0] = cyc + 4u;
            vu.m_vfReady[3][1] = cyc + 4u;
            vu.m_vfReady[3][2] = cyc + 4u;
            vu.m_vfReady[3][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0020:
        if (cyc >= budget) { epc = 0x20u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x20u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 4u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[4][0] = cyc + 4u;
            vu.m_vfReady[4][1] = cyc + 4u;
            vu.m_vfReady[4][2] = cyc + 4u;
            vu.m_vfReady[4][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0028:
        if (cyc >= budget) { epc = 0x28u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x28u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 9u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[9][0] = cyc + 4u;
            vu.m_vfReady[9][1] = cyc + 4u;
            vu.m_vfReady[9][2] = cyc + 4u;
            vu.m_vfReady[9][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0030:
        if (cyc >= budget) { epc = 0x30u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x30u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 10u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[10][0] = cyc + 4u;
            vu.m_vfReady[10][1] = cyc + 4u;
            vu.m_vfReady[10][2] = cyc + 4u;
            vu.m_vfReady[10][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0038:
        if (cyc >= budget) { epc = 0x38u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x38u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 11u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[11][0] = cyc + 4u;
            vu.m_vfReady[11][1] = cyc + 4u;
            vu.m_vfReady[11][2] = cyc + 4u;
            vu.m_vfReady[11][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0040:
        if (cyc >= budget) { epc = 0x40u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x40u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 12u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[12][0] = cyc + 4u;
            vu.m_vfReady[12][1] = cyc + 4u;
            vu.m_vfReady[12][2] = cyc + 4u;
            vu.m_vfReady[12][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0048:
        if (cyc >= budget) { epc = 0x48u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x48u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 25u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0050:
        if (cyc >= budget) { epc = 0x50u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x50u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 25u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0058:
        if (cyc >= budget) { epc = 0x58u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x58u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 25u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0060:
        if (cyc >= budget) { epc = 0x60u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x60u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 25u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0068:
        if (cyc >= budget) { epc = 0x68u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x68u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 25u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0070:
        if (cyc >= budget) { epc = 0x70u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x70u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 25u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0078:
        if (cyc >= budget) { epc = 0x78u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x78u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 25u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0080:
        if (cyc >= budget) { epc = 0x80u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x80u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[1], 0)); writeVf(vu, ctx, 25u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0088:
        if (cyc >= budget) { epc = 0x88u; goto exit_budget; }
        {
            vu.m_state.vi[9] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[0], 4) + 0u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 4u;
        }
        ++cyc;
pc_0090:
        if (cyc >= budget) { epc = 0x90u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[3];
            vu.m_state.vi[3] = static_cast<int16_t>(vu.m_state.vi[0] + 16384);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[3] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 3u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0098:
        if (cyc >= budget) { epc = 0x98u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x98u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[3];
            vu.m_state.vi[3] = static_cast<int16_t>(vu.m_state.vi[3] + 16384);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[3] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 3u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_00A0:
        if (cyc >= budget) { epc = 0xA0u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[0] + 32767);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_00A8:
        if (cyc >= budget) { epc = 0xA8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // end delay slot
        if (cyc >= budget) { epc = 0xB0u; vu.m_state.ebit = true; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = 0xB8u; goto exit_ended; }
pc_00B0:
        if (cyc >= budget) { epc = 0xB0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_00B8;
pc_00B8:
        if (cyc >= budget) { epc = 0xB8u; goto exit_budget; }
        {
            vu.m_state.vi[4] = static_cast<int16_t>(vu.m_state.top & 0x3FFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[4] = cyc + 1u;
        }
        ++cyc;
pc_00C0:
        if (cyc >= budget) { epc = 0xC0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xC0u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 0)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
        }
        ++cyc;
pc_00C8:
        if (cyc >= budget) { epc = 0xC8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xC8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[5];
            vu.m_state.vi[5] = static_cast<int16_t>(vu.m_state.vi[4] + 256);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[5] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 5u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_00D0:
        if (cyc >= budget) { epc = 0xD0u; goto exit_budget; }
        {
            vu.m_state.i = std::bit_cast<float>(0x437F0000u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_00D8:
        if (cyc >= budget) { epc = 0xD8u; goto exit_budget; }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, nv(ctx, 0u), iN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 14u, uv, uv, 0x1u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[14][3] = cyc + 4u;
        }
        ++cyc;
pc_00E0:
        if (cyc >= budget) { epc = 0xE0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_viReady[5]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xE0u; goto exit_budget; } } cyc = r; } }
        {
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[5], 0), _mm_loadu_ps(vu.m_state.vf[27]), 0xFu);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_00E8:
        if (cyc >= budget) { epc = 0xE8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_00F0:
        if (cyc >= budget) { epc = 0xF0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_00F8:
        if (cyc >= budget) { epc = 0xF8u; goto exit_budget; }
        {
            vu.m_state.i = std::bit_cast<float>(0x3C23D70Au);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0100:
        if (cyc >= budget) { epc = 0x100u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[5]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x100u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[6];
            vu.m_state.vi[6] = static_cast<int16_t>(vu.m_state.vi[5] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[6] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 6u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0108:
        if (cyc >= budget) { epc = 0x108u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x108u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[7] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[4], 0) + 0u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[7] = cyc + 4u;
        }
        ++cyc;
pc_0110:
        if (cyc >= budget) { epc = 0x110u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[7]); r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x110u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[7];
            vu.m_state.vi[7] = static_cast<int16_t>(vu.m_state.vi[8] & vu.m_state.vi[7]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[7] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 7u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0118:
        if (cyc >= budget) { epc = 0x118u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x118u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[4];
            vu.m_state.vi[4] = static_cast<int16_t>(vu.m_state.vi[4] + 2);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[4] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 4u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0120:
        if (cyc >= budget) { epc = 0x120u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x120u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 4)); writeVf(vu, ctx, 14u, lv, vnorm(lv), 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[14][0] = cyc + 4u;
            vu.m_vfReady[14][1] = cyc + 4u;
            vu.m_vfReady[14][2] = cyc + 4u;
        }
        ++cyc;
pc_0128:
        if (cyc >= budget) { epc = 0x128u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x128u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[11] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[4], 3) + 4u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 4u;
        }
        ++cyc;
pc_0130:
        if (cyc >= budget) { epc = 0x130u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x130u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[12] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[4], 3) + 8u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[12] = cyc + 4u;
        }
        ++cyc;
pc_0138:
        if (cyc >= budget) { epc = 0x138u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x138u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[13] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[4], 3) + 12u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[13] = cyc + 4u;
        }
        ++cyc;
pc_0140:
        if (cyc >= budget) { epc = 0x140u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_vfReady[14][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x140u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[14])); writeVf(vu, ctx, 14u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[14][0] = cyc + 4u;
            vu.m_vfReady[14][1] = cyc + 4u;
            vu.m_vfReady[14][2] = cyc + 4u;
        }
        ++cyc;
pc_0148:
        if (cyc >= budget) { epc = 0x148u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x148u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[11], 0)); writeVf(vu, ctx, 15u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[15][0] = cyc + 4u;
            vu.m_vfReady[15][1] = cyc + 4u;
            vu.m_vfReady[15][2] = cyc + 4u;
            vu.m_vfReady[15][3] = cyc + 4u;
        }
        ++cyc;
pc_0150:
        if (cyc >= budget) { epc = 0x150u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x150u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[11], 1)); writeVf(vu, ctx, 16u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[16][0] = cyc + 4u;
            vu.m_vfReady[16][1] = cyc + 4u;
            vu.m_vfReady[16][2] = cyc + 4u;
            vu.m_vfReady[16][3] = cyc + 4u;
        }
        ++cyc;
pc_0158:
        if (cyc >= budget) { epc = 0x158u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x158u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[11], 2)); writeVf(vu, ctx, 17u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[17][0] = cyc + 4u;
            vu.m_vfReady[17][1] = cyc + 4u;
            vu.m_vfReady[17][2] = cyc + 4u;
            vu.m_vfReady[17][3] = cyc + 4u;
        }
        ++cyc;
pc_0160:
        if (cyc >= budget) { epc = 0x160u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_vfReady[14][2]); r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x160u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, nv(ctx, 14u), iN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 14u, uv, uv, 0xEu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[11], 3)); writeVf(vu, ctx, 18u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[18][0] = cyc + 4u;
            vu.m_vfReady[18][1] = cyc + 4u;
            vu.m_vfReady[18][2] = cyc + 4u;
            vu.m_vfReady[18][3] = cyc + 4u;
            vu.m_vfReady[14][0] = cyc + 4u;
            vu.m_vfReady[14][1] = cyc + 4u;
            vu.m_vfReady[14][2] = cyc + 4u;
        }
        ++cyc;
pc_0168:
        if (cyc >= budget) { epc = 0x168u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[12]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x168u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[12], 0)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
        }
        ++cyc;
pc_0170:
        if (cyc >= budget) { epc = 0x170u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[13]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x170u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[13], 0)); writeVf(vu, ctx, 28u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[28][0] = cyc + 4u;
            vu.m_vfReady[28][1] = cyc + 4u;
            vu.m_vfReady[28][2] = cyc + 4u;
            vu.m_vfReady[28][3] = cyc + 4u;
        }
        ++cyc;
pc_0178:
        if (cyc >= budget) { epc = 0x178u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x178u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 0)); writeVf(vu, ctx, 5u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[5][0] = cyc + 4u;
            vu.m_vfReady[5][1] = cyc + 4u;
            vu.m_vfReady[5][2] = cyc + 4u;
            vu.m_vfReady[5][3] = cyc + 4u;
        }
        ++cyc;
pc_0180:
        if (cyc >= budget) { epc = 0x180u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x180u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 5)); writeVf(vu, ctx, 23u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
            vu.m_vfReady[23][3] = cyc + 4u;
        }
        ++cyc;
pc_0188:
        if (cyc >= budget) { epc = 0x188u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_vfReady[23][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x188u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[23])); writeVf(vu, ctx, 23u, uv, uv, 0xFu); }
            vu.m_state.i = std::bit_cast<float>(0x3C010204u);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
            vu.m_vfReady[23][3] = cyc + 4u;
        }
        ++cyc;
pc_0190:
        if (cyc >= budget) { epc = 0x190u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_vfReady[23][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x190u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 23u), iN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 23u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
            vu.m_vfReady[23][3] = cyc + 4u;
        }
        ++cyc;
pc_0198:
        if (cyc >= budget) { epc = 0x198u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[15][0]); r = rmax(r, vu.m_vfReady[15][1]); r = rmax(r, vu.m_vfReady[15][2]); r = rmax(r, vu.m_vfReady[15][3]); r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_viReady[12]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x198u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 15u), nbc(ctx, 14u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[12], 1)); writeVf(vu, ctx, 29u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
            vu.m_vfReady[29][1] = cyc + 4u;
            vu.m_vfReady[29][2] = cyc + 4u;
            vu.m_vfReady[29][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_01A0:
        if (cyc >= budget) { epc = 0x1A0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_viReady[13]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1A0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 27u), nbc(ctx, 14u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[13], 1)); writeVf(vu, ctx, 30u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
            vu.m_vfReady[30][1] = cyc + 4u;
            vu.m_vfReady[30][2] = cyc + 4u;
            vu.m_vfReady[30][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_01A8:
        if (cyc >= budget) { epc = 0x1A8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[28][0]); r = rmax(r, vu.m_vfReady[28][1]); r = rmax(r, vu.m_vfReady[28][2]); r = rmax(r, vu.m_vfReady[28][3]); r = rmax(r, vu.m_vfReady[14][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1A8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 28u), nbc(ctx, 14u, 2u), nacc(ctx), un); writeVf(vu, ctx, 15u, uv, uv, 0xFu); }
            vu.m_state.i = std::bit_cast<float>(0x3C23D70Au);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[15][0] = cyc + 4u;
            vu.m_vfReady[15][1] = cyc + 4u;
            vu.m_vfReady[15][2] = cyc + 4u;
            vu.m_vfReady[15][3] = cyc + 4u;
        }
        ++cyc;
pc_01B0:
        if (cyc >= budget) { epc = 0x1B0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[16][0]); r = rmax(r, vu.m_vfReady[16][1]); r = rmax(r, vu.m_vfReady[16][2]); r = rmax(r, vu.m_vfReady[16][3]); r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_viReady[12]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1B0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 16u), nbc(ctx, 14u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[12], 2)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_01B8:
        if (cyc >= budget) { epc = 0x1B8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); r = rmax(r, vu.m_vfReady[29][1]); r = rmax(r, vu.m_vfReady[29][2]); r = rmax(r, vu.m_vfReady[29][3]); r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_viReady[13]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1B8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 29u), nbc(ctx, 14u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[13], 2)); writeVf(vu, ctx, 28u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[28][0] = cyc + 4u;
            vu.m_vfReady[28][1] = cyc + 4u;
            vu.m_vfReady[28][2] = cyc + 4u;
            vu.m_vfReady[28][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_01C0:
        if (cyc >= budget) { epc = 0x1C0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[30][0]); r = rmax(r, vu.m_vfReady[30][1]); r = rmax(r, vu.m_vfReady[30][2]); r = rmax(r, vu.m_vfReady[30][3]); r = rmax(r, vu.m_vfReady[14][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1C0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 30u), nbc(ctx, 14u, 2u), nacc(ctx), un); writeVf(vu, ctx, 16u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[16][0] = cyc + 4u;
            vu.m_vfReady[16][1] = cyc + 4u;
            vu.m_vfReady[16][2] = cyc + 4u;
            vu.m_vfReady[16][3] = cyc + 4u;
        }
        ++cyc;
pc_01C8:
        if (cyc >= budget) { epc = 0x1C8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_viReady[12]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1C8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 17u), nbc(ctx, 14u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[12], 3)); writeVf(vu, ctx, 29u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
            vu.m_vfReady[29][1] = cyc + 4u;
            vu.m_vfReady[29][2] = cyc + 4u;
            vu.m_vfReady[29][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_01D0:
        if (cyc >= budget) { epc = 0x1D0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_viReady[13]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1D0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 27u), nbc(ctx, 14u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[13], 3)); writeVf(vu, ctx, 30u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
            vu.m_vfReady[30][1] = cyc + 4u;
            vu.m_vfReady[30][2] = cyc + 4u;
            vu.m_vfReady[30][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_01D8:
        if (cyc >= budget) { epc = 0x1D8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[28][0]); r = rmax(r, vu.m_vfReady[28][1]); r = rmax(r, vu.m_vfReady[28][2]); r = rmax(r, vu.m_vfReady[28][3]); r = rmax(r, vu.m_vfReady[14][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1D8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 28u), nbc(ctx, 14u, 2u), nacc(ctx), un); writeVf(vu, ctx, 17u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[17][0] = cyc + 4u;
            vu.m_vfReady[17][1] = cyc + 4u;
            vu.m_vfReady[17][2] = cyc + 4u;
            vu.m_vfReady[17][3] = cyc + 4u;
        }
        ++cyc;
pc_01E0:
        if (cyc >= budget) { epc = 0x1E0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[18][0]); r = rmax(r, vu.m_vfReady[18][1]); r = rmax(r, vu.m_vfReady[18][2]); r = rmax(r, vu.m_vfReady[18][3]); r = rmax(r, vu.m_vfReady[14][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1E0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 18u), nbc(ctx, 14u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_01E8:
        if (cyc >= budget) { epc = 0x1E8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); r = rmax(r, vu.m_vfReady[29][1]); r = rmax(r, vu.m_vfReady[29][2]); r = rmax(r, vu.m_vfReady[29][3]); r = rmax(r, vu.m_vfReady[14][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1E8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 29u), nbc(ctx, 14u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_01F0:
        if (cyc >= budget) { epc = 0x1F0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[30][0]); r = rmax(r, vu.m_vfReady[30][1]); r = rmax(r, vu.m_vfReady[30][2]); r = rmax(r, vu.m_vfReady[30][3]); r = rmax(r, vu.m_vfReady[14][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1F0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 30u), nbc(ctx, 14u, 2u), nacc(ctx), un); writeVf(vu, ctx, 18u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[18][0] = cyc + 4u;
            vu.m_vfReady[18][1] = cyc + 4u;
            vu.m_vfReady[18][2] = cyc + 4u;
            vu.m_vfReady[18][3] = cyc + 4u;
        }
        ++cyc;
pc_01F8:
        if (cyc >= budget) { epc = 0x1F8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[15][0]); r = rmax(r, vu.m_vfReady[15][1]); r = rmax(r, vu.m_vfReady[15][2]); r = rmax(r, vu.m_vfReady[15][3]); r = rmax(r, vu.m_vfReady[5][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1F8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 15u), nbc(ctx, 5u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0200:
        if (cyc >= budget) { epc = 0x200u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[16][0]); r = rmax(r, vu.m_vfReady[16][1]); r = rmax(r, vu.m_vfReady[16][2]); r = rmax(r, vu.m_vfReady[16][3]); r = rmax(r, vu.m_vfReady[5][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x200u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 16u), nbc(ctx, 5u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0208:
        if (cyc >= budget) { epc = 0x208u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); r = rmax(r, vu.m_vfReady[5][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x208u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 17u), nbc(ctx, 5u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 201)); writeVf(vu, ctx, 22u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[22][0] = cyc + 4u;
            vu.m_vfReady[22][1] = cyc + 4u;
            vu.m_vfReady[22][2] = cyc + 4u;
            vu.m_vfReady[22][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0210:
        if (cyc >= budget) { epc = 0x210u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[18][0]); r = rmax(r, vu.m_vfReady[18][1]); r = rmax(r, vu.m_vfReady[18][2]); r = rmax(r, vu.m_vfReady[18][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x210u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 18u), nbc(ctx, 0u, 3u), nacc(ctx), un); writeVf(vu, ctx, 5u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[5][0] = cyc + 4u;
            vu.m_vfReady[5][1] = cyc + 4u;
            vu.m_vfReady[5][2] = cyc + 4u;
            vu.m_vfReady[5][3] = cyc + 4u;
        }
        ++cyc;
pc_0218:
        if (cyc >= budget) { epc = 0x218u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[15][0]); r = rmax(r, vu.m_vfReady[15][1]); r = rmax(r, vu.m_vfReady[15][2]); r = rmax(r, vu.m_vfReady[23][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x218u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, nv(ctx, 15u), nbc(ctx, 23u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
        }
        ++cyc;
pc_0220:
        if (cyc >= budget) { epc = 0x220u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[16][0]); r = rmax(r, vu.m_vfReady[16][1]); r = rmax(r, vu.m_vfReady[16][2]); r = rmax(r, vu.m_vfReady[23][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x220u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xEu, nv(ctx, 16u), nbc(ctx, 23u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
        }
        ++cyc;
pc_0228:
        if (cyc >= budget) { epc = 0x228u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[23][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x228u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xEu, nv(ctx, 17u), nbc(ctx, 23u, 2u), nacc(ctx), un); writeVf(vu, ctx, 23u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
        }
        ++cyc;
pc_0230:
        if (cyc >= budget) { epc = 0x230u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0238:
        if (cyc >= budget) { epc = 0x238u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0240:
        if (cyc >= budget) { epc = 0x240u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0248:
        if (cyc >= budget) { epc = 0x248u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[1][0]); r = rmax(r, vu.m_vfReady[1][1]); r = rmax(r, vu.m_vfReady[1][2]); r = rmax(r, vu.m_vfReady[1][3]); r = rmax(r, vu.m_vfReady[5][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x248u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 1u), nbc(ctx, 5u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0250:
        if (cyc >= budget) { epc = 0x250u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[2][0]); r = rmax(r, vu.m_vfReady[2][1]); r = rmax(r, vu.m_vfReady[2][2]); r = rmax(r, vu.m_vfReady[2][3]); r = rmax(r, vu.m_vfReady[5][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x250u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 2u), nbc(ctx, 5u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0258:
        if (cyc >= budget) { epc = 0x258u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[3][0]); r = rmax(r, vu.m_vfReady[3][1]); r = rmax(r, vu.m_vfReady[3][2]); r = rmax(r, vu.m_vfReady[3][3]); r = rmax(r, vu.m_vfReady[5][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x258u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 3u), nbc(ctx, 5u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0260:
        if (cyc >= budget) { epc = 0x260u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[4][0]); r = rmax(r, vu.m_vfReady[4][1]); r = rmax(r, vu.m_vfReady[4][2]); r = rmax(r, vu.m_vfReady[4][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x260u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 4u), nbc(ctx, 0u, 3u), nacc(ctx), un); writeVf(vu, ctx, 26u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][0] = cyc + 4u;
            vu.m_vfReady[26][1] = cyc + 4u;
            vu.m_vfReady[26][2] = cyc + 4u;
            vu.m_vfReady[26][3] = cyc + 4u;
        }
        ++cyc;
pc_0268:
        if (cyc >= budget) { epc = 0x268u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[9][0]); r = rmax(r, vu.m_vfReady[9][1]); r = rmax(r, vu.m_vfReady[9][2]); r = rmax(r, vu.m_vfReady[9][3]); r = rmax(r, vu.m_vfReady[5][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x268u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 9u), nbc(ctx, 5u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0270:
        if (cyc >= budget) { epc = 0x270u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[10][0]); r = rmax(r, vu.m_vfReady[10][1]); r = rmax(r, vu.m_vfReady[10][2]); r = rmax(r, vu.m_vfReady[10][3]); r = rmax(r, vu.m_vfReady[5][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x270u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 10u), nbc(ctx, 5u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0278:
        if (cyc >= budget) { epc = 0x278u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[11][0]); r = rmax(r, vu.m_vfReady[11][1]); r = rmax(r, vu.m_vfReady[11][2]); r = rmax(r, vu.m_vfReady[11][3]); r = rmax(r, vu.m_vfReady[5][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x278u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 11u), nbc(ctx, 5u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0280:
        if (cyc >= budget) { epc = 0x280u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[12][0]); r = rmax(r, vu.m_vfReady[12][1]); r = rmax(r, vu.m_vfReady[12][2]); r = rmax(r, vu.m_vfReady[12][3]); r = rmax(r, vu.m_vfReady[26][3]); if (vu.m_fdiv.valid) r = rmax(r, vu.m_fdiv.readyCycle); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x280u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 12u), nbc(ctx, 0u, 3u), nacc(ctx), un); writeVf(vu, ctx, 13u, uv, uv, 0xFu); }
            divOp(vu, ctx, cyc, vu.m_state.vf[0][3], vu.m_state.vf[26][3]);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[13][0] = cyc + 4u;
            vu.m_vfReady[13][1] = cyc + 4u;
            vu.m_vfReady[13][2] = cyc + 4u;
            vu.m_vfReady[13][3] = cyc + 4u;
        }
        ++cyc;
pc_0288:
        if (cyc >= budget) { epc = 0x288u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0290:
        if (cyc >= budget) { epc = 0x290u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0298:
        if (cyc >= budget) { epc = 0x298u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_02A0:
        if (cyc >= budget) { epc = 0x2A0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_02A8:
        if (cyc >= budget) { epc = 0x2A8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_02B0:
        if (cyc >= budget) { epc = 0x2B0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_02B8:
        if (cyc >= budget) { epc = 0x2B8u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 200)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
        }
        ++cyc;
pc_02C0:
        if (cyc >= budget) { epc = 0x2C0u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 201)); writeVf(vu, ctx, 28u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[28][0] = cyc + 4u;
            vu.m_vfReady[28][1] = cyc + 4u;
            vu.m_vfReady[28][2] = cyc + 4u;
            vu.m_vfReady[28][3] = cyc + 4u;
        }
        ++cyc;
pc_02C8:
        if (cyc >= budget) { epc = 0x2C8u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 202)); writeVf(vu, ctx, 29u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
            vu.m_vfReady[29][1] = cyc + 4u;
            vu.m_vfReady[29][2] = cyc + 4u;
            vu.m_vfReady[29][3] = cyc + 4u;
        }
        ++cyc;
pc_02D0:
        if (cyc >= budget) { epc = 0x2D0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_vfReady[23][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2D0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 27u), nbc(ctx, 23u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_02D8:
        if (cyc >= budget) { epc = 0x2D8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[28][0]); r = rmax(r, vu.m_vfReady[28][1]); r = rmax(r, vu.m_vfReady[28][2]); r = rmax(r, vu.m_vfReady[28][3]); r = rmax(r, vu.m_vfReady[23][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2D8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 28u), nbc(ctx, 23u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_02E0:
        if (cyc >= budget) { epc = 0x2E0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); r = rmax(r, vu.m_vfReady[29][1]); r = rmax(r, vu.m_vfReady[29][2]); r = rmax(r, vu.m_vfReady[29][3]); r = rmax(r, vu.m_vfReady[23][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2E0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 29u), nbc(ctx, 23u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_02E8:
        if (cyc >= budget) { epc = 0x2E8u; goto exit_budget; }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 0u), nbc(ctx, 0u, 3u), nacc(ctx), un); writeVf(vu, ctx, 30u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
            vu.m_vfReady[30][1] = cyc + 4u;
            vu.m_vfReady[30][2] = cyc + 4u;
            vu.m_vfReady[30][3] = cyc + 4u;
        }
        ++cyc;
pc_02F0:
        if (cyc >= budget) { epc = 0x2F0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2F0u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 1)); writeVf(vu, ctx, 7u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
pc_02F8:
        if (cyc >= budget) { epc = 0x2F8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x2F8u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[7])); writeVf(vu, ctx, 7u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
pc_0300:
        if (cyc >= budget) { epc = 0x300u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 203)); writeVf(vu, ctx, 19u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[19][0] = cyc + 4u;
            vu.m_vfReady[19][1] = cyc + 4u;
            vu.m_vfReady[19][2] = cyc + 4u;
            vu.m_vfReady[19][3] = cyc + 4u;
        }
        ++cyc;
pc_0308:
        if (cyc >= budget) { epc = 0x308u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[19][0]); r = rmax(r, vu.m_vfReady[19][1]); r = rmax(r, vu.m_vfReady[19][2]); r = rmax(r, vu.m_vfReady[19][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x308u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 7u), nv(ctx, 19u), _mm_setzero_ps(), un); writeVf(vu, ctx, 7u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
pc_0310:
        if (cyc >= budget) { epc = 0x310u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[30][0]); r = rmax(r, vu.m_vfReady[30][1]); r = rmax(r, vu.m_vfReady[30][2]); r = rmax(r, vu.m_vfReady[30][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x310u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = _mm_max_ps(nv(ctx, 30u), nbc(ctx, 0u, 0u)); writeVf(vu, ctx, 30u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 204)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
            vu.m_vfReady[30][0] = cyc + 4u;
            vu.m_vfReady[30][1] = cyc + 4u;
            vu.m_vfReady[30][2] = cyc + 4u;
            vu.m_vfReady[30][3] = cyc + 4u;
        }
        ++cyc;
pc_0318:
        if (cyc >= budget) { epc = 0x318u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 205)); writeVf(vu, ctx, 28u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[28][0] = cyc + 4u;
            vu.m_vfReady[28][1] = cyc + 4u;
            vu.m_vfReady[28][2] = cyc + 4u;
            vu.m_vfReady[28][3] = cyc + 4u;
        }
        ++cyc;
pc_0320:
        if (cyc >= budget) { epc = 0x320u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 206)); writeVf(vu, ctx, 29u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
            vu.m_vfReady[29][1] = cyc + 4u;
            vu.m_vfReady[29][2] = cyc + 4u;
            vu.m_vfReady[29][3] = cyc + 4u;
        }
        ++cyc;
pc_0328:
        if (cyc >= budget) { epc = 0x328u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0330:
        if (cyc >= budget) { epc = 0x330u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_vfReady[30][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x330u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 27u), nbc(ctx, 30u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0338:
        if (cyc >= budget) { epc = 0x338u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[28][0]); r = rmax(r, vu.m_vfReady[28][1]); r = rmax(r, vu.m_vfReady[28][2]); r = rmax(r, vu.m_vfReady[28][3]); r = rmax(r, vu.m_vfReady[30][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x338u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 28u), nbc(ctx, 30u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0340:
        if (cyc >= budget) { epc = 0x340u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); r = rmax(r, vu.m_vfReady[29][1]); r = rmax(r, vu.m_vfReady[29][2]); r = rmax(r, vu.m_vfReady[29][3]); r = rmax(r, vu.m_vfReady[30][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x340u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 29u), nbc(ctx, 30u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0348:
        if (cyc >= budget) { epc = 0x348u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x348u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xEu, nv(ctx, 25u), nbc(ctx, 0u, 3u), nacc(ctx), un); writeVf(vu, ctx, 30u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
            vu.m_vfReady[30][1] = cyc + 4u;
            vu.m_vfReady[30][2] = cyc + 4u;
        }
        ++cyc;
pc_0350:
        if (cyc >= budget) { epc = 0x350u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[25][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x350u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, nv(ctx, 7u), nv(ctx, 25u), _mm_setzero_ps(), un); writeVf(vu, ctx, 7u, uv, uv, 0x1u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
pc_0358:
        if (cyc >= budget) { epc = 0x358u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0360:
        if (cyc >= budget) { epc = 0x360u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0368:
        if (cyc >= budget) { epc = 0x368u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[30][0]); r = rmax(r, vu.m_vfReady[30][1]); r = rmax(r, vu.m_vfReady[30][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x368u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, nv(ctx, 7u), nv(ctx, 30u), _mm_setzero_ps(), un); writeVf(vu, ctx, 7u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
        }
        ++cyc;
pc_0370:
        if (cyc >= budget) { epc = 0x370u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 208)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
        }
        ++cyc;
pc_0378:
        if (cyc >= budget) { epc = 0x378u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x378u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, nv(ctx, 23u), nv(ctx, 27u), _mm_setzero_ps(), un); writeVf(vu, ctx, 29u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
            vu.m_vfReady[29][1] = cyc + 4u;
            vu.m_vfReady[29][2] = cyc + 4u;
        }
        ++cyc;
pc_0380:
        if (cyc >= budget) { epc = 0x380u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); r = rmax(r, vu.m_vfReady[29][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x380u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0x8u, nv(ctx, 29u), nbc(ctx, 29u, 1u), _mm_setzero_ps(), un); writeVf(vu, ctx, 29u, uv, uv, 0x8u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
        }
        ++cyc;
pc_0388:
        if (cyc >= budget) { epc = 0x388u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); r = rmax(r, vu.m_vfReady[29][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x388u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0x8u, nv(ctx, 29u), nbc(ctx, 29u, 2u), _mm_setzero_ps(), un); writeVf(vu, ctx, 29u, uv, uv, 0x8u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
        }
        ++cyc;
pc_0390:
        if (cyc >= budget) { epc = 0x390u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x390u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = _mm_max_ps(nv(ctx, 29u), nbc(ctx, 0u, 0u)); writeVf(vu, ctx, 29u, uv, uv, 0x8u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
        }
        ++cyc;
pc_0398:
        if (cyc >= budget) { epc = 0x398u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x398u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = _mm_min_ps(nv(ctx, 29u), nbc(ctx, 0u, 3u)); writeVf(vu, ctx, 29u, uv, uv, 0x8u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
        }
        ++cyc;
pc_03A0:
        if (cyc >= budget) { epc = 0x3A0u; goto exit_budget; }
        {
            vu.m_state.vi[10] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[0], 210) + 0u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[10] = cyc + 4u;
        }
        ++cyc;
        goto seg_03A8;
pc_03A8:
        if (cyc >= budget) { epc = 0x3A8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x3A8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x8u, nv(ctx, 29u), nbc(ctx, 29u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 29u, uv, uv, 0x8u); }
            vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + -1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_03B0:
        if (cyc >= budget) { epc = 0x3B0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_03B8:
        if (cyc >= budget) { epc = 0x3B8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x3B8u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(10u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x3C0u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x3A8u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) goto seg_03A8;
        goto seg_03C8;
pc_03C0:
        if (cyc >= budget) { epc = 0x3C0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_03C8;
pc_03C8:
        if (cyc >= budget) { epc = 0x3C8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[29][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x3C8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, nv(ctx, 7u), nbc(ctx, 29u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 7u, uv, uv, 0x1u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
pc_03D0:
        if (cyc >= budget) { epc = 0x3D0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[14][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x3D0u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = _mm_min_ps(nv(ctx, 7u), nbc(ctx, 14u, 3u)); writeVf(vu, ctx, 7u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
pc_03D8:
        if (cyc >= budget) { epc = 0x3D8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x3D8u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = ftoi<0u>(nv(ctx, 7u)); writeVf(vu, ctx, 24u, uv, vnorm(uv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[24][0] = cyc + 4u;
            vu.m_vfReady[24][1] = cyc + 4u;
            vu.m_vfReady[24][2] = cyc + 4u;
            vu.m_vfReady[24][3] = cyc + 4u;
        }
        ++cyc;
pc_03E0:
        if (cyc >= budget) { epc = 0x3E0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x3E0u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[11] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[4], 9) + 4u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 4u;
        }
        ++cyc;
pc_03E8:
        if (cyc >= budget) { epc = 0x3E8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x3E8u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[12] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[4], 9) + 8u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[12] = cyc + 4u;
        }
        ++cyc;
pc_03F0:
        if (cyc >= budget) { epc = 0x3F0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x3F0u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[13] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[4], 9) + 12u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[13] = cyc + 4u;
        }
        ++cyc;
pc_03F8:
        if (cyc >= budget) { epc = 0x3F8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x3F8u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 10)); writeVf(vu, ctx, 14u, lv, vnorm(lv), 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[14][0] = cyc + 4u;
            vu.m_vfReady[14][1] = cyc + 4u;
            vu.m_vfReady[14][2] = cyc + 4u;
        }
        ++cyc;
        { epc = 0x400u; goto exit_continue; }
seg_0000:
        if (cyc + 26u > budget) goto pc_0000;
    {
        uint64_t s0000_0 = 0u, s0000_1 = 0u, s0000_2 = 0u, s0000_3 = 0u, s0000_4 = 0u, s0000_5 = 0u, s0000_6 = 0u, s0000_7 = 0u, s0000_8 = 0u, s0000_9 = 0u, s0000_10 = 0u, s0000_11 = 0u, s0000_12 = 0u, s0000_13 = 0u, s0000_14 = 0u, s0000_15 = 0u, s0000_16 = 0u, s0000_17 = 0u, s0000_18 = 0u, s0000_19 = 0u, s0000_20 = 0u, s0000_21 = 0u, s0000_22 = 0u;
        __m128 vr1 = _mm_loadu_ps(vu.m_state.vf[1]); __m128 vn1 = _mm_load_ps(ctx.norm[1]);
        __m128 vr2 = _mm_loadu_ps(vu.m_state.vf[2]); __m128 vn2 = _mm_load_ps(ctx.norm[2]);
        __m128 vr3 = _mm_loadu_ps(vu.m_state.vf[3]); __m128 vn3 = _mm_load_ps(ctx.norm[3]);
        __m128 vr4 = _mm_loadu_ps(vu.m_state.vf[4]); __m128 vn4 = _mm_load_ps(ctx.norm[4]);
        __m128 vr9 = _mm_loadu_ps(vu.m_state.vf[9]); __m128 vn9 = _mm_load_ps(ctx.norm[9]);
        __m128 vr10 = _mm_loadu_ps(vu.m_state.vf[10]); __m128 vn10 = _mm_load_ps(ctx.norm[10]);
        __m128 vr11 = _mm_loadu_ps(vu.m_state.vf[11]); __m128 vn11 = _mm_load_ps(ctx.norm[11]);
        __m128 vr12 = _mm_loadu_ps(vu.m_state.vf[12]); __m128 vn12 = _mm_load_ps(ctx.norm[12]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        // pc_0000
        s0000_0 = cyc;
        const int32_t bk0000_0 = vi1;
        {
            vi1 = static_cast<int16_t>(0 + 192);
        }
        ++cyc;
        // pc_0008
        s0000_1 = cyc;
        const int32_t bk0000_1 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[1], lv); vn1 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0010
        s0000_2 = cyc;
        const int32_t bk0000_2 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[2], lv); vn2 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0018
        s0000_3 = cyc;
        const int32_t bk0000_3 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[3], lv); vn3 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0020
        s0000_4 = cyc;
        const int32_t bk0000_4 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[4], lv); vn4 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0028
        s0000_5 = cyc;
        const int32_t bk0000_5 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[9], lv); vn9 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0030
        s0000_6 = cyc;
        const int32_t bk0000_6 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[10], lv); vn10 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0038
        s0000_7 = cyc;
        const int32_t bk0000_7 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[11], lv); vn11 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0040
        s0000_8 = cyc;
        const int32_t bk0000_8 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[12], lv); vn12 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0048
        s0000_9 = cyc;
        const int32_t bk0000_9 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[25], lv); vn25 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0050
        s0000_10 = cyc;
        const int32_t bk0000_10 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[25], lv); vn25 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0058
        s0000_11 = cyc;
        const int32_t bk0000_11 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[25], lv); vn25 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0060
        s0000_12 = cyc;
        const int32_t bk0000_12 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[25], lv); vn25 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0068
        s0000_13 = cyc;
        const int32_t bk0000_13 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[25], lv); vn25 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0070
        s0000_14 = cyc;
        const int32_t bk0000_14 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[25], lv); vn25 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0078
        s0000_15 = cyc;
        const int32_t bk0000_15 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[25], lv); vn25 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0080
        s0000_16 = cyc;
        const int32_t bk0000_16 = vi1;
        {
            { const __m128 lv = ldq(mem, qaddr(vi1, 0)); _mm_storeu_ps(vu.m_state.vf[25], lv); vn25 = vnorm(lv); }vi1 = static_cast<int16_t>(vi1 + 1);
        }
        ++cyc;
        // pc_0088
        s0000_17 = cyc;
        {
            vi9 = static_cast<int16_t>(ldw(mem, qaddr(0, 4) + 0u) & 0xFFFFu);
        }
        ++cyc;
        // pc_0090
        s0000_18 = cyc;
        const int32_t bk0000_18 = vi3;
        {
            vi3 = static_cast<int16_t>(0 + 16384);
        }
        ++cyc;
        // pc_0098
        s0000_19 = cyc;
        const int32_t bk0000_19 = vi3;
        {
            vi3 = static_cast<int16_t>(vi3 + 16384);
        }
        ++cyc;
        // pc_00A0
        s0000_20 = cyc;
        const int32_t bk0000_20 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 32767);
        }
        ++cyc;
        // pc_00A8
        s0000_21 = cyc;
        {
        }
        ++cyc;
        s0000_22 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[1], vn1);
 _mm_store_ps(ctx.norm[2], vn2);
 _mm_store_ps(ctx.norm[3], vn3);
 _mm_store_ps(ctx.norm[4], vn4);
 _mm_store_ps(ctx.norm[9], vn9);
 _mm_store_ps(ctx.norm[10], vn10);
 _mm_store_ps(ctx.norm[11], vn11);
 _mm_store_ps(ctx.norm[12], vn12);
 _mm_store_ps(ctx.norm[25], vn25);
        vu.m_state.vi[1] = vi1;
        vu.m_state.vi[3] = vi3;
        vu.m_state.vi[8] = vi8;
        vu.m_state.vi[9] = vi9;
        vu.m_viReady[8] = s0000_20 + 1u;
        vu.m_viBranchBackupValid = false;
        { epc = 0xB8u; goto exit_ended; }
    }
seg_00B0:
        if (cyc + 131u > budget) goto pc_00B0;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 58u) goto pc_00B0;
    {
        uint64_t s00B0_0 = 0u, s00B0_1 = 0u, s00B0_2 = 0u, s00B0_3 = 0u, s00B0_4 = 0u, s00B0_5 = 0u, s00B0_6 = 0u, s00B0_7 = 0u, s00B0_8 = 0u, s00B0_9 = 0u, s00B0_10 = 0u, s00B0_11 = 0u, s00B0_12 = 0u, s00B0_13 = 0u, s00B0_14 = 0u, s00B0_15 = 0u, s00B0_16 = 0u, s00B0_17 = 0u, s00B0_18 = 0u, s00B0_19 = 0u, s00B0_20 = 0u, s00B0_21 = 0u, s00B0_22 = 0u, s00B0_23 = 0u, s00B0_24 = 0u, s00B0_25 = 0u, s00B0_26 = 0u, s00B0_27 = 0u, s00B0_28 = 0u, s00B0_29 = 0u, s00B0_30 = 0u, s00B0_31 = 0u, s00B0_32 = 0u, s00B0_33 = 0u, s00B0_34 = 0u, s00B0_35 = 0u, s00B0_36 = 0u, s00B0_37 = 0u, s00B0_38 = 0u, s00B0_39 = 0u, s00B0_40 = 0u, s00B0_41 = 0u, s00B0_42 = 0u, s00B0_43 = 0u, s00B0_44 = 0u, s00B0_45 = 0u, s00B0_46 = 0u, s00B0_47 = 0u, s00B0_48 = 0u, s00B0_49 = 0u, s00B0_50 = 0u, s00B0_51 = 0u, s00B0_52 = 0u, s00B0_53 = 0u, s00B0_54 = 0u, s00B0_55 = 0u, s00B0_56 = 0u, s00B0_57 = 0u, s00B0_58 = 0u, s00B0_59 = 0u, s00B0_60 = 0u, s00B0_61 = 0u, s00B0_62 = 0u, s00B0_63 = 0u, s00B0_64 = 0u, s00B0_65 = 0u, s00B0_66 = 0u, s00B0_67 = 0u, s00B0_68 = 0u, s00B0_69 = 0u, s00B0_70 = 0u, s00B0_71 = 0u, s00B0_72 = 0u, s00B0_73 = 0u, s00B0_74 = 0u, s00B0_75 = 0u, s00B0_76 = 0u, s00B0_77 = 0u, s00B0_78 = 0u, s00B0_79 = 0u, s00B0_80 = 0u, s00B0_81 = 0u, s00B0_82 = 0u, s00B0_83 = 0u, s00B0_84 = 0u, s00B0_85 = 0u, s00B0_86 = 0u, s00B0_87 = 0u, s00B0_88 = 0u, s00B0_89 = 0u, s00B0_90 = 0u, s00B0_91 = 0u, s00B0_92 = 0u, s00B0_93 = 0u, s00B0_94 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr1 = _mm_loadu_ps(vu.m_state.vf[1]); __m128 vn1 = _mm_load_ps(ctx.norm[1]);
        __m128 vr2 = _mm_loadu_ps(vu.m_state.vf[2]); __m128 vn2 = _mm_load_ps(ctx.norm[2]);
        __m128 vr3 = _mm_loadu_ps(vu.m_state.vf[3]); __m128 vn3 = _mm_load_ps(ctx.norm[3]);
        __m128 vr4 = _mm_loadu_ps(vu.m_state.vf[4]); __m128 vn4 = _mm_load_ps(ctx.norm[4]);
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr7 = _mm_loadu_ps(vu.m_state.vf[7]); __m128 vn7 = _mm_load_ps(ctx.norm[7]);
        __m128 vr9 = _mm_loadu_ps(vu.m_state.vf[9]); __m128 vn9 = _mm_load_ps(ctx.norm[9]);
        __m128 vr10 = _mm_loadu_ps(vu.m_state.vf[10]); __m128 vn10 = _mm_load_ps(ctx.norm[10]);
        __m128 vr11 = _mm_loadu_ps(vu.m_state.vf[11]); __m128 vn11 = _mm_load_ps(ctx.norm[11]);
        __m128 vr12 = _mm_loadu_ps(vu.m_state.vf[12]); __m128 vn12 = _mm_load_ps(ctx.norm[12]);
        __m128 vr13 = _mm_loadu_ps(vu.m_state.vf[13]); __m128 vn13 = _mm_load_ps(ctx.norm[13]);
        __m128 vr14 = _mm_loadu_ps(vu.m_state.vf[14]); __m128 vn14 = _mm_load_ps(ctx.norm[14]);
        __m128 vr15 = _mm_loadu_ps(vu.m_state.vf[15]); __m128 vn15 = _mm_load_ps(ctx.norm[15]);
        __m128 vr16 = _mm_loadu_ps(vu.m_state.vf[16]); __m128 vn16 = _mm_load_ps(ctx.norm[16]);
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr18 = _mm_loadu_ps(vu.m_state.vf[18]); __m128 vn18 = _mm_load_ps(ctx.norm[18]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr28 = _mm_loadu_ps(vu.m_state.vf[28]); __m128 vn28 = _mm_load_ps(ctx.norm[28]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi5 = vu.m_state.vi[5];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        int32_t vi12 = vu.m_state.vi[12];
        int32_t vi13 = vu.m_state.vi[13];
        // pc_00B0
        s00B0_0 = cyc;
        {
        }
        ++cyc;
        // pc_00B8
        s00B0_1 = cyc;
        {
            vi4 = static_cast<int16_t>(vu.m_state.top & 0x3FFu);
        }
        ++cyc;
        // pc_00C0
        s00B0_2 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 0)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_00C8
        s00B0_3 = cyc;
        const int32_t bk00B0_3 = vi5;
        {
            vi5 = static_cast<int16_t>(vi4 + 256);
        }
        ++cyc;
        // pc_00D0
        s00B0_4 = cyc;
        {
            vu.m_state.i = std::bit_cast<float>(0x437F0000u);
        }
        ++cyc;
        // pc_00D8
        s00B0_5 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0x1u, kVf0(), iN(vu), _mm_setzero_ps(), un); vr14 = blendDest(vr14, uv, 0x1u); vn14 = blendDest(vn14, uv, 0x1u); }
        }
        ++cyc;
        // pc_00E0
        s00B0_6 = cyc;
        {
            stq(vu, ctx, cyc, qaddr(vi5, 0), _mm_loadu_ps(vu.m_state.vf[27]), 0xFu);
        }
        ++cyc;
        // pc_00E8
        s00B0_7 = cyc;
        {
        }
        ++cyc;
        // pc_00F0
        s00B0_8 = cyc;
        {
        }
        ++cyc;
        // pc_00F8
        s00B0_9 = cyc;
        {
            vu.m_state.i = std::bit_cast<float>(0x3C23D70Au);
        }
        ++cyc;
        // pc_0100
        s00B0_10 = cyc;
        const int32_t bk00B0_10 = vi6;
        {
            vi6 = static_cast<int16_t>(vi5 + 1);
        }
        ++cyc;
        // pc_0108
        s00B0_11 = cyc;
        {
            vi7 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 0) + 0u) & 0xFFFFu);
        }
        ++cyc;
        // pc_0110
        { uint64_t r = cyc; r = rmax(r, s00B0_11 + 4u); cyc = r; }
        s00B0_12 = cyc;
        const int32_t bk00B0_12 = vi7;
        {
            vi7 = static_cast<int16_t>(vi8 & vi7);
        }
        ++cyc;
        // pc_0118
        s00B0_13 = cyc;
        const int32_t bk00B0_13 = vi4;
        {
            vi4 = static_cast<int16_t>(vi4 + 2);
        }
        ++cyc;
        // pc_0120
        s00B0_14 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 4)); vr14 = blendDest(vr14, lv, 0xEu); vn14 = blendDest(vn14, vnorm(lv), 0xEu); }
        }
        ++cyc;
        // pc_0128
        s00B0_15 = cyc;
        {
            vi11 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 3) + 4u) & 0xFFFFu);
        }
        ++cyc;
        // pc_0130
        s00B0_16 = cyc;
        {
            vi12 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 3) + 8u) & 0xFFFFu);
        }
        ++cyc;
        // pc_0138
        s00B0_17 = cyc;
        {
            vi13 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 3) + 12u) & 0xFFFFu);
        }
        ++cyc;
        // pc_0140
        s00B0_18 = cyc;
        {
            { const __m128 uv = itof<0u>(vr14); vr14 = blendDest(vr14, uv, 0xEu); vn14 = blendDest(vn14, uv, 0xEu); }
        }
        ++cyc;
        // pc_0148
        s00B0_19 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi11, 0)); _mm_storeu_ps(vu.m_state.vf[15], lv); vn15 = vnorm(lv); }
        }
        ++cyc;
        // pc_0150
        s00B0_20 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi11, 1)); _mm_storeu_ps(vu.m_state.vf[16], lv); vn16 = vnorm(lv); }
        }
        ++cyc;
        // pc_0158
        s00B0_21 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi11, 2)); _mm_storeu_ps(vu.m_state.vf[17], lv); vn17 = vnorm(lv); }
        }
        ++cyc;
        // pc_0160
        s00B0_22 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xEu, vn14, iN(vu), _mm_setzero_ps(), un); vr14 = blendDest(vr14, uv, 0xEu); vn14 = blendDest(vn14, uv, 0xEu); }
            { const __m128 lv = ldq(mem, qaddr(vi11, 3)); _mm_storeu_ps(vu.m_state.vf[18], lv); vn18 = vnorm(lv); }
        }
        ++cyc;
        // pc_0168
        s00B0_23 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi12, 0)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0170
        s00B0_24 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi13, 0)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_0178
        s00B0_25 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 0)); _mm_storeu_ps(vu.m_state.vf[5], lv); vn5 = vnorm(lv); }
        }
        ++cyc;
        // pc_0180
        s00B0_26 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 5)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }
        }
        ++cyc;
        // pc_0188
        { uint64_t r = cyc; r = rmax(r, s00B0_26 + 4u); r = rmax(r, s00B0_26 + 4u); r = rmax(r, s00B0_26 + 4u); r = rmax(r, s00B0_26 + 4u); cyc = r; }
        s00B0_27 = cyc;
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[23])); vn23 = uv; }
            vu.m_state.i = std::bit_cast<float>(0x3C010204u);
        }
        ++cyc;
        // pc_0190
        { uint64_t r = cyc; r = rmax(r, s00B0_27 + 4u); r = rmax(r, s00B0_27 + 4u); r = rmax(r, s00B0_27 + 4u); r = rmax(r, s00B0_27 + 4u); cyc = r; }
        s00B0_28 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xFu, vn23, iN(vu), _mm_setzero_ps(), un); vn23 = uv; }
        }
        ++cyc;
        // pc_0198
        s00B0_29 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xFu, vn15, bcast<0u>(vn14), _mm_setzero_ps(), un); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi12, 1)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_01A0
        s00B0_30 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn27, bcast<1u>(vn14), vn32, un); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi13, 1)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_01A8
        s00B0_31 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<2u>(vn14), vn32, un); vn15 = uv; }
            vu.m_state.i = std::bit_cast<float>(0x3C23D70Au);
        }
        ++cyc;
        // pc_01B0
        s00B0_32 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xFu, vn16, bcast<0u>(vn14), _mm_setzero_ps(), un); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi12, 2)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_01B8
        s00B0_33 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<1u>(vn14), vn32, un); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi13, 2)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_01C0
        s00B0_34 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn30, bcast<2u>(vn14), vn32, un); vn16 = uv; }
        }
        ++cyc;
        // pc_01C8
        s00B0_35 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xFu, vn17, bcast<0u>(vn14), _mm_setzero_ps(), un); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi12, 3)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_01D0
        s00B0_36 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn27, bcast<1u>(vn14), vn32, un); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi13, 3)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_01D8
        s00B0_37 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<2u>(vn14), vn32, un); vn17 = uv; }
        }
        ++cyc;
        // pc_01E0
        s00B0_38 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xFu, vn18, bcast<0u>(vn14), _mm_setzero_ps(), un); vn32 = uv; }
        }
        ++cyc;
        // pc_01E8
        s00B0_39 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<1u>(vn14), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_01F0
        s00B0_40 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn30, bcast<2u>(vn14), vn32, un); vn18 = uv; }
        }
        ++cyc;
        // pc_01F8
        s00B0_41 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xFu, vn15, bcast<0u>(vn5), _mm_setzero_ps(), un); vn32 = uv; }
        }
        ++cyc;
        // pc_0200
        s00B0_42 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn16, bcast<1u>(vn5), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_0208
        s00B0_43 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn17, bcast<2u>(vn5), vn32, un); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 201)); _mm_storeu_ps(vu.m_state.vf[22], lv); vn22 = vnorm(lv); }
        }
        ++cyc;
        // pc_0210
        s00B0_44 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn18, bcast<3u>(kVf0()), vn32, un); vn5 = uv; }
        }
        ++cyc;
        // pc_0218
        s00B0_45 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xEu, vn15, bcast<0u>(vn23), _mm_setzero_ps(), un); vn32 = blendDest(vn32, uv, 0xEu); }
        }
        ++cyc;
        // pc_0220
        s00B0_46 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xEu, vn16, bcast<1u>(vn23), vn32, un); vn32 = blendDest(vn32, uv, 0xEu); }
        }
        ++cyc;
        // pc_0228
        s00B0_47 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xEu, vn17, bcast<2u>(vn23), vn32, un); vn23 = blendDest(vn23, uv, 0xEu); }
        }
        ++cyc;
        // pc_0230
        s00B0_48 = cyc;
        {
        }
        ++cyc;
        // pc_0238
        s00B0_49 = cyc;
        {
        }
        ++cyc;
        // pc_0240
        s00B0_50 = cyc;
        {
        }
        ++cyc;
        // pc_0248
        s00B0_51 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xFu, vn1, bcast<0u>(vn5), _mm_setzero_ps(), un); vn32 = uv; }
        }
        ++cyc;
        // pc_0250
        s00B0_52 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn2, bcast<1u>(vn5), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_0258
        s00B0_53 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn3, bcast<2u>(vn5), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_0260
        s00B0_54 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn4, bcast<3u>(kVf0()), vn32, un); vn26 = uv; }
        }
        ++cyc;
        // pc_0268
        s00B0_55 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xFu, vn9, bcast<0u>(vn5), _mm_setzero_ps(), un); vn32 = uv; }
        }
        ++cyc;
        // pc_0270
        s00B0_56 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn10, bcast<1u>(vn5), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_0278
        s00B0_57 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn11, bcast<2u>(vn5), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_0280
        s00B0_58 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn12, bcast<3u>(kVf0()), vn32, un); vn13 = uv; }
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vn26));
        }
        ++cyc;
        // pc_0288
        s00B0_59 = cyc;
        {
        }
        ++cyc;
        // pc_0290
        s00B0_60 = cyc;
        {
        }
        ++cyc;
        // pc_0298
        s00B0_61 = cyc;
        {
        }
        ++cyc;
        // pc_02A0
        s00B0_62 = cyc;
        {
        }
        ++cyc;
        // pc_02A8
        s00B0_63 = cyc;
        {
        }
        ++cyc;
        // pc_02B0
        s00B0_64 = cyc;
        {
        }
        ++cyc;
        // pc_02B8
        s00B0_65 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 200)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_02C0
        s00B0_66 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 201)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_02C8
        s00B0_67 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 202)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_02D0
        { uint64_t r = cyc; r = rmax(r, s00B0_65 + 4u); r = rmax(r, s00B0_65 + 4u); r = rmax(r, s00B0_65 + 4u); r = rmax(r, s00B0_65 + 4u); cyc = r; }
        s00B0_68 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xFu, vn27, bcast<0u>(vn23), _mm_setzero_ps(), un); vn32 = uv; }
        }
        ++cyc;
        // pc_02D8
        { uint64_t r = cyc; r = rmax(r, s00B0_66 + 4u); r = rmax(r, s00B0_66 + 4u); r = rmax(r, s00B0_66 + 4u); r = rmax(r, s00B0_66 + 4u); cyc = r; }
        s00B0_69 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<1u>(vn23), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_02E0
        { uint64_t r = cyc; r = rmax(r, s00B0_67 + 4u); r = rmax(r, s00B0_67 + 4u); r = rmax(r, s00B0_67 + 4u); r = rmax(r, s00B0_67 + 4u); cyc = r; }
        s00B0_70 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<2u>(vn23), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_02E8
        s00B0_71 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, kVf0(), bcast<3u>(kVf0()), vn32, un); vn30 = uv; }
        }
        ++cyc;
        // pc_02F0
        s00B0_72 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 1)); _mm_storeu_ps(vu.m_state.vf[7], lv); vn7 = vnorm(lv); }
        }
        ++cyc;
        // pc_02F8
        { uint64_t r = cyc; r = rmax(r, s00B0_72 + 4u); r = rmax(r, s00B0_72 + 4u); r = rmax(r, s00B0_72 + 4u); r = rmax(r, s00B0_72 + 4u); cyc = r; }
        s00B0_73 = cyc;
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[7])); vn7 = uv; }
        }
        ++cyc;
        // pc_0300
        s00B0_74 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 203)); _mm_storeu_ps(vu.m_state.vf[19], lv); vn19 = vnorm(lv); }
        }
        ++cyc;
        // pc_0308
        { uint64_t r = cyc; r = rmax(r, s00B0_73 + 4u); r = rmax(r, s00B0_73 + 4u); r = rmax(r, s00B0_73 + 4u); r = rmax(r, s00B0_73 + 4u); r = rmax(r, s00B0_74 + 4u); r = rmax(r, s00B0_74 + 4u); r = rmax(r, s00B0_74 + 4u); r = rmax(r, s00B0_74 + 4u); cyc = r; }
        s00B0_75 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xFu, vn7, vn19, _mm_setzero_ps(), un); vn7 = uv; }
        }
        ++cyc;
        // pc_0310
        s00B0_76 = cyc;
        {
            { const __m128 uv = _mm_max_ps(vn30, bcast<0u>(kVf0())); vn30 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 204)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0318
        s00B0_77 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 205)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_0320
        s00B0_78 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 206)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_0328
        s00B0_79 = cyc;
        {
        }
        ++cyc;
        // pc_0330
        s00B0_80 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xFu, vn27, bcast<0u>(vn30), _mm_setzero_ps(), un); vn32 = uv; }
        }
        ++cyc;
        // pc_0338
        s00B0_81 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<1u>(vn30), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_0340
        s00B0_82 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<2u>(vn30), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_0348
        s00B0_83 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Madd>(vu, ctx, cyc, 0xEu, vn25, bcast<3u>(kVf0()), vn32, un); vn30 = blendDest(vn30, uv, 0xEu); }
        }
        ++cyc;
        // pc_0350
        s00B0_84 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0x1u, vn7, vn25, _mm_setzero_ps(), un); vn7 = blendDest(vn7, uv, 0x1u); }
        }
        ++cyc;
        // pc_0358
        s00B0_85 = cyc;
        {
        }
        ++cyc;
        // pc_0360
        s00B0_86 = cyc;
        {
        }
        ++cyc;
        // pc_0368
        s00B0_87 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xEu, vn7, vn30, _mm_setzero_ps(), un); vn7 = blendDest(vn7, uv, 0xEu); }
        }
        ++cyc;
        // pc_0370
        s00B0_88 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 208)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0378
        { uint64_t r = cyc; r = rmax(r, s00B0_88 + 4u); r = rmax(r, s00B0_88 + 4u); r = rmax(r, s00B0_88 + 4u); cyc = r; }
        s00B0_89 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Mul>(vu, ctx, cyc, 0xEu, vn23, vn27, _mm_setzero_ps(), un); vr29 = blendDest(_mm_loadu_ps(vu.m_state.vf[29]), uv, 0xEu); vn29 = blendDest(vn29, uv, 0xEu); }
        }
        ++cyc;
        // pc_0380
        { uint64_t r = cyc; r = rmax(r, s00B0_89 + 4u); r = rmax(r, s00B0_89 + 4u); cyc = r; }
        s00B0_90 = cyc;
        {
            { __m128 un; const __m128 uv = fmacFastN<FK::Add>(vu, ctx, cyc, 0x8u, vn29, bcast<1u>(vn29), _mm_setzero_ps(), un); vr29 = blendDest(vr29, uv, 0x8u); vn29 = blendDest(vn29, uv, 0x8u); }
        }
        ++cyc;
        // pc_0388
        { uint64_t r = cyc; r = rmax(r, s00B0_90 + 4u); r = rmax(r, s00B0_89 + 4u); cyc = r; }
        s00B0_91 = cyc;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Add>(vu, ctx, cyc, 0x8u, vn29, bcast<2u>(vn29), _mm_setzero_ps(), un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vr29 = blendDest(vr29, uv, 0x8u); vn29 = blendDest(vn29, uv, 0x8u); }
        }
        ++cyc;
        // pc_0390
        { uint64_t r = cyc; r = rmax(r, s00B0_91 + 4u); cyc = r; }
        s00B0_92 = cyc;
        {
            { const __m128 uv = _mm_max_ps(vn29, bcast<0u>(kVf0())); vr29 = blendDest(vr29, uv, 0x8u); vn29 = blendDest(vn29, uv, 0x8u); }
        }
        ++cyc;
        // pc_0398
        { uint64_t r = cyc; r = rmax(r, s00B0_92 + 4u); cyc = r; }
        s00B0_93 = cyc;
        {
            { const __m128 uv = _mm_min_ps(vn29, bcast<3u>(kVf0())); vr29 = blendDest(vr29, uv, 0x8u); vn29 = blendDest(vn29, uv, 0x8u); }
        }
        ++cyc;
        // pc_03A0
        s00B0_94 = cyc;
        {
            vi10 = static_cast<int16_t>(ldw(mem, qaddr(0, 210) + 0u) & 0xFFFFu);
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[5], vn5); _mm_store_ps(ctx.norm[5], vn5);
        _mm_storeu_ps(vu.m_state.vf[7], vn7); _mm_store_ps(ctx.norm[7], vn7);
        _mm_storeu_ps(vu.m_state.vf[13], vn13); _mm_store_ps(ctx.norm[13], vn13);
        _mm_storeu_ps(vu.m_state.vf[14], vr14); _mm_store_ps(ctx.norm[14], vn14);
        _mm_storeu_ps(vu.m_state.vf[15], vn15); _mm_store_ps(ctx.norm[15], vn15);
        _mm_storeu_ps(vu.m_state.vf[16], vn16); _mm_store_ps(ctx.norm[16], vn16);
        _mm_storeu_ps(vu.m_state.vf[17], vn17); _mm_store_ps(ctx.norm[17], vn17);
        _mm_storeu_ps(vu.m_state.vf[18], vn18); _mm_store_ps(ctx.norm[18], vn18);
 _mm_store_ps(ctx.norm[19], vn19);
 _mm_store_ps(ctx.norm[22], vn22);
        _mm_storeu_ps(vu.m_state.vf[23], vn23); _mm_store_ps(ctx.norm[23], vn23);
        _mm_storeu_ps(vu.m_state.vf[26], vn26); _mm_store_ps(ctx.norm[26], vn26);
 _mm_store_ps(ctx.norm[27], vn27);
 _mm_store_ps(ctx.norm[28], vn28);
        _mm_storeu_ps(vu.m_state.vf[29], vr29); _mm_store_ps(ctx.norm[29], vn29);
        _mm_storeu_ps(vu.m_state.vf[30], vn30); _mm_store_ps(ctx.norm[30], vn30);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[4] = vi4;
        vu.m_state.vi[5] = vi5;
        vu.m_state.vi[6] = vi6;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        vu.m_state.vi[12] = vi12;
        vu.m_state.vi[13] = vi13;
        vu.m_vfReady[29][0] = s00B0_93 + 4u;
        vu.m_viReady[10] = s00B0_94 + 4u;
        vu.m_viBranchBackupValid = false;
        goto seg_03A8;
    }
seg_00B8:
        if (cyc + 130u > budget) goto pc_00B8;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 57u) goto pc_00B8;
    {
        uint64_t s00B8_0 = 0u, s00B8_1 = 0u, s00B8_2 = 0u, s00B8_3 = 0u, s00B8_4 = 0u, s00B8_5 = 0u, s00B8_6 = 0u, s00B8_7 = 0u, s00B8_8 = 0u, s00B8_9 = 0u, s00B8_10 = 0u, s00B8_11 = 0u, s00B8_12 = 0u, s00B8_13 = 0u, s00B8_14 = 0u, s00B8_15 = 0u, s00B8_16 = 0u, s00B8_17 = 0u, s00B8_18 = 0u, s00B8_19 = 0u, s00B8_20 = 0u, s00B8_21 = 0u, s00B8_22 = 0u, s00B8_23 = 0u, s00B8_24 = 0u, s00B8_25 = 0u, s00B8_26 = 0u, s00B8_27 = 0u, s00B8_28 = 0u, s00B8_29 = 0u, s00B8_30 = 0u, s00B8_31 = 0u, s00B8_32 = 0u, s00B8_33 = 0u, s00B8_34 = 0u, s00B8_35 = 0u, s00B8_36 = 0u, s00B8_37 = 0u, s00B8_38 = 0u, s00B8_39 = 0u, s00B8_40 = 0u, s00B8_41 = 0u, s00B8_42 = 0u, s00B8_43 = 0u, s00B8_44 = 0u, s00B8_45 = 0u, s00B8_46 = 0u, s00B8_47 = 0u, s00B8_48 = 0u, s00B8_49 = 0u, s00B8_50 = 0u, s00B8_51 = 0u, s00B8_52 = 0u, s00B8_53 = 0u, s00B8_54 = 0u, s00B8_55 = 0u, s00B8_56 = 0u, s00B8_57 = 0u, s00B8_58 = 0u, s00B8_59 = 0u, s00B8_60 = 0u, s00B8_61 = 0u, s00B8_62 = 0u, s00B8_63 = 0u, s00B8_64 = 0u, s00B8_65 = 0u, s00B8_66 = 0u, s00B8_67 = 0u, s00B8_68 = 0u, s00B8_69 = 0u, s00B8_70 = 0u, s00B8_71 = 0u, s00B8_72 = 0u, s00B8_73 = 0u, s00B8_74 = 0u, s00B8_75 = 0u, s00B8_76 = 0u, s00B8_77 = 0u, s00B8_78 = 0u, s00B8_79 = 0u, s00B8_80 = 0u, s00B8_81 = 0u, s00B8_82 = 0u, s00B8_83 = 0u, s00B8_84 = 0u, s00B8_85 = 0u, s00B8_86 = 0u, s00B8_87 = 0u, s00B8_88 = 0u, s00B8_89 = 0u, s00B8_90 = 0u, s00B8_91 = 0u, s00B8_92 = 0u, s00B8_93 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr1 = _mm_loadu_ps(vu.m_state.vf[1]); __m128 vn1 = _mm_load_ps(ctx.norm[1]);
        __m128 vr2 = _mm_loadu_ps(vu.m_state.vf[2]); __m128 vn2 = _mm_load_ps(ctx.norm[2]);
        __m128 vr3 = _mm_loadu_ps(vu.m_state.vf[3]); __m128 vn3 = _mm_load_ps(ctx.norm[3]);
        __m128 vr4 = _mm_loadu_ps(vu.m_state.vf[4]); __m128 vn4 = _mm_load_ps(ctx.norm[4]);
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr7 = _mm_loadu_ps(vu.m_state.vf[7]); __m128 vn7 = _mm_load_ps(ctx.norm[7]);
        __m128 vr9 = _mm_loadu_ps(vu.m_state.vf[9]); __m128 vn9 = _mm_load_ps(ctx.norm[9]);
        __m128 vr10 = _mm_loadu_ps(vu.m_state.vf[10]); __m128 vn10 = _mm_load_ps(ctx.norm[10]);
        __m128 vr11 = _mm_loadu_ps(vu.m_state.vf[11]); __m128 vn11 = _mm_load_ps(ctx.norm[11]);
        __m128 vr12 = _mm_loadu_ps(vu.m_state.vf[12]); __m128 vn12 = _mm_load_ps(ctx.norm[12]);
        __m128 vr13 = _mm_loadu_ps(vu.m_state.vf[13]); __m128 vn13 = _mm_load_ps(ctx.norm[13]);
        __m128 vr14 = _mm_loadu_ps(vu.m_state.vf[14]); __m128 vn14 = _mm_load_ps(ctx.norm[14]);
        __m128 vr15 = _mm_loadu_ps(vu.m_state.vf[15]); __m128 vn15 = _mm_load_ps(ctx.norm[15]);
        __m128 vr16 = _mm_loadu_ps(vu.m_state.vf[16]); __m128 vn16 = _mm_load_ps(ctx.norm[16]);
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr18 = _mm_loadu_ps(vu.m_state.vf[18]); __m128 vn18 = _mm_load_ps(ctx.norm[18]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr28 = _mm_loadu_ps(vu.m_state.vf[28]); __m128 vn28 = _mm_load_ps(ctx.norm[28]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi5 = vu.m_state.vi[5];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        int32_t vi12 = vu.m_state.vi[12];
        int32_t vi13 = vu.m_state.vi[13];
        // pc_00B8
        s00B8_0 = cyc;
        {
            vi4 = static_cast<int16_t>(vu.m_state.top & 0x3FFu);
        }
        ++cyc;
        // pc_00C0
        s00B8_1 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 0)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_00C8
        s00B8_2 = cyc;
        const int32_t bk00B8_2 = vi5;
        {
            vi5 = static_cast<int16_t>(vi4 + 256);
        }
        ++cyc;
        // pc_00D0
        s00B8_3 = cyc;
        {
            vu.m_state.i = std::bit_cast<float>(0x437F0000u);
        }
        ++cyc;
        // pc_00D8
        s00B8_4 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0x1u, kVf0(), iN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr14 = blendDest(vr14, uv, 0x1u); vn14 = blendDest(vn14, uv, 0x1u); }
        }
        ++cyc;
        // pc_00E0
        s00B8_5 = cyc;
        {
            stq(vu, ctx, cyc, qaddr(vi5, 0), _mm_loadu_ps(vu.m_state.vf[27]), 0xFu);
        }
        ++cyc;
        // pc_00E8
        s00B8_6 = cyc;
        {
        }
        ++cyc;
        // pc_00F0
        s00B8_7 = cyc;
        {
        }
        ++cyc;
        // pc_00F8
        s00B8_8 = cyc;
        {
            vu.m_state.i = std::bit_cast<float>(0x3C23D70Au);
        }
        ++cyc;
        // pc_0100
        s00B8_9 = cyc;
        const int32_t bk00B8_9 = vi6;
        {
            vi6 = static_cast<int16_t>(vi5 + 1);
        }
        ++cyc;
        // pc_0108
        s00B8_10 = cyc;
        {
            vi7 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 0) + 0u) & 0xFFFFu);
        }
        ++cyc;
        // pc_0110
        { uint64_t r = cyc; r = rmax(r, s00B8_10 + 4u); cyc = r; }
        s00B8_11 = cyc;
        const int32_t bk00B8_11 = vi7;
        {
            vi7 = static_cast<int16_t>(vi8 & vi7);
        }
        ++cyc;
        // pc_0118
        s00B8_12 = cyc;
        const int32_t bk00B8_12 = vi4;
        {
            vi4 = static_cast<int16_t>(vi4 + 2);
        }
        ++cyc;
        // pc_0120
        s00B8_13 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 4)); vr14 = blendDest(vr14, lv, 0xEu); vn14 = blendDest(vn14, vnorm(lv), 0xEu); }
        }
        ++cyc;
        // pc_0128
        s00B8_14 = cyc;
        {
            vi11 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 3) + 4u) & 0xFFFFu);
        }
        ++cyc;
        // pc_0130
        s00B8_15 = cyc;
        {
            vi12 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 3) + 8u) & 0xFFFFu);
        }
        ++cyc;
        // pc_0138
        s00B8_16 = cyc;
        {
            vi13 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 3) + 12u) & 0xFFFFu);
        }
        ++cyc;
        // pc_0140
        s00B8_17 = cyc;
        {
            { const __m128 uv = itof<0u>(vr14); vr14 = blendDest(vr14, uv, 0xEu); vn14 = blendDest(vn14, uv, 0xEu); }
        }
        ++cyc;
        // pc_0148
        s00B8_18 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi11, 0)); _mm_storeu_ps(vu.m_state.vf[15], lv); vn15 = vnorm(lv); }
        }
        ++cyc;
        // pc_0150
        s00B8_19 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi11, 1)); _mm_storeu_ps(vu.m_state.vf[16], lv); vn16 = vnorm(lv); }
        }
        ++cyc;
        // pc_0158
        s00B8_20 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi11, 2)); _mm_storeu_ps(vu.m_state.vf[17], lv); vn17 = vnorm(lv); }
        }
        ++cyc;
        // pc_0160
        s00B8_21 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn14, iN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr14 = blendDest(vr14, uv, 0xEu); vn14 = blendDest(vn14, uv, 0xEu); }
            { const __m128 lv = ldq(mem, qaddr(vi11, 3)); _mm_storeu_ps(vu.m_state.vf[18], lv); vn18 = vnorm(lv); }
        }
        ++cyc;
        // pc_0168
        s00B8_22 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi12, 0)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0170
        s00B8_23 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi13, 0)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_0178
        s00B8_24 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 0)); _mm_storeu_ps(vu.m_state.vf[5], lv); vn5 = vnorm(lv); }
        }
        ++cyc;
        // pc_0180
        s00B8_25 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 5)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }
        }
        ++cyc;
        // pc_0188
        { uint64_t r = cyc; r = rmax(r, s00B8_25 + 4u); r = rmax(r, s00B8_25 + 4u); r = rmax(r, s00B8_25 + 4u); r = rmax(r, s00B8_25 + 4u); cyc = r; }
        s00B8_26 = cyc;
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[23])); vn23 = uv; }
            vu.m_state.i = std::bit_cast<float>(0x3C010204u);
        }
        ++cyc;
        // pc_0190
        { uint64_t r = cyc; r = rmax(r, s00B8_26 + 4u); r = rmax(r, s00B8_26 + 4u); r = rmax(r, s00B8_26 + 4u); r = rmax(r, s00B8_26 + 4u); cyc = r; }
        s00B8_27 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn23, iN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn23 = uv; }
        }
        ++cyc;
        // pc_0198
        s00B8_28 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn15, bcast<0u>(vn14), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi12, 1)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_01A0
        s00B8_29 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn27, bcast<1u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi13, 1)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_01A8
        s00B8_30 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<2u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn15 = uv; }
            vu.m_state.i = std::bit_cast<float>(0x3C23D70Au);
        }
        ++cyc;
        // pc_01B0
        s00B8_31 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn16, bcast<0u>(vn14), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi12, 2)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_01B8
        s00B8_32 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<1u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi13, 2)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_01C0
        s00B8_33 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn30, bcast<2u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn16 = uv; }
        }
        ++cyc;
        // pc_01C8
        s00B8_34 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn17, bcast<0u>(vn14), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi12, 3)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_01D0
        s00B8_35 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn27, bcast<1u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi13, 3)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_01D8
        s00B8_36 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<2u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn17 = uv; }
        }
        ++cyc;
        // pc_01E0
        s00B8_37 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn18, bcast<0u>(vn14), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_01E8
        s00B8_38 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<1u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_01F0
        s00B8_39 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn30, bcast<2u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn18 = uv; }
        }
        ++cyc;
        // pc_01F8
        s00B8_40 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn15, bcast<0u>(vn5), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0200
        s00B8_41 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn16, bcast<1u>(vn5), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0208
        s00B8_42 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn17, bcast<2u>(vn5), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 201)); _mm_storeu_ps(vu.m_state.vf[22], lv); vn22 = vnorm(lv); }
        }
        ++cyc;
        // pc_0210
        s00B8_43 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn18, bcast<3u>(kVf0()), vn32, un, fAccZ, fAccS, fAccScalar); vn5 = uv; }
        }
        ++cyc;
        // pc_0218
        s00B8_44 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn15, bcast<0u>(vn23), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = blendDest(vn32, uv, 0xEu); }
        }
        ++cyc;
        // pc_0220
        s00B8_45 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xEu, vn16, bcast<1u>(vn23), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = blendDest(vn32, uv, 0xEu); }
        }
        ++cyc;
        // pc_0228
        s00B8_46 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xEu, vn17, bcast<2u>(vn23), vn32, un, fAccZ, fAccS, fAccScalar); vn23 = blendDest(vn23, uv, 0xEu); }
        }
        ++cyc;
        // pc_0230
        s00B8_47 = cyc;
        {
        }
        ++cyc;
        // pc_0238
        s00B8_48 = cyc;
        {
        }
        ++cyc;
        // pc_0240
        s00B8_49 = cyc;
        {
        }
        ++cyc;
        // pc_0248
        s00B8_50 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn1, bcast<0u>(vn5), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0250
        s00B8_51 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn2, bcast<1u>(vn5), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0258
        s00B8_52 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn3, bcast<2u>(vn5), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0260
        s00B8_53 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn4, bcast<3u>(kVf0()), vn32, un, fAccZ, fAccS, fAccScalar); vn26 = uv; }
        }
        ++cyc;
        // pc_0268
        s00B8_54 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn9, bcast<0u>(vn5), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0270
        s00B8_55 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn10, bcast<1u>(vn5), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0278
        s00B8_56 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn11, bcast<2u>(vn5), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0280
        s00B8_57 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn12, bcast<3u>(kVf0()), vn32, un, fAccZ, fAccS, fAccScalar); vn13 = uv; }
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vn26));
        }
        ++cyc;
        // pc_0288
        s00B8_58 = cyc;
        {
        }
        ++cyc;
        // pc_0290
        s00B8_59 = cyc;
        {
        }
        ++cyc;
        // pc_0298
        s00B8_60 = cyc;
        {
        }
        ++cyc;
        // pc_02A0
        s00B8_61 = cyc;
        {
        }
        ++cyc;
        // pc_02A8
        s00B8_62 = cyc;
        {
        }
        ++cyc;
        // pc_02B0
        s00B8_63 = cyc;
        {
        }
        ++cyc;
        // pc_02B8
        s00B8_64 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 200)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_02C0
        s00B8_65 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 201)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_02C8
        s00B8_66 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 202)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_02D0
        { uint64_t r = cyc; r = rmax(r, s00B8_64 + 4u); r = rmax(r, s00B8_64 + 4u); r = rmax(r, s00B8_64 + 4u); r = rmax(r, s00B8_64 + 4u); cyc = r; }
        s00B8_67 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn27, bcast<0u>(vn23), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_02D8
        { uint64_t r = cyc; r = rmax(r, s00B8_65 + 4u); r = rmax(r, s00B8_65 + 4u); r = rmax(r, s00B8_65 + 4u); r = rmax(r, s00B8_65 + 4u); cyc = r; }
        s00B8_68 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<1u>(vn23), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_02E0
        { uint64_t r = cyc; r = rmax(r, s00B8_66 + 4u); r = rmax(r, s00B8_66 + 4u); r = rmax(r, s00B8_66 + 4u); r = rmax(r, s00B8_66 + 4u); cyc = r; }
        s00B8_69 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<2u>(vn23), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_02E8
        s00B8_70 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, kVf0(), bcast<3u>(kVf0()), vn32, un, fAccZ, fAccS, fAccScalar); vn30 = uv; }
        }
        ++cyc;
        // pc_02F0
        s00B8_71 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 1)); _mm_storeu_ps(vu.m_state.vf[7], lv); vn7 = vnorm(lv); }
        }
        ++cyc;
        // pc_02F8
        { uint64_t r = cyc; r = rmax(r, s00B8_71 + 4u); r = rmax(r, s00B8_71 + 4u); r = rmax(r, s00B8_71 + 4u); r = rmax(r, s00B8_71 + 4u); cyc = r; }
        s00B8_72 = cyc;
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[7])); vn7 = uv; }
        }
        ++cyc;
        // pc_0300
        s00B8_73 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 203)); _mm_storeu_ps(vu.m_state.vf[19], lv); vn19 = vnorm(lv); }
        }
        ++cyc;
        // pc_0308
        { uint64_t r = cyc; r = rmax(r, s00B8_72 + 4u); r = rmax(r, s00B8_72 + 4u); r = rmax(r, s00B8_72 + 4u); r = rmax(r, s00B8_72 + 4u); r = rmax(r, s00B8_73 + 4u); r = rmax(r, s00B8_73 + 4u); r = rmax(r, s00B8_73 + 4u); r = rmax(r, s00B8_73 + 4u); cyc = r; }
        s00B8_74 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn7, vn19, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn7 = uv; }
        }
        ++cyc;
        // pc_0310
        s00B8_75 = cyc;
        {
            { const __m128 uv = _mm_max_ps(vn30, bcast<0u>(kVf0())); vn30 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 204)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0318
        s00B8_76 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 205)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_0320
        s00B8_77 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 206)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_0328
        s00B8_78 = cyc;
        {
        }
        ++cyc;
        // pc_0330
        s00B8_79 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn27, bcast<0u>(vn30), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0338
        s00B8_80 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<1u>(vn30), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0340
        s00B8_81 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<2u>(vn30), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0348
        s00B8_82 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xEu, vn25, bcast<3u>(kVf0()), vn32, un, fAccZ, fAccS, fAccScalar); vn30 = blendDest(vn30, uv, 0xEu); }
        }
        ++cyc;
        // pc_0350
        s00B8_83 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0x1u, vn7, vn25, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn7 = blendDest(vn7, uv, 0x1u); }
        }
        ++cyc;
        // pc_0358
        s00B8_84 = cyc;
        {
        }
        ++cyc;
        // pc_0360
        s00B8_85 = cyc;
        {
        }
        ++cyc;
        // pc_0368
        s00B8_86 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn7, vn30, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn7 = blendDest(vn7, uv, 0xEu); }
        }
        ++cyc;
        // pc_0370
        s00B8_87 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 208)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0378
        { uint64_t r = cyc; r = rmax(r, s00B8_87 + 4u); r = rmax(r, s00B8_87 + 4u); r = rmax(r, s00B8_87 + 4u); cyc = r; }
        s00B8_88 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn23, vn27, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr29 = blendDest(_mm_loadu_ps(vu.m_state.vf[29]), uv, 0xEu); vn29 = blendDest(vn29, uv, 0xEu); }
        }
        ++cyc;
        // pc_0380
        { uint64_t r = cyc; r = rmax(r, s00B8_88 + 4u); r = rmax(r, s00B8_88 + 4u); cyc = r; }
        s00B8_89 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Add>(vu, ctx, cyc, 0x8u, vn29, bcast<1u>(vn29), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr29 = blendDest(vr29, uv, 0x8u); vn29 = blendDest(vn29, uv, 0x8u); }
        }
        ++cyc;
        // pc_0388
        { uint64_t r = cyc; r = rmax(r, s00B8_89 + 4u); r = rmax(r, s00B8_88 + 4u); cyc = r; }
        s00B8_90 = cyc;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Add>(vu, ctx, cyc, 0x8u, vn29, bcast<2u>(vn29), _mm_setzero_ps(), un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vr29 = blendDest(vr29, uv, 0x8u); vn29 = blendDest(vn29, uv, 0x8u); }
        }
        ++cyc;
        // pc_0390
        { uint64_t r = cyc; r = rmax(r, s00B8_90 + 4u); cyc = r; }
        s00B8_91 = cyc;
        {
            { const __m128 uv = _mm_max_ps(vn29, bcast<0u>(kVf0())); vr29 = blendDest(vr29, uv, 0x8u); vn29 = blendDest(vn29, uv, 0x8u); }
        }
        ++cyc;
        // pc_0398
        { uint64_t r = cyc; r = rmax(r, s00B8_91 + 4u); cyc = r; }
        s00B8_92 = cyc;
        {
            { const __m128 uv = _mm_min_ps(vn29, bcast<3u>(kVf0())); vr29 = blendDest(vr29, uv, 0x8u); vn29 = blendDest(vn29, uv, 0x8u); }
        }
        ++cyc;
        // pc_03A0
        s00B8_93 = cyc;
        {
            vi10 = static_cast<int16_t>(ldw(mem, qaddr(0, 210) + 0u) & 0xFFFFu);
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[5], vn5); _mm_store_ps(ctx.norm[5], vn5);
        _mm_storeu_ps(vu.m_state.vf[7], vn7); _mm_store_ps(ctx.norm[7], vn7);
        _mm_storeu_ps(vu.m_state.vf[13], vn13); _mm_store_ps(ctx.norm[13], vn13);
        _mm_storeu_ps(vu.m_state.vf[14], vr14); _mm_store_ps(ctx.norm[14], vn14);
        _mm_storeu_ps(vu.m_state.vf[15], vn15); _mm_store_ps(ctx.norm[15], vn15);
        _mm_storeu_ps(vu.m_state.vf[16], vn16); _mm_store_ps(ctx.norm[16], vn16);
        _mm_storeu_ps(vu.m_state.vf[17], vn17); _mm_store_ps(ctx.norm[17], vn17);
        _mm_storeu_ps(vu.m_state.vf[18], vn18); _mm_store_ps(ctx.norm[18], vn18);
 _mm_store_ps(ctx.norm[19], vn19);
 _mm_store_ps(ctx.norm[22], vn22);
        _mm_storeu_ps(vu.m_state.vf[23], vn23); _mm_store_ps(ctx.norm[23], vn23);
        _mm_storeu_ps(vu.m_state.vf[26], vn26); _mm_store_ps(ctx.norm[26], vn26);
 _mm_store_ps(ctx.norm[27], vn27);
 _mm_store_ps(ctx.norm[28], vn28);
        _mm_storeu_ps(vu.m_state.vf[29], vr29); _mm_store_ps(ctx.norm[29], vn29);
        _mm_storeu_ps(vu.m_state.vf[30], vn30); _mm_store_ps(ctx.norm[30], vn30);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[4] = vi4;
        vu.m_state.vi[5] = vi5;
        vu.m_state.vi[6] = vi6;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        vu.m_state.vi[12] = vi12;
        vu.m_state.vi[13] = vi13;
        vu.m_vfReady[29][0] = s00B8_92 + 4u;
        vu.m_viReady[10] = s00B8_93 + 4u;
        vu.m_viBranchBackupValid = false;
        goto seg_03A8;
    }
seg_03A8:
        if (cyc + 7u > budget) goto pc_03A8;
    {
        uint64_t s03A8_0 = 0u, s03A8_1 = 0u, s03A8_2 = 0u, s03A8_3 = 0u;
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        int32_t vi10 = vu.m_state.vi[10];
segb_03A8:
        // pc_03A8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); r = rmax(r, vu.m_viReady[10]); cyc = r; }
        s03A8_0 = cyc;
        const int32_t bk03A8_0 = vi10;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x8u, vn29, bcast<0u>(vn29), _mm_setzero_ps(), un); vr29 = blendDest(vr29, uv, 0x8u); vn29 = blendDest(vn29, uv, 0x8u); }
            vi10 = static_cast<int16_t>(vi10 + -1);
        }
        ++cyc;
        // pc_03B0
        s03A8_1 = cyc;
        {
        }
        ++cyc;
        // pc_03B8
        s03A8_2 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi10);
        }
        ++cyc;
        s03A8_3 = cyc;
        {
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[29], vr29); _mm_store_ps(ctx.norm[29], vn29);
        vu.m_state.vi[10] = vi10;
        vu.m_viBranchBackupValid = false;
        if (tk) {
        if (cyc + 7u > budget) goto pc_03A8;
        goto segb_03A8;
        }
        goto seg_03C8;
    }
seg_03C0:
        if (cyc + 17u > budget) goto pc_03C0;
    {
        uint64_t s03C0_0 = 0u, s03C0_1 = 0u, s03C0_2 = 0u, s03C0_3 = 0u, s03C0_4 = 0u, s03C0_5 = 0u, s03C0_6 = 0u, s03C0_7 = 0u;
        __m128 vr7 = _mm_loadu_ps(vu.m_state.vf[7]); __m128 vn7 = _mm_load_ps(ctx.norm[7]);
        __m128 vr14 = _mm_loadu_ps(vu.m_state.vf[14]); __m128 vn14 = _mm_load_ps(ctx.norm[14]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi11 = vu.m_state.vi[11];
        int32_t vi12 = vu.m_state.vi[12];
        int32_t vi13 = vu.m_state.vi[13];
        // pc_03C0
        s03C0_0 = cyc;
        {
        }
        ++cyc;
        // pc_03C8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[29][0]); cyc = r; }
        s03C0_1 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, vn7, bcast<0u>(vn29), _mm_setzero_ps(), un); vr7 = blendDest(vr7, uv, 0x1u); vn7 = blendDest(vn7, uv, 0x1u); }
        }
        ++cyc;
        // pc_03D0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, s03C0_1 + 4u); r = rmax(r, vu.m_vfReady[14][3]); cyc = r; }
        s03C0_2 = cyc;
        {
            { const __m128 uv = _mm_min_ps(vn7, bcast<3u>(vn14)); vn7 = uv; }
        }
        ++cyc;
        // pc_03D8
        { uint64_t r = cyc; r = rmax(r, s03C0_2 + 4u); r = rmax(r, s03C0_2 + 4u); r = rmax(r, s03C0_2 + 4u); r = rmax(r, s03C0_2 + 4u); cyc = r; }
        s03C0_3 = cyc;
        {
            { const __m128 uv = ftoi<0u>(vn7); _mm_storeu_ps(vu.m_state.vf[24], uv); vn24 = vnorm(uv); }
        }
        ++cyc;
        // pc_03E0
        s03C0_4 = cyc;
        {
            vi11 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 9) + 4u) & 0xFFFFu);
        }
        ++cyc;
        // pc_03E8
        s03C0_5 = cyc;
        {
            vi12 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 9) + 8u) & 0xFFFFu);
        }
        ++cyc;
        // pc_03F0
        s03C0_6 = cyc;
        {
            vi13 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 9) + 12u) & 0xFFFFu);
        }
        ++cyc;
        // pc_03F8
        s03C0_7 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 10)); vr14 = blendDest(vr14, lv, 0xEu); vn14 = blendDest(vn14, vnorm(lv), 0xEu); }
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[7], vn7); _mm_store_ps(ctx.norm[7], vn7);
        _mm_storeu_ps(vu.m_state.vf[14], vr14); _mm_store_ps(ctx.norm[14], vn14);
 _mm_store_ps(ctx.norm[24], vn24);
        vu.m_state.vi[11] = vi11;
        vu.m_state.vi[12] = vi12;
        vu.m_state.vi[13] = vi13;
        vu.m_vfReady[14][0] = s03C0_7 + 4u;
        vu.m_vfReady[14][1] = s03C0_7 + 4u;
        vu.m_vfReady[14][2] = s03C0_7 + 4u;
        vu.m_viReady[12] = s03C0_5 + 4u;
        vu.m_viReady[13] = s03C0_6 + 4u;
        vu.m_viBranchBackupValid = false;
        { epc = 0x400u; goto exit_continue; }
    }
seg_03C8:
        if (cyc + 16u > budget) goto pc_03C8;
    {
        uint64_t s03C8_0 = 0u, s03C8_1 = 0u, s03C8_2 = 0u, s03C8_3 = 0u, s03C8_4 = 0u, s03C8_5 = 0u, s03C8_6 = 0u;
        __m128 vr7 = _mm_loadu_ps(vu.m_state.vf[7]); __m128 vn7 = _mm_load_ps(ctx.norm[7]);
        __m128 vr14 = _mm_loadu_ps(vu.m_state.vf[14]); __m128 vn14 = _mm_load_ps(ctx.norm[14]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi11 = vu.m_state.vi[11];
        int32_t vi12 = vu.m_state.vi[12];
        int32_t vi13 = vu.m_state.vi[13];
        // pc_03C8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[29][0]); cyc = r; }
        s03C8_0 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, vn7, bcast<0u>(vn29), _mm_setzero_ps(), un); vr7 = blendDest(vr7, uv, 0x1u); vn7 = blendDest(vn7, uv, 0x1u); }
        }
        ++cyc;
        // pc_03D0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, s03C8_0 + 4u); r = rmax(r, vu.m_vfReady[14][3]); cyc = r; }
        s03C8_1 = cyc;
        {
            { const __m128 uv = _mm_min_ps(vn7, bcast<3u>(vn14)); vn7 = uv; }
        }
        ++cyc;
        // pc_03D8
        { uint64_t r = cyc; r = rmax(r, s03C8_1 + 4u); r = rmax(r, s03C8_1 + 4u); r = rmax(r, s03C8_1 + 4u); r = rmax(r, s03C8_1 + 4u); cyc = r; }
        s03C8_2 = cyc;
        {
            { const __m128 uv = ftoi<0u>(vn7); _mm_storeu_ps(vu.m_state.vf[24], uv); vn24 = vnorm(uv); }
        }
        ++cyc;
        // pc_03E0
        s03C8_3 = cyc;
        {
            vi11 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 9) + 4u) & 0xFFFFu);
        }
        ++cyc;
        // pc_03E8
        s03C8_4 = cyc;
        {
            vi12 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 9) + 8u) & 0xFFFFu);
        }
        ++cyc;
        // pc_03F0
        s03C8_5 = cyc;
        {
            vi13 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 9) + 12u) & 0xFFFFu);
        }
        ++cyc;
        // pc_03F8
        s03C8_6 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 10)); vr14 = blendDest(vr14, lv, 0xEu); vn14 = blendDest(vn14, vnorm(lv), 0xEu); }
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[7], vn7); _mm_store_ps(ctx.norm[7], vn7);
        _mm_storeu_ps(vu.m_state.vf[14], vr14); _mm_store_ps(ctx.norm[14], vn14);
 _mm_store_ps(ctx.norm[24], vn24);
        vu.m_state.vi[11] = vi11;
        vu.m_state.vi[12] = vi12;
        vu.m_state.vi[13] = vi13;
        vu.m_vfReady[14][0] = s03C8_6 + 4u;
        vu.m_vfReady[14][1] = s03C8_6 + 4u;
        vu.m_vfReady[14][2] = s03C8_6 + 4u;
        vu.m_viReady[12] = s03C8_4 + 4u;
        vu.m_viReady[13] = s03C8_5 + 4u;
        vu.m_viBranchBackupValid = false;
        { epc = 0x400u; goto exit_continue; }
    }
exit_budget:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Budget;
exit_continue:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Continue;
exit_ended:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Ended;
}

template <>
VU1InterpreterAccess::StepResult VU1InterpreterAccess::fastBlock<0x390AE9C7C1A68D47ull, 1u>(VU1Interpreter &vu, Vu1FastCtx &ctx)
{
    uint64_t cyc = ctx.cycle;
    const uint64_t budget = ctx.budget;
    const uint8_t *const mem = ctx.mem;
    uint32_t epc = 0u;
    bool tk = false;
    (void)mem;
    switch (vu.m_state.pc)
    {
    case 0x400u: goto seg_0400;
    case 0x408u: goto pc_0408;
    case 0x410u: goto pc_0410;
    case 0x418u: goto pc_0418;
    case 0x420u: goto pc_0420;
    case 0x428u: goto pc_0428;
    case 0x430u: goto pc_0430;
    case 0x438u: goto pc_0438;
    case 0x440u: goto pc_0440;
    case 0x448u: goto pc_0448;
    case 0x450u: goto pc_0450;
    case 0x458u: goto pc_0458;
    case 0x460u: goto pc_0460;
    case 0x468u: goto pc_0468;
    case 0x470u: goto pc_0470;
    case 0x478u: goto pc_0478;
    case 0x480u: goto seg_0480;
    case 0x488u: goto pc_0488;
    case 0x490u: goto pc_0490;
    case 0x498u: goto pc_0498;
    case 0x4A0u: goto pc_04A0;
    case 0x4A8u: goto pc_04A8;
    case 0x4B0u: goto pc_04B0;
    case 0x4B8u: goto pc_04B8;
    case 0x4C0u: goto pc_04C0;
    case 0x4C8u: goto pc_04C8;
    case 0x4D0u: goto pc_04D0;
    case 0x4D8u: goto pc_04D8;
    case 0x4E0u: goto pc_04E0;
    case 0x4E8u: goto pc_04E8;
    case 0x4F0u: goto pc_04F0;
    case 0x4F8u: goto pc_04F8;
    case 0x500u: goto pc_0500;
    case 0x508u: goto pc_0508;
    case 0x510u: goto pc_0510;
    case 0x518u: goto pc_0518;
    case 0x520u: goto pc_0520;
    case 0x528u: goto pc_0528;
    case 0x530u: goto pc_0530;
    case 0x538u: goto pc_0538;
    case 0x540u: goto pc_0540;
    case 0x548u: goto pc_0548;
    case 0x550u: goto pc_0550;
    case 0x558u: goto pc_0558;
    case 0x560u: goto pc_0560;
    case 0x568u: goto pc_0568;
    case 0x570u: goto pc_0570;
    case 0x578u: goto pc_0578;
    case 0x580u: goto pc_0580;
    case 0x588u: goto pc_0588;
    case 0x590u: goto pc_0590;
    case 0x598u: goto pc_0598;
    case 0x5A0u: goto pc_05A0;
    case 0x5A8u: goto pc_05A8;
    case 0x5B0u: goto pc_05B0;
    case 0x5B8u: goto pc_05B8;
    case 0x5C0u: goto pc_05C0;
    case 0x5C8u: goto pc_05C8;
    case 0x5D0u: goto pc_05D0;
    case 0x5D8u: goto pc_05D8;
    case 0x5E0u: goto seg_05E0;
    case 0x5E8u: goto pc_05E8;
    case 0x5F0u: goto pc_05F0;
    case 0x5F8u: goto seg_05F8;
    case 0x600u: goto seg_0600;
    case 0x608u: goto pc_0608;
    case 0x610u: goto pc_0610;
    case 0x618u: goto pc_0618;
    case 0x620u: goto pc_0620;
    case 0x628u: goto pc_0628;
    case 0x630u: goto pc_0630;
    case 0x638u: goto pc_0638;
    case 0x640u: goto pc_0640;
    case 0x648u: goto pc_0648;
    case 0x650u: goto pc_0650;
    case 0x658u: goto seg_0658;
    case 0x660u: goto seg_0660;
    case 0x668u: goto pc_0668;
    case 0x670u: goto seg_0670;
    case 0x678u: goto seg_0678;
    case 0x680u: goto pc_0680;
    case 0x688u: goto pc_0688;
    case 0x690u: goto seg_0690;
    case 0x698u: goto pc_0698;
    case 0x6A0u: goto pc_06A0;
    case 0x6A8u: goto pc_06A8;
    case 0x6B0u: goto pc_06B0;
    case 0x6B8u: goto pc_06B8;
    case 0x6C0u: goto seg_06C0;
    case 0x6C8u: goto seg_06C8;
    case 0x6D0u: goto seg_06D0;
    case 0x6D8u: goto seg_06D8;
    case 0x6E0u: goto pc_06E0;
    case 0x6E8u: goto seg_06E8;
    case 0x6F0u: goto seg_06F0;
    case 0x6F8u: goto pc_06F8;
    case 0x700u: goto seg_0700;
    case 0x708u: goto seg_0708;
    case 0x710u: goto pc_0710;
    case 0x718u: goto pc_0718;
    case 0x720u: goto pc_0720;
    case 0x728u: goto pc_0728;
    case 0x730u: goto pc_0730;
    case 0x738u: goto pc_0738;
    case 0x740u: goto seg_0740;
    case 0x748u: goto seg_0748;
    case 0x750u: goto seg_0750;
    case 0x758u: goto pc_0758;
    case 0x760u: goto pc_0760;
    case 0x768u: goto seg_0768;
    case 0x770u: goto seg_0770;
    case 0x778u: goto pc_0778;
    case 0x780u: goto seg_0780;
    case 0x788u: goto seg_0788;
    case 0x790u: goto seg_0790;
    case 0x798u: goto seg_0798;
    case 0x7A0u: goto pc_07A0;
    case 0x7A8u: goto pc_07A8;
    case 0x7B0u: goto pc_07B0;
    case 0x7B8u: goto pc_07B8;
    case 0x7C0u: goto pc_07C0;
    case 0x7C8u: goto pc_07C8;
    case 0x7D0u: goto pc_07D0;
    case 0x7D8u: goto pc_07D8;
    case 0x7E0u: goto pc_07E0;
    case 0x7E8u: goto pc_07E8;
    default: return StepResult::Fallback;
    }
pc_0400:
        if (cyc >= budget) { epc = 0x400u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_vfReady[14][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x400u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[14])); writeVf(vu, ctx, 14u, uv, uv, 0xEu); }
            vu.m_state.i = std::bit_cast<float>(0x3C23D70Au);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[14][0] = cyc + 4u;
            vu.m_vfReady[14][1] = cyc + 4u;
            vu.m_vfReady[14][2] = cyc + 4u;
        }
        ++cyc;
pc_0408:
        if (cyc >= budget) { epc = 0x408u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_vfReady[14][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x408u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, nv(ctx, 14u), iN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 14u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[14][0] = cyc + 4u;
            vu.m_vfReady[14][1] = cyc + 4u;
            vu.m_vfReady[14][2] = cyc + 4u;
        }
        ++cyc;
pc_0410:
        if (cyc >= budget) { epc = 0x410u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x410u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 11)); writeVf(vu, ctx, 23u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
            vu.m_vfReady[23][3] = cyc + 4u;
        }
        ++cyc;
pc_0418:
        if (cyc >= budget) { epc = 0x418u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0420:
        if (cyc >= budget) { epc = 0x420u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0428:
        if (cyc >= budget) { epc = 0x428u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_vfReady[23][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x428u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[23])); writeVf(vu, ctx, 23u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
            vu.m_vfReady[23][3] = cyc + 4u;
        }
        ++cyc;
pc_0430:
        if (cyc >= budget) { epc = 0x430u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0438:
        if (cyc >= budget) { epc = 0x438u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0440:
        if (cyc >= budget) { epc = 0x440u; goto exit_budget; }
        {
            vu.m_state.i = std::bit_cast<float>(0x3C010204u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0448:
        if (cyc >= budget) { epc = 0x448u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_vfReady[23][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x448u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 23u), iN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 23u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
            vu.m_vfReady[23][3] = cyc + 4u;
        }
        ++cyc;
pc_0450:
        if (cyc >= budget) { epc = 0x450u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0458:
        if (cyc >= budget) { epc = 0x458u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0460:
        if (cyc >= budget) { epc = 0x460u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0468:
        if (cyc >= budget) { epc = 0x468u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x468u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[11], 0)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
        }
        ++cyc;
pc_0470:
        if (cyc >= budget) { epc = 0x470u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[12]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x470u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[12], 0)); writeVf(vu, ctx, 28u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[28][0] = cyc + 4u;
            vu.m_vfReady[28][1] = cyc + 4u;
            vu.m_vfReady[28][2] = cyc + 4u;
            vu.m_vfReady[28][3] = cyc + 4u;
        }
        ++cyc;
pc_0478:
        if (cyc >= budget) { epc = 0x478u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[13]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x478u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[13], 0)); writeVf(vu, ctx, 29u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
            vu.m_vfReady[29][1] = cyc + 4u;
            vu.m_vfReady[29][2] = cyc + 4u;
            vu.m_vfReady[29][3] = cyc + 4u;
        }
        ++cyc;
        goto seg_0480;
pc_0480:
        if (cyc >= budget) { epc = 0x480u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[13][0]); r = rmax(r, vu.m_vfReady[13][1]); r = rmax(r, vu.m_vfReady[13][2]); r = rmax(r, vu.m_vfReady[13][3]); r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x480u; goto exit_budget; } } cyc = r; } }
        {
            clipOp(vu, ctx, cyc, _mm_loadu_ps(vu.m_state.vf[13]), _mm_loadu_ps(vu.m_state.vf[13]));
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[11], 1)); writeVf(vu, ctx, 30u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
            vu.m_vfReady[30][1] = cyc + 4u;
            vu.m_vfReady[30][2] = cyc + 4u;
            vu.m_vfReady[30][3] = cyc + 4u;
        }
        ++cyc;
pc_0488:
        if (cyc >= budget) { epc = 0x488u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_viReady[12]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x488u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 27u), nbc(ctx, 14u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[12], 1)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0490:
        if (cyc >= budget) { epc = 0x490u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[28][0]); r = rmax(r, vu.m_vfReady[28][1]); r = rmax(r, vu.m_vfReady[28][2]); r = rmax(r, vu.m_vfReady[28][3]); r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_viReady[13]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x490u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 28u), nbc(ctx, 14u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[13], 1)); writeVf(vu, ctx, 28u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[28][0] = cyc + 4u;
            vu.m_vfReady[28][1] = cyc + 4u;
            vu.m_vfReady[28][2] = cyc + 4u;
            vu.m_vfReady[28][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0498:
        if (cyc >= budget) { epc = 0x498u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); r = rmax(r, vu.m_vfReady[29][1]); r = rmax(r, vu.m_vfReady[29][2]); r = rmax(r, vu.m_vfReady[29][3]); r = rmax(r, vu.m_vfReady[14][2]); r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x498u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 29u), nbc(ctx, 14u, 2u), nacc(ctx), un); writeVf(vu, ctx, 15u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[11], 2)); writeVf(vu, ctx, 29u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
            vu.m_vfReady[29][1] = cyc + 4u;
            vu.m_vfReady[29][2] = cyc + 4u;
            vu.m_vfReady[29][3] = cyc + 4u;
            vu.m_vfReady[15][0] = cyc + 4u;
            vu.m_vfReady[15][1] = cyc + 4u;
            vu.m_vfReady[15][2] = cyc + 4u;
            vu.m_vfReady[15][3] = cyc + 4u;
        }
        ++cyc;
pc_04A0:
        if (cyc >= budget) { epc = 0x4A0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[30][0]); r = rmax(r, vu.m_vfReady[30][1]); r = rmax(r, vu.m_vfReady[30][2]); r = rmax(r, vu.m_vfReady[30][3]); r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_viReady[12]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x4A0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 30u), nbc(ctx, 14u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[12], 2)); writeVf(vu, ctx, 30u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
            vu.m_vfReady[30][1] = cyc + 4u;
            vu.m_vfReady[30][2] = cyc + 4u;
            vu.m_vfReady[30][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_04A8:
        if (cyc >= budget) { epc = 0x4A8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_viReady[13]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x4A8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 27u), nbc(ctx, 14u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[13], 2)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_04B0:
        if (cyc >= budget) { epc = 0x4B0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[28][0]); r = rmax(r, vu.m_vfReady[28][1]); r = rmax(r, vu.m_vfReady[28][2]); r = rmax(r, vu.m_vfReady[28][3]); r = rmax(r, vu.m_vfReady[14][2]); r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x4B0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 28u), nbc(ctx, 14u, 2u), nacc(ctx), un); writeVf(vu, ctx, 16u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[11], 3)); writeVf(vu, ctx, 28u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[28][0] = cyc + 4u;
            vu.m_vfReady[28][1] = cyc + 4u;
            vu.m_vfReady[28][2] = cyc + 4u;
            vu.m_vfReady[28][3] = cyc + 4u;
            vu.m_vfReady[16][0] = cyc + 4u;
            vu.m_vfReady[16][1] = cyc + 4u;
            vu.m_vfReady[16][2] = cyc + 4u;
            vu.m_vfReady[16][3] = cyc + 4u;
        }
        ++cyc;
pc_04B8:
        if (cyc >= budget) { epc = 0x4B8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); r = rmax(r, vu.m_vfReady[29][1]); r = rmax(r, vu.m_vfReady[29][2]); r = rmax(r, vu.m_vfReady[29][3]); r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_viReady[12]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x4B8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 29u), nbc(ctx, 14u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[12], 3)); writeVf(vu, ctx, 29u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
            vu.m_vfReady[29][1] = cyc + 4u;
            vu.m_vfReady[29][2] = cyc + 4u;
            vu.m_vfReady[29][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_04C0:
        if (cyc >= budget) { epc = 0x4C0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[30][0]); r = rmax(r, vu.m_vfReady[30][1]); r = rmax(r, vu.m_vfReady[30][2]); r = rmax(r, vu.m_vfReady[30][3]); r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_viReady[13]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x4C0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 30u), nbc(ctx, 14u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[13], 3)); writeVf(vu, ctx, 30u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
            vu.m_vfReady[30][1] = cyc + 4u;
            vu.m_vfReady[30][2] = cyc + 4u;
            vu.m_vfReady[30][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_04C8:
        if (cyc >= budget) { epc = 0x4C8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_vfReady[14][2]); r = rmax(r, vu.m_vfReady[24][0]); r = rmax(r, vu.m_vfReady[24][1]); r = rmax(r, vu.m_vfReady[24][2]); r = rmax(r, vu.m_vfReady[24][3]); r = rmax(r, vu.m_viReady[6]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x4C8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 27u), nbc(ctx, 14u, 2u), nacc(ctx), un); writeVf(vu, ctx, 17u, uv, uv, 0xFu); }
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[6], 1), _mm_loadu_ps(vu.m_state.vf[24]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[17][0] = cyc + 4u;
            vu.m_vfReady[17][1] = cyc + 4u;
            vu.m_vfReady[17][2] = cyc + 4u;
            vu.m_vfReady[17][3] = cyc + 4u;
        }
        ++cyc;
pc_04D0:
        if (cyc >= budget) { epc = 0x4D0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[28][0]); r = rmax(r, vu.m_vfReady[28][1]); r = rmax(r, vu.m_vfReady[28][2]); r = rmax(r, vu.m_vfReady[28][3]); r = rmax(r, vu.m_vfReady[14][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x4D0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 28u), nbc(ctx, 14u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_04D8:
        if (cyc >= budget) { epc = 0x4D8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); r = rmax(r, vu.m_vfReady[29][1]); r = rmax(r, vu.m_vfReady[29][2]); r = rmax(r, vu.m_vfReady[29][3]); r = rmax(r, vu.m_vfReady[14][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x4D8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 29u), nbc(ctx, 14u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_04E0:
        if (cyc >= budget) { epc = 0x4E0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[30][0]); r = rmax(r, vu.m_vfReady[30][1]); r = rmax(r, vu.m_vfReady[30][2]); r = rmax(r, vu.m_vfReady[30][3]); r = rmax(r, vu.m_vfReady[14][2]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x4E0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 30u), nbc(ctx, 14u, 2u), nacc(ctx), un); writeVf(vu, ctx, 18u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 6)); writeVf(vu, ctx, 5u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[5][0] = cyc + 4u;
            vu.m_vfReady[5][1] = cyc + 4u;
            vu.m_vfReady[5][2] = cyc + 4u;
            vu.m_vfReady[5][3] = cyc + 4u;
            vu.m_vfReady[18][0] = cyc + 4u;
            vu.m_vfReady[18][1] = cyc + 4u;
            vu.m_vfReady[18][2] = cyc + 4u;
            vu.m_vfReady[18][3] = cyc + 4u;
        }
        ++cyc;
pc_04E8:
        if (cyc >= budget) { epc = 0x4E8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[15][0]); r = rmax(r, vu.m_vfReady[15][1]); r = rmax(r, vu.m_vfReady[15][2]); r = rmax(r, vu.m_vfReady[15][3]); r = rmax(r, vu.m_vfReady[23][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x4E8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 15u), nbc(ctx, 23u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_04F0:
        if (cyc >= budget) { epc = 0x4F0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[16][0]); r = rmax(r, vu.m_vfReady[16][1]); r = rmax(r, vu.m_vfReady[16][2]); r = rmax(r, vu.m_vfReady[16][3]); r = rmax(r, vu.m_vfReady[23][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x4F0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 16u), nbc(ctx, 23u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_04F8:
        if (cyc >= budget) { epc = 0x4F8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); r = rmax(r, vu.m_vfReady[23][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x4F8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 17u), nbc(ctx, 23u, 2u), nacc(ctx), un); writeVf(vu, ctx, 23u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
            vu.m_vfReady[23][3] = cyc + 4u;
        }
        ++cyc;
pc_0500:
        if (cyc >= budget) { epc = 0x500u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[15][0]); r = rmax(r, vu.m_vfReady[15][1]); r = rmax(r, vu.m_vfReady[15][2]); r = rmax(r, vu.m_vfReady[15][3]); r = rmax(r, vu.m_vfReady[5][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x500u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 15u), nbc(ctx, 5u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 208)); writeVf(vu, ctx, 30u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
            vu.m_vfReady[30][1] = cyc + 4u;
            vu.m_vfReady[30][2] = cyc + 4u;
            vu.m_vfReady[30][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0508:
        if (cyc >= budget) { epc = 0x508u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[16][0]); r = rmax(r, vu.m_vfReady[16][1]); r = rmax(r, vu.m_vfReady[16][2]); r = rmax(r, vu.m_vfReady[16][3]); r = rmax(r, vu.m_vfReady[5][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x508u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 16u), nbc(ctx, 5u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 200)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0510:
        if (cyc >= budget) { epc = 0x510u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); r = rmax(r, vu.m_vfReady[5][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x510u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 17u), nbc(ctx, 5u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 201)); writeVf(vu, ctx, 28u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[28][0] = cyc + 4u;
            vu.m_vfReady[28][1] = cyc + 4u;
            vu.m_vfReady[28][2] = cyc + 4u;
            vu.m_vfReady[28][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0518:
        if (cyc >= budget) { epc = 0x518u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[18][0]); r = rmax(r, vu.m_vfReady[18][1]); r = rmax(r, vu.m_vfReady[18][2]); r = rmax(r, vu.m_vfReady[18][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x518u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 18u), nbc(ctx, 0u, 3u), nacc(ctx), un); writeVf(vu, ctx, 5u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 202)); writeVf(vu, ctx, 29u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
            vu.m_vfReady[29][1] = cyc + 4u;
            vu.m_vfReady[29][2] = cyc + 4u;
            vu.m_vfReady[29][3] = cyc + 4u;
            vu.m_vfReady[5][0] = cyc + 4u;
            vu.m_vfReady[5][1] = cyc + 4u;
            vu.m_vfReady[5][2] = cyc + 4u;
            vu.m_vfReady[5][3] = cyc + 4u;
        }
        ++cyc;
pc_0520:
        if (cyc >= budget) { epc = 0x520u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_vfReady[30][0]); r = rmax(r, vu.m_vfReady[30][1]); r = rmax(r, vu.m_vfReady[30][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x520u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, nv(ctx, 23u), nv(ctx, 30u), _mm_setzero_ps(), un); writeVf(vu, ctx, 31u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[31][0] = cyc + 4u;
            vu.m_vfReady[31][1] = cyc + 4u;
            vu.m_vfReady[31][2] = cyc + 4u;
        }
        ++cyc;
pc_0528:
        if (cyc >= budget) { epc = 0x528u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_vfReady[23][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x528u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 27u), nbc(ctx, 23u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0530:
        if (cyc >= budget) { epc = 0x530u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[28][0]); r = rmax(r, vu.m_vfReady[28][1]); r = rmax(r, vu.m_vfReady[28][2]); r = rmax(r, vu.m_vfReady[28][3]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x530u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 28u), nbc(ctx, 23u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 7)); writeVf(vu, ctx, 7u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0538:
        if (cyc >= budget) { epc = 0x538u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); r = rmax(r, vu.m_vfReady[29][1]); r = rmax(r, vu.m_vfReady[29][2]); r = rmax(r, vu.m_vfReady[29][3]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x538u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 29u), nbc(ctx, 23u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 16)); writeVf(vu, ctx, 14u, lv, vnorm(lv), 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[14][0] = cyc + 4u;
            vu.m_vfReady[14][1] = cyc + 4u;
            vu.m_vfReady[14][2] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0540:
        if (cyc >= budget) { epc = 0x540u; goto exit_budget; }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 0u), nbc(ctx, 0u, 3u), nacc(ctx), un); writeVf(vu, ctx, 30u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
            vu.m_vfReady[30][1] = cyc + 4u;
            vu.m_vfReady[30][2] = cyc + 4u;
            vu.m_vfReady[30][3] = cyc + 4u;
        }
        ++cyc;
pc_0548:
        if (cyc >= budget) { epc = 0x548u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_vfReady[31][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x548u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0x8u, nv(ctx, 31u), nbc(ctx, 31u, 1u), _mm_setzero_ps(), un); writeVf(vu, ctx, 31u, uv, uv, 0x8u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[31][0] = cyc + 4u;
        }
        ++cyc;
pc_0550:
        if (cyc >= budget) { epc = 0x550u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x550u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[7])); writeVf(vu, ctx, 7u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 203)); writeVf(vu, ctx, 19u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[19][0] = cyc + 4u;
            vu.m_vfReady[19][1] = cyc + 4u;
            vu.m_vfReady[19][2] = cyc + 4u;
            vu.m_vfReady[19][3] = cyc + 4u;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
pc_0558:
        if (cyc >= budget) { epc = 0x558u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_vfReady[14][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x558u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[14])); writeVf(vu, ctx, 14u, uv, uv, 0xEu); }
            vu.m_state.i = std::bit_cast<float>(0x3C23D70Au);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[14][0] = cyc + 4u;
            vu.m_vfReady[14][1] = cyc + 4u;
            vu.m_vfReady[14][2] = cyc + 4u;
        }
        ++cyc;
pc_0560:
        if (cyc >= budget) { epc = 0x560u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[30][0]); r = rmax(r, vu.m_vfReady[30][1]); r = rmax(r, vu.m_vfReady[30][2]); r = rmax(r, vu.m_vfReady[30][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x560u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = _mm_max_ps(nv(ctx, 30u), nbc(ctx, 0u, 0u)); writeVf(vu, ctx, 30u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 204)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
            vu.m_vfReady[30][0] = cyc + 4u;
            vu.m_vfReady[30][1] = cyc + 4u;
            vu.m_vfReady[30][2] = cyc + 4u;
            vu.m_vfReady[30][3] = cyc + 4u;
        }
        ++cyc;
pc_0568:
        if (cyc >= budget) { epc = 0x568u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_vfReady[31][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x568u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0x8u, nv(ctx, 31u), nbc(ctx, 31u, 2u), _mm_setzero_ps(), un); writeVf(vu, ctx, 31u, uv, uv, 0x8u); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 205)); writeVf(vu, ctx, 28u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[28][0] = cyc + 4u;
            vu.m_vfReady[28][1] = cyc + 4u;
            vu.m_vfReady[28][2] = cyc + 4u;
            vu.m_vfReady[28][3] = cyc + 4u;
            vu.m_vfReady[31][0] = cyc + 4u;
        }
        ++cyc;
pc_0570:
        if (cyc >= budget) { epc = 0x570u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[19][0]); r = rmax(r, vu.m_vfReady[19][1]); r = rmax(r, vu.m_vfReady[19][2]); r = rmax(r, vu.m_vfReady[19][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x570u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 7u), nv(ctx, 19u), _mm_setzero_ps(), un); writeVf(vu, ctx, 7u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 206)); writeVf(vu, ctx, 29u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
            vu.m_vfReady[29][1] = cyc + 4u;
            vu.m_vfReady[29][2] = cyc + 4u;
            vu.m_vfReady[29][3] = cyc + 4u;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
pc_0578:
        if (cyc >= budget) { epc = 0x578u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_vfReady[14][2]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x578u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, nv(ctx, 14u), iN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 14u, uv, uv, 0xEu); }
            vu.m_state.vi[11] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[4], 15) + 4u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[14][0] = cyc + 4u;
            vu.m_vfReady[14][1] = cyc + 4u;
            vu.m_vfReady[14][2] = cyc + 4u;
            vu.m_viReady[11] = cyc + 4u;
        }
        ++cyc;
pc_0580:
        if (cyc >= budget) { epc = 0x580u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_vfReady[30][0]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x580u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 27u), nbc(ctx, 30u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_state.vi[12] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[4], 15) + 8u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[12] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0588:
        if (cyc >= budget) { epc = 0x588u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[28][0]); r = rmax(r, vu.m_vfReady[28][1]); r = rmax(r, vu.m_vfReady[28][2]); r = rmax(r, vu.m_vfReady[28][3]); r = rmax(r, vu.m_vfReady[30][1]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x588u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 28u), nbc(ctx, 30u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_state.vi[13] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[4], 15) + 12u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[13] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0590:
        if (cyc >= budget) { epc = 0x590u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); r = rmax(r, vu.m_vfReady[29][1]); r = rmax(r, vu.m_vfReady[29][2]); r = rmax(r, vu.m_vfReady[29][3]); r = rmax(r, vu.m_vfReady[30][2]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x590u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 29u), nbc(ctx, 30u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 2)); writeVf(vu, ctx, 6u, lv, vnorm(lv), 0xCu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[6][0] = cyc + 4u;
            vu.m_vfReady[6][1] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0598:
        if (cyc >= budget) { epc = 0x598u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x598u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xEu, nv(ctx, 25u), nbc(ctx, 0u, 3u), nacc(ctx), un); writeVf(vu, ctx, 30u, uv, uv, 0xEu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[4], 17)); writeVf(vu, ctx, 23u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
            vu.m_vfReady[23][3] = cyc + 4u;
            vu.m_vfReady[30][0] = cyc + 4u;
            vu.m_vfReady[30][1] = cyc + 4u;
            vu.m_vfReady[30][2] = cyc + 4u;
        }
        ++cyc;
pc_05A0:
        if (cyc >= budget) { epc = 0x5A0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[31][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x5A0u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = _mm_max_ps(nv(ctx, 31u), nbc(ctx, 0u, 0u)); writeVf(vu, ctx, 31u, uv, uv, 0x8u); }
            { const __m128 mr = _mm_loadu_ps(vu.m_state.vf[0]); const __m128 mn = nv(ctx, 0u); writeVf(vu, ctx, 6u, _mm_shuffle_ps(mr, mr, _MM_SHUFFLE(0, 3, 2, 1)), _mm_shuffle_ps(mn, mn, _MM_SHUFFLE(0, 3, 2, 1)), 0x2u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[6][2] = cyc + 4u;
            vu.m_vfReady[31][0] = cyc + 4u;
        }
        ++cyc;
pc_05A8:
        if (cyc >= budget) { epc = 0x5A8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[25][3]); r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x5A8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, nv(ctx, 7u), nv(ctx, 25u), _mm_setzero_ps(), un); writeVf(vu, ctx, 7u, uv, uv, 0x1u); }
            vu.m_state.vi[15] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[4], 0) + 12u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][3] = cyc + 4u;
            vu.m_viReady[15] = cyc + 4u;
        }
        ++cyc;
pc_05B0:
        if (cyc >= budget) { epc = 0x5B0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x5B0u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<12u>(_mm_loadu_ps(vu.m_state.vf[6])); writeVf(vu, ctx, 6u, uv, uv, 0xCu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 211)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
            vu.m_vfReady[6][0] = cyc + 4u;
            vu.m_vfReady[6][1] = cyc + 4u;
        }
        ++cyc;
pc_05B8:
        if (cyc >= budget) { epc = 0x5B8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_vfReady[23][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x5B8u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[23])); writeVf(vu, ctx, 23u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
            vu.m_vfReady[23][3] = cyc + 4u;
        }
        ++cyc;
pc_05C0:
        if (cyc >= budget) { epc = 0x5C0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[31][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x5C0u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = _mm_min_ps(nv(ctx, 31u), nbc(ctx, 0u, 3u)); writeVf(vu, ctx, 31u, uv, uv, 0x8u); }
            vu.m_state.vi[10] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[0], 210) + 0u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[31][0] = cyc + 4u;
            vu.m_viReady[10] = cyc + 4u;
        }
        ++cyc;
pc_05C8:
        if (cyc >= budget) { epc = 0x5C8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[30][0]); r = rmax(r, vu.m_vfReady[30][1]); r = rmax(r, vu.m_vfReady[30][2]); r = rmax(r, vu.m_viReady[7]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x5C8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[7];
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, nv(ctx, 7u), nv(ctx, 30u), _mm_setzero_ps(), un); writeVf(vu, ctx, 7u, uv, uv, 0xEu); }
            vu.m_state.vi[7] = static_cast<int16_t>(vu.m_state.vi[7] + -1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_viReady[7] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 7u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_05D0:
        if (cyc >= budget) { epc = 0x5D0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_vfReady[6][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x5D0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xEu, nv(ctx, 27u), nv(ctx, 6u), _mm_setzero_ps(), un); writeVf(vu, ctx, 6u, uv, uv, 0xEu); }
            vu.m_state.i = std::bit_cast<float>(0x3C010204u);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[6][0] = cyc + 4u;
            vu.m_vfReady[6][1] = cyc + 4u;
            vu.m_vfReady[6][2] = cyc + 4u;
        }
        ++cyc;
pc_05D8:
        if (cyc >= budget) { epc = 0x5D8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_vfReady[23][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x5D8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 23u), iN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 23u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
            vu.m_vfReady[23][3] = cyc + 4u;
        }
        ++cyc;
        goto seg_05E0;
pc_05E0:
        if (cyc >= budget) { epc = 0x5E0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x5E0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x8u, nv(ctx, 31u), nbc(ctx, 31u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 31u, uv, uv, 0x8u); }
            vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + -1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[31][0] = cyc + 4u;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_05E8:
        if (cyc >= budget) { epc = 0x5E8u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 215)); writeVf(vu, ctx, 19u, lv, vnorm(lv), 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[19][0] = cyc + 4u;
            vu.m_vfReady[19][1] = cyc + 4u;
            vu.m_vfReady[19][2] = cyc + 4u;
        }
        ++cyc;
pc_05F0:
        if (cyc >= budget) { epc = 0x5F0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x5F0u; goto exit_budget; } } cyc = r; } }
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, nv(ctx, 26u), qN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 8u, uv, uv, 0xEu); }
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(10u));
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[8][0] = cyc + 4u;
            vu.m_vfReady[8][1] = cyc + 4u;
            vu.m_vfReady[8][2] = cyc + 4u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x5F8u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x5E0u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[22][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x5F8u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x5E0u; vu.m_state.branchDelay = 0u; } goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0x1u, nv(ctx, 22u), nbc(ctx, 0u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 8u, uv, uv, 0x1u); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 216)); writeVf(vu, ctx, 20u, lv, vnorm(lv), 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[20][0] = cyc + 4u;
            vu.m_vfReady[20][1] = cyc + 4u;
            vu.m_vfReady[20][2] = cyc + 4u;
            vu.m_vfReady[8][3] = cyc + 4u;
        }
        ++cyc;
        if (tk) goto seg_05E0;
        goto seg_0600;
pc_05F8:
        if (cyc >= budget) { epc = 0x5F8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[22][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x5F8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0x1u, nv(ctx, 22u), nbc(ctx, 0u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 8u, uv, uv, 0x1u); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 216)); writeVf(vu, ctx, 20u, lv, vnorm(lv), 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[20][0] = cyc + 4u;
            vu.m_vfReady[20][1] = cyc + 4u;
            vu.m_vfReady[20][2] = cyc + 4u;
            vu.m_vfReady[8][3] = cyc + 4u;
        }
        ++cyc;
        goto seg_0600;
pc_0600:
        if (cyc >= budget) { epc = 0x600u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x600u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, nv(ctx, 7u), nbc(ctx, 31u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 7u, uv, uv, 0x1u); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[11], 0)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
pc_0608:
        if (cyc >= budget) { epc = 0x608u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_vfReady[6][2]); r = rmax(r, vu.m_vfReady[6][3]); r = rmax(r, vu.m_viReady[8]); r = rmax(r, vu.m_viReady[15]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x608u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[2];
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 6u), qN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 6u, uv, uv, 0xFu); }
            vu.m_state.vi[2] = static_cast<int16_t>(vu.m_state.vi[15] & vu.m_state.vi[8]);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[6][0] = cyc + 4u;
            vu.m_vfReady[6][1] = cyc + 4u;
            vu.m_vfReady[6][2] = cyc + 4u;
            vu.m_vfReady[6][3] = cyc + 4u;
            vu.m_viReady[2] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 2u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0610:
        if (cyc >= budget) { epc = 0x610u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[8][0]); r = rmax(r, vu.m_vfReady[8][1]); r = rmax(r, vu.m_vfReady[8][2]); r = rmax(r, vu.m_vfReady[19][0]); r = rmax(r, vu.m_vfReady[19][1]); r = rmax(r, vu.m_vfReady[19][2]); r = rmax(r, vu.m_viReady[3]); r = rmax(r, vu.m_viReady[15]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x610u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xEu, nv(ctx, 8u), nv(ctx, 19u), _mm_setzero_ps(), un); writeVf(vu, ctx, 21u, uv, uv, 0xEu); }
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[15] & vu.m_state.vi[3]);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[21][0] = cyc + 4u;
            vu.m_vfReady[21][1] = cyc + 4u;
            vu.m_vfReady[21][2] = cyc + 4u;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0618:
        if (cyc >= budget) { epc = 0x618u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[19][0]); r = rmax(r, vu.m_vfReady[19][1]); r = rmax(r, vu.m_vfReady[19][2]); r = rmax(r, vu.m_viReady[12]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x618u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xEu, nv(ctx, 20u), nv(ctx, 19u), _mm_setzero_ps(), un); writeVf(vu, ctx, 20u, uv, uv, 0xEu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[12], 0)); writeVf(vu, ctx, 28u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[28][0] = cyc + 4u;
            vu.m_vfReady[28][1] = cyc + 4u;
            vu.m_vfReady[28][2] = cyc + 4u;
            vu.m_vfReady[28][3] = cyc + 4u;
            vu.m_vfReady[20][0] = cyc + 4u;
            vu.m_vfReady[20][1] = cyc + 4u;
            vu.m_vfReady[20][2] = cyc + 4u;
        }
        ++cyc;
pc_0620:
        if (cyc >= budget) { epc = 0x620u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[14][3]); r = rmax(r, vu.m_vfReady[19][0]); r = rmax(r, vu.m_vfReady[19][1]); r = rmax(r, vu.m_vfReady[19][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x620u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = _mm_min_ps(nv(ctx, 7u), nbc(ctx, 14u, 3u)); writeVf(vu, ctx, 7u, uv, uv, 0xFu); }
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[0], 216), _mm_loadu_ps(vu.m_state.vf[19]), 0xEu);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[7][0] = cyc + 4u;
            vu.m_vfReady[7][1] = cyc + 4u;
            vu.m_vfReady[7][2] = cyc + 4u;
            vu.m_vfReady[7][3] = cyc + 4u;
        }
        ++cyc;
pc_0628:
        if (cyc >= budget) { epc = 0x628u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[1][0]); r = rmax(r, vu.m_vfReady[1][1]); r = rmax(r, vu.m_vfReady[1][2]); r = rmax(r, vu.m_vfReady[1][3]); r = rmax(r, vu.m_vfReady[5][0]); r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_vfReady[6][2]); r = rmax(r, vu.m_vfReady[6][3]); r = rmax(r, vu.m_viReady[6]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x628u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 1u), nbc(ctx, 5u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[6], 0), _mm_loadu_ps(vu.m_state.vf[6]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0630:
        if (cyc >= budget) { epc = 0x630u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[2][0]); r = rmax(r, vu.m_vfReady[2][1]); r = rmax(r, vu.m_vfReady[2][2]); r = rmax(r, vu.m_vfReady[2][3]); r = rmax(r, vu.m_vfReady[5][1]); r = rmax(r, vu.m_vfReady[8][0]); r = rmax(r, vu.m_vfReady[8][1]); r = rmax(r, vu.m_vfReady[8][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x630u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 2u), nbc(ctx, 5u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[0], 215), _mm_loadu_ps(vu.m_state.vf[8]), 0xEu);
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0638:
        if (cyc >= budget) { epc = 0x638u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[8][0]); r = rmax(r, vu.m_vfReady[8][1]); r = rmax(r, vu.m_vfReady[8][2]); r = rmax(r, vu.m_vfReady[8][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x638u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = ftoi<4u>(nv(ctx, 8u)); writeVf(vu, ctx, 8u, uv, vnorm(uv), 0xFu); }
            commitClip(vu, ctx, cyc); vu.m_state.vi[1] = (vu.m_state.clip & 0x3FFFFu) != 0u ? 1 : 0;
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[8][0] = cyc + 4u;
            vu.m_vfReady[8][1] = cyc + 4u;
            vu.m_vfReady[8][2] = cyc + 4u;
            vu.m_vfReady[8][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
        }
        ++cyc;
pc_0640:
        if (cyc >= budget) { epc = 0x640u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][0]); r = rmax(r, vu.m_vfReady[7][1]); r = rmax(r, vu.m_vfReady[7][2]); r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_viReady[13]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x640u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = ftoi<0u>(nv(ctx, 7u)); writeVf(vu, ctx, 24u, uv, vnorm(uv), 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[13], 0)); writeVf(vu, ctx, 29u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
            vu.m_vfReady[29][1] = cyc + 4u;
            vu.m_vfReady[29][2] = cyc + 4u;
            vu.m_vfReady[29][3] = cyc + 4u;
            vu.m_vfReady[24][0] = cyc + 4u;
            vu.m_vfReady[24][1] = cyc + 4u;
            vu.m_vfReady[24][2] = cyc + 4u;
            vu.m_vfReady[24][3] = cyc + 4u;
        }
        ++cyc;
pc_0648:
        if (cyc >= budget) { epc = 0x648u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x648u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] | vu.m_state.vi[14]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0650:
        if (cyc >= budget) { epc = 0x650u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[3][0]); r = rmax(r, vu.m_vfReady[3][1]); r = rmax(r, vu.m_vfReady[3][2]); r = rmax(r, vu.m_vfReady[3][3]); r = rmax(r, vu.m_vfReady[5][2]); r = rmax(r, vu.m_viReady[2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x650u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 3u), nbc(ctx, 5u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(2u));
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x658u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x678u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[4][0]); r = rmax(r, vu.m_vfReady[4][1]); r = rmax(r, vu.m_vfReady[4][2]); r = rmax(r, vu.m_vfReady[4][3]); r = rmax(r, vu.m_vfReady[8][0]); r = rmax(r, vu.m_vfReady[8][1]); r = rmax(r, vu.m_vfReady[8][2]); r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_viReady[6]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x658u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x678u; vu.m_state.branchDelay = 0u; } goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 4u), nbc(ctx, 0u, 3u), nacc(ctx), un); writeVf(vu, ctx, 26u, uv, uv, 0xFu); }
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[6], 2), _mm_loadu_ps(vu.m_state.vf[8]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][0] = cyc + 4u;
            vu.m_vfReady[26][1] = cyc + 4u;
            vu.m_vfReady[26][2] = cyc + 4u;
            vu.m_vfReady[26][3] = cyc + 4u;
        }
        ++cyc;
        if (tk) goto seg_0678;
        goto seg_0660;
pc_0658:
        if (cyc >= budget) { epc = 0x658u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[4][0]); r = rmax(r, vu.m_vfReady[4][1]); r = rmax(r, vu.m_vfReady[4][2]); r = rmax(r, vu.m_vfReady[4][3]); r = rmax(r, vu.m_vfReady[8][0]); r = rmax(r, vu.m_vfReady[8][1]); r = rmax(r, vu.m_vfReady[8][2]); r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_viReady[6]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x658u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 4u), nbc(ctx, 0u, 3u), nacc(ctx), un); writeVf(vu, ctx, 26u, uv, uv, 0xFu); }
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[6], 2), _mm_loadu_ps(vu.m_state.vf[8]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][0] = cyc + 4u;
            vu.m_vfReady[26][1] = cyc + 4u;
            vu.m_vfReady[26][2] = cyc + 4u;
            vu.m_vfReady[26][3] = cyc + 4u;
        }
        ++cyc;
        goto seg_0660;
pc_0660:
        if (cyc >= budget) { epc = 0x660u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); r = rmax(r, vu.m_vfReady[8][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x660u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            { __m128 un; const __m128 uv = fmac<FK::Opmula>(vu, ctx, cyc, 0xEu, nv(ctx, 20u), nv(ctx, 21u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xEu); }
            vu.m_state.vi[9] = static_cast<int16_t>(std::bit_cast<uint32_t>(vu.m_state.vf[8][3]) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0668:
        if (cyc >= budget) { epc = 0x668u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x668u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmsub>(vu, ctx, cyc, 0xEu, nv(ctx, 21u), nv(ctx, 20u), nacc(ctx), un); writeVf(vu, ctx, 0u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            resetVf0(vu, ctx);
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x670u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x690u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][3]); if (vu.m_fdiv.valid) r = rmax(r, vu.m_fdiv.readyCycle); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x670u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x690u; vu.m_state.branchDelay = 0u; } goto exit_budget; } } cyc = r; } }
        {
            divOp(vu, ctx, cyc, vu.m_state.vf[0][3], vu.m_state.vf[26][3]);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0690;
pc_0670:
        if (cyc >= budget) { epc = 0x670u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][3]); if (vu.m_fdiv.valid) r = rmax(r, vu.m_fdiv.readyCycle); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x670u; goto exit_budget; } } cyc = r; } }
        {
            divOp(vu, ctx, cyc, vu.m_state.vf[0][3], vu.m_state.vf[26][3]);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0678;
pc_0678:
        if (cyc >= budget) { epc = 0x678u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[8][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x678u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            { __m128 un; const __m128 uv = fmac<FK::Opmula>(vu, ctx, cyc, 0xEu, nv(ctx, 21u), nv(ctx, 20u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xEu); }
            vu.m_state.vi[9] = static_cast<int16_t>(std::bit_cast<uint32_t>(vu.m_state.vf[8][3]) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0680:
        if (cyc >= budget) { epc = 0x680u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x680u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmsub>(vu, ctx, cyc, 0xEu, nv(ctx, 20u), nv(ctx, 21u), nacc(ctx), un); writeVf(vu, ctx, 0u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            resetVf0(vu, ctx);
        }
        ++cyc;
pc_0688:
        if (cyc >= budget) { epc = 0x688u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][3]); if (vu.m_fdiv.valid) r = rmax(r, vu.m_fdiv.readyCycle); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x688u; goto exit_budget; } } cyc = r; } }
        {
            divOp(vu, ctx, cyc, vu.m_state.vf[0][3], vu.m_state.vf[26][3]);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0690;
pc_0690:
        if (cyc >= budget) { epc = 0x690u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[9][0]); r = rmax(r, vu.m_vfReady[9][1]); r = rmax(r, vu.m_vfReady[9][2]); r = rmax(r, vu.m_vfReady[9][3]); r = rmax(r, vu.m_vfReady[5][0]); r = rmax(r, vu.m_viReady[3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x690u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 9u), nbc(ctx, 5u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + vu.m_state.vi[3]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0698:
        if (cyc >= budget) { epc = 0x698u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[10][0]); r = rmax(r, vu.m_vfReady[10][1]); r = rmax(r, vu.m_vfReady[10][2]); r = rmax(r, vu.m_vfReady[10][3]); r = rmax(r, vu.m_vfReady[5][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x698u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 10u), nbc(ctx, 5u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[0] + 32);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_06A0:
        if (cyc >= budget) { epc = 0x6A0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[11][0]); r = rmax(r, vu.m_vfReady[11][1]); r = rmax(r, vu.m_vfReady[11][2]); r = rmax(r, vu.m_vfReady[11][3]); r = rmax(r, vu.m_vfReady[5][2]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x6A0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 11u), nbc(ctx, 5u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            commitStatus(vu, ctx, cyc); vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.mac & static_cast<uint32_t>(static_cast<uint16_t>(vu.m_state.vi[14])));
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_06A8:
        if (cyc >= budget) { epc = 0x6A8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[12][0]); r = rmax(r, vu.m_vfReady[12][1]); r = rmax(r, vu.m_vfReady[12][2]); r = rmax(r, vu.m_vfReady[12][3]); r = rmax(r, vu.m_viReady[1]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x6A8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 12u), nbc(ctx, 0u, 3u), nacc(ctx), un); writeVf(vu, ctx, 13u, uv, uv, 0xFu); }
            vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[1] | vu.m_state.vi[14]);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[13][0] = cyc + 4u;
            vu.m_vfReady[13][1] = cyc + 4u;
            vu.m_vfReady[13][2] = cyc + 4u;
            vu.m_vfReady[13][3] = cyc + 4u;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_06B0:
        if (cyc >= budget) { epc = 0x6B0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_06B8:
        if (cyc >= budget) { epc = 0x6B8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x6B8u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) == static_cast<int16_t>(vu.readBranchVi(1u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x6C0u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x6D0u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[6]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x6C0u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x6D0u; vu.m_state.branchDelay = 0u; } goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[6];
            vu.m_state.vi[6] = static_cast<int16_t>(vu.m_state.vi[6] + 3);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[6] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 6u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
        if (tk) goto seg_06D0;
        goto seg_06C8;
pc_06C0:
        if (cyc >= budget) { epc = 0x6C0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[6]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x6C0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[6];
            vu.m_state.vi[6] = static_cast<int16_t>(vu.m_state.vi[6] + 3);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[6] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 6u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
        goto seg_06C8;
pc_06C8:
        if (cyc >= budget) { epc = 0x6C8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[6]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x6C8u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[6], -1), vu.m_state.vi[9], 0x1u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_06D0;
pc_06D0:
        if (cyc >= budget) { epc = 0x6D0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[7]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x6D0u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(7u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x6D8u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x480u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x6D8u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x480u; vu.m_state.branchDelay = 0u; } goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[4];
            vu.m_state.vi[4] = static_cast<int16_t>(vu.m_state.vi[4] + 6);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[4] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 4u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
        if (tk) goto seg_0480;
        goto pc_06E0;
pc_06D8:
        if (cyc >= budget) { epc = 0x6D8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x6D8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[4];
            vu.m_state.vi[4] = static_cast<int16_t>(vu.m_state.vi[4] + 6);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[4] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 4u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_06E0:
        if (cyc >= budget) { epc = 0x6E0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[5]); if (!xgkickStall(vu, ctx, cyc, r, budget)) { epc = 0x6E0u; goto exit_budget; } }
        {
            xgkickStart(vu, ctx, cyc, vu.m_state.vi[5]);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_06E8;
pc_06E8:
        if (cyc >= budget) { epc = 0x6E8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // end delay slot
        if (cyc >= budget) { epc = 0x6F0u; vu.m_state.ebit = true; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = 0x6F8u; goto exit_ended; }
pc_06F0:
        if (cyc >= budget) { epc = 0x6F0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_06F8:
        if (cyc >= budget) { epc = 0x6F8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x700u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xB8u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = 0xB8u; goto exit_continue; }
pc_0700:
        if (cyc >= budget) { epc = 0x700u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0708;
pc_0708:
        if (cyc >= budget) { epc = 0x708u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[0] + 101);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0710:
        if (cyc >= budget) { epc = 0x710u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x710u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[0] + vu.m_state.vi[11]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0718:
        if (cyc >= budget) { epc = 0x718u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[11];
            vu.m_state.vi[11] = static_cast<int16_t>(vu.m_state.vi[0] + 0);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 11u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0720:
        if (cyc >= budget) { epc = 0x720u; goto exit_budget; }
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0x8u, nv(ctx, 0u), nbc(ctx, 0u, 3u), _mm_setzero_ps(), un); writeVf(vu, ctx, 30u, uv, uv, 0x8u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
        }
        ++cyc;
pc_0728:
        if (cyc >= budget) { epc = 0x728u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x728u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[8], 0)); writeVf(vu, ctx, 21u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[8] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[21][0] = cyc + 4u;
            vu.m_vfReady[21][1] = cyc + 4u;
            vu.m_vfReady[21][2] = cyc + 4u;
            vu.m_vfReady[21][3] = cyc + 4u;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0730:
        if (cyc >= budget) { epc = 0x730u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x730u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[8], 0)); writeVf(vu, ctx, 22u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[8] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[22][0] = cyc + 4u;
            vu.m_vfReady[22][1] = cyc + 4u;
            vu.m_vfReady[22][2] = cyc + 4u;
            vu.m_vfReady[22][3] = cyc + 4u;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0738:
        if (cyc >= budget) { epc = 0x738u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x738u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[8], 0)); writeVf(vu, ctx, 23u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[8] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
            vu.m_vfReady[23][3] = cyc + 4u;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
        goto seg_0740;
pc_0740:
        if (cyc >= budget) { epc = 0x740u; goto exit_budget; }
        {
            vu.m_state.vi[2] = static_cast<int16_t>(234);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[2] = cyc + 1u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x748u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xA28u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = 0xA28u; goto exit_continue; }
pc_0748:
        if (cyc >= budget) { epc = 0x748u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0750;
pc_0750:
        if (cyc >= budget) { epc = 0x750u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x750u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] - 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0758:
        if (cyc >= budget) { epc = 0x758u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0760:
        if (cyc >= budget) { epc = 0x760u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x760u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(10u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x768u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x740u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) goto seg_0740;
        goto seg_0770;
pc_0768:
        if (cyc >= budget) { epc = 0x768u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0770;
pc_0770:
        if (cyc >= budget) { epc = 0x770u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[0] + 101);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0778:
        if (cyc >= budget) { epc = 0x778u; goto exit_budget; }
        {
            vu.m_state.vi[2] = static_cast<int16_t>(241);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[2] = cyc + 1u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x780u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x9E8u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = 0x9E8u; goto exit_continue; }
pc_0780:
        if (cyc >= budget) { epc = 0x780u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0788;
pc_0788:
        if (cyc >= budget) { epc = 0x788u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x788u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) == static_cast<int16_t>(vu.readBranchVi(11u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x790u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x9D8u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) { epc = 0x9D8u; goto exit_continue; }
        goto seg_0798;
pc_0790:
        if (cyc >= budget) { epc = 0x790u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0798;
pc_0798:
        if (cyc >= budget) { epc = 0x798u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[5];
            vu.m_state.vi[5] = static_cast<int16_t>(vu.m_state.vi[0] + 64);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[5] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 5u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_07A0:
        if (cyc >= budget) { epc = 0x7A0u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[6];
            vu.m_state.vi[6] = static_cast<int16_t>(vu.m_state.vi[0] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[6] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 6u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_07A8:
        if (cyc >= budget) { epc = 0x7A8u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[7];
            vu.m_state.vi[7] = static_cast<int16_t>(vu.m_state.vi[0] + 0);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[7] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 7u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_07B0:
        if (cyc >= budget) { epc = 0x7B0u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[0] + 101);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_07B8:
        if (cyc >= budget) { epc = 0x7B8u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[0] + 61);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_07C0:
        if (cyc >= budget) { epc = 0x7C0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x7C0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[0] + vu.m_state.vi[11]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_07C8:
        if (cyc >= budget) { epc = 0x7C8u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[11];
            vu.m_state.vi[11] = static_cast<int16_t>(vu.m_state.vi[0] + 0);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 11u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_07D0:
        if (cyc >= budget) { epc = 0x7D0u; goto exit_budget; }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0x8u, nv(ctx, 0u), nbc(ctx, 0u, 3u), _mm_setzero_ps(), un); writeVf(vu, ctx, 30u, uv, uv, 0x8u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
        }
        ++cyc;
pc_07D8:
        if (cyc >= budget) { epc = 0x7D8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x7D8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[8], 0)); writeVf(vu, ctx, 21u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[8] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[21][0] = cyc + 4u;
            vu.m_vfReady[21][1] = cyc + 4u;
            vu.m_vfReady[21][2] = cyc + 4u;
            vu.m_vfReady[21][3] = cyc + 4u;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_07E0:
        if (cyc >= budget) { epc = 0x7E0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x7E0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[8], 0)); writeVf(vu, ctx, 22u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[8] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[22][0] = cyc + 4u;
            vu.m_vfReady[22][1] = cyc + 4u;
            vu.m_vfReady[22][2] = cyc + 4u;
            vu.m_vfReady[22][3] = cyc + 4u;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_07E8:
        if (cyc >= budget) { epc = 0x7E8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x7E8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[8], 0)); writeVf(vu, ctx, 23u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[8] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
            vu.m_vfReady[23][3] = cyc + 4u;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
        { epc = 0x7F0u; goto exit_continue; }
seg_0400:
        if (cyc + 67u > budget) goto pc_0400;
    {
        uint64_t s0400_0 = 0u, s0400_1 = 0u, s0400_2 = 0u, s0400_3 = 0u, s0400_4 = 0u, s0400_5 = 0u, s0400_6 = 0u, s0400_7 = 0u, s0400_8 = 0u, s0400_9 = 0u, s0400_10 = 0u, s0400_11 = 0u, s0400_12 = 0u, s0400_13 = 0u, s0400_14 = 0u, s0400_15 = 0u, s0400_16 = 0u, s0400_17 = 0u, s0400_18 = 0u, s0400_19 = 0u, s0400_20 = 0u, s0400_21 = 0u, s0400_22 = 0u, s0400_23 = 0u, s0400_24 = 0u, s0400_25 = 0u, s0400_26 = 0u, s0400_27 = 0u, s0400_28 = 0u, s0400_29 = 0u, s0400_30 = 0u, s0400_31 = 0u, s0400_32 = 0u, s0400_33 = 0u, s0400_34 = 0u, s0400_35 = 0u, s0400_36 = 0u, s0400_37 = 0u, s0400_38 = 0u, s0400_39 = 0u, s0400_40 = 0u, s0400_41 = 0u, s0400_42 = 0u, s0400_43 = 0u, s0400_44 = 0u, s0400_45 = 0u, s0400_46 = 0u, s0400_47 = 0u, s0400_48 = 0u, s0400_49 = 0u, s0400_50 = 0u, s0400_51 = 0u, s0400_52 = 0u, s0400_53 = 0u, s0400_54 = 0u, s0400_55 = 0u, s0400_56 = 0u, s0400_57 = 0u, s0400_58 = 0u, s0400_59 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr7 = _mm_loadu_ps(vu.m_state.vf[7]); __m128 vn7 = _mm_load_ps(ctx.norm[7]);
        __m128 vr13 = _mm_loadu_ps(vu.m_state.vf[13]); __m128 vn13 = _mm_load_ps(ctx.norm[13]);
        __m128 vr14 = _mm_loadu_ps(vu.m_state.vf[14]); __m128 vn14 = _mm_load_ps(ctx.norm[14]);
        __m128 vr15 = _mm_loadu_ps(vu.m_state.vf[15]); __m128 vn15 = _mm_load_ps(ctx.norm[15]);
        __m128 vr16 = _mm_loadu_ps(vu.m_state.vf[16]); __m128 vn16 = _mm_load_ps(ctx.norm[16]);
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr18 = _mm_loadu_ps(vu.m_state.vf[18]); __m128 vn18 = _mm_load_ps(ctx.norm[18]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr28 = _mm_loadu_ps(vu.m_state.vf[28]); __m128 vn28 = _mm_load_ps(ctx.norm[28]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        __m128 vr31 = _mm_loadu_ps(vu.m_state.vf[31]); __m128 vn31 = _mm_load_ps(ctx.norm[31]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        int32_t vi12 = vu.m_state.vi[12];
        int32_t vi13 = vu.m_state.vi[13];
        int32_t vi15 = vu.m_state.vi[15];
        // pc_0400
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_vfReady[14][2]); cyc = r; }
        s0400_0 = cyc;
        {
            { const __m128 uv = itof<0u>(vr14); vr14 = blendDest(vr14, uv, 0xEu); vn14 = blendDest(vn14, uv, 0xEu); }
            vu.m_state.i = std::bit_cast<float>(0x3C23D70Au);
        }
        ++cyc;
        // pc_0408
        { uint64_t r = cyc; r = rmax(r, s0400_0 + 4u); r = rmax(r, s0400_0 + 4u); r = rmax(r, s0400_0 + 4u); cyc = r; }
        s0400_1 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn14, iN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr14 = blendDest(vr14, uv, 0xEu); vn14 = blendDest(vn14, uv, 0xEu); }
        }
        ++cyc;
        // pc_0410
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); cyc = r; }
        s0400_2 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi4, 11)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }
        }
        ++cyc;
        // pc_0418
        s0400_3 = cyc;
        {
        }
        ++cyc;
        // pc_0420
        s0400_4 = cyc;
        {
        }
        ++cyc;
        // pc_0428
        { uint64_t r = cyc; r = rmax(r, s0400_2 + 4u); r = rmax(r, s0400_2 + 4u); r = rmax(r, s0400_2 + 4u); r = rmax(r, s0400_2 + 4u); cyc = r; }
        s0400_5 = cyc;
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[23])); vn23 = uv; }
        }
        ++cyc;
        // pc_0430
        s0400_6 = cyc;
        {
        }
        ++cyc;
        // pc_0438
        s0400_7 = cyc;
        {
        }
        ++cyc;
        // pc_0440
        s0400_8 = cyc;
        {
            vu.m_state.i = std::bit_cast<float>(0x3C010204u);
        }
        ++cyc;
        // pc_0448
        s0400_9 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn23, iN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn23 = uv; }
        }
        ++cyc;
        // pc_0450
        s0400_10 = cyc;
        {
        }
        ++cyc;
        // pc_0458
        s0400_11 = cyc;
        {
        }
        ++cyc;
        // pc_0460
        s0400_12 = cyc;
        {
        }
        ++cyc;
        // pc_0468
        s0400_13 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi11, 0)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0470
        s0400_14 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi12, 0)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_0478
        s0400_15 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi13, 0)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_0480
        s0400_16 = cyc;
        {
            clipOp(vu, ctx, cyc, vr13, vr13);
            { const __m128 lv = ldq(mem, qaddr(vi11, 1)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_0488
        s0400_17 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn27, bcast<0u>(vn14), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi12, 1)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0490
        s0400_18 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<1u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi13, 1)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_0498
        s0400_19 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<2u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn15 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi11, 2)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_04A0
        s0400_20 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn30, bcast<0u>(vn14), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi12, 2)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_04A8
        s0400_21 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn27, bcast<1u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi13, 2)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_04B0
        s0400_22 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<2u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn16 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi11, 3)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_04B8
        s0400_23 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn29, bcast<0u>(vn14), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi12, 3)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_04C0
        s0400_24 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn30, bcast<1u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi13, 3)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_04C8
        s0400_25 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn27, bcast<2u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn17 = uv; }
            stq(vu, ctx, cyc, qaddr(vi6, 1), vr24, 0xFu);
        }
        ++cyc;
        // pc_04D0
        s0400_26 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn28, bcast<0u>(vn14), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_04D8
        s0400_27 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<1u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_04E0
        s0400_28 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn30, bcast<2u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn18 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi4, 6)); _mm_storeu_ps(vu.m_state.vf[5], lv); vn5 = vnorm(lv); }
        }
        ++cyc;
        // pc_04E8
        s0400_29 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn15, bcast<0u>(vn23), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_04F0
        s0400_30 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn16, bcast<1u>(vn23), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_04F8
        s0400_31 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn17, bcast<2u>(vn23), vn32, un, fAccZ, fAccS, fAccScalar); vn23 = uv; }
        }
        ++cyc;
        // pc_0500
        s0400_32 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn15, bcast<0u>(vn5), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 208)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_0508
        s0400_33 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn16, bcast<1u>(vn5), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 200)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0510
        s0400_34 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn17, bcast<2u>(vn5), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 201)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_0518
        s0400_35 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn18, bcast<3u>(kVf0()), vn32, un, fAccZ, fAccS, fAccScalar); vn5 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 202)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_0520
        s0400_36 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn23, vn30, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr31 = blendDest(vr31, uv, 0xEu); vn31 = blendDest(vn31, uv, 0xEu); }
        }
        ++cyc;
        // pc_0528
        s0400_37 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn27, bcast<0u>(vn23), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0530
        s0400_38 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<1u>(vn23), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi4, 7)); _mm_storeu_ps(vu.m_state.vf[7], lv); vn7 = vnorm(lv); }
        }
        ++cyc;
        // pc_0538
        s0400_39 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<2u>(vn23), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi4, 16)); vr14 = blendDest(vr14, lv, 0xEu); vn14 = blendDest(vn14, vnorm(lv), 0xEu); }
        }
        ++cyc;
        // pc_0540
        s0400_40 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, kVf0(), bcast<3u>(kVf0()), vn32, un, fAccZ, fAccS, fAccScalar); vn30 = uv; }
        }
        ++cyc;
        // pc_0548
        s0400_41 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Add>(vu, ctx, cyc, 0x8u, vn31, bcast<1u>(vn31), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr31 = blendDest(vr31, uv, 0x8u); vn31 = blendDest(vn31, uv, 0x8u); }
        }
        ++cyc;
        // pc_0550
        s0400_42 = cyc;
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[7])); vn7 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 203)); _mm_storeu_ps(vu.m_state.vf[19], lv); vn19 = vnorm(lv); }
        }
        ++cyc;
        // pc_0558
        s0400_43 = cyc;
        {
            { const __m128 uv = itof<0u>(vr14); vr14 = blendDest(vr14, uv, 0xEu); vn14 = blendDest(vn14, uv, 0xEu); }
            vu.m_state.i = std::bit_cast<float>(0x3C23D70Au);
        }
        ++cyc;
        // pc_0560
        s0400_44 = cyc;
        {
            { const __m128 uv = _mm_max_ps(vn30, bcast<0u>(kVf0())); vn30 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 204)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0568
        s0400_45 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Add>(vu, ctx, cyc, 0x8u, vn31, bcast<2u>(vn31), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr31 = blendDest(vr31, uv, 0x8u); vn31 = blendDest(vn31, uv, 0x8u); }
            { const __m128 lv = ldq(mem, qaddr(0, 205)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_0570
        s0400_46 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn7, vn19, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn7 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 206)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_0578
        s0400_47 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn14, iN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr14 = blendDest(vr14, uv, 0xEu); vn14 = blendDest(vn14, uv, 0xEu); }
            vi11 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 15) + 4u) & 0xFFFFu);
        }
        ++cyc;
        // pc_0580
        s0400_48 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn27, bcast<0u>(vn30), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            vi12 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 15) + 8u) & 0xFFFFu);
        }
        ++cyc;
        // pc_0588
        s0400_49 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<1u>(vn30), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            vi13 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 15) + 12u) & 0xFFFFu);
        }
        ++cyc;
        // pc_0590
        s0400_50 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<2u>(vn30), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi4, 2)); vr6 = blendDest(vr6, lv, 0xCu); vn6 = blendDest(vn6, vnorm(lv), 0xCu); }
        }
        ++cyc;
        // pc_0598
        s0400_51 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xEu, vn25, bcast<3u>(kVf0()), vn32, un, fAccZ, fAccS, fAccScalar); vn30 = blendDest(vn30, uv, 0xEu); }
            { const __m128 lv = ldq(mem, qaddr(vi4, 17)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }
        }
        ++cyc;
        // pc_05A0
        s0400_52 = cyc;
        {
            { const __m128 uv = _mm_max_ps(vn31, bcast<0u>(kVf0())); vr31 = blendDest(vr31, uv, 0x8u); vn31 = blendDest(vn31, uv, 0x8u); }
            { const __m128 mr = kVf0(); const __m128 mn = kVf0(); vr6 = blendDest(vr6, _mm_shuffle_ps(mr, mr, _MM_SHUFFLE(0, 3, 2, 1)), 0x2u); vn6 = blendDest(vn6, _mm_shuffle_ps(mn, mn, _MM_SHUFFLE(0, 3, 2, 1)), 0x2u); }
        }
        ++cyc;
        // pc_05A8
        s0400_53 = cyc;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Mul>(vu, ctx, cyc, 0x1u, vn7, vn25, _mm_setzero_ps(), un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vn7 = blendDest(vn7, uv, 0x1u); }
            vi15 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 0) + 12u) & 0xFFFFu);
        }
        ++cyc;
        // pc_05B0
        s0400_54 = cyc;
        {
            { const __m128 uv = itof<12u>(vr6); vr6 = blendDest(vr6, uv, 0xCu); vn6 = blendDest(vn6, uv, 0xCu); }
            { const __m128 lv = ldq(mem, qaddr(0, 211)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_05B8
        s0400_55 = cyc;
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[23])); vn23 = uv; }
        }
        ++cyc;
        // pc_05C0
        s0400_56 = cyc;
        {
            { const __m128 uv = _mm_min_ps(vn31, bcast<3u>(kVf0())); vr31 = blendDest(vr31, uv, 0x8u); vn31 = blendDest(vn31, uv, 0x8u); }
            vi10 = static_cast<int16_t>(ldw(mem, qaddr(0, 210) + 0u) & 0xFFFFu);
        }
        ++cyc;
        // pc_05C8
        s0400_57 = cyc;
        const int32_t bk0400_57 = vi7;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, vn7, vn30, _mm_setzero_ps(), un); vn7 = blendDest(vn7, uv, 0xEu); }
            vi7 = static_cast<int16_t>(vi7 + -1);
        }
        ++cyc;
        // pc_05D0
        s0400_58 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xEu, vn27, vn6, _mm_setzero_ps(), un); vr6 = blendDest(vr6, uv, 0xEu); vn6 = blendDest(vn6, uv, 0xEu); }
            vu.m_state.i = std::bit_cast<float>(0x3C010204u);
        }
        ++cyc;
        // pc_05D8
        s0400_59 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn23, iN(vu), _mm_setzero_ps(), un); vn23 = uv; }
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[5], vn5); _mm_store_ps(ctx.norm[5], vn5);
        _mm_storeu_ps(vu.m_state.vf[6], vr6); _mm_store_ps(ctx.norm[6], vn6);
        _mm_storeu_ps(vu.m_state.vf[7], vn7); _mm_store_ps(ctx.norm[7], vn7);
        _mm_storeu_ps(vu.m_state.vf[14], vr14); _mm_store_ps(ctx.norm[14], vn14);
        _mm_storeu_ps(vu.m_state.vf[15], vn15); _mm_store_ps(ctx.norm[15], vn15);
        _mm_storeu_ps(vu.m_state.vf[16], vn16); _mm_store_ps(ctx.norm[16], vn16);
        _mm_storeu_ps(vu.m_state.vf[17], vn17); _mm_store_ps(ctx.norm[17], vn17);
        _mm_storeu_ps(vu.m_state.vf[18], vn18); _mm_store_ps(ctx.norm[18], vn18);
 _mm_store_ps(ctx.norm[19], vn19);
        _mm_storeu_ps(vu.m_state.vf[23], vn23); _mm_store_ps(ctx.norm[23], vn23);
 _mm_store_ps(ctx.norm[27], vn27);
 _mm_store_ps(ctx.norm[28], vn28);
 _mm_store_ps(ctx.norm[29], vn29);
        _mm_storeu_ps(vu.m_state.vf[30], vn30); _mm_store_ps(ctx.norm[30], vn30);
        _mm_storeu_ps(vu.m_state.vf[31], vr31); _mm_store_ps(ctx.norm[31], vn31);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        vu.m_state.vi[12] = vi12;
        vu.m_state.vi[13] = vi13;
        vu.m_state.vi[15] = vi15;
        vu.m_vfReady[6][0] = s0400_58 + 4u;
        vu.m_vfReady[6][1] = s0400_58 + 4u;
        vu.m_vfReady[6][2] = s0400_58 + 4u;
        vu.m_vfReady[7][0] = s0400_57 + 4u;
        vu.m_vfReady[7][1] = s0400_57 + 4u;
        vu.m_vfReady[7][2] = s0400_57 + 4u;
        setReady4(vu.m_vfReady[23].data(), s0400_59 + 4u);
        vu.m_viReady[7] = s0400_57 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_05E0;
    }
seg_0480:
        if (cyc + 47u > budget) goto pc_0480;
    {
        uint64_t s0480_0 = 0u, s0480_1 = 0u, s0480_2 = 0u, s0480_3 = 0u, s0480_4 = 0u, s0480_5 = 0u, s0480_6 = 0u, s0480_7 = 0u, s0480_8 = 0u, s0480_9 = 0u, s0480_10 = 0u, s0480_11 = 0u, s0480_12 = 0u, s0480_13 = 0u, s0480_14 = 0u, s0480_15 = 0u, s0480_16 = 0u, s0480_17 = 0u, s0480_18 = 0u, s0480_19 = 0u, s0480_20 = 0u, s0480_21 = 0u, s0480_22 = 0u, s0480_23 = 0u, s0480_24 = 0u, s0480_25 = 0u, s0480_26 = 0u, s0480_27 = 0u, s0480_28 = 0u, s0480_29 = 0u, s0480_30 = 0u, s0480_31 = 0u, s0480_32 = 0u, s0480_33 = 0u, s0480_34 = 0u, s0480_35 = 0u, s0480_36 = 0u, s0480_37 = 0u, s0480_38 = 0u, s0480_39 = 0u, s0480_40 = 0u, s0480_41 = 0u, s0480_42 = 0u, s0480_43 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr7 = _mm_loadu_ps(vu.m_state.vf[7]); __m128 vn7 = _mm_load_ps(ctx.norm[7]);
        __m128 vr13 = _mm_loadu_ps(vu.m_state.vf[13]); __m128 vn13 = _mm_load_ps(ctx.norm[13]);
        __m128 vr14 = _mm_loadu_ps(vu.m_state.vf[14]); __m128 vn14 = _mm_load_ps(ctx.norm[14]);
        __m128 vr15 = _mm_loadu_ps(vu.m_state.vf[15]); __m128 vn15 = _mm_load_ps(ctx.norm[15]);
        __m128 vr16 = _mm_loadu_ps(vu.m_state.vf[16]); __m128 vn16 = _mm_load_ps(ctx.norm[16]);
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr18 = _mm_loadu_ps(vu.m_state.vf[18]); __m128 vn18 = _mm_load_ps(ctx.norm[18]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr28 = _mm_loadu_ps(vu.m_state.vf[28]); __m128 vn28 = _mm_load_ps(ctx.norm[28]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        __m128 vr31 = _mm_loadu_ps(vu.m_state.vf[31]); __m128 vn31 = _mm_load_ps(ctx.norm[31]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        int32_t vi12 = vu.m_state.vi[12];
        int32_t vi13 = vu.m_state.vi[13];
        int32_t vi15 = vu.m_state.vi[15];
        // pc_0480
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[13][0]); r = rmax(r, vu.m_vfReady[13][1]); r = rmax(r, vu.m_vfReady[13][2]); r = rmax(r, vu.m_vfReady[13][3]); r = rmax(r, vu.m_viReady[11]); cyc = r; }
        s0480_0 = cyc;
        {
            clipOp(vu, ctx, cyc, vr13, vr13);
            { const __m128 lv = ldq(mem, qaddr(vi11, 1)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_0488
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[14][0]); r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_viReady[12]); cyc = r; }
        s0480_1 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn27, bcast<0u>(vn14), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi12, 1)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0490
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[14][1]); r = rmax(r, vu.m_vfReady[28][0]); r = rmax(r, vu.m_vfReady[28][1]); r = rmax(r, vu.m_vfReady[28][2]); r = rmax(r, vu.m_vfReady[28][3]); r = rmax(r, vu.m_viReady[13]); cyc = r; }
        s0480_2 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<1u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi13, 1)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_0498
        s0480_3 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<2u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn15 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi11, 2)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_04A0
        s0480_4 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn30, bcast<0u>(vn14), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi12, 2)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_04A8
        s0480_5 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn27, bcast<1u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi13, 2)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_04B0
        s0480_6 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<2u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn16 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi11, 3)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_04B8
        s0480_7 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn29, bcast<0u>(vn14), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi12, 3)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_04C0
        s0480_8 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn30, bcast<1u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi13, 3)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_04C8
        s0480_9 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn27, bcast<2u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn17 = uv; }
            stq(vu, ctx, cyc, qaddr(vi6, 1), vr24, 0xFu);
        }
        ++cyc;
        // pc_04D0
        s0480_10 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn28, bcast<0u>(vn14), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_04D8
        s0480_11 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<1u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_04E0
        s0480_12 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn30, bcast<2u>(vn14), vn32, un, fAccZ, fAccS, fAccScalar); vn18 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi4, 6)); _mm_storeu_ps(vu.m_state.vf[5], lv); vn5 = vnorm(lv); }
        }
        ++cyc;
        // pc_04E8
        s0480_13 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn15, bcast<0u>(vn23), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_04F0
        s0480_14 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn16, bcast<1u>(vn23), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_04F8
        s0480_15 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn17, bcast<2u>(vn23), vn32, un, fAccZ, fAccS, fAccScalar); vn23 = uv; }
        }
        ++cyc;
        // pc_0500
        s0480_16 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn15, bcast<0u>(vn5), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 208)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }
        }
        ++cyc;
        // pc_0508
        s0480_17 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn16, bcast<1u>(vn5), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 200)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0510
        s0480_18 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn17, bcast<2u>(vn5), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 201)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_0518
        s0480_19 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn18, bcast<3u>(kVf0()), vn32, un, fAccZ, fAccS, fAccScalar); vn5 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 202)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_0520
        s0480_20 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn23, vn30, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr31 = blendDest(vr31, uv, 0xEu); vn31 = blendDest(vn31, uv, 0xEu); }
        }
        ++cyc;
        // pc_0528
        s0480_21 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn27, bcast<0u>(vn23), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0530
        s0480_22 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<1u>(vn23), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi4, 7)); _mm_storeu_ps(vu.m_state.vf[7], lv); vn7 = vnorm(lv); }
        }
        ++cyc;
        // pc_0538
        s0480_23 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<2u>(vn23), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi4, 16)); vr14 = blendDest(vr14, lv, 0xEu); vn14 = blendDest(vn14, vnorm(lv), 0xEu); }
        }
        ++cyc;
        // pc_0540
        s0480_24 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, kVf0(), bcast<3u>(kVf0()), vn32, un, fAccZ, fAccS, fAccScalar); vn30 = uv; }
        }
        ++cyc;
        // pc_0548
        s0480_25 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Add>(vu, ctx, cyc, 0x8u, vn31, bcast<1u>(vn31), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr31 = blendDest(vr31, uv, 0x8u); vn31 = blendDest(vn31, uv, 0x8u); }
        }
        ++cyc;
        // pc_0550
        s0480_26 = cyc;
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[7])); vn7 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 203)); _mm_storeu_ps(vu.m_state.vf[19], lv); vn19 = vnorm(lv); }
        }
        ++cyc;
        // pc_0558
        s0480_27 = cyc;
        {
            { const __m128 uv = itof<0u>(vr14); vr14 = blendDest(vr14, uv, 0xEu); vn14 = blendDest(vn14, uv, 0xEu); }
            vu.m_state.i = std::bit_cast<float>(0x3C23D70Au);
        }
        ++cyc;
        // pc_0560
        s0480_28 = cyc;
        {
            { const __m128 uv = _mm_max_ps(vn30, bcast<0u>(kVf0())); vn30 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 204)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0568
        s0480_29 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Add>(vu, ctx, cyc, 0x8u, vn31, bcast<2u>(vn31), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr31 = blendDest(vr31, uv, 0x8u); vn31 = blendDest(vn31, uv, 0x8u); }
            { const __m128 lv = ldq(mem, qaddr(0, 205)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_0570
        s0480_30 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn7, vn19, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn7 = uv; }
            { const __m128 lv = ldq(mem, qaddr(0, 206)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_0578
        s0480_31 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn14, iN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr14 = blendDest(vr14, uv, 0xEu); vn14 = blendDest(vn14, uv, 0xEu); }
            vi11 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 15) + 4u) & 0xFFFFu);
        }
        ++cyc;
        // pc_0580
        s0480_32 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn27, bcast<0u>(vn30), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            vi12 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 15) + 8u) & 0xFFFFu);
        }
        ++cyc;
        // pc_0588
        s0480_33 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn28, bcast<1u>(vn30), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            vi13 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 15) + 12u) & 0xFFFFu);
        }
        ++cyc;
        // pc_0590
        s0480_34 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn29, bcast<2u>(vn30), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi4, 2)); vr6 = blendDest(vr6, lv, 0xCu); vn6 = blendDest(vn6, vnorm(lv), 0xCu); }
        }
        ++cyc;
        // pc_0598
        s0480_35 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xEu, vn25, bcast<3u>(kVf0()), vn32, un, fAccZ, fAccS, fAccScalar); vn30 = blendDest(vn30, uv, 0xEu); }
            { const __m128 lv = ldq(mem, qaddr(vi4, 17)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }
        }
        ++cyc;
        // pc_05A0
        s0480_36 = cyc;
        {
            { const __m128 uv = _mm_max_ps(vn31, bcast<0u>(kVf0())); vr31 = blendDest(vr31, uv, 0x8u); vn31 = blendDest(vn31, uv, 0x8u); }
            { const __m128 mr = kVf0(); const __m128 mn = kVf0(); vr6 = blendDest(vr6, _mm_shuffle_ps(mr, mr, _MM_SHUFFLE(0, 3, 2, 1)), 0x2u); vn6 = blendDest(vn6, _mm_shuffle_ps(mn, mn, _MM_SHUFFLE(0, 3, 2, 1)), 0x2u); }
        }
        ++cyc;
        // pc_05A8
        s0480_37 = cyc;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Mul>(vu, ctx, cyc, 0x1u, vn7, vn25, _mm_setzero_ps(), un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vn7 = blendDest(vn7, uv, 0x1u); }
            vi15 = static_cast<int16_t>(ldw(mem, qaddr(vi4, 0) + 12u) & 0xFFFFu);
        }
        ++cyc;
        // pc_05B0
        s0480_38 = cyc;
        {
            { const __m128 uv = itof<12u>(vr6); vr6 = blendDest(vr6, uv, 0xCu); vn6 = blendDest(vn6, uv, 0xCu); }
            { const __m128 lv = ldq(mem, qaddr(0, 211)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_05B8
        s0480_39 = cyc;
        {
            { const __m128 uv = itof<0u>(_mm_loadu_ps(vu.m_state.vf[23])); vn23 = uv; }
        }
        ++cyc;
        // pc_05C0
        s0480_40 = cyc;
        {
            { const __m128 uv = _mm_min_ps(vn31, bcast<3u>(kVf0())); vr31 = blendDest(vr31, uv, 0x8u); vn31 = blendDest(vn31, uv, 0x8u); }
            vi10 = static_cast<int16_t>(ldw(mem, qaddr(0, 210) + 0u) & 0xFFFFu);
        }
        ++cyc;
        // pc_05C8
        s0480_41 = cyc;
        const int32_t bk0480_41 = vi7;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, vn7, vn30, _mm_setzero_ps(), un); vn7 = blendDest(vn7, uv, 0xEu); }
            vi7 = static_cast<int16_t>(vi7 + -1);
        }
        ++cyc;
        // pc_05D0
        s0480_42 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xEu, vn27, vn6, _mm_setzero_ps(), un); vr6 = blendDest(vr6, uv, 0xEu); vn6 = blendDest(vn6, uv, 0xEu); }
            vu.m_state.i = std::bit_cast<float>(0x3C010204u);
        }
        ++cyc;
        // pc_05D8
        s0480_43 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn23, iN(vu), _mm_setzero_ps(), un); vn23 = uv; }
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[5], vn5); _mm_store_ps(ctx.norm[5], vn5);
        _mm_storeu_ps(vu.m_state.vf[6], vr6); _mm_store_ps(ctx.norm[6], vn6);
        _mm_storeu_ps(vu.m_state.vf[7], vn7); _mm_store_ps(ctx.norm[7], vn7);
        _mm_storeu_ps(vu.m_state.vf[14], vr14); _mm_store_ps(ctx.norm[14], vn14);
        _mm_storeu_ps(vu.m_state.vf[15], vn15); _mm_store_ps(ctx.norm[15], vn15);
        _mm_storeu_ps(vu.m_state.vf[16], vn16); _mm_store_ps(ctx.norm[16], vn16);
        _mm_storeu_ps(vu.m_state.vf[17], vn17); _mm_store_ps(ctx.norm[17], vn17);
        _mm_storeu_ps(vu.m_state.vf[18], vn18); _mm_store_ps(ctx.norm[18], vn18);
 _mm_store_ps(ctx.norm[19], vn19);
        _mm_storeu_ps(vu.m_state.vf[23], vn23); _mm_store_ps(ctx.norm[23], vn23);
 _mm_store_ps(ctx.norm[27], vn27);
 _mm_store_ps(ctx.norm[28], vn28);
 _mm_store_ps(ctx.norm[29], vn29);
        _mm_storeu_ps(vu.m_state.vf[30], vn30); _mm_store_ps(ctx.norm[30], vn30);
        _mm_storeu_ps(vu.m_state.vf[31], vr31); _mm_store_ps(ctx.norm[31], vn31);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        vu.m_state.vi[12] = vi12;
        vu.m_state.vi[13] = vi13;
        vu.m_state.vi[15] = vi15;
        vu.m_vfReady[6][0] = s0480_42 + 4u;
        vu.m_vfReady[6][1] = s0480_42 + 4u;
        vu.m_vfReady[6][2] = s0480_42 + 4u;
        vu.m_vfReady[7][0] = s0480_41 + 4u;
        vu.m_vfReady[7][1] = s0480_41 + 4u;
        vu.m_vfReady[7][2] = s0480_41 + 4u;
        setReady4(vu.m_vfReady[23].data(), s0480_43 + 4u);
        vu.m_viReady[7] = s0480_41 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_05E0;
    }
seg_05E0:
        if (cyc + 7u > budget) goto pc_05E0;
    {
        uint64_t s05E0_0 = 0u, s05E0_1 = 0u, s05E0_2 = 0u, s05E0_3 = 0u;
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr31 = _mm_loadu_ps(vu.m_state.vf[31]); __m128 vn31 = _mm_load_ps(ctx.norm[31]);
        int32_t vi10 = vu.m_state.vi[10];
segb_05E0:
        // pc_05E0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_viReady[10]); cyc = r; }
        s05E0_0 = cyc;
        const int32_t bk05E0_0 = vi10;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x8u, vn31, bcast<0u>(vn31), _mm_setzero_ps(), un); vr31 = blendDest(vr31, uv, 0x8u); vn31 = blendDest(vn31, uv, 0x8u); }
            vi10 = static_cast<int16_t>(vi10 + -1);
        }
        ++cyc;
        // pc_05E8
        s05E0_1 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 215)); vr19 = blendDest(vr19, lv, 0xEu); vn19 = blendDest(vn19, vnorm(lv), 0xEu); }
        }
        ++cyc;
        // pc_05F0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); cyc = r; }
        s05E0_2 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, vn26, qN(vu), _mm_setzero_ps(), un); vr8 = blendDest(vr8, uv, 0xEu); vn8 = blendDest(vn8, uv, 0xEu); }
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi10);
        }
        ++cyc;
        s05E0_3 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0x1u, vn22, bcast<0u>(kVf0()), _mm_setzero_ps(), un); vr8 = blendDest(vr8, uv, 0x1u); vn8 = blendDest(vn8, uv, 0x1u); }
            { const __m128 lv = ldq(mem, qaddr(0, 216)); vr20 = blendDest(vr20, lv, 0xEu); vn20 = blendDest(vn20, vnorm(lv), 0xEu); }
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[8], vr8); _mm_store_ps(ctx.norm[8], vn8);
        _mm_storeu_ps(vu.m_state.vf[19], vr19); _mm_store_ps(ctx.norm[19], vn19);
        _mm_storeu_ps(vu.m_state.vf[20], vr20); _mm_store_ps(ctx.norm[20], vn20);
        _mm_storeu_ps(vu.m_state.vf[31], vr31); _mm_store_ps(ctx.norm[31], vn31);
        vu.m_state.vi[10] = vi10;
        vu.m_vfReady[8][0] = s05E0_2 + 4u;
        vu.m_vfReady[8][1] = s05E0_2 + 4u;
        vu.m_vfReady[8][2] = s05E0_2 + 4u;
        vu.m_vfReady[8][3] = s05E0_3 + 4u;
        vu.m_vfReady[19][0] = s05E0_1 + 4u;
        vu.m_vfReady[19][1] = s05E0_1 + 4u;
        vu.m_vfReady[19][2] = s05E0_1 + 4u;
        vu.m_vfReady[20][0] = s05E0_3 + 4u;
        vu.m_vfReady[20][1] = s05E0_3 + 4u;
        vu.m_vfReady[20][2] = s05E0_3 + 4u;
        vu.m_viBranchBackupValid = false;
        if (tk) {
        if (cyc + 7u > budget) goto pc_05E0;
        goto segb_05E0;
        }
        goto seg_0600;
    }
seg_05F8:
        if (cyc + 16u > budget) goto pc_05F8;
    {
        uint64_t s05F8_0 = 0u, s05F8_1 = 0u, s05F8_2 = 0u, s05F8_3 = 0u, s05F8_4 = 0u, s05F8_5 = 0u, s05F8_6 = 0u, s05F8_7 = 0u, s05F8_8 = 0u, s05F8_9 = 0u, s05F8_10 = 0u, s05F8_11 = 0u, s05F8_12 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr1 = _mm_loadu_ps(vu.m_state.vf[1]); __m128 vn1 = _mm_load_ps(ctx.norm[1]);
        __m128 vr2 = _mm_loadu_ps(vu.m_state.vf[2]); __m128 vn2 = _mm_load_ps(ctx.norm[2]);
        __m128 vr3 = _mm_loadu_ps(vu.m_state.vf[3]); __m128 vn3 = _mm_load_ps(ctx.norm[3]);
        __m128 vr4 = _mm_loadu_ps(vu.m_state.vf[4]); __m128 vn4 = _mm_load_ps(ctx.norm[4]);
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr7 = _mm_loadu_ps(vu.m_state.vf[7]); __m128 vn7 = _mm_load_ps(ctx.norm[7]);
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr14 = _mm_loadu_ps(vu.m_state.vf[14]); __m128 vn14 = _mm_load_ps(ctx.norm[14]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr28 = _mm_loadu_ps(vu.m_state.vf[28]); __m128 vn28 = _mm_load_ps(ctx.norm[28]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        __m128 vr31 = _mm_loadu_ps(vu.m_state.vf[31]); __m128 vn31 = _mm_load_ps(ctx.norm[31]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi11 = vu.m_state.vi[11];
        int32_t vi12 = vu.m_state.vi[12];
        int32_t vi13 = vu.m_state.vi[13];
        int32_t vi14 = vu.m_state.vi[14];
        int32_t vi15 = vu.m_state.vi[15];
        // pc_05F8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[22][3]); cyc = r; }
        s05F8_0 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Add>(vu, ctx, cyc, 0x1u, vn22, bcast<0u>(kVf0()), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr8 = blendDest(vr8, uv, 0x1u); vn8 = blendDest(vn8, uv, 0x1u); }
            { const __m128 lv = ldq(mem, qaddr(0, 216)); vr20 = blendDest(vr20, lv, 0xEu); vn20 = blendDest(vn20, vnorm(lv), 0xEu); }
        }
        ++cyc;
        // pc_0600
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_viReady[11]); cyc = r; }
        s05F8_1 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0x1u, vn7, bcast<0u>(vn31), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr7 = blendDest(vr7, uv, 0x1u); vn7 = blendDest(vn7, uv, 0x1u); }
            { const __m128 lv = ldq(mem, qaddr(vi11, 0)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0608
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_vfReady[6][2]); r = rmax(r, vu.m_vfReady[6][3]); r = rmax(r, vu.m_viReady[8]); r = rmax(r, vu.m_viReady[15]); cyc = r; }
        s05F8_2 = cyc;
        const int32_t bk05F8_2 = vi2;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn6, qN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn6 = uv; }
            vi2 = static_cast<int16_t>(vi15 & vi8);
        }
        ++cyc;
        // pc_0610
        s05F8_3 = cyc;
        const int32_t bk05F8_3 = vi14;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Sub>(vu, ctx, cyc, 0xEu, vn8, vn19, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr21 = blendDest(vr21, uv, 0xEu); vn21 = blendDest(vn21, uv, 0xEu); }
            vi14 = static_cast<int16_t>(vi15 & vi3);
        }
        ++cyc;
        // pc_0618
        s05F8_4 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Sub>(vu, ctx, cyc, 0xEu, vn20, vn19, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr20 = blendDest(vr20, uv, 0xEu); vn20 = blendDest(vn20, uv, 0xEu); }
            { const __m128 lv = ldq(mem, qaddr(vi12, 0)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_0620
        s05F8_5 = cyc;
        {
            { const __m128 uv = _mm_min_ps(vn7, bcast<3u>(vn14)); vn7 = uv; }
            stq(vu, ctx, cyc, qaddr(0, 216), vr19, 0xEu);
        }
        ++cyc;
        // pc_0628
        s05F8_6 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn1, bcast<0u>(vn5), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            stq(vu, ctx, cyc, qaddr(vi6, 0), vn6, 0xFu);
        }
        ++cyc;
        // pc_0630
        s05F8_7 = cyc;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Madd>(vu, ctx, cyc, 0xFu, vn2, bcast<1u>(vn5), vn32, un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vn32 = uv; }
            stq(vu, ctx, cyc, qaddr(0, 215), vr8, 0xEu);
        }
        ++cyc;
        // pc_0638
        s05F8_8 = cyc;
        {
            { const __m128 uv = ftoi<4u>(vn8); _mm_storeu_ps(vu.m_state.vf[8], uv); vn8 = vnorm(uv); }
            commitClip(vu, ctx, cyc); vi1 = (vu.m_state.clip & 0x3FFFFu) != 0u ? 1 : 0;
        }
        ++cyc;
        // pc_0640
        s05F8_9 = cyc;
        {
            { const __m128 uv = ftoi<0u>(vn7); _mm_storeu_ps(vu.m_state.vf[24], uv); vn24 = vnorm(uv); }
            { const __m128 lv = ldq(mem, qaddr(vi13, 0)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_0648
        s05F8_10 = cyc;
        const int32_t bk05F8_10 = vi1;
        {
            vi1 = static_cast<int16_t>(vi1 | vi14);
        }
        ++cyc;
        // pc_0650
        s05F8_11 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn3, bcast<2u>(vn5), vn32, un); vn32 = uv; }
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi2);
        }
        ++cyc;
        s05F8_12 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn4, bcast<3u>(kVf0()), vn32, un); vn26 = uv; }
            stq(vu, ctx, cyc, qaddr(vi6, 2), _mm_loadu_ps(vu.m_state.vf[8]), 0xFu);
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[6], vn6); _mm_store_ps(ctx.norm[6], vn6);
        _mm_storeu_ps(vu.m_state.vf[7], vn7); _mm_store_ps(ctx.norm[7], vn7);
 _mm_store_ps(ctx.norm[8], vn8);
        _mm_storeu_ps(vu.m_state.vf[20], vr20); _mm_store_ps(ctx.norm[20], vn20);
        _mm_storeu_ps(vu.m_state.vf[21], vr21); _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[24], vn24);
        _mm_storeu_ps(vu.m_state.vf[26], vn26); _mm_store_ps(ctx.norm[26], vn26);
 _mm_store_ps(ctx.norm[27], vn27);
 _mm_store_ps(ctx.norm[28], vn28);
 _mm_store_ps(ctx.norm[29], vn29);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[1] = vi1;
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[14] = vi14;
        setReady4(vu.m_vfReady[26].data(), s05F8_12 + 4u);
        vu.m_viReady[1] = s05F8_10 + 1u;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0678;
        goto seg_0660;
    }
seg_0600:
        if (cyc + 15u > budget) goto pc_0600;
    {
        uint64_t s0600_0 = 0u, s0600_1 = 0u, s0600_2 = 0u, s0600_3 = 0u, s0600_4 = 0u, s0600_5 = 0u, s0600_6 = 0u, s0600_7 = 0u, s0600_8 = 0u, s0600_9 = 0u, s0600_10 = 0u, s0600_11 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr1 = _mm_loadu_ps(vu.m_state.vf[1]); __m128 vn1 = _mm_load_ps(ctx.norm[1]);
        __m128 vr2 = _mm_loadu_ps(vu.m_state.vf[2]); __m128 vn2 = _mm_load_ps(ctx.norm[2]);
        __m128 vr3 = _mm_loadu_ps(vu.m_state.vf[3]); __m128 vn3 = _mm_load_ps(ctx.norm[3]);
        __m128 vr4 = _mm_loadu_ps(vu.m_state.vf[4]); __m128 vn4 = _mm_load_ps(ctx.norm[4]);
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr7 = _mm_loadu_ps(vu.m_state.vf[7]); __m128 vn7 = _mm_load_ps(ctx.norm[7]);
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr14 = _mm_loadu_ps(vu.m_state.vf[14]); __m128 vn14 = _mm_load_ps(ctx.norm[14]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr28 = _mm_loadu_ps(vu.m_state.vf[28]); __m128 vn28 = _mm_load_ps(ctx.norm[28]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        __m128 vr31 = _mm_loadu_ps(vu.m_state.vf[31]); __m128 vn31 = _mm_load_ps(ctx.norm[31]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi11 = vu.m_state.vi[11];
        int32_t vi12 = vu.m_state.vi[12];
        int32_t vi13 = vu.m_state.vi[13];
        int32_t vi14 = vu.m_state.vi[14];
        int32_t vi15 = vu.m_state.vi[15];
        // pc_0600
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[7][3]); r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_viReady[11]); cyc = r; }
        s0600_0 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0x1u, vn7, bcast<0u>(vn31), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr7 = blendDest(vr7, uv, 0x1u); vn7 = blendDest(vn7, uv, 0x1u); }
            { const __m128 lv = ldq(mem, qaddr(vi11, 0)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0608
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_vfReady[6][2]); r = rmax(r, vu.m_vfReady[6][3]); r = rmax(r, vu.m_viReady[8]); r = rmax(r, vu.m_viReady[15]); cyc = r; }
        s0600_1 = cyc;
        const int32_t bk0600_1 = vi2;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn6, qN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn6 = uv; }
            vi2 = static_cast<int16_t>(vi15 & vi8);
        }
        ++cyc;
        // pc_0610
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[8][0]); r = rmax(r, vu.m_vfReady[8][1]); r = rmax(r, vu.m_vfReady[8][2]); r = rmax(r, vu.m_vfReady[19][0]); r = rmax(r, vu.m_vfReady[19][1]); r = rmax(r, vu.m_vfReady[19][2]); r = rmax(r, vu.m_viReady[3]); r = rmax(r, vu.m_viReady[15]); cyc = r; }
        s0600_2 = cyc;
        const int32_t bk0600_2 = vi14;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Sub>(vu, ctx, cyc, 0xEu, vn8, vn19, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr21 = blendDest(vr21, uv, 0xEu); vn21 = blendDest(vn21, uv, 0xEu); }
            vi14 = static_cast<int16_t>(vi15 & vi3);
        }
        ++cyc;
        // pc_0618
        s0600_3 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Sub>(vu, ctx, cyc, 0xEu, vn20, vn19, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr20 = blendDest(vr20, uv, 0xEu); vn20 = blendDest(vn20, uv, 0xEu); }
            { const __m128 lv = ldq(mem, qaddr(vi12, 0)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }
        }
        ++cyc;
        // pc_0620
        s0600_4 = cyc;
        {
            { const __m128 uv = _mm_min_ps(vn7, bcast<3u>(vn14)); vn7 = uv; }
            stq(vu, ctx, cyc, qaddr(0, 216), vr19, 0xEu);
        }
        ++cyc;
        // pc_0628
        s0600_5 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn1, bcast<0u>(vn5), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            stq(vu, ctx, cyc, qaddr(vi6, 0), vn6, 0xFu);
        }
        ++cyc;
        // pc_0630
        s0600_6 = cyc;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Madd>(vu, ctx, cyc, 0xFu, vn2, bcast<1u>(vn5), vn32, un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vn32 = uv; }
            stq(vu, ctx, cyc, qaddr(0, 215), vr8, 0xEu);
        }
        ++cyc;
        // pc_0638
        s0600_7 = cyc;
        {
            { const __m128 uv = ftoi<4u>(vn8); _mm_storeu_ps(vu.m_state.vf[8], uv); vn8 = vnorm(uv); }
            commitClip(vu, ctx, cyc); vi1 = (vu.m_state.clip & 0x3FFFFu) != 0u ? 1 : 0;
        }
        ++cyc;
        // pc_0640
        s0600_8 = cyc;
        {
            { const __m128 uv = ftoi<0u>(vn7); _mm_storeu_ps(vu.m_state.vf[24], uv); vn24 = vnorm(uv); }
            { const __m128 lv = ldq(mem, qaddr(vi13, 0)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }
        }
        ++cyc;
        // pc_0648
        s0600_9 = cyc;
        const int32_t bk0600_9 = vi1;
        {
            vi1 = static_cast<int16_t>(vi1 | vi14);
        }
        ++cyc;
        // pc_0650
        s0600_10 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn3, bcast<2u>(vn5), vn32, un); vn32 = uv; }
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi2);
        }
        ++cyc;
        s0600_11 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn4, bcast<3u>(kVf0()), vn32, un); vn26 = uv; }
            stq(vu, ctx, cyc, qaddr(vi6, 2), _mm_loadu_ps(vu.m_state.vf[8]), 0xFu);
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[6], vn6); _mm_store_ps(ctx.norm[6], vn6);
        _mm_storeu_ps(vu.m_state.vf[7], vn7); _mm_store_ps(ctx.norm[7], vn7);
 _mm_store_ps(ctx.norm[8], vn8);
        _mm_storeu_ps(vu.m_state.vf[20], vr20); _mm_store_ps(ctx.norm[20], vn20);
        _mm_storeu_ps(vu.m_state.vf[21], vr21); _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[24], vn24);
        _mm_storeu_ps(vu.m_state.vf[26], vn26); _mm_store_ps(ctx.norm[26], vn26);
 _mm_store_ps(ctx.norm[27], vn27);
 _mm_store_ps(ctx.norm[28], vn28);
 _mm_store_ps(ctx.norm[29], vn29);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[1] = vi1;
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[14] = vi14;
        setReady4(vu.m_vfReady[26].data(), s0600_11 + 4u);
        vu.m_viReady[1] = s0600_9 + 1u;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0678;
        goto seg_0660;
    }
seg_0658:
        if (cyc + 8u > budget) goto pc_0658;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 3u) goto pc_0658;
    {
        uint64_t s0658_0 = 0u, s0658_1 = 0u, s0658_2 = 0u, s0658_3 = 0u;
        __m128 vr4 = _mm_loadu_ps(vu.m_state.vf[4]); __m128 vn4 = _mm_load_ps(ctx.norm[4]);
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi9 = vu.m_state.vi[9];
        // pc_0658
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[4][0]); r = rmax(r, vu.m_vfReady[4][1]); r = rmax(r, vu.m_vfReady[4][2]); r = rmax(r, vu.m_vfReady[4][3]); r = rmax(r, vu.m_vfReady[8][0]); r = rmax(r, vu.m_vfReady[8][1]); r = rmax(r, vu.m_vfReady[8][2]); r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_viReady[6]); cyc = r; }
        s0658_0 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn4, bcast<3u>(kVf0()), vn32, un); vn26 = uv; }
            stq(vu, ctx, cyc, qaddr(vi6, 2), vr8, 0xFu);
        }
        ++cyc;
        // pc_0660
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); cyc = r; }
        s0658_1 = cyc;
        const int32_t bk0658_1 = vi9;
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmula>(vu, ctx, cyc, 0xEu, vn20, vn21, _mm_setzero_ps(), un); vr32 = blendDest(vr32, uv, 0xEu); vn32 = blendDest(vn32, uv, 0xEu); }
            vi9 = static_cast<int16_t>(static_cast<uint32_t>(_mm_extract_ps(vr8, 3)) & 0xFFFFu);
        }
        ++cyc;
        // pc_0668
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); cyc = r; }
        s0658_2 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmsub>(vu, ctx, cyc, 0xEu, vn21, vn20, vn32, un);  }
        }
        ++cyc;
        { uint64_t r = cyc; r = rmax(r, s0658_0 + 4u); cyc = r; }
        s0658_3 = cyc;
        {
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vn26));
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[26], vn26); _mm_store_ps(ctx.norm[26], vn26);
        _mm_storeu_ps(vu.m_state.acc, vr32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[9] = vi9;
        vu.m_viReady[9] = s0658_1 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0690;
    }
seg_0660:
        if (cyc + 6u > budget) goto pc_0660;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 2u) goto pc_0660;
    {
        uint64_t s0660_0 = 0u, s0660_1 = 0u, s0660_2 = 0u;
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi9 = vu.m_state.vi[9];
        // pc_0660
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); cyc = r; }
        s0660_0 = cyc;
        const int32_t bk0660_0 = vi9;
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmula>(vu, ctx, cyc, 0xEu, vn20, vn21, _mm_setzero_ps(), un); vr32 = blendDest(vr32, uv, 0xEu); vn32 = blendDest(vn32, uv, 0xEu); }
            vi9 = static_cast<int16_t>(static_cast<uint32_t>(_mm_extract_ps(vr8, 3)) & 0xFFFFu);
        }
        ++cyc;
        // pc_0668
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); cyc = r; }
        s0660_1 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmsub>(vu, ctx, cyc, 0xEu, vn21, vn20, vn32, un);  }
        }
        ++cyc;
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][3]); cyc = r; }
        s0660_2 = cyc;
        {
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vr26));
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.acc, vr32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[9] = vi9;
        vu.m_viReady[9] = s0660_0 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0690;
    }
seg_0670:
        if (cyc + 18u > budget) goto pc_0670;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 0u) goto pc_0670;
    {
        uint64_t s0670_0 = 0u, s0670_1 = 0u, s0670_2 = 0u, s0670_3 = 0u, s0670_4 = 0u, s0670_5 = 0u, s0670_6 = 0u, s0670_7 = 0u, s0670_8 = 0u, s0670_9 = 0u, s0670_10 = 0u;
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr9 = _mm_loadu_ps(vu.m_state.vf[9]); __m128 vn9 = _mm_load_ps(ctx.norm[9]);
        __m128 vr10 = _mm_loadu_ps(vu.m_state.vf[10]); __m128 vn10 = _mm_load_ps(ctx.norm[10]);
        __m128 vr11 = _mm_loadu_ps(vu.m_state.vf[11]); __m128 vn11 = _mm_load_ps(ctx.norm[11]);
        __m128 vr12 = _mm_loadu_ps(vu.m_state.vf[12]); __m128 vn12 = _mm_load_ps(ctx.norm[12]);
        __m128 vr13 = _mm_loadu_ps(vu.m_state.vf[13]); __m128 vn13 = _mm_load_ps(ctx.norm[13]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi14 = vu.m_state.vi[14];
        // pc_0670
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][3]); cyc = r; }
        s0670_0 = cyc;
        {
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vr26));
        }
        ++cyc;
        // pc_0678
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); cyc = r; }
        s0670_1 = cyc;
        const int32_t bk0670_1 = vi9;
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmula>(vu, ctx, cyc, 0xEu, vn21, vn20, _mm_setzero_ps(), un); vr32 = blendDest(vr32, uv, 0xEu); vn32 = blendDest(vn32, uv, 0xEu); }
            vi9 = static_cast<int16_t>(static_cast<uint32_t>(_mm_extract_ps(vr8, 3)) & 0xFFFFu);
        }
        ++cyc;
        // pc_0680
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); cyc = r; }
        s0670_2 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmsub>(vu, ctx, cyc, 0xEu, vn20, vn21, vn32, un);  }
        }
        ++cyc;
        // pc_0688
        { uint64_t r = cyc; r = rmax(r, s0670_0 + 7u); cyc = r; }
        s0670_3 = cyc;
        {
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vr26));
        }
        ++cyc;
        // pc_0690
        s0670_4 = cyc;
        const int32_t bk0670_4 = vi9;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn9, bcast<0u>(vn5), _mm_setzero_ps(), un); vn32 = uv; }
            vi9 = static_cast<int16_t>(vi9 + vi3);
        }
        ++cyc;
        // pc_0698
        s0670_5 = cyc;
        const int32_t bk0670_5 = vi14;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn10, bcast<1u>(vn5), vn32, un); vn32 = uv; }
            vi14 = static_cast<int16_t>(0 + 32);
        }
        ++cyc;
        // pc_06A0
        s0670_6 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn11, bcast<2u>(vn5), vn32, un); vn32 = uv; }
            commitStatus(vu, ctx, cyc); vi14 = static_cast<int16_t>(vu.m_state.mac & static_cast<uint32_t>(static_cast<uint16_t>(vi14)));
        }
        ++cyc;
        // pc_06A8
        s0670_7 = cyc;
        const int32_t bk0670_7 = vi1;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn12, bcast<3u>(kVf0()), vn32, un); vn13 = uv; }
            vi1 = static_cast<int16_t>(vi1 | vi14);
        }
        ++cyc;
        // pc_06B0
        s0670_8 = cyc;
        {
        }
        ++cyc;
        // pc_06B8
        s0670_9 = cyc;
        {
            tk = static_cast<int16_t>(0) == static_cast<int16_t>(vi1);
        }
        ++cyc;
        s0670_10 = cyc;
        const int32_t bk0670_10 = vi6;
        {
            vi6 = static_cast<int16_t>(vi6 + 3);
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[13], vn13); _mm_store_ps(ctx.norm[13], vn13);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[1] = vi1;
        vu.m_state.vi[6] = vi6;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[14] = vi14;
        vu.m_viReady[6] = s0670_10 + 1u;
        vu.m_viBranchBackupValue = bk0670_10; vu.m_viBranchBackupReg = 6u; vu.m_viBranchBackupValid = true;
        if (tk) goto seg_06D0;
        goto seg_06C8;
    }
seg_0678:
        if (cyc + 13u > budget) goto pc_0678;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 2u) goto pc_0678;
    {
        uint64_t s0678_0 = 0u, s0678_1 = 0u, s0678_2 = 0u, s0678_3 = 0u, s0678_4 = 0u, s0678_5 = 0u, s0678_6 = 0u, s0678_7 = 0u, s0678_8 = 0u, s0678_9 = 0u;
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr8 = _mm_loadu_ps(vu.m_state.vf[8]); __m128 vn8 = _mm_load_ps(ctx.norm[8]);
        __m128 vr9 = _mm_loadu_ps(vu.m_state.vf[9]); __m128 vn9 = _mm_load_ps(ctx.norm[9]);
        __m128 vr10 = _mm_loadu_ps(vu.m_state.vf[10]); __m128 vn10 = _mm_load_ps(ctx.norm[10]);
        __m128 vr11 = _mm_loadu_ps(vu.m_state.vf[11]); __m128 vn11 = _mm_load_ps(ctx.norm[11]);
        __m128 vr12 = _mm_loadu_ps(vu.m_state.vf[12]); __m128 vn12 = _mm_load_ps(ctx.norm[12]);
        __m128 vr13 = _mm_loadu_ps(vu.m_state.vf[13]); __m128 vn13 = _mm_load_ps(ctx.norm[13]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi14 = vu.m_state.vi[14];
        // pc_0678
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[8][3]); r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); cyc = r; }
        s0678_0 = cyc;
        const int32_t bk0678_0 = vi9;
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmula>(vu, ctx, cyc, 0xEu, vn21, vn20, _mm_setzero_ps(), un); vr32 = blendDest(vr32, uv, 0xEu); vn32 = blendDest(vn32, uv, 0xEu); }
            vi9 = static_cast<int16_t>(static_cast<uint32_t>(_mm_extract_ps(vr8, 3)) & 0xFFFFu);
        }
        ++cyc;
        // pc_0680
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); cyc = r; }
        s0678_1 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmsub>(vu, ctx, cyc, 0xEu, vn20, vn21, vn32, un);  }
        }
        ++cyc;
        // pc_0688
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][3]); cyc = r; }
        s0678_2 = cyc;
        {
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vr26));
        }
        ++cyc;
        // pc_0690
        s0678_3 = cyc;
        const int32_t bk0678_3 = vi9;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn9, bcast<0u>(vn5), _mm_setzero_ps(), un); vn32 = uv; }
            vi9 = static_cast<int16_t>(vi9 + vi3);
        }
        ++cyc;
        // pc_0698
        s0678_4 = cyc;
        const int32_t bk0678_4 = vi14;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn10, bcast<1u>(vn5), vn32, un); vn32 = uv; }
            vi14 = static_cast<int16_t>(0 + 32);
        }
        ++cyc;
        // pc_06A0
        s0678_5 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn11, bcast<2u>(vn5), vn32, un); vn32 = uv; }
            commitStatus(vu, ctx, cyc); vi14 = static_cast<int16_t>(vu.m_state.mac & static_cast<uint32_t>(static_cast<uint16_t>(vi14)));
        }
        ++cyc;
        // pc_06A8
        s0678_6 = cyc;
        const int32_t bk0678_6 = vi1;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn12, bcast<3u>(kVf0()), vn32, un); vn13 = uv; }
            vi1 = static_cast<int16_t>(vi1 | vi14);
        }
        ++cyc;
        // pc_06B0
        s0678_7 = cyc;
        {
        }
        ++cyc;
        // pc_06B8
        s0678_8 = cyc;
        {
            tk = static_cast<int16_t>(0) == static_cast<int16_t>(vi1);
        }
        ++cyc;
        s0678_9 = cyc;
        const int32_t bk0678_9 = vi6;
        {
            vi6 = static_cast<int16_t>(vi6 + 3);
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[13], vn13); _mm_store_ps(ctx.norm[13], vn13);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[1] = vi1;
        vu.m_state.vi[6] = vi6;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[14] = vi14;
        vu.m_viReady[6] = s0678_9 + 1u;
        vu.m_viBranchBackupValue = bk0678_9; vu.m_viBranchBackupReg = 6u; vu.m_viBranchBackupValid = true;
        if (tk) goto seg_06D0;
        goto seg_06C8;
    }
seg_0690:
        if (cyc + 10u > budget) goto pc_0690;
    {
        uint64_t s0690_0 = 0u, s0690_1 = 0u, s0690_2 = 0u, s0690_3 = 0u, s0690_4 = 0u, s0690_5 = 0u, s0690_6 = 0u;
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr9 = _mm_loadu_ps(vu.m_state.vf[9]); __m128 vn9 = _mm_load_ps(ctx.norm[9]);
        __m128 vr10 = _mm_loadu_ps(vu.m_state.vf[10]); __m128 vn10 = _mm_load_ps(ctx.norm[10]);
        __m128 vr11 = _mm_loadu_ps(vu.m_state.vf[11]); __m128 vn11 = _mm_load_ps(ctx.norm[11]);
        __m128 vr12 = _mm_loadu_ps(vu.m_state.vf[12]); __m128 vn12 = _mm_load_ps(ctx.norm[12]);
        __m128 vr13 = _mm_loadu_ps(vu.m_state.vf[13]); __m128 vn13 = _mm_load_ps(ctx.norm[13]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi14 = vu.m_state.vi[14];
        // pc_0690
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[5][0]); r = rmax(r, vu.m_vfReady[9][0]); r = rmax(r, vu.m_vfReady[9][1]); r = rmax(r, vu.m_vfReady[9][2]); r = rmax(r, vu.m_vfReady[9][3]); r = rmax(r, vu.m_viReady[3]); r = rmax(r, vu.m_viReady[9]); cyc = r; }
        s0690_0 = cyc;
        const int32_t bk0690_0 = vi9;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn9, bcast<0u>(vn5), _mm_setzero_ps(), un); vn32 = uv; }
            vi9 = static_cast<int16_t>(vi9 + vi3);
        }
        ++cyc;
        // pc_0698
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[5][1]); r = rmax(r, vu.m_vfReady[10][0]); r = rmax(r, vu.m_vfReady[10][1]); r = rmax(r, vu.m_vfReady[10][2]); r = rmax(r, vu.m_vfReady[10][3]); cyc = r; }
        s0690_1 = cyc;
        const int32_t bk0690_1 = vi14;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn10, bcast<1u>(vn5), vn32, un); vn32 = uv; }
            vi14 = static_cast<int16_t>(0 + 32);
        }
        ++cyc;
        // pc_06A0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[5][2]); r = rmax(r, vu.m_vfReady[11][0]); r = rmax(r, vu.m_vfReady[11][1]); r = rmax(r, vu.m_vfReady[11][2]); r = rmax(r, vu.m_vfReady[11][3]); cyc = r; }
        s0690_2 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn11, bcast<2u>(vn5), vn32, un); vn32 = uv; }
            commitStatus(vu, ctx, cyc); vi14 = static_cast<int16_t>(vu.m_state.mac & static_cast<uint32_t>(static_cast<uint16_t>(vi14)));
        }
        ++cyc;
        // pc_06A8
        s0690_3 = cyc;
        const int32_t bk0690_3 = vi1;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn12, bcast<3u>(kVf0()), vn32, un); vn13 = uv; }
            vi1 = static_cast<int16_t>(vi1 | vi14);
        }
        ++cyc;
        // pc_06B0
        s0690_4 = cyc;
        {
        }
        ++cyc;
        // pc_06B8
        s0690_5 = cyc;
        {
            tk = static_cast<int16_t>(0) == static_cast<int16_t>(vi1);
        }
        ++cyc;
        s0690_6 = cyc;
        const int32_t bk0690_6 = vi6;
        {
            vi6 = static_cast<int16_t>(vi6 + 3);
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[13], vn13); _mm_store_ps(ctx.norm[13], vn13);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[1] = vi1;
        vu.m_state.vi[6] = vi6;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[14] = vi14;
        vu.m_viReady[6] = s0690_6 + 1u;
        vu.m_viBranchBackupValue = bk0690_6; vu.m_viBranchBackupReg = 6u; vu.m_viBranchBackupValid = true;
        if (tk) goto seg_06D0;
        goto seg_06C8;
    }
seg_06C0:
        if (cyc + 7u > budget) goto pc_06C0;
    {
        uint64_t s06C0_0 = 0u, s06C0_1 = 0u, s06C0_2 = 0u, s06C0_3 = 0u;
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi9 = vu.m_state.vi[9];
        // pc_06C0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[6]); cyc = r; }
        s06C0_0 = cyc;
        const int32_t bk06C0_0 = vi6;
        {
            vi6 = static_cast<int16_t>(vi6 + 3);
        }
        ++cyc;
        // pc_06C8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[9]); cyc = r; }
        s06C0_1 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi6, -1), vi9, 0x1u);
        }
        ++cyc;
        // pc_06D0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[7]); cyc = r; }
        s06C0_2 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi7);
        }
        ++cyc;
        s06C0_3 = cyc;
        const int32_t bk06C0_3 = vi4;
        {
            vi4 = static_cast<int16_t>(vi4 + 6);
        }
        ++cyc;
        vu.m_state.vi[4] = vi4;
        vu.m_state.vi[6] = vi6;
        vu.m_viReady[4] = s06C0_3 + 1u;
        vu.m_viBranchBackupValue = bk06C0_3; vu.m_viBranchBackupReg = 4u; vu.m_viBranchBackupValid = true;
        if (tk) goto seg_0480;
        goto pc_06E0;
    }
seg_06C8:
        if (cyc + 6u > budget) goto pc_06C8;
    {
        uint64_t s06C8_0 = 0u, s06C8_1 = 0u, s06C8_2 = 0u;
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi9 = vu.m_state.vi[9];
        // pc_06C8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[6]); r = rmax(r, vu.m_viReady[9]); cyc = r; }
        s06C8_0 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi6, -1), vi9, 0x1u);
        }
        ++cyc;
        // pc_06D0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[7]); cyc = r; }
        s06C8_1 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi7);
        }
        ++cyc;
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); cyc = r; }
        s06C8_2 = cyc;
        const int32_t bk06C8_2 = vi4;
        {
            vi4 = static_cast<int16_t>(vi4 + 6);
        }
        ++cyc;
        vu.m_state.vi[4] = vi4;
        vu.m_viReady[4] = s06C8_2 + 1u;
        vu.m_viBranchBackupValue = bk06C8_2; vu.m_viBranchBackupReg = 4u; vu.m_viBranchBackupValid = true;
        if (tk) goto seg_0480;
        goto pc_06E0;
    }
seg_06D0:
        if (cyc + 5u > budget) goto pc_06D0;
    {
        uint64_t s06D0_0 = 0u, s06D0_1 = 0u;
        int32_t vi4 = vu.m_state.vi[4];
        // pc_06D0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[7]); cyc = r; }
        s06D0_0 = cyc;
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(7u));
        }
        ++cyc;
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); cyc = r; }
        s06D0_1 = cyc;
        const int32_t bk06D0_1 = vi4;
        {
            vi4 = static_cast<int16_t>(vi4 + 6);
        }
        ++cyc;
        vu.m_state.vi[4] = vi4;
        vu.m_viReady[4] = s06D0_1 + 1u;
        vu.m_viBranchBackupValue = bk06D0_1; vu.m_viBranchBackupReg = 4u; vu.m_viBranchBackupValid = true;
        if (tk) goto seg_0480;
        goto pc_06E0;
    }
seg_06D8:
        if (cyc + 4u > budget) goto pc_06D8;
    {
        uint64_t s06D8_0 = 0u;
        int32_t vi4 = vu.m_state.vi[4];
        // pc_06D8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); cyc = r; }
        s06D8_0 = cyc;
        const int32_t bk06D8_0 = vi4;
        {
            vi4 = static_cast<int16_t>(vi4 + 6);
        }
        ++cyc;
        vu.m_state.vi[4] = vi4;
        vu.m_viReady[4] = s06D8_0 + 1u;
        vu.m_viBranchBackupValue = bk06D8_0; vu.m_viBranchBackupReg = 4u; vu.m_viBranchBackupValid = true;
        goto pc_06E0;
    }
seg_06E8:
        if (cyc + 5u > budget) goto pc_06E8;
    {
        uint64_t s06E8_0 = 0u, s06E8_1 = 0u;
        // pc_06E8
        s06E8_0 = cyc;
        {
        }
        ++cyc;
        s06E8_1 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        { epc = 0x6F8u; goto exit_ended; }
    }
seg_06F0:
        if (cyc + 6u > budget) goto pc_06F0;
    {
        uint64_t s06F0_0 = 0u, s06F0_1 = 0u, s06F0_2 = 0u;
        // pc_06F0
        s06F0_0 = cyc;
        {
        }
        ++cyc;
        // pc_06F8
        s06F0_1 = cyc;
        {
        }
        ++cyc;
        s06F0_2 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        { epc = 0xB8u; goto exit_continue; }
    }
seg_0700:
        if (cyc + 13u > budget) goto pc_0700;
    {
        uint64_t s0700_0 = 0u, s0700_1 = 0u, s0700_2 = 0u, s0700_3 = 0u, s0700_4 = 0u, s0700_5 = 0u, s0700_6 = 0u, s0700_7 = 0u, s0700_8 = 0u, s0700_9 = 0u;
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0700
        s0700_0 = cyc;
        {
        }
        ++cyc;
        // pc_0708
        s0700_1 = cyc;
        const int32_t bk0700_1 = vi9;
        {
            vi9 = static_cast<int16_t>(0 + 101);
        }
        ++cyc;
        // pc_0710
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); cyc = r; }
        s0700_2 = cyc;
        const int32_t bk0700_2 = vi10;
        {
            vi10 = static_cast<int16_t>(0 + vi11);
        }
        ++cyc;
        // pc_0718
        s0700_3 = cyc;
        const int32_t bk0700_3 = vi11;
        {
            vi11 = static_cast<int16_t>(0 + 0);
        }
        ++cyc;
        // pc_0720
        s0700_4 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0x8u, kVf0(), bcast<3u>(kVf0()), _mm_setzero_ps(), un); vr30 = blendDest(vr30, uv, 0x8u); vn30 = blendDest(vn30, uv, 0x8u); }
        }
        ++cyc;
        // pc_0728
        s0700_5 = cyc;
        const int32_t bk0700_5 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0730
        s0700_6 = cyc;
        const int32_t bk0700_6 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[22], lv); vn22 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0738
        s0700_7 = cyc;
        const int32_t bk0700_7 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0740
        s0700_8 = cyc;
        {
            vi2 = static_cast<int16_t>(234);
        }
        ++cyc;
        s0700_9 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[22], vn22);
 _mm_store_ps(ctx.norm[23], vn23);
        _mm_storeu_ps(vu.m_state.vf[30], vr30); _mm_store_ps(ctx.norm[30], vn30);
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[8] = vi8;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        setReady4(vu.m_vfReady[23].data(), s0700_7 + 4u);
        vu.m_viReady[2] = s0700_8 + 1u;
        vu.m_viReady[8] = s0700_7 + 1u;
        vu.m_viBranchBackupValid = false;
        { epc = 0xA28u; goto exit_continue; }
    }
seg_0708:
        if (cyc + 12u > budget) goto pc_0708;
    {
        uint64_t s0708_0 = 0u, s0708_1 = 0u, s0708_2 = 0u, s0708_3 = 0u, s0708_4 = 0u, s0708_5 = 0u, s0708_6 = 0u, s0708_7 = 0u, s0708_8 = 0u;
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0708
        s0708_0 = cyc;
        const int32_t bk0708_0 = vi9;
        {
            vi9 = static_cast<int16_t>(0 + 101);
        }
        ++cyc;
        // pc_0710
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); cyc = r; }
        s0708_1 = cyc;
        const int32_t bk0708_1 = vi10;
        {
            vi10 = static_cast<int16_t>(0 + vi11);
        }
        ++cyc;
        // pc_0718
        s0708_2 = cyc;
        const int32_t bk0708_2 = vi11;
        {
            vi11 = static_cast<int16_t>(0 + 0);
        }
        ++cyc;
        // pc_0720
        s0708_3 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0x8u, kVf0(), bcast<3u>(kVf0()), _mm_setzero_ps(), un); vr30 = blendDest(vr30, uv, 0x8u); vn30 = blendDest(vn30, uv, 0x8u); }
        }
        ++cyc;
        // pc_0728
        s0708_4 = cyc;
        const int32_t bk0708_4 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0730
        s0708_5 = cyc;
        const int32_t bk0708_5 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[22], lv); vn22 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0738
        s0708_6 = cyc;
        const int32_t bk0708_6 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0740
        s0708_7 = cyc;
        {
            vi2 = static_cast<int16_t>(234);
        }
        ++cyc;
        s0708_8 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[22], vn22);
 _mm_store_ps(ctx.norm[23], vn23);
        _mm_storeu_ps(vu.m_state.vf[30], vr30); _mm_store_ps(ctx.norm[30], vn30);
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[8] = vi8;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        setReady4(vu.m_vfReady[23].data(), s0708_6 + 4u);
        vu.m_viReady[2] = s0708_7 + 1u;
        vu.m_viReady[8] = s0708_6 + 1u;
        vu.m_viBranchBackupValid = false;
        { epc = 0xA28u; goto exit_continue; }
    }
seg_0740:
        if (cyc + 5u > budget) goto pc_0740;
    {
        uint64_t s0740_0 = 0u, s0740_1 = 0u;
        int32_t vi2 = vu.m_state.vi[2];
        // pc_0740
        s0740_0 = cyc;
        {
            vi2 = static_cast<int16_t>(234);
        }
        ++cyc;
        s0740_1 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[2] = vi2;
        vu.m_viReady[2] = s0740_0 + 1u;
        vu.m_viBranchBackupValid = false;
        { epc = 0xA28u; goto exit_continue; }
    }
seg_0748:
        if (cyc + 8u > budget) goto pc_0748;
    {
        uint64_t s0748_0 = 0u, s0748_1 = 0u, s0748_2 = 0u, s0748_3 = 0u, s0748_4 = 0u;
        int32_t vi10 = vu.m_state.vi[10];
        // pc_0748
        s0748_0 = cyc;
        {
        }
        ++cyc;
        // pc_0750
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); cyc = r; }
        s0748_1 = cyc;
        const int32_t bk0748_1 = vi10;
        {
            vi10 = static_cast<int16_t>(vi10 - 1);
        }
        ++cyc;
        // pc_0758
        s0748_2 = cyc;
        {
        }
        ++cyc;
        // pc_0760
        s0748_3 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi10);
        }
        ++cyc;
        s0748_4 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[10] = vi10;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0740;
        goto seg_0770;
    }
seg_0750:
        if (cyc + 7u > budget) goto pc_0750;
    {
        uint64_t s0750_0 = 0u, s0750_1 = 0u, s0750_2 = 0u, s0750_3 = 0u;
        int32_t vi10 = vu.m_state.vi[10];
        // pc_0750
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); cyc = r; }
        s0750_0 = cyc;
        const int32_t bk0750_0 = vi10;
        {
            vi10 = static_cast<int16_t>(vi10 - 1);
        }
        ++cyc;
        // pc_0758
        s0750_1 = cyc;
        {
        }
        ++cyc;
        // pc_0760
        s0750_2 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi10);
        }
        ++cyc;
        s0750_3 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[10] = vi10;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0740;
        goto seg_0770;
    }
seg_0768:
        if (cyc + 7u > budget) goto pc_0768;
    {
        uint64_t s0768_0 = 0u, s0768_1 = 0u, s0768_2 = 0u, s0768_3 = 0u;
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi8 = vu.m_state.vi[8];
        // pc_0768
        s0768_0 = cyc;
        {
        }
        ++cyc;
        // pc_0770
        s0768_1 = cyc;
        const int32_t bk0768_1 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 101);
        }
        ++cyc;
        // pc_0778
        s0768_2 = cyc;
        {
            vi2 = static_cast<int16_t>(241);
        }
        ++cyc;
        s0768_3 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[8] = vi8;
        vu.m_viReady[2] = s0768_2 + 1u;
        vu.m_viReady[8] = s0768_1 + 1u;
        vu.m_viBranchBackupValid = false;
        { epc = 0x9E8u; goto exit_continue; }
    }
seg_0770:
        if (cyc + 6u > budget) goto pc_0770;
    {
        uint64_t s0770_0 = 0u, s0770_1 = 0u, s0770_2 = 0u;
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi8 = vu.m_state.vi[8];
        // pc_0770
        s0770_0 = cyc;
        const int32_t bk0770_0 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 101);
        }
        ++cyc;
        // pc_0778
        s0770_1 = cyc;
        {
            vi2 = static_cast<int16_t>(241);
        }
        ++cyc;
        s0770_2 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[8] = vi8;
        vu.m_viReady[2] = s0770_1 + 1u;
        vu.m_viReady[8] = s0770_0 + 1u;
        vu.m_viBranchBackupValid = false;
        { epc = 0x9E8u; goto exit_continue; }
    }
seg_0780:
        if (cyc + 6u > budget) goto pc_0780;
    {
        uint64_t s0780_0 = 0u, s0780_1 = 0u, s0780_2 = 0u;
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0780
        s0780_0 = cyc;
        {
        }
        ++cyc;
        // pc_0788
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); cyc = r; }
        s0780_1 = cyc;
        {
            tk = static_cast<int16_t>(0) == static_cast<int16_t>(vi11);
        }
        ++cyc;
        s0780_2 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        if (tk) { epc = 0x9D8u; goto exit_continue; }
        goto seg_0798;
    }
seg_0788:
        if (cyc + 5u > budget) goto pc_0788;
    {
        uint64_t s0788_0 = 0u, s0788_1 = 0u;
        // pc_0788
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); cyc = r; }
        s0788_0 = cyc;
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) == static_cast<int16_t>(vu.readBranchVi(11u));
        }
        ++cyc;
        s0788_1 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        if (tk) { epc = 0x9D8u; goto exit_continue; }
        goto seg_0798;
    }
seg_0790:
        if (cyc + 15u > budget) goto pc_0790;
    {
        uint64_t s0790_0 = 0u, s0790_1 = 0u, s0790_2 = 0u, s0790_3 = 0u, s0790_4 = 0u, s0790_5 = 0u, s0790_6 = 0u, s0790_7 = 0u, s0790_8 = 0u, s0790_9 = 0u, s0790_10 = 0u, s0790_11 = 0u;
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        int32_t vi5 = vu.m_state.vi[5];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0790
        s0790_0 = cyc;
        {
        }
        ++cyc;
        // pc_0798
        s0790_1 = cyc;
        const int32_t bk0790_1 = vi5;
        {
            vi5 = static_cast<int16_t>(0 + 64);
        }
        ++cyc;
        // pc_07A0
        s0790_2 = cyc;
        const int32_t bk0790_2 = vi6;
        {
            vi6 = static_cast<int16_t>(0 + 1);
        }
        ++cyc;
        // pc_07A8
        s0790_3 = cyc;
        const int32_t bk0790_3 = vi7;
        {
            vi7 = static_cast<int16_t>(0 + 0);
        }
        ++cyc;
        // pc_07B0
        s0790_4 = cyc;
        const int32_t bk0790_4 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 101);
        }
        ++cyc;
        // pc_07B8
        s0790_5 = cyc;
        const int32_t bk0790_5 = vi9;
        {
            vi9 = static_cast<int16_t>(0 + 61);
        }
        ++cyc;
        // pc_07C0
        s0790_6 = cyc;
        const int32_t bk0790_6 = vi10;
        {
            vi10 = static_cast<int16_t>(0 + vi11);
        }
        ++cyc;
        // pc_07C8
        s0790_7 = cyc;
        const int32_t bk0790_7 = vi11;
        {
            vi11 = static_cast<int16_t>(0 + 0);
        }
        ++cyc;
        // pc_07D0
        s0790_8 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0x8u, kVf0(), bcast<3u>(kVf0()), _mm_setzero_ps(), un); vr30 = blendDest(vr30, uv, 0x8u); vn30 = blendDest(vn30, uv, 0x8u); }
        }
        ++cyc;
        // pc_07D8
        s0790_9 = cyc;
        const int32_t bk0790_9 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_07E0
        s0790_10 = cyc;
        const int32_t bk0790_10 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[22], lv); vn22 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_07E8
        s0790_11 = cyc;
        const int32_t bk0790_11 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
 _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[22], vn22);
 _mm_store_ps(ctx.norm[23], vn23);
        _mm_storeu_ps(vu.m_state.vf[30], vr30); _mm_store_ps(ctx.norm[30], vn30);
        vu.m_state.vi[5] = vi5;
        vu.m_state.vi[6] = vi6;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[8] = vi8;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        setReady4(vu.m_vfReady[21].data(), s0790_9 + 4u);
        setReady4(vu.m_vfReady[22].data(), s0790_10 + 4u);
        setReady4(vu.m_vfReady[23].data(), s0790_11 + 4u);
        vu.m_viReady[8] = s0790_11 + 1u;
        vu.m_viBranchBackupValue = bk0790_11; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        { epc = 0x7F0u; goto exit_continue; }
    }
seg_0798:
        if (cyc + 14u > budget) goto pc_0798;
    {
        uint64_t s0798_0 = 0u, s0798_1 = 0u, s0798_2 = 0u, s0798_3 = 0u, s0798_4 = 0u, s0798_5 = 0u, s0798_6 = 0u, s0798_7 = 0u, s0798_8 = 0u, s0798_9 = 0u, s0798_10 = 0u;
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        int32_t vi5 = vu.m_state.vi[5];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0798
        s0798_0 = cyc;
        const int32_t bk0798_0 = vi5;
        {
            vi5 = static_cast<int16_t>(0 + 64);
        }
        ++cyc;
        // pc_07A0
        s0798_1 = cyc;
        const int32_t bk0798_1 = vi6;
        {
            vi6 = static_cast<int16_t>(0 + 1);
        }
        ++cyc;
        // pc_07A8
        s0798_2 = cyc;
        const int32_t bk0798_2 = vi7;
        {
            vi7 = static_cast<int16_t>(0 + 0);
        }
        ++cyc;
        // pc_07B0
        s0798_3 = cyc;
        const int32_t bk0798_3 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 101);
        }
        ++cyc;
        // pc_07B8
        s0798_4 = cyc;
        const int32_t bk0798_4 = vi9;
        {
            vi9 = static_cast<int16_t>(0 + 61);
        }
        ++cyc;
        // pc_07C0
        s0798_5 = cyc;
        const int32_t bk0798_5 = vi10;
        {
            vi10 = static_cast<int16_t>(0 + vi11);
        }
        ++cyc;
        // pc_07C8
        s0798_6 = cyc;
        const int32_t bk0798_6 = vi11;
        {
            vi11 = static_cast<int16_t>(0 + 0);
        }
        ++cyc;
        // pc_07D0
        s0798_7 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0x8u, kVf0(), bcast<3u>(kVf0()), _mm_setzero_ps(), un); vr30 = blendDest(vr30, uv, 0x8u); vn30 = blendDest(vn30, uv, 0x8u); }
        }
        ++cyc;
        // pc_07D8
        s0798_8 = cyc;
        const int32_t bk0798_8 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_07E0
        s0798_9 = cyc;
        const int32_t bk0798_9 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[22], lv); vn22 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_07E8
        s0798_10 = cyc;
        const int32_t bk0798_10 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
 _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[22], vn22);
 _mm_store_ps(ctx.norm[23], vn23);
        _mm_storeu_ps(vu.m_state.vf[30], vr30); _mm_store_ps(ctx.norm[30], vn30);
        vu.m_state.vi[5] = vi5;
        vu.m_state.vi[6] = vi6;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[8] = vi8;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        setReady4(vu.m_vfReady[21].data(), s0798_8 + 4u);
        setReady4(vu.m_vfReady[22].data(), s0798_9 + 4u);
        setReady4(vu.m_vfReady[23].data(), s0798_10 + 4u);
        vu.m_viReady[8] = s0798_10 + 1u;
        vu.m_viBranchBackupValue = bk0798_10; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        { epc = 0x7F0u; goto exit_continue; }
    }
exit_budget:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Budget;
exit_continue:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Continue;
exit_ended:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Ended;
}

