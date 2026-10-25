#include "ps2_vu1_impl.inl"

template <>
VU1InterpreterAccess::StepResult VU1InterpreterAccess::fastBlock<0x5DCE334B68799D95ull, 2u>(VU1Interpreter &vu, Vu1FastCtx &ctx)
{
    uint64_t cyc = ctx.cycle;
    const uint64_t budget = ctx.budget;
    const uint8_t *const mem = ctx.mem;
    uint32_t epc = 0u;
    bool tk = false;
    uint32_t jt = 0u;
    (void)mem;
    switch (vu.m_state.pc)
    {
    case 0x7F0u: goto seg_07F0;
    case 0x7F8u: goto seg_07F8;
    case 0x800u: goto seg_0800;
    case 0x808u: goto pc_0808;
    case 0x810u: goto pc_0810;
    case 0x818u: goto seg_0818;
    case 0x820u: goto seg_0820;
    case 0x828u: goto pc_0828;
    case 0x830u: goto seg_0830;
    case 0x838u: goto seg_0838;
    case 0x840u: goto seg_0840;
    case 0x848u: goto seg_0848;
    case 0x850u: goto pc_0850;
    case 0x858u: goto pc_0858;
    case 0x860u: goto pc_0860;
    case 0x868u: goto pc_0868;
    case 0x870u: goto pc_0870;
    case 0x878u: goto pc_0878;
    case 0x880u: goto pc_0880;
    case 0x888u: goto pc_0888;
    case 0x890u: goto pc_0890;
    case 0x898u: goto pc_0898;
    case 0x8A0u: goto seg_08A0;
    case 0x8A8u: goto seg_08A8;
    case 0x8B0u: goto seg_08B0;
    case 0x8B8u: goto pc_08B8;
    case 0x8C0u: goto pc_08C0;
    case 0x8C8u: goto seg_08C8;
    case 0x8D0u: goto seg_08D0;
    case 0x8D8u: goto pc_08D8;
    case 0x8E0u: goto seg_08E0;
    case 0x8E8u: goto seg_08E8;
    case 0x8F0u: goto seg_08F0;
    case 0x8F8u: goto seg_08F8;
    case 0x900u: goto pc_0900;
    case 0x908u: goto pc_0908;
    case 0x910u: goto pc_0910;
    case 0x918u: goto pc_0918;
    case 0x920u: goto pc_0920;
    case 0x928u: goto pc_0928;
    case 0x930u: goto pc_0930;
    case 0x938u: goto pc_0938;
    case 0x940u: goto pc_0940;
    case 0x948u: goto pc_0948;
    case 0x950u: goto seg_0950;
    case 0x958u: goto seg_0958;
    case 0x960u: goto seg_0960;
    case 0x968u: goto pc_0968;
    case 0x970u: goto pc_0970;
    case 0x978u: goto seg_0978;
    case 0x980u: goto seg_0980;
    case 0x988u: goto pc_0988;
    case 0x990u: goto seg_0990;
    case 0x998u: goto seg_0998;
    case 0x9A0u: goto seg_09A0;
    case 0x9A8u: goto seg_09A8;
    case 0x9B0u: goto pc_09B0;
    case 0x9B8u: goto pc_09B8;
    case 0x9C0u: goto pc_09C0;
    case 0x9C8u: goto pc_09C8;
    case 0x9D0u: goto seg_09D0;
    case 0x9D8u: goto seg_09D8;
    case 0x9E0u: goto seg_09E0;
    case 0x9E8u: goto seg_09E8;
    case 0x9F0u: goto pc_09F0;
    case 0x9F8u: goto pc_09F8;
    case 0xA00u: goto pc_0A00;
    case 0xA08u: goto pc_0A08;
    case 0xA10u: goto pc_0A10;
    case 0xA18u: goto pc_0A18;
    case 0xA20u: goto seg_0A20;
    case 0xA28u: goto seg_0A28;
    case 0xA30u: goto pc_0A30;
    case 0xA38u: goto pc_0A38;
    case 0xA40u: goto pc_0A40;
    case 0xA48u: goto pc_0A48;
    case 0xA50u: goto pc_0A50;
    case 0xA58u: goto pc_0A58;
    case 0xA60u: goto pc_0A60;
    case 0xA68u: goto pc_0A68;
    case 0xA70u: goto pc_0A70;
    case 0xA78u: goto pc_0A78;
    case 0xA80u: goto pc_0A80;
    case 0xA88u: goto pc_0A88;
    case 0xA90u: goto seg_0A90;
    case 0xA98u: goto seg_0A98;
    case 0xAA0u: goto pc_0AA0;
    case 0xAA8u: goto pc_0AA8;
    case 0xAB0u: goto seg_0AB0;
    case 0xAB8u: goto seg_0AB8;
    case 0xAC0u: goto seg_0AC0;
    case 0xAC8u: goto seg_0AC8;
    case 0xAD0u: goto seg_0AD0;
    case 0xAD8u: goto seg_0AD8;
    case 0xAE0u: goto pc_0AE0;
    case 0xAE8u: goto pc_0AE8;
    case 0xAF0u: goto pc_0AF0;
    case 0xAF8u: goto pc_0AF8;
    case 0xB00u: goto seg_0B00;
    case 0xB08u: goto seg_0B08;
    case 0xB10u: goto pc_0B10;
    case 0xB18u: goto pc_0B18;
    case 0xB20u: goto seg_0B20;
    case 0xB28u: goto seg_0B28;
    case 0xB30u: goto seg_0B30;
    case 0xB38u: goto seg_0B38;
    case 0xB40u: goto pc_0B40;
    case 0xB48u: goto pc_0B48;
    case 0xB50u: goto pc_0B50;
    case 0xB58u: goto pc_0B58;
    case 0xB60u: goto pc_0B60;
    case 0xB68u: goto pc_0B68;
    case 0xB70u: goto pc_0B70;
    case 0xB78u: goto seg_0B78;
    case 0xB80u: goto seg_0B80;
    case 0xB88u: goto pc_0B88;
    case 0xB90u: goto pc_0B90;
    case 0xB98u: goto pc_0B98;
    case 0xBA0u: goto seg_0BA0;
    case 0xBA8u: goto seg_0BA8;
    case 0xBB0u: goto seg_0BB0;
    case 0xBB8u: goto pc_0BB8;
    case 0xBC0u: goto pc_0BC0;
    case 0xBC8u: goto pc_0BC8;
    case 0xBD0u: goto pc_0BD0;
    case 0xBD8u: goto pc_0BD8;
    default: return StepResult::Fallback;
    }
pc_07F0:
        if (cyc >= budget) { epc = 0x7F0u; goto exit_budget; }
        {
            vu.m_state.vi[2] = static_cast<int16_t>(256);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[2] = cyc + 1u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x7F8u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xA28u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0A28;
pc_07F8:
        if (cyc >= budget) { epc = 0x7F8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0800;
pc_0800:
        if (cyc >= budget) { epc = 0x800u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x800u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] - 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0808:
        if (cyc >= budget) { epc = 0x808u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0810:
        if (cyc >= budget) { epc = 0x810u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x810u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(10u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x818u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x7F0u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) goto seg_07F0;
        goto seg_0820;
pc_0818:
        if (cyc >= budget) { epc = 0x818u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0820;
pc_0820:
        if (cyc >= budget) { epc = 0x820u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[0] + 61);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0828:
        if (cyc >= budget) { epc = 0x828u; goto exit_budget; }
        {
            vu.m_state.vi[2] = static_cast<int16_t>(263);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[2] = cyc + 1u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x830u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x9E8u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_09E8;
pc_0830:
        if (cyc >= budget) { epc = 0x830u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0838;
pc_0838:
        if (cyc >= budget) { epc = 0x838u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x838u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) == static_cast<int16_t>(vu.readBranchVi(11u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x840u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x9D8u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) goto seg_09D8;
        goto seg_0848;
pc_0840:
        if (cyc >= budget) { epc = 0x840u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0848;
pc_0848:
        if (cyc >= budget) { epc = 0x848u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[5];
            vu.m_state.vi[5] = static_cast<int16_t>(vu.m_state.vi[0] + 512);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[5] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 5u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0850:
        if (cyc >= budget) { epc = 0x850u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[6];
            vu.m_state.vi[6] = static_cast<int16_t>(vu.m_state.vi[0] + 8);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[6] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 6u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0858:
        if (cyc >= budget) { epc = 0x858u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[7];
            vu.m_state.vi[7] = static_cast<int16_t>(vu.m_state.vi[0] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[7] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 7u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0860:
        if (cyc >= budget) { epc = 0x860u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[0] + 61);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0868:
        if (cyc >= budget) { epc = 0x868u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[0] + 101);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0870:
        if (cyc >= budget) { epc = 0x870u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x870u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[0] + vu.m_state.vi[11]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0878:
        if (cyc >= budget) { epc = 0x878u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[11];
            vu.m_state.vi[11] = static_cast<int16_t>(vu.m_state.vi[0] + 0);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 11u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0880:
        if (cyc >= budget) { epc = 0x880u; goto exit_budget; }
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0x8u, nv(ctx, 0u), nbc(ctx, 0u, 3u), _mm_setzero_ps(), un); writeVf(vu, ctx, 30u, uv, uv, 0x8u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
        }
        ++cyc;
pc_0888:
        if (cyc >= budget) { epc = 0x888u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x888u; goto exit_budget; } } cyc = r; } }
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
pc_0890:
        if (cyc >= budget) { epc = 0x890u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x890u; goto exit_budget; } } cyc = r; } }
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
pc_0898:
        if (cyc >= budget) { epc = 0x898u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x898u; goto exit_budget; } } cyc = r; } }
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
        goto seg_08A0;
pc_08A0:
        if (cyc >= budget) { epc = 0x8A0u; goto exit_budget; }
        {
            vu.m_state.vi[2] = static_cast<int16_t>(278);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[2] = cyc + 1u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x8A8u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xA28u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0A28;
pc_08A8:
        if (cyc >= budget) { epc = 0x8A8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_08B0;
pc_08B0:
        if (cyc >= budget) { epc = 0x8B0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x8B0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] - 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_08B8:
        if (cyc >= budget) { epc = 0x8B8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_08C0:
        if (cyc >= budget) { epc = 0x8C0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x8C0u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(10u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x8C8u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x8A0u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) goto seg_08A0;
        goto seg_08D0;
pc_08C8:
        if (cyc >= budget) { epc = 0x8C8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_08D0;
pc_08D0:
        if (cyc >= budget) { epc = 0x8D0u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[0] + 101);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_08D8:
        if (cyc >= budget) { epc = 0x8D8u; goto exit_budget; }
        {
            vu.m_state.vi[2] = static_cast<int16_t>(285);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[2] = cyc + 1u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x8E0u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x9E8u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_09E8;
pc_08E0:
        if (cyc >= budget) { epc = 0x8E0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_08E8;
pc_08E8:
        if (cyc >= budget) { epc = 0x8E8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x8E8u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) == static_cast<int16_t>(vu.readBranchVi(11u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x8F0u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x9D8u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) goto seg_09D8;
        goto seg_08F8;
pc_08F0:
        if (cyc >= budget) { epc = 0x8F0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_08F8;
pc_08F8:
        if (cyc >= budget) { epc = 0x8F8u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[5];
            vu.m_state.vi[5] = static_cast<int16_t>(vu.m_state.vi[0] + 256);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[5] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 5u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0900:
        if (cyc >= budget) { epc = 0x900u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[6];
            vu.m_state.vi[6] = static_cast<int16_t>(vu.m_state.vi[0] + 4);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[6] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 6u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0908:
        if (cyc >= budget) { epc = 0x908u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[7];
            vu.m_state.vi[7] = static_cast<int16_t>(vu.m_state.vi[0] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[7] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 7u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0910:
        if (cyc >= budget) { epc = 0x910u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[0] + 101);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0918:
        if (cyc >= budget) { epc = 0x918u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[0] + 61);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0920:
        if (cyc >= budget) { epc = 0x920u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x920u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[0] + vu.m_state.vi[11]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0928:
        if (cyc >= budget) { epc = 0x928u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[11];
            vu.m_state.vi[11] = static_cast<int16_t>(vu.m_state.vi[0] + 0);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 11u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0930:
        if (cyc >= budget) { epc = 0x930u; goto exit_budget; }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0x8u, nv(ctx, 0u), nbc(ctx, 0u, 3u), _mm_setzero_ps(), un); writeVf(vu, ctx, 30u, uv, uv, 0x8u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
        }
        ++cyc;
pc_0938:
        if (cyc >= budget) { epc = 0x938u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x938u; goto exit_budget; } } cyc = r; } }
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
pc_0940:
        if (cyc >= budget) { epc = 0x940u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x940u; goto exit_budget; } } cyc = r; } }
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
pc_0948:
        if (cyc >= budget) { epc = 0x948u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x948u; goto exit_budget; } } cyc = r; } }
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
        goto seg_0950;
pc_0950:
        if (cyc >= budget) { epc = 0x950u; goto exit_budget; }
        {
            vu.m_state.vi[2] = static_cast<int16_t>(300);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[2] = cyc + 1u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x958u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xA28u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0A28;
pc_0958:
        if (cyc >= budget) { epc = 0x958u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0960;
pc_0960:
        if (cyc >= budget) { epc = 0x960u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x960u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] - 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0968:
        if (cyc >= budget) { epc = 0x968u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0970:
        if (cyc >= budget) { epc = 0x970u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x970u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(10u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x978u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x950u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) goto seg_0950;
        goto seg_0980;
pc_0978:
        if (cyc >= budget) { epc = 0x978u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0980;
pc_0980:
        if (cyc >= budget) { epc = 0x980u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[0] + 61);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0988:
        if (cyc >= budget) { epc = 0x988u; goto exit_budget; }
        {
            vu.m_state.vi[2] = static_cast<int16_t>(307);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[2] = cyc + 1u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x990u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x9E8u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_09E8;
pc_0990:
        if (cyc >= budget) { epc = 0x990u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0998;
pc_0998:
        if (cyc >= budget) { epc = 0x998u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x998u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) == static_cast<int16_t>(vu.readBranchVi(11u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x9A0u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0x9D8u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) goto seg_09D8;
        goto seg_09A8;
pc_09A0:
        if (cyc >= budget) { epc = 0x9A0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_09A8;
pc_09A8:
        if (cyc >= budget) { epc = 0x9A8u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[0] + 61);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_09B0:
        if (cyc >= budget) { epc = 0x9B0u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[0] + 101);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_09B8:
        if (cyc >= budget) { epc = 0x9B8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x9B8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[0] + vu.m_state.vi[11]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_09C0:
        if (cyc >= budget) { epc = 0x9C0u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[11];
            vu.m_state.vi[11] = static_cast<int16_t>(vu.m_state.vi[0] + 0);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 11u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_09C8:
        if (cyc >= budget) { epc = 0x9C8u; goto exit_budget; }
        {
            vu.m_state.vi[1] = static_cast<int16_t>(315);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[1] = cyc + 1u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x9D0u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xCB8u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = 0xCB8u; goto exit_continue; }
pc_09D0:
        if (cyc >= budget) { epc = 0x9D0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_09D8;
pc_09D8:
        if (cyc >= budget) { epc = 0x9D8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[15]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x9D8u; goto exit_budget; } } cyc = r; } }
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vu.readBranchVi(15u))) * 8u) & 0x3FFFu;
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x9E0u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = jt; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = jt; goto exit_continue; }
pc_09E0:
        if (cyc >= budget) { epc = 0x9E0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_09E8;
pc_09E8:
        if (cyc >= budget) { epc = 0x9E8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x9E8u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[8], 0)); writeVf(vu, ctx, 21u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[21][0] = cyc + 4u;
            vu.m_vfReady[21][1] = cyc + 4u;
            vu.m_vfReady[21][2] = cyc + 4u;
            vu.m_vfReady[21][3] = cyc + 4u;
        }
        ++cyc;
pc_09F0:
        if (cyc >= budget) { epc = 0x9F0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x9F0u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[8], 1)); writeVf(vu, ctx, 22u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[22][0] = cyc + 4u;
            vu.m_vfReady[22][1] = cyc + 4u;
            vu.m_vfReady[22][2] = cyc + 4u;
            vu.m_vfReady[22][3] = cyc + 4u;
        }
        ++cyc;
pc_09F8:
        if (cyc >= budget) { epc = 0x9F8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x9F8u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[8], 2)); writeVf(vu, ctx, 23u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
            vu.m_vfReady[23][3] = cyc + 4u;
        }
        ++cyc;
pc_0A00:
        if (cyc >= budget) { epc = 0xA00u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); r = rmax(r, vu.m_vfReady[21][3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xA00u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[9], 0), _mm_loadu_ps(vu.m_state.vf[21]), 0xFu);vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0A08:
        if (cyc >= budget) { epc = 0xA08u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); r = rmax(r, vu.m_vfReady[22][3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xA08u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[9], 0), _mm_loadu_ps(vu.m_state.vf[22]), 0xFu);vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0A10:
        if (cyc >= budget) { epc = 0xA10u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_vfReady[23][3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xA10u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[9], 0), _mm_loadu_ps(vu.m_state.vf[23]), 0xFu);vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0A18:
        if (cyc >= budget) { epc = 0xA18u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xA18u; goto exit_budget; } } cyc = r; } }
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vu.readBranchVi(2u))) * 8u) & 0x3FFFu;
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xA20u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = jt; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = jt; goto exit_continue; }
pc_0A20:
        if (cyc >= budget) { epc = 0xA20u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0A28;
pc_0A28:
        if (cyc >= budget) { epc = 0xA28u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_vfReady[31][1]); r = rmax(r, vu.m_vfReady[31][2]); r = rmax(r, vu.m_vfReady[31][3]); r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); r = rmax(r, vu.m_vfReady[21][3]); r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xA28u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xFu, nv(ctx, 31u), nv(ctx, 21u), _mm_setzero_ps(), un); writeVf(vu, ctx, 17u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[8], 0)); writeVf(vu, ctx, 21u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[8] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[21][0] = cyc + 4u;
            vu.m_vfReady[21][1] = cyc + 4u;
            vu.m_vfReady[21][2] = cyc + 4u;
            vu.m_vfReady[21][3] = cyc + 4u;
            vu.m_vfReady[17][0] = cyc + 4u;
            vu.m_vfReady[17][1] = cyc + 4u;
            vu.m_vfReady[17][2] = cyc + 4u;
            vu.m_vfReady[17][3] = cyc + 4u;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0A30:
        if (cyc >= budget) { epc = 0xA30u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_vfReady[31][1]); r = rmax(r, vu.m_vfReady[31][2]); r = rmax(r, vu.m_vfReady[31][3]); r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); r = rmax(r, vu.m_vfReady[22][3]); r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xA30u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xFu, nv(ctx, 31u), nv(ctx, 22u), _mm_setzero_ps(), un); writeVf(vu, ctx, 18u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[8], 0)); writeVf(vu, ctx, 22u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[8] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[22][0] = cyc + 4u;
            vu.m_vfReady[22][1] = cyc + 4u;
            vu.m_vfReady[22][2] = cyc + 4u;
            vu.m_vfReady[22][3] = cyc + 4u;
            vu.m_vfReady[18][0] = cyc + 4u;
            vu.m_vfReady[18][1] = cyc + 4u;
            vu.m_vfReady[18][2] = cyc + 4u;
            vu.m_vfReady[18][3] = cyc + 4u;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0A38:
        if (cyc >= budget) { epc = 0xA38u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_vfReady[31][1]); r = rmax(r, vu.m_vfReady[31][2]); r = rmax(r, vu.m_vfReady[31][3]); r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_vfReady[23][3]); r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xA38u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[8];
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xFu, nv(ctx, 31u), nv(ctx, 23u), _mm_setzero_ps(), un); writeVf(vu, ctx, 19u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[8], 0)); writeVf(vu, ctx, 23u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[8] = static_cast<int16_t>(vu.m_state.vi[8] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
            vu.m_vfReady[23][3] = cyc + 4u;
            vu.m_vfReady[19][0] = cyc + 4u;
            vu.m_vfReady[19][1] = cyc + 4u;
            vu.m_vfReady[19][2] = cyc + 4u;
            vu.m_vfReady[19][3] = cyc + 4u;
            vu.m_viReady[8] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 8u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0A40:
        if (cyc >= budget) { epc = 0xA40u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0A48:
        if (cyc >= budget) { epc = 0xA48u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xA48u; goto exit_budget; } } cyc = r; } }
        {
            clipOp(vu, ctx, cyc, _mm_loadu_ps(vu.m_state.vf[17]), _mm_loadu_ps(vu.m_state.vf[17]));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0A50:
        if (cyc >= budget) { epc = 0xA50u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); r = rmax(r, vu.m_vfReady[21][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xA50u; goto exit_budget; } } cyc = r; } }
        {
            clipOp(vu, ctx, cyc, _mm_loadu_ps(vu.m_state.vf[21]), _mm_loadu_ps(vu.m_state.vf[21]));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0A58:
        if (cyc >= budget) { epc = 0xA58u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0A60:
        if (cyc >= budget) { epc = 0xA60u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0A68:
        if (cyc >= budget) { epc = 0xA68u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0A70:
        if (cyc >= budget) { epc = 0xA70u; goto exit_budget; }
        {
            commitClip(vu, ctx, cyc); vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.clip & 0x0FFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[1] = cyc + 1u;
        }
        ++cyc;
pc_0A78:
        if (cyc >= budget) { epc = 0xA78u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); r = rmax(r, vu.m_viReady[5]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xA78u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[4];
            vu.m_state.vi[4] = static_cast<int16_t>(vu.m_state.vi[1] & vu.m_state.vi[5]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[4] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 4u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0A80:
        if (cyc >= budget) { epc = 0xA80u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0A88:
        if (cyc >= budget) { epc = 0xA88u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xA88u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) == static_cast<int16_t>(vu.readBranchVi(4u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xA90u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xB08u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) goto seg_0B08;
        goto seg_0A98;
pc_0A90:
        if (cyc >= budget) { epc = 0xA90u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0A98;
pc_0A98:
        if (cyc >= budget) { epc = 0xA98u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); r = rmax(r, vu.m_viReady[6]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xA98u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[4];
            vu.m_state.vi[4] = static_cast<int16_t>(vu.m_state.vi[1] & vu.m_state.vi[6]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[4] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 4u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0AA0:
        if (cyc >= budget) { epc = 0xAA0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0AA8:
        if (cyc >= budget) { epc = 0xAA8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xAA8u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) == static_cast<int16_t>(vu.readBranchVi(4u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xAB0u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xAC8u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) goto seg_0AC8;
        goto seg_0AB8;
pc_0AB0:
        if (cyc >= budget) { epc = 0xAB0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0AB8;
pc_0AB8:
        if (cyc >= budget) { epc = 0xAB8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xAC0u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xBA0u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0BA0;
pc_0AC0:
        if (cyc >= budget) { epc = 0xAC0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0AC8;
pc_0AC8:
        if (cyc >= budget) { epc = 0xAC8u; goto exit_budget; }
        {
            vu.m_state.vi[1] = static_cast<int16_t>(347);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[1] = cyc + 1u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xAD0u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xBB0u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0BB0;
pc_0AD0:
        if (cyc >= budget) { epc = 0xAD0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0AD8;
pc_0AD8:
        if (cyc >= budget) { epc = 0xAD8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_vfReady[25][3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xAD8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[9], 0), _mm_loadu_ps(vu.m_state.vf[25]), 0xFu);vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0AE0:
        if (cyc >= budget) { epc = 0xAE0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xAE0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[9], 0), _mm_loadu_ps(vu.m_state.vf[26]), 0xFu);vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0AE8:
        if (cyc >= budget) { epc = 0xAE8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xAE8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[9], 0), _mm_loadu_ps(vu.m_state.vf[27]), 0xFu);vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0AF0:
        if (cyc >= budget) { epc = 0xAF0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xAF0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[11];
            vu.m_state.vi[11] = static_cast<int16_t>(vu.m_state.vi[11] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 11u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0AF8:
        if (cyc >= budget) { epc = 0xAF8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xB00u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xBA0u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0BA0;
pc_0B00:
        if (cyc >= budget) { epc = 0xB00u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0B08;
pc_0B08:
        if (cyc >= budget) { epc = 0xB08u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); r = rmax(r, vu.m_viReady[6]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xB08u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[4];
            vu.m_state.vi[4] = static_cast<int16_t>(vu.m_state.vi[1] & vu.m_state.vi[6]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[4] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 4u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0B10:
        if (cyc >= budget) { epc = 0xB10u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0B18:
        if (cyc >= budget) { epc = 0xB18u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xB18u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) == static_cast<int16_t>(vu.readBranchVi(4u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xB20u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xB80u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) goto seg_0B80;
        goto seg_0B28;
pc_0B20:
        if (cyc >= budget) { epc = 0xB20u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0B28;
pc_0B28:
        if (cyc >= budget) { epc = 0xB28u; goto exit_budget; }
        {
            vu.m_state.vi[1] = static_cast<int16_t>(359);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[1] = cyc + 1u;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xB30u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xBB0u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0BB0;
pc_0B30:
        if (cyc >= budget) { epc = 0xB30u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0B38;
pc_0B38:
        if (cyc >= budget) { epc = 0xB38u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xB38u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[9], 0), _mm_loadu_ps(vu.m_state.vf[17]), 0xFu);vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0B40:
        if (cyc >= budget) { epc = 0xB40u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[18][0]); r = rmax(r, vu.m_vfReady[18][1]); r = rmax(r, vu.m_vfReady[18][2]); r = rmax(r, vu.m_vfReady[18][3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xB40u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[9], 0), _mm_loadu_ps(vu.m_state.vf[18]), 0xFu);vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0B48:
        if (cyc >= budget) { epc = 0xB48u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[19][0]); r = rmax(r, vu.m_vfReady[19][1]); r = rmax(r, vu.m_vfReady[19][2]); r = rmax(r, vu.m_vfReady[19][3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xB48u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[9], 0), _mm_loadu_ps(vu.m_state.vf[19]), 0xFu);vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0B50:
        if (cyc >= budget) { epc = 0xB50u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_vfReady[25][3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xB50u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[9], 0), _mm_loadu_ps(vu.m_state.vf[25]), 0xFu);vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0B58:
        if (cyc >= budget) { epc = 0xB58u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xB58u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[9], 0), _mm_loadu_ps(vu.m_state.vf[26]), 0xFu);vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0B60:
        if (cyc >= budget) { epc = 0xB60u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xB60u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[9], 0), _mm_loadu_ps(vu.m_state.vf[27]), 0xFu);vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0B68:
        if (cyc >= budget) { epc = 0xB68u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xB68u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[11];
            vu.m_state.vi[11] = static_cast<int16_t>(vu.m_state.vi[11] + 2);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 11u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0B70:
        if (cyc >= budget) { epc = 0xB70u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xB78u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xBA0u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0BA0;
pc_0B78:
        if (cyc >= budget) { epc = 0xB78u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0B80;
pc_0B80:
        if (cyc >= budget) { epc = 0xB80u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xB80u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[9], 0), _mm_loadu_ps(vu.m_state.vf[17]), 0xFu);vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0B88:
        if (cyc >= budget) { epc = 0xB88u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[18][0]); r = rmax(r, vu.m_vfReady[18][1]); r = rmax(r, vu.m_vfReady[18][2]); r = rmax(r, vu.m_vfReady[18][3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xB88u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[9], 0), _mm_loadu_ps(vu.m_state.vf[18]), 0xFu);vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0B90:
        if (cyc >= budget) { epc = 0xB90u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[19][0]); r = rmax(r, vu.m_vfReady[19][1]); r = rmax(r, vu.m_vfReady[19][2]); r = rmax(r, vu.m_vfReady[19][3]); r = rmax(r, vu.m_viReady[9]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xB90u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[9];
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[9], 0), _mm_loadu_ps(vu.m_state.vf[19]), 0xFu);vu.m_state.vi[9] = static_cast<int16_t>(vu.m_state.vi[9] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 9u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0B98:
        if (cyc >= budget) { epc = 0xB98u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xB98u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[11];
            vu.m_state.vi[11] = static_cast<int16_t>(vu.m_state.vi[11] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 11u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
        goto seg_0BA0;
pc_0BA0:
        if (cyc >= budget) { epc = 0xBA0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xBA0u; goto exit_budget; } } cyc = r; } }
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vu.readBranchVi(2u))) * 8u) & 0x3FFFu;
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xBA8u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = jt; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = jt; goto exit_continue; }
pc_0BA8:
        if (cyc >= budget) { epc = 0xBA8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0BB0;
pc_0BB0:
        if (cyc >= budget) { epc = 0xBB0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][3]); r = rmax(r, vu.m_vfReady[30][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xBB0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, nv(ctx, 17u), nbc(ctx, 30u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 25u, uv, uv, 0x1u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][3] = cyc + 4u;
        }
        ++cyc;
pc_0BB8:
        if (cyc >= budget) { epc = 0xBB8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[21][3]); r = rmax(r, vu.m_vfReady[30][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xBB8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, nv(ctx, 21u), nbc(ctx, 30u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 26u, uv, uv, 0x1u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][3] = cyc + 4u;
        }
        ++cyc;
pc_0BC0:
        if (cyc >= budget) { epc = 0xBC0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[7]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xBC0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[12];
            vu.m_state.vi[12] = static_cast<int16_t>(vu.m_state.vi[0] + vu.m_state.vi[7]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[12] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 12u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0BC8:
        if (cyc >= budget) { epc = 0xBC8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); r = rmax(r, vu.m_vfReady[25][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xBC8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xFu, nv(ctx, 17u), nbc(ctx, 25u, 3u), _mm_setzero_ps(), un); writeVf(vu, ctx, 25u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
        }
        ++cyc;
pc_0BD0:
        if (cyc >= budget) { epc = 0xBD0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); r = rmax(r, vu.m_vfReady[21][3]); r = rmax(r, vu.m_vfReady[26][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xBD0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xFu, nv(ctx, 21u), nbc(ctx, 26u, 3u), _mm_setzero_ps(), un); writeVf(vu, ctx, 26u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][0] = cyc + 4u;
            vu.m_vfReady[26][1] = cyc + 4u;
            vu.m_vfReady[26][2] = cyc + 4u;
            vu.m_vfReady[26][3] = cyc + 4u;
        }
        ++cyc;
pc_0BD8:
        if (cyc >= budget) { epc = 0xBD8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = 0xBE0u; goto exit_continue; }
seg_07F0:
        if (cyc + 5u > budget) goto pc_07F0;
    {
        uint64_t s07F0_0 = 0u, s07F0_1 = 0u;
        int32_t vi2 = vu.m_state.vi[2];
        // pc_07F0
        s07F0_0 = cyc;
        {
            vi2 = static_cast<int16_t>(256);
        }
        ++cyc;
        s07F0_1 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[2] = vi2;
        vu.m_viReady[2] = s07F0_0 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0A28;
    }
seg_07F8:
        if (cyc + 8u > budget) goto pc_07F8;
    {
        uint64_t s07F8_0 = 0u, s07F8_1 = 0u, s07F8_2 = 0u, s07F8_3 = 0u, s07F8_4 = 0u;
        int32_t vi10 = vu.m_state.vi[10];
        // pc_07F8
        s07F8_0 = cyc;
        {
        }
        ++cyc;
        // pc_0800
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); cyc = r; }
        s07F8_1 = cyc;
        const int32_t bk07F8_1 = vi10;
        {
            vi10 = static_cast<int16_t>(vi10 - 1);
        }
        ++cyc;
        // pc_0808
        s07F8_2 = cyc;
        {
        }
        ++cyc;
        // pc_0810
        s07F8_3 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi10);
        }
        ++cyc;
        s07F8_4 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[10] = vi10;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_07F0;
        goto seg_0820;
    }
seg_0800:
        if (cyc + 7u > budget) goto pc_0800;
    {
        uint64_t s0800_0 = 0u, s0800_1 = 0u, s0800_2 = 0u, s0800_3 = 0u;
        int32_t vi10 = vu.m_state.vi[10];
        // pc_0800
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); cyc = r; }
        s0800_0 = cyc;
        const int32_t bk0800_0 = vi10;
        {
            vi10 = static_cast<int16_t>(vi10 - 1);
        }
        ++cyc;
        // pc_0808
        s0800_1 = cyc;
        {
        }
        ++cyc;
        // pc_0810
        s0800_2 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi10);
        }
        ++cyc;
        s0800_3 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[10] = vi10;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_07F0;
        goto seg_0820;
    }
seg_0818:
        if (cyc + 7u > budget) goto pc_0818;
    {
        uint64_t s0818_0 = 0u, s0818_1 = 0u, s0818_2 = 0u, s0818_3 = 0u;
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi8 = vu.m_state.vi[8];
        // pc_0818
        s0818_0 = cyc;
        {
        }
        ++cyc;
        // pc_0820
        s0818_1 = cyc;
        const int32_t bk0818_1 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 61);
        }
        ++cyc;
        // pc_0828
        s0818_2 = cyc;
        {
            vi2 = static_cast<int16_t>(263);
        }
        ++cyc;
        s0818_3 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[8] = vi8;
        vu.m_viReady[2] = s0818_2 + 1u;
        vu.m_viReady[8] = s0818_1 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_09E8;
    }
seg_0820:
        if (cyc + 6u > budget) goto pc_0820;
    {
        uint64_t s0820_0 = 0u, s0820_1 = 0u, s0820_2 = 0u;
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi8 = vu.m_state.vi[8];
        // pc_0820
        s0820_0 = cyc;
        const int32_t bk0820_0 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 61);
        }
        ++cyc;
        // pc_0828
        s0820_1 = cyc;
        {
            vi2 = static_cast<int16_t>(263);
        }
        ++cyc;
        s0820_2 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[8] = vi8;
        vu.m_viReady[2] = s0820_1 + 1u;
        vu.m_viReady[8] = s0820_0 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_09E8;
    }
seg_0830:
        if (cyc + 6u > budget) goto pc_0830;
    {
        uint64_t s0830_0 = 0u, s0830_1 = 0u, s0830_2 = 0u;
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0830
        s0830_0 = cyc;
        {
        }
        ++cyc;
        // pc_0838
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); cyc = r; }
        s0830_1 = cyc;
        {
            tk = static_cast<int16_t>(0) == static_cast<int16_t>(vi11);
        }
        ++cyc;
        s0830_2 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_09D8;
        goto seg_0848;
    }
seg_0838:
        if (cyc + 5u > budget) goto pc_0838;
    {
        uint64_t s0838_0 = 0u, s0838_1 = 0u;
        // pc_0838
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); cyc = r; }
        s0838_0 = cyc;
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) == static_cast<int16_t>(vu.readBranchVi(11u));
        }
        ++cyc;
        s0838_1 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_09D8;
        goto seg_0848;
    }
seg_0840:
        if (cyc + 17u > budget) goto pc_0840;
    {
        uint64_t s0840_0 = 0u, s0840_1 = 0u, s0840_2 = 0u, s0840_3 = 0u, s0840_4 = 0u, s0840_5 = 0u, s0840_6 = 0u, s0840_7 = 0u, s0840_8 = 0u, s0840_9 = 0u, s0840_10 = 0u, s0840_11 = 0u, s0840_12 = 0u, s0840_13 = 0u;
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi5 = vu.m_state.vi[5];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0840
        s0840_0 = cyc;
        {
        }
        ++cyc;
        // pc_0848
        s0840_1 = cyc;
        const int32_t bk0840_1 = vi5;
        {
            vi5 = static_cast<int16_t>(0 + 512);
        }
        ++cyc;
        // pc_0850
        s0840_2 = cyc;
        const int32_t bk0840_2 = vi6;
        {
            vi6 = static_cast<int16_t>(0 + 8);
        }
        ++cyc;
        // pc_0858
        s0840_3 = cyc;
        const int32_t bk0840_3 = vi7;
        {
            vi7 = static_cast<int16_t>(0 + 1);
        }
        ++cyc;
        // pc_0860
        s0840_4 = cyc;
        const int32_t bk0840_4 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 61);
        }
        ++cyc;
        // pc_0868
        s0840_5 = cyc;
        const int32_t bk0840_5 = vi9;
        {
            vi9 = static_cast<int16_t>(0 + 101);
        }
        ++cyc;
        // pc_0870
        s0840_6 = cyc;
        const int32_t bk0840_6 = vi10;
        {
            vi10 = static_cast<int16_t>(0 + vi11);
        }
        ++cyc;
        // pc_0878
        s0840_7 = cyc;
        const int32_t bk0840_7 = vi11;
        {
            vi11 = static_cast<int16_t>(0 + 0);
        }
        ++cyc;
        // pc_0880
        s0840_8 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0x8u, kVf0(), bcast<3u>(kVf0()), _mm_setzero_ps(), un); vr30 = blendDest(vr30, uv, 0x8u); vn30 = blendDest(vn30, uv, 0x8u); }
        }
        ++cyc;
        // pc_0888
        s0840_9 = cyc;
        const int32_t bk0840_9 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0890
        s0840_10 = cyc;
        const int32_t bk0840_10 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[22], lv); vn22 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0898
        s0840_11 = cyc;
        const int32_t bk0840_11 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_08A0
        s0840_12 = cyc;
        {
            vi2 = static_cast<int16_t>(278);
        }
        ++cyc;
        s0840_13 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[22], vn22);
 _mm_store_ps(ctx.norm[23], vn23);
        _mm_storeu_ps(vu.m_state.vf[30], vr30); _mm_store_ps(ctx.norm[30], vn30);
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[5] = vi5;
        vu.m_state.vi[6] = vi6;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[8] = vi8;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        setReady4(vu.m_vfReady[23].data(), s0840_11 + 4u);
        vu.m_viReady[2] = s0840_12 + 1u;
        vu.m_viReady[8] = s0840_11 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0A28;
    }
seg_0848:
        if (cyc + 16u > budget) goto pc_0848;
    {
        uint64_t s0848_0 = 0u, s0848_1 = 0u, s0848_2 = 0u, s0848_3 = 0u, s0848_4 = 0u, s0848_5 = 0u, s0848_6 = 0u, s0848_7 = 0u, s0848_8 = 0u, s0848_9 = 0u, s0848_10 = 0u, s0848_11 = 0u, s0848_12 = 0u;
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi5 = vu.m_state.vi[5];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0848
        s0848_0 = cyc;
        const int32_t bk0848_0 = vi5;
        {
            vi5 = static_cast<int16_t>(0 + 512);
        }
        ++cyc;
        // pc_0850
        s0848_1 = cyc;
        const int32_t bk0848_1 = vi6;
        {
            vi6 = static_cast<int16_t>(0 + 8);
        }
        ++cyc;
        // pc_0858
        s0848_2 = cyc;
        const int32_t bk0848_2 = vi7;
        {
            vi7 = static_cast<int16_t>(0 + 1);
        }
        ++cyc;
        // pc_0860
        s0848_3 = cyc;
        const int32_t bk0848_3 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 61);
        }
        ++cyc;
        // pc_0868
        s0848_4 = cyc;
        const int32_t bk0848_4 = vi9;
        {
            vi9 = static_cast<int16_t>(0 + 101);
        }
        ++cyc;
        // pc_0870
        s0848_5 = cyc;
        const int32_t bk0848_5 = vi10;
        {
            vi10 = static_cast<int16_t>(0 + vi11);
        }
        ++cyc;
        // pc_0878
        s0848_6 = cyc;
        const int32_t bk0848_6 = vi11;
        {
            vi11 = static_cast<int16_t>(0 + 0);
        }
        ++cyc;
        // pc_0880
        s0848_7 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0x8u, kVf0(), bcast<3u>(kVf0()), _mm_setzero_ps(), un); vr30 = blendDest(vr30, uv, 0x8u); vn30 = blendDest(vn30, uv, 0x8u); }
        }
        ++cyc;
        // pc_0888
        s0848_8 = cyc;
        const int32_t bk0848_8 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0890
        s0848_9 = cyc;
        const int32_t bk0848_9 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[22], lv); vn22 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0898
        s0848_10 = cyc;
        const int32_t bk0848_10 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_08A0
        s0848_11 = cyc;
        {
            vi2 = static_cast<int16_t>(278);
        }
        ++cyc;
        s0848_12 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[22], vn22);
 _mm_store_ps(ctx.norm[23], vn23);
        _mm_storeu_ps(vu.m_state.vf[30], vr30); _mm_store_ps(ctx.norm[30], vn30);
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[5] = vi5;
        vu.m_state.vi[6] = vi6;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[8] = vi8;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        setReady4(vu.m_vfReady[23].data(), s0848_10 + 4u);
        vu.m_viReady[2] = s0848_11 + 1u;
        vu.m_viReady[8] = s0848_10 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0A28;
    }
seg_08A0:
        if (cyc + 5u > budget) goto pc_08A0;
    {
        uint64_t s08A0_0 = 0u, s08A0_1 = 0u;
        int32_t vi2 = vu.m_state.vi[2];
        // pc_08A0
        s08A0_0 = cyc;
        {
            vi2 = static_cast<int16_t>(278);
        }
        ++cyc;
        s08A0_1 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[2] = vi2;
        vu.m_viReady[2] = s08A0_0 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0A28;
    }
seg_08A8:
        if (cyc + 8u > budget) goto pc_08A8;
    {
        uint64_t s08A8_0 = 0u, s08A8_1 = 0u, s08A8_2 = 0u, s08A8_3 = 0u, s08A8_4 = 0u;
        int32_t vi10 = vu.m_state.vi[10];
        // pc_08A8
        s08A8_0 = cyc;
        {
        }
        ++cyc;
        // pc_08B0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); cyc = r; }
        s08A8_1 = cyc;
        const int32_t bk08A8_1 = vi10;
        {
            vi10 = static_cast<int16_t>(vi10 - 1);
        }
        ++cyc;
        // pc_08B8
        s08A8_2 = cyc;
        {
        }
        ++cyc;
        // pc_08C0
        s08A8_3 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi10);
        }
        ++cyc;
        s08A8_4 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[10] = vi10;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_08A0;
        goto seg_08D0;
    }
seg_08B0:
        if (cyc + 7u > budget) goto pc_08B0;
    {
        uint64_t s08B0_0 = 0u, s08B0_1 = 0u, s08B0_2 = 0u, s08B0_3 = 0u;
        int32_t vi10 = vu.m_state.vi[10];
        // pc_08B0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); cyc = r; }
        s08B0_0 = cyc;
        const int32_t bk08B0_0 = vi10;
        {
            vi10 = static_cast<int16_t>(vi10 - 1);
        }
        ++cyc;
        // pc_08B8
        s08B0_1 = cyc;
        {
        }
        ++cyc;
        // pc_08C0
        s08B0_2 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi10);
        }
        ++cyc;
        s08B0_3 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[10] = vi10;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_08A0;
        goto seg_08D0;
    }
seg_08C8:
        if (cyc + 7u > budget) goto pc_08C8;
    {
        uint64_t s08C8_0 = 0u, s08C8_1 = 0u, s08C8_2 = 0u, s08C8_3 = 0u;
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi8 = vu.m_state.vi[8];
        // pc_08C8
        s08C8_0 = cyc;
        {
        }
        ++cyc;
        // pc_08D0
        s08C8_1 = cyc;
        const int32_t bk08C8_1 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 101);
        }
        ++cyc;
        // pc_08D8
        s08C8_2 = cyc;
        {
            vi2 = static_cast<int16_t>(285);
        }
        ++cyc;
        s08C8_3 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[8] = vi8;
        vu.m_viReady[2] = s08C8_2 + 1u;
        vu.m_viReady[8] = s08C8_1 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_09E8;
    }
seg_08D0:
        if (cyc + 6u > budget) goto pc_08D0;
    {
        uint64_t s08D0_0 = 0u, s08D0_1 = 0u, s08D0_2 = 0u;
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi8 = vu.m_state.vi[8];
        // pc_08D0
        s08D0_0 = cyc;
        const int32_t bk08D0_0 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 101);
        }
        ++cyc;
        // pc_08D8
        s08D0_1 = cyc;
        {
            vi2 = static_cast<int16_t>(285);
        }
        ++cyc;
        s08D0_2 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[8] = vi8;
        vu.m_viReady[2] = s08D0_1 + 1u;
        vu.m_viReady[8] = s08D0_0 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_09E8;
    }
seg_08E0:
        if (cyc + 6u > budget) goto pc_08E0;
    {
        uint64_t s08E0_0 = 0u, s08E0_1 = 0u, s08E0_2 = 0u;
        int32_t vi11 = vu.m_state.vi[11];
        // pc_08E0
        s08E0_0 = cyc;
        {
        }
        ++cyc;
        // pc_08E8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); cyc = r; }
        s08E0_1 = cyc;
        {
            tk = static_cast<int16_t>(0) == static_cast<int16_t>(vi11);
        }
        ++cyc;
        s08E0_2 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_09D8;
        goto seg_08F8;
    }
seg_08E8:
        if (cyc + 5u > budget) goto pc_08E8;
    {
        uint64_t s08E8_0 = 0u, s08E8_1 = 0u;
        // pc_08E8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); cyc = r; }
        s08E8_0 = cyc;
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) == static_cast<int16_t>(vu.readBranchVi(11u));
        }
        ++cyc;
        s08E8_1 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_09D8;
        goto seg_08F8;
    }
seg_08F0:
        if (cyc + 17u > budget) goto pc_08F0;
    {
        uint64_t s08F0_0 = 0u, s08F0_1 = 0u, s08F0_2 = 0u, s08F0_3 = 0u, s08F0_4 = 0u, s08F0_5 = 0u, s08F0_6 = 0u, s08F0_7 = 0u, s08F0_8 = 0u, s08F0_9 = 0u, s08F0_10 = 0u, s08F0_11 = 0u, s08F0_12 = 0u, s08F0_13 = 0u;
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi5 = vu.m_state.vi[5];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_08F0
        s08F0_0 = cyc;
        {
        }
        ++cyc;
        // pc_08F8
        s08F0_1 = cyc;
        const int32_t bk08F0_1 = vi5;
        {
            vi5 = static_cast<int16_t>(0 + 256);
        }
        ++cyc;
        // pc_0900
        s08F0_2 = cyc;
        const int32_t bk08F0_2 = vi6;
        {
            vi6 = static_cast<int16_t>(0 + 4);
        }
        ++cyc;
        // pc_0908
        s08F0_3 = cyc;
        const int32_t bk08F0_3 = vi7;
        {
            vi7 = static_cast<int16_t>(0 + 1);
        }
        ++cyc;
        // pc_0910
        s08F0_4 = cyc;
        const int32_t bk08F0_4 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 101);
        }
        ++cyc;
        // pc_0918
        s08F0_5 = cyc;
        const int32_t bk08F0_5 = vi9;
        {
            vi9 = static_cast<int16_t>(0 + 61);
        }
        ++cyc;
        // pc_0920
        s08F0_6 = cyc;
        const int32_t bk08F0_6 = vi10;
        {
            vi10 = static_cast<int16_t>(0 + vi11);
        }
        ++cyc;
        // pc_0928
        s08F0_7 = cyc;
        const int32_t bk08F0_7 = vi11;
        {
            vi11 = static_cast<int16_t>(0 + 0);
        }
        ++cyc;
        // pc_0930
        s08F0_8 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0x8u, kVf0(), bcast<3u>(kVf0()), _mm_setzero_ps(), un); vr30 = blendDest(vr30, uv, 0x8u); vn30 = blendDest(vn30, uv, 0x8u); }
        }
        ++cyc;
        // pc_0938
        s08F0_9 = cyc;
        const int32_t bk08F0_9 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0940
        s08F0_10 = cyc;
        const int32_t bk08F0_10 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[22], lv); vn22 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0948
        s08F0_11 = cyc;
        const int32_t bk08F0_11 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0950
        s08F0_12 = cyc;
        {
            vi2 = static_cast<int16_t>(300);
        }
        ++cyc;
        s08F0_13 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[22], vn22);
 _mm_store_ps(ctx.norm[23], vn23);
        _mm_storeu_ps(vu.m_state.vf[30], vr30); _mm_store_ps(ctx.norm[30], vn30);
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[5] = vi5;
        vu.m_state.vi[6] = vi6;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[8] = vi8;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        setReady4(vu.m_vfReady[23].data(), s08F0_11 + 4u);
        vu.m_viReady[2] = s08F0_12 + 1u;
        vu.m_viReady[8] = s08F0_11 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0A28;
    }
seg_08F8:
        if (cyc + 16u > budget) goto pc_08F8;
    {
        uint64_t s08F8_0 = 0u, s08F8_1 = 0u, s08F8_2 = 0u, s08F8_3 = 0u, s08F8_4 = 0u, s08F8_5 = 0u, s08F8_6 = 0u, s08F8_7 = 0u, s08F8_8 = 0u, s08F8_9 = 0u, s08F8_10 = 0u, s08F8_11 = 0u, s08F8_12 = 0u;
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi5 = vu.m_state.vi[5];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_08F8
        s08F8_0 = cyc;
        const int32_t bk08F8_0 = vi5;
        {
            vi5 = static_cast<int16_t>(0 + 256);
        }
        ++cyc;
        // pc_0900
        s08F8_1 = cyc;
        const int32_t bk08F8_1 = vi6;
        {
            vi6 = static_cast<int16_t>(0 + 4);
        }
        ++cyc;
        // pc_0908
        s08F8_2 = cyc;
        const int32_t bk08F8_2 = vi7;
        {
            vi7 = static_cast<int16_t>(0 + 1);
        }
        ++cyc;
        // pc_0910
        s08F8_3 = cyc;
        const int32_t bk08F8_3 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 101);
        }
        ++cyc;
        // pc_0918
        s08F8_4 = cyc;
        const int32_t bk08F8_4 = vi9;
        {
            vi9 = static_cast<int16_t>(0 + 61);
        }
        ++cyc;
        // pc_0920
        s08F8_5 = cyc;
        const int32_t bk08F8_5 = vi10;
        {
            vi10 = static_cast<int16_t>(0 + vi11);
        }
        ++cyc;
        // pc_0928
        s08F8_6 = cyc;
        const int32_t bk08F8_6 = vi11;
        {
            vi11 = static_cast<int16_t>(0 + 0);
        }
        ++cyc;
        // pc_0930
        s08F8_7 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0x8u, kVf0(), bcast<3u>(kVf0()), _mm_setzero_ps(), un); vr30 = blendDest(vr30, uv, 0x8u); vn30 = blendDest(vn30, uv, 0x8u); }
        }
        ++cyc;
        // pc_0938
        s08F8_8 = cyc;
        const int32_t bk08F8_8 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0940
        s08F8_9 = cyc;
        const int32_t bk08F8_9 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[22], lv); vn22 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0948
        s08F8_10 = cyc;
        const int32_t bk08F8_10 = vi8;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0950
        s08F8_11 = cyc;
        {
            vi2 = static_cast<int16_t>(300);
        }
        ++cyc;
        s08F8_12 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[22], vn22);
 _mm_store_ps(ctx.norm[23], vn23);
        _mm_storeu_ps(vu.m_state.vf[30], vr30); _mm_store_ps(ctx.norm[30], vn30);
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[5] = vi5;
        vu.m_state.vi[6] = vi6;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[8] = vi8;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        setReady4(vu.m_vfReady[23].data(), s08F8_10 + 4u);
        vu.m_viReady[2] = s08F8_11 + 1u;
        vu.m_viReady[8] = s08F8_10 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0A28;
    }
seg_0950:
        if (cyc + 5u > budget) goto pc_0950;
    {
        uint64_t s0950_0 = 0u, s0950_1 = 0u;
        int32_t vi2 = vu.m_state.vi[2];
        // pc_0950
        s0950_0 = cyc;
        {
            vi2 = static_cast<int16_t>(300);
        }
        ++cyc;
        s0950_1 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[2] = vi2;
        vu.m_viReady[2] = s0950_0 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0A28;
    }
seg_0958:
        if (cyc + 8u > budget) goto pc_0958;
    {
        uint64_t s0958_0 = 0u, s0958_1 = 0u, s0958_2 = 0u, s0958_3 = 0u, s0958_4 = 0u;
        int32_t vi10 = vu.m_state.vi[10];
        // pc_0958
        s0958_0 = cyc;
        {
        }
        ++cyc;
        // pc_0960
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); cyc = r; }
        s0958_1 = cyc;
        const int32_t bk0958_1 = vi10;
        {
            vi10 = static_cast<int16_t>(vi10 - 1);
        }
        ++cyc;
        // pc_0968
        s0958_2 = cyc;
        {
        }
        ++cyc;
        // pc_0970
        s0958_3 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi10);
        }
        ++cyc;
        s0958_4 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[10] = vi10;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0950;
        goto seg_0980;
    }
seg_0960:
        if (cyc + 7u > budget) goto pc_0960;
    {
        uint64_t s0960_0 = 0u, s0960_1 = 0u, s0960_2 = 0u, s0960_3 = 0u;
        int32_t vi10 = vu.m_state.vi[10];
        // pc_0960
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); cyc = r; }
        s0960_0 = cyc;
        const int32_t bk0960_0 = vi10;
        {
            vi10 = static_cast<int16_t>(vi10 - 1);
        }
        ++cyc;
        // pc_0968
        s0960_1 = cyc;
        {
        }
        ++cyc;
        // pc_0970
        s0960_2 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi10);
        }
        ++cyc;
        s0960_3 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[10] = vi10;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0950;
        goto seg_0980;
    }
seg_0978:
        if (cyc + 7u > budget) goto pc_0978;
    {
        uint64_t s0978_0 = 0u, s0978_1 = 0u, s0978_2 = 0u, s0978_3 = 0u;
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi8 = vu.m_state.vi[8];
        // pc_0978
        s0978_0 = cyc;
        {
        }
        ++cyc;
        // pc_0980
        s0978_1 = cyc;
        const int32_t bk0978_1 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 61);
        }
        ++cyc;
        // pc_0988
        s0978_2 = cyc;
        {
            vi2 = static_cast<int16_t>(307);
        }
        ++cyc;
        s0978_3 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[8] = vi8;
        vu.m_viReady[2] = s0978_2 + 1u;
        vu.m_viReady[8] = s0978_1 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_09E8;
    }
seg_0980:
        if (cyc + 6u > budget) goto pc_0980;
    {
        uint64_t s0980_0 = 0u, s0980_1 = 0u, s0980_2 = 0u;
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi8 = vu.m_state.vi[8];
        // pc_0980
        s0980_0 = cyc;
        const int32_t bk0980_0 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 61);
        }
        ++cyc;
        // pc_0988
        s0980_1 = cyc;
        {
            vi2 = static_cast<int16_t>(307);
        }
        ++cyc;
        s0980_2 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[8] = vi8;
        vu.m_viReady[2] = s0980_1 + 1u;
        vu.m_viReady[8] = s0980_0 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_09E8;
    }
seg_0990:
        if (cyc + 6u > budget) goto pc_0990;
    {
        uint64_t s0990_0 = 0u, s0990_1 = 0u, s0990_2 = 0u;
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0990
        s0990_0 = cyc;
        {
        }
        ++cyc;
        // pc_0998
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); cyc = r; }
        s0990_1 = cyc;
        {
            tk = static_cast<int16_t>(0) == static_cast<int16_t>(vi11);
        }
        ++cyc;
        s0990_2 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_09D8;
        goto seg_09A8;
    }
seg_0998:
        if (cyc + 5u > budget) goto pc_0998;
    {
        uint64_t s0998_0 = 0u, s0998_1 = 0u;
        // pc_0998
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); cyc = r; }
        s0998_0 = cyc;
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) == static_cast<int16_t>(vu.readBranchVi(11u));
        }
        ++cyc;
        s0998_1 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_09D8;
        goto seg_09A8;
    }
seg_09A0:
        if (cyc + 10u > budget) goto pc_09A0;
    {
        uint64_t s09A0_0 = 0u, s09A0_1 = 0u, s09A0_2 = 0u, s09A0_3 = 0u, s09A0_4 = 0u, s09A0_5 = 0u, s09A0_6 = 0u;
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_09A0
        s09A0_0 = cyc;
        {
        }
        ++cyc;
        // pc_09A8
        s09A0_1 = cyc;
        const int32_t bk09A0_1 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 61);
        }
        ++cyc;
        // pc_09B0
        s09A0_2 = cyc;
        const int32_t bk09A0_2 = vi9;
        {
            vi9 = static_cast<int16_t>(0 + 101);
        }
        ++cyc;
        // pc_09B8
        s09A0_3 = cyc;
        const int32_t bk09A0_3 = vi10;
        {
            vi10 = static_cast<int16_t>(0 + vi11);
        }
        ++cyc;
        // pc_09C0
        s09A0_4 = cyc;
        const int32_t bk09A0_4 = vi11;
        {
            vi11 = static_cast<int16_t>(0 + 0);
        }
        ++cyc;
        // pc_09C8
        s09A0_5 = cyc;
        {
            vi1 = static_cast<int16_t>(315);
        }
        ++cyc;
        s09A0_6 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[1] = vi1;
        vu.m_state.vi[8] = vi8;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        vu.m_viReady[1] = s09A0_5 + 1u;
        vu.m_viReady[11] = s09A0_4 + 1u;
        vu.m_viBranchBackupValid = false;
        { epc = 0xCB8u; goto exit_continue; }
    }
seg_09A8:
        if (cyc + 9u > budget) goto pc_09A8;
    {
        uint64_t s09A8_0 = 0u, s09A8_1 = 0u, s09A8_2 = 0u, s09A8_3 = 0u, s09A8_4 = 0u, s09A8_5 = 0u;
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_09A8
        s09A8_0 = cyc;
        const int32_t bk09A8_0 = vi8;
        {
            vi8 = static_cast<int16_t>(0 + 61);
        }
        ++cyc;
        // pc_09B0
        s09A8_1 = cyc;
        const int32_t bk09A8_1 = vi9;
        {
            vi9 = static_cast<int16_t>(0 + 101);
        }
        ++cyc;
        // pc_09B8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); cyc = r; }
        s09A8_2 = cyc;
        const int32_t bk09A8_2 = vi10;
        {
            vi10 = static_cast<int16_t>(0 + vi11);
        }
        ++cyc;
        // pc_09C0
        s09A8_3 = cyc;
        const int32_t bk09A8_3 = vi11;
        {
            vi11 = static_cast<int16_t>(0 + 0);
        }
        ++cyc;
        // pc_09C8
        s09A8_4 = cyc;
        {
            vi1 = static_cast<int16_t>(315);
        }
        ++cyc;
        s09A8_5 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[1] = vi1;
        vu.m_state.vi[8] = vi8;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        vu.m_viReady[1] = s09A8_4 + 1u;
        vu.m_viReady[11] = s09A8_3 + 1u;
        vu.m_viBranchBackupValid = false;
        { epc = 0xCB8u; goto exit_continue; }
    }
seg_09D0:
        if (cyc + 6u > budget) goto pc_09D0;
    {
        uint64_t s09D0_0 = 0u, s09D0_1 = 0u, s09D0_2 = 0u;
        int32_t vi15 = vu.m_state.vi[15];
        // pc_09D0
        s09D0_0 = cyc;
        {
        }
        ++cyc;
        // pc_09D8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[15]); cyc = r; }
        s09D0_1 = cyc;
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vi15)) * 8u) & 0x3FFFu;
        }
        ++cyc;
        s09D0_2 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        { epc = jt; goto exit_continue; }
    }
seg_09D8:
        if (cyc + 5u > budget) goto pc_09D8;
    {
        uint64_t s09D8_0 = 0u, s09D8_1 = 0u;
        // pc_09D8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[15]); cyc = r; }
        s09D8_0 = cyc;
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vu.readBranchVi(15u))) * 8u) & 0x3FFFu;
        }
        ++cyc;
        s09D8_1 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        { epc = jt; goto exit_continue; }
    }
seg_09E0:
        if (cyc + 15u > budget) goto pc_09E0;
    {
        uint64_t s09E0_0 = 0u, s09E0_1 = 0u, s09E0_2 = 0u, s09E0_3 = 0u, s09E0_4 = 0u, s09E0_5 = 0u, s09E0_6 = 0u, s09E0_7 = 0u, s09E0_8 = 0u;
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        // pc_09E0
        s09E0_0 = cyc;
        {
        }
        ++cyc;
        // pc_09E8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); cyc = r; }
        s09E0_1 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }
        }
        ++cyc;
        // pc_09F0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); cyc = r; }
        s09E0_2 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 1)); _mm_storeu_ps(vu.m_state.vf[22], lv); vn22 = vnorm(lv); }
        }
        ++cyc;
        // pc_09F8
        s09E0_3 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 2)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }
        }
        ++cyc;
        // pc_0A00
        { uint64_t r = cyc; r = rmax(r, s09E0_1 + 4u); r = rmax(r, s09E0_1 + 4u); r = rmax(r, s09E0_1 + 4u); r = rmax(r, s09E0_1 + 4u); cyc = r; }
        s09E0_4 = cyc;
        const int32_t bk09E0_4 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), _mm_loadu_ps(vu.m_state.vf[21]), 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0A08
        { uint64_t r = cyc; r = rmax(r, s09E0_2 + 4u); r = rmax(r, s09E0_2 + 4u); r = rmax(r, s09E0_2 + 4u); r = rmax(r, s09E0_2 + 4u); cyc = r; }
        s09E0_5 = cyc;
        const int32_t bk09E0_5 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), _mm_loadu_ps(vu.m_state.vf[22]), 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0A10
        { uint64_t r = cyc; r = rmax(r, s09E0_3 + 4u); r = rmax(r, s09E0_3 + 4u); r = rmax(r, s09E0_3 + 4u); r = rmax(r, s09E0_3 + 4u); cyc = r; }
        s09E0_6 = cyc;
        const int32_t bk09E0_6 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), _mm_loadu_ps(vu.m_state.vf[23]), 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0A18
        s09E0_7 = cyc;
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vi2)) * 8u) & 0x3FFFu;
        }
        ++cyc;
        s09E0_8 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[22], vn22);
 _mm_store_ps(ctx.norm[23], vn23);
        vu.m_state.vi[9] = vi9;
        vu.m_viReady[9] = s09E0_6 + 1u;
        vu.m_viBranchBackupValid = false;
        { epc = jt; goto exit_continue; }
    }
seg_09E8:
        if (cyc + 14u > budget) goto pc_09E8;
    {
        uint64_t s09E8_0 = 0u, s09E8_1 = 0u, s09E8_2 = 0u, s09E8_3 = 0u, s09E8_4 = 0u, s09E8_5 = 0u, s09E8_6 = 0u, s09E8_7 = 0u;
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        // pc_09E8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); cyc = r; }
        s09E8_0 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }
        }
        ++cyc;
        // pc_09F0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); cyc = r; }
        s09E8_1 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 1)); _mm_storeu_ps(vu.m_state.vf[22], lv); vn22 = vnorm(lv); }
        }
        ++cyc;
        // pc_09F8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); cyc = r; }
        s09E8_2 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi8, 2)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }
        }
        ++cyc;
        // pc_0A00
        { uint64_t r = cyc; r = rmax(r, s09E8_0 + 4u); r = rmax(r, s09E8_0 + 4u); r = rmax(r, s09E8_0 + 4u); r = rmax(r, s09E8_0 + 4u); cyc = r; }
        s09E8_3 = cyc;
        const int32_t bk09E8_3 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), _mm_loadu_ps(vu.m_state.vf[21]), 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0A08
        { uint64_t r = cyc; r = rmax(r, s09E8_1 + 4u); r = rmax(r, s09E8_1 + 4u); r = rmax(r, s09E8_1 + 4u); r = rmax(r, s09E8_1 + 4u); cyc = r; }
        s09E8_4 = cyc;
        const int32_t bk09E8_4 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), _mm_loadu_ps(vu.m_state.vf[22]), 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0A10
        { uint64_t r = cyc; r = rmax(r, s09E8_2 + 4u); r = rmax(r, s09E8_2 + 4u); r = rmax(r, s09E8_2 + 4u); r = rmax(r, s09E8_2 + 4u); cyc = r; }
        s09E8_5 = cyc;
        const int32_t bk09E8_5 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), _mm_loadu_ps(vu.m_state.vf[23]), 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0A18
        s09E8_6 = cyc;
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vi2)) * 8u) & 0x3FFFu;
        }
        ++cyc;
        s09E8_7 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[22], vn22);
 _mm_store_ps(ctx.norm[23], vn23);
        vu.m_state.vi[9] = vi9;
        vu.m_viReady[9] = s09E8_5 + 1u;
        vu.m_viBranchBackupValid = false;
        { epc = jt; goto exit_continue; }
    }
seg_0A20:
        if (cyc + 18u > budget) goto pc_0A20;
    {
        uint64_t s0A20_0 = 0u, s0A20_1 = 0u, s0A20_2 = 0u, s0A20_3 = 0u, s0A20_4 = 0u, s0A20_5 = 0u, s0A20_6 = 0u, s0A20_7 = 0u, s0A20_8 = 0u, s0A20_9 = 0u, s0A20_10 = 0u, s0A20_11 = 0u, s0A20_12 = 0u, s0A20_13 = 0u, s0A20_14 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr18 = _mm_loadu_ps(vu.m_state.vf[18]); __m128 vn18 = _mm_load_ps(ctx.norm[18]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr31 = _mm_loadu_ps(vu.m_state.vf[31]); __m128 vn31 = _mm_load_ps(ctx.norm[31]);
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi5 = vu.m_state.vi[5];
        int32_t vi8 = vu.m_state.vi[8];
        // pc_0A20
        s0A20_0 = cyc;
        {
        }
        ++cyc;
        // pc_0A28
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); r = rmax(r, vu.m_vfReady[21][3]); r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_vfReady[31][1]); r = rmax(r, vu.m_vfReady[31][2]); r = rmax(r, vu.m_vfReady[31][3]); r = rmax(r, vu.m_viReady[8]); cyc = r; }
        s0A20_1 = cyc;
        const int32_t bk0A20_1 = vi8;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Add>(vu, ctx, cyc, 0xFu, vn31, vn21, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn17 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0A30
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); r = rmax(r, vu.m_vfReady[22][3]); r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_vfReady[31][1]); r = rmax(r, vu.m_vfReady[31][2]); r = rmax(r, vu.m_vfReady[31][3]); cyc = r; }
        s0A20_2 = cyc;
        const int32_t bk0A20_2 = vi8;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Add>(vu, ctx, cyc, 0xFu, vn31, vn22, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn18 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[22], lv); vn22 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0A38
        s0A20_3 = cyc;
        const int32_t bk0A20_3 = vi8;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Add>(vu, ctx, cyc, 0xFu, vn31, vn23, _mm_setzero_ps(), un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vn19 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0A40
        s0A20_4 = cyc;
        {
        }
        ++cyc;
        // pc_0A48
        s0A20_5 = cyc;
        {
            clipOp(vu, ctx, cyc, vn17, vn17);
        }
        ++cyc;
        // pc_0A50
        s0A20_6 = cyc;
        {
            clipOp(vu, ctx, cyc, _mm_loadu_ps(vu.m_state.vf[21]), _mm_loadu_ps(vu.m_state.vf[21]));
        }
        ++cyc;
        // pc_0A58
        s0A20_7 = cyc;
        {
        }
        ++cyc;
        // pc_0A60
        s0A20_8 = cyc;
        {
        }
        ++cyc;
        // pc_0A68
        s0A20_9 = cyc;
        {
        }
        ++cyc;
        // pc_0A70
        s0A20_10 = cyc;
        {
            commitClip(vu, ctx, cyc); vi1 = static_cast<int16_t>(vu.m_state.clip & 0x0FFFu);
        }
        ++cyc;
        // pc_0A78
        s0A20_11 = cyc;
        const int32_t bk0A20_11 = vi4;
        {
            vi4 = static_cast<int16_t>(vi1 & vi5);
        }
        ++cyc;
        // pc_0A80
        s0A20_12 = cyc;
        {
        }
        ++cyc;
        // pc_0A88
        s0A20_13 = cyc;
        {
            tk = static_cast<int16_t>(0) == static_cast<int16_t>(vi4);
        }
        ++cyc;
        s0A20_14 = cyc;
        {
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[17], vn17); _mm_store_ps(ctx.norm[17], vn17);
        _mm_storeu_ps(vu.m_state.vf[18], vn18); _mm_store_ps(ctx.norm[18], vn18);
        _mm_storeu_ps(vu.m_state.vf[19], vn19); _mm_store_ps(ctx.norm[19], vn19);
 _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[22], vn22);
 _mm_store_ps(ctx.norm[23], vn23);
        vu.m_state.vi[1] = vi1;
        vu.m_state.vi[4] = vi4;
        vu.m_state.vi[8] = vi8;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0B08;
        goto seg_0A98;
    }
seg_0A28:
        if (cyc + 17u > budget) goto pc_0A28;
    {
        uint64_t s0A28_0 = 0u, s0A28_1 = 0u, s0A28_2 = 0u, s0A28_3 = 0u, s0A28_4 = 0u, s0A28_5 = 0u, s0A28_6 = 0u, s0A28_7 = 0u, s0A28_8 = 0u, s0A28_9 = 0u, s0A28_10 = 0u, s0A28_11 = 0u, s0A28_12 = 0u, s0A28_13 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr18 = _mm_loadu_ps(vu.m_state.vf[18]); __m128 vn18 = _mm_load_ps(ctx.norm[18]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr31 = _mm_loadu_ps(vu.m_state.vf[31]); __m128 vn31 = _mm_load_ps(ctx.norm[31]);
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi5 = vu.m_state.vi[5];
        int32_t vi8 = vu.m_state.vi[8];
        // pc_0A28
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); r = rmax(r, vu.m_vfReady[21][3]); r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_vfReady[31][1]); r = rmax(r, vu.m_vfReady[31][2]); r = rmax(r, vu.m_vfReady[31][3]); r = rmax(r, vu.m_viReady[8]); cyc = r; }
        s0A28_0 = cyc;
        const int32_t bk0A28_0 = vi8;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Add>(vu, ctx, cyc, 0xFu, vn31, vn21, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn17 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0A30
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); r = rmax(r, vu.m_vfReady[22][3]); r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_vfReady[31][1]); r = rmax(r, vu.m_vfReady[31][2]); r = rmax(r, vu.m_vfReady[31][3]); cyc = r; }
        s0A28_1 = cyc;
        const int32_t bk0A28_1 = vi8;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Add>(vu, ctx, cyc, 0xFu, vn31, vn22, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn18 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[22], lv); vn22 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0A38
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_vfReady[23][3]); r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_vfReady[31][1]); r = rmax(r, vu.m_vfReady[31][2]); r = rmax(r, vu.m_vfReady[31][3]); cyc = r; }
        s0A28_2 = cyc;
        const int32_t bk0A28_2 = vi8;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Add>(vu, ctx, cyc, 0xFu, vn31, vn23, _mm_setzero_ps(), un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vn19 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi8, 0)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }vi8 = static_cast<int16_t>(vi8 + 1);
        }
        ++cyc;
        // pc_0A40
        s0A28_3 = cyc;
        {
        }
        ++cyc;
        // pc_0A48
        s0A28_4 = cyc;
        {
            clipOp(vu, ctx, cyc, vn17, vn17);
        }
        ++cyc;
        // pc_0A50
        s0A28_5 = cyc;
        {
            clipOp(vu, ctx, cyc, _mm_loadu_ps(vu.m_state.vf[21]), _mm_loadu_ps(vu.m_state.vf[21]));
        }
        ++cyc;
        // pc_0A58
        s0A28_6 = cyc;
        {
        }
        ++cyc;
        // pc_0A60
        s0A28_7 = cyc;
        {
        }
        ++cyc;
        // pc_0A68
        s0A28_8 = cyc;
        {
        }
        ++cyc;
        // pc_0A70
        s0A28_9 = cyc;
        {
            commitClip(vu, ctx, cyc); vi1 = static_cast<int16_t>(vu.m_state.clip & 0x0FFFu);
        }
        ++cyc;
        // pc_0A78
        s0A28_10 = cyc;
        const int32_t bk0A28_10 = vi4;
        {
            vi4 = static_cast<int16_t>(vi1 & vi5);
        }
        ++cyc;
        // pc_0A80
        s0A28_11 = cyc;
        {
        }
        ++cyc;
        // pc_0A88
        s0A28_12 = cyc;
        {
            tk = static_cast<int16_t>(0) == static_cast<int16_t>(vi4);
        }
        ++cyc;
        s0A28_13 = cyc;
        {
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[17], vn17); _mm_store_ps(ctx.norm[17], vn17);
        _mm_storeu_ps(vu.m_state.vf[18], vn18); _mm_store_ps(ctx.norm[18], vn18);
        _mm_storeu_ps(vu.m_state.vf[19], vn19); _mm_store_ps(ctx.norm[19], vn19);
 _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[22], vn22);
 _mm_store_ps(ctx.norm[23], vn23);
        vu.m_state.vi[1] = vi1;
        vu.m_state.vi[4] = vi4;
        vu.m_state.vi[8] = vi8;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0B08;
        goto seg_0A98;
    }
seg_0A90:
        if (cyc + 8u > budget) goto pc_0A90;
    {
        uint64_t s0A90_0 = 0u, s0A90_1 = 0u, s0A90_2 = 0u, s0A90_3 = 0u, s0A90_4 = 0u;
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi6 = vu.m_state.vi[6];
        // pc_0A90
        s0A90_0 = cyc;
        {
        }
        ++cyc;
        // pc_0A98
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); r = rmax(r, vu.m_viReady[6]); cyc = r; }
        s0A90_1 = cyc;
        const int32_t bk0A90_1 = vi4;
        {
            vi4 = static_cast<int16_t>(vi1 & vi6);
        }
        ++cyc;
        // pc_0AA0
        s0A90_2 = cyc;
        {
        }
        ++cyc;
        // pc_0AA8
        s0A90_3 = cyc;
        {
            tk = static_cast<int16_t>(0) == static_cast<int16_t>(vi4);
        }
        ++cyc;
        s0A90_4 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[4] = vi4;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0AC8;
        goto seg_0AB8;
    }
seg_0A98:
        if (cyc + 7u > budget) goto pc_0A98;
    {
        uint64_t s0A98_0 = 0u, s0A98_1 = 0u, s0A98_2 = 0u, s0A98_3 = 0u;
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi6 = vu.m_state.vi[6];
        // pc_0A98
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); r = rmax(r, vu.m_viReady[6]); cyc = r; }
        s0A98_0 = cyc;
        const int32_t bk0A98_0 = vi4;
        {
            vi4 = static_cast<int16_t>(vi1 & vi6);
        }
        ++cyc;
        // pc_0AA0
        s0A98_1 = cyc;
        {
        }
        ++cyc;
        // pc_0AA8
        s0A98_2 = cyc;
        {
            tk = static_cast<int16_t>(0) == static_cast<int16_t>(vi4);
        }
        ++cyc;
        s0A98_3 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[4] = vi4;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0AC8;
        goto seg_0AB8;
    }
seg_0AB0:
        if (cyc + 6u > budget) goto pc_0AB0;
    {
        uint64_t s0AB0_0 = 0u, s0AB0_1 = 0u, s0AB0_2 = 0u;
        // pc_0AB0
        s0AB0_0 = cyc;
        {
        }
        ++cyc;
        // pc_0AB8
        s0AB0_1 = cyc;
        {
        }
        ++cyc;
        s0AB0_2 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        goto seg_0BA0;
    }
seg_0AB8:
        if (cyc + 5u > budget) goto pc_0AB8;
    {
        uint64_t s0AB8_0 = 0u, s0AB8_1 = 0u;
        // pc_0AB8
        s0AB8_0 = cyc;
        {
        }
        ++cyc;
        s0AB8_1 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        goto seg_0BA0;
    }
seg_0AC0:
        if (cyc + 6u > budget) goto pc_0AC0;
    {
        uint64_t s0AC0_0 = 0u, s0AC0_1 = 0u, s0AC0_2 = 0u;
        int32_t vi1 = vu.m_state.vi[1];
        // pc_0AC0
        s0AC0_0 = cyc;
        {
        }
        ++cyc;
        // pc_0AC8
        s0AC0_1 = cyc;
        {
            vi1 = static_cast<int16_t>(347);
        }
        ++cyc;
        s0AC0_2 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[1] = vi1;
        vu.m_viReady[1] = s0AC0_1 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0BB0;
    }
seg_0AC8:
        if (cyc + 5u > budget) goto pc_0AC8;
    {
        uint64_t s0AC8_0 = 0u, s0AC8_1 = 0u;
        int32_t vi1 = vu.m_state.vi[1];
        // pc_0AC8
        s0AC8_0 = cyc;
        {
            vi1 = static_cast<int16_t>(347);
        }
        ++cyc;
        s0AC8_1 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[1] = vi1;
        vu.m_viReady[1] = s0AC8_0 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0BB0;
    }
seg_0AD0:
        if (cyc + 10u > budget) goto pc_0AD0;
    {
        uint64_t s0AD0_0 = 0u, s0AD0_1 = 0u, s0AD0_2 = 0u, s0AD0_3 = 0u, s0AD0_4 = 0u, s0AD0_5 = 0u, s0AD0_6 = 0u;
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0AD0
        s0AD0_0 = cyc;
        {
        }
        ++cyc;
        // pc_0AD8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_vfReady[25][3]); r = rmax(r, vu.m_viReady[9]); cyc = r; }
        s0AD0_1 = cyc;
        const int32_t bk0AD0_1 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr25, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0AE0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); cyc = r; }
        s0AD0_2 = cyc;
        const int32_t bk0AD0_2 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr26, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0AE8
        s0AD0_3 = cyc;
        const int32_t bk0AD0_3 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr27, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0AF0
        s0AD0_4 = cyc;
        const int32_t bk0AD0_4 = vi11;
        {
            vi11 = static_cast<int16_t>(vi11 + 1);
        }
        ++cyc;
        // pc_0AF8
        s0AD0_5 = cyc;
        {
        }
        ++cyc;
        s0AD0_6 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[11] = vi11;
        vu.m_viReady[11] = s0AD0_4 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0BA0;
    }
seg_0AD8:
        if (cyc + 9u > budget) goto pc_0AD8;
    {
        uint64_t s0AD8_0 = 0u, s0AD8_1 = 0u, s0AD8_2 = 0u, s0AD8_3 = 0u, s0AD8_4 = 0u, s0AD8_5 = 0u;
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0AD8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_vfReady[25][3]); r = rmax(r, vu.m_viReady[9]); cyc = r; }
        s0AD8_0 = cyc;
        const int32_t bk0AD8_0 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr25, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0AE0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); cyc = r; }
        s0AD8_1 = cyc;
        const int32_t bk0AD8_1 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr26, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0AE8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); cyc = r; }
        s0AD8_2 = cyc;
        const int32_t bk0AD8_2 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr27, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0AF0
        s0AD8_3 = cyc;
        const int32_t bk0AD8_3 = vi11;
        {
            vi11 = static_cast<int16_t>(vi11 + 1);
        }
        ++cyc;
        // pc_0AF8
        s0AD8_4 = cyc;
        {
        }
        ++cyc;
        s0AD8_5 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[11] = vi11;
        vu.m_viReady[11] = s0AD8_3 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0BA0;
    }
seg_0B00:
        if (cyc + 8u > budget) goto pc_0B00;
    {
        uint64_t s0B00_0 = 0u, s0B00_1 = 0u, s0B00_2 = 0u, s0B00_3 = 0u, s0B00_4 = 0u;
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi6 = vu.m_state.vi[6];
        // pc_0B00
        s0B00_0 = cyc;
        {
        }
        ++cyc;
        // pc_0B08
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); r = rmax(r, vu.m_viReady[6]); cyc = r; }
        s0B00_1 = cyc;
        const int32_t bk0B00_1 = vi4;
        {
            vi4 = static_cast<int16_t>(vi1 & vi6);
        }
        ++cyc;
        // pc_0B10
        s0B00_2 = cyc;
        {
        }
        ++cyc;
        // pc_0B18
        s0B00_3 = cyc;
        {
            tk = static_cast<int16_t>(0) == static_cast<int16_t>(vi4);
        }
        ++cyc;
        s0B00_4 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[4] = vi4;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0B80;
        goto seg_0B28;
    }
seg_0B08:
        if (cyc + 7u > budget) goto pc_0B08;
    {
        uint64_t s0B08_0 = 0u, s0B08_1 = 0u, s0B08_2 = 0u, s0B08_3 = 0u;
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi6 = vu.m_state.vi[6];
        // pc_0B08
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); r = rmax(r, vu.m_viReady[6]); cyc = r; }
        s0B08_0 = cyc;
        const int32_t bk0B08_0 = vi4;
        {
            vi4 = static_cast<int16_t>(vi1 & vi6);
        }
        ++cyc;
        // pc_0B10
        s0B08_1 = cyc;
        {
        }
        ++cyc;
        // pc_0B18
        s0B08_2 = cyc;
        {
            tk = static_cast<int16_t>(0) == static_cast<int16_t>(vi4);
        }
        ++cyc;
        s0B08_3 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[4] = vi4;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0B80;
        goto seg_0B28;
    }
seg_0B20:
        if (cyc + 6u > budget) goto pc_0B20;
    {
        uint64_t s0B20_0 = 0u, s0B20_1 = 0u, s0B20_2 = 0u;
        int32_t vi1 = vu.m_state.vi[1];
        // pc_0B20
        s0B20_0 = cyc;
        {
        }
        ++cyc;
        // pc_0B28
        s0B20_1 = cyc;
        {
            vi1 = static_cast<int16_t>(359);
        }
        ++cyc;
        s0B20_2 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[1] = vi1;
        vu.m_viReady[1] = s0B20_1 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0BB0;
    }
seg_0B28:
        if (cyc + 5u > budget) goto pc_0B28;
    {
        uint64_t s0B28_0 = 0u, s0B28_1 = 0u;
        int32_t vi1 = vu.m_state.vi[1];
        // pc_0B28
        s0B28_0 = cyc;
        {
            vi1 = static_cast<int16_t>(359);
        }
        ++cyc;
        s0B28_1 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[1] = vi1;
        vu.m_viReady[1] = s0B28_0 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0BB0;
    }
seg_0B30:
        if (cyc + 13u > budget) goto pc_0B30;
    {
        uint64_t s0B30_0 = 0u, s0B30_1 = 0u, s0B30_2 = 0u, s0B30_3 = 0u, s0B30_4 = 0u, s0B30_5 = 0u, s0B30_6 = 0u, s0B30_7 = 0u, s0B30_8 = 0u, s0B30_9 = 0u;
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr18 = _mm_loadu_ps(vu.m_state.vf[18]); __m128 vn18 = _mm_load_ps(ctx.norm[18]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0B30
        s0B30_0 = cyc;
        {
        }
        ++cyc;
        // pc_0B38
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); r = rmax(r, vu.m_viReady[9]); cyc = r; }
        s0B30_1 = cyc;
        const int32_t bk0B30_1 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr17, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B40
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[18][0]); r = rmax(r, vu.m_vfReady[18][1]); r = rmax(r, vu.m_vfReady[18][2]); r = rmax(r, vu.m_vfReady[18][3]); cyc = r; }
        s0B30_2 = cyc;
        const int32_t bk0B30_2 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr18, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B48
        s0B30_3 = cyc;
        const int32_t bk0B30_3 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr19, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B50
        s0B30_4 = cyc;
        const int32_t bk0B30_4 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr25, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B58
        s0B30_5 = cyc;
        const int32_t bk0B30_5 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr26, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B60
        s0B30_6 = cyc;
        const int32_t bk0B30_6 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr27, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B68
        s0B30_7 = cyc;
        const int32_t bk0B30_7 = vi11;
        {
            vi11 = static_cast<int16_t>(vi11 + 2);
        }
        ++cyc;
        // pc_0B70
        s0B30_8 = cyc;
        {
        }
        ++cyc;
        s0B30_9 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[11] = vi11;
        vu.m_viReady[11] = s0B30_7 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0BA0;
    }
seg_0B38:
        if (cyc + 12u > budget) goto pc_0B38;
    {
        uint64_t s0B38_0 = 0u, s0B38_1 = 0u, s0B38_2 = 0u, s0B38_3 = 0u, s0B38_4 = 0u, s0B38_5 = 0u, s0B38_6 = 0u, s0B38_7 = 0u, s0B38_8 = 0u;
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr18 = _mm_loadu_ps(vu.m_state.vf[18]); __m128 vn18 = _mm_load_ps(ctx.norm[18]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0B38
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); r = rmax(r, vu.m_viReady[9]); cyc = r; }
        s0B38_0 = cyc;
        const int32_t bk0B38_0 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr17, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B40
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[18][0]); r = rmax(r, vu.m_vfReady[18][1]); r = rmax(r, vu.m_vfReady[18][2]); r = rmax(r, vu.m_vfReady[18][3]); cyc = r; }
        s0B38_1 = cyc;
        const int32_t bk0B38_1 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr18, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B48
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[19][0]); r = rmax(r, vu.m_vfReady[19][1]); r = rmax(r, vu.m_vfReady[19][2]); r = rmax(r, vu.m_vfReady[19][3]); cyc = r; }
        s0B38_2 = cyc;
        const int32_t bk0B38_2 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr19, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B50
        s0B38_3 = cyc;
        const int32_t bk0B38_3 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr25, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B58
        s0B38_4 = cyc;
        const int32_t bk0B38_4 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr26, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B60
        s0B38_5 = cyc;
        const int32_t bk0B38_5 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr27, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B68
        s0B38_6 = cyc;
        const int32_t bk0B38_6 = vi11;
        {
            vi11 = static_cast<int16_t>(vi11 + 2);
        }
        ++cyc;
        // pc_0B70
        s0B38_7 = cyc;
        {
        }
        ++cyc;
        s0B38_8 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[11] = vi11;
        vu.m_viReady[11] = s0B38_6 + 1u;
        vu.m_viBranchBackupValid = false;
        goto seg_0BA0;
    }
seg_0B78:
        if (cyc + 10u > budget) goto pc_0B78;
    {
        uint64_t s0B78_0 = 0u, s0B78_1 = 0u, s0B78_2 = 0u, s0B78_3 = 0u, s0B78_4 = 0u, s0B78_5 = 0u, s0B78_6 = 0u;
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr18 = _mm_loadu_ps(vu.m_state.vf[18]); __m128 vn18 = _mm_load_ps(ctx.norm[18]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0B78
        s0B78_0 = cyc;
        {
        }
        ++cyc;
        // pc_0B80
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); r = rmax(r, vu.m_viReady[9]); cyc = r; }
        s0B78_1 = cyc;
        const int32_t bk0B78_1 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr17, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B88
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[18][0]); r = rmax(r, vu.m_vfReady[18][1]); r = rmax(r, vu.m_vfReady[18][2]); r = rmax(r, vu.m_vfReady[18][3]); cyc = r; }
        s0B78_2 = cyc;
        const int32_t bk0B78_2 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr18, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B90
        s0B78_3 = cyc;
        const int32_t bk0B78_3 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr19, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B98
        s0B78_4 = cyc;
        const int32_t bk0B78_4 = vi11;
        {
            vi11 = static_cast<int16_t>(vi11 + 1);
        }
        ++cyc;
        // pc_0BA0
        s0B78_5 = cyc;
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vi2)) * 8u) & 0x3FFFu;
        }
        ++cyc;
        s0B78_6 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[11] = vi11;
        vu.m_viReady[11] = s0B78_4 + 1u;
        vu.m_viBranchBackupValid = false;
        { epc = jt; goto exit_continue; }
    }
seg_0B80:
        if (cyc + 9u > budget) goto pc_0B80;
    {
        uint64_t s0B80_0 = 0u, s0B80_1 = 0u, s0B80_2 = 0u, s0B80_3 = 0u, s0B80_4 = 0u, s0B80_5 = 0u;
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr18 = _mm_loadu_ps(vu.m_state.vf[18]); __m128 vn18 = _mm_load_ps(ctx.norm[18]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0B80
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); r = rmax(r, vu.m_viReady[9]); cyc = r; }
        s0B80_0 = cyc;
        const int32_t bk0B80_0 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr17, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B88
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[18][0]); r = rmax(r, vu.m_vfReady[18][1]); r = rmax(r, vu.m_vfReady[18][2]); r = rmax(r, vu.m_vfReady[18][3]); cyc = r; }
        s0B80_1 = cyc;
        const int32_t bk0B80_1 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr18, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B90
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[19][0]); r = rmax(r, vu.m_vfReady[19][1]); r = rmax(r, vu.m_vfReady[19][2]); r = rmax(r, vu.m_vfReady[19][3]); cyc = r; }
        s0B80_2 = cyc;
        const int32_t bk0B80_2 = vi9;
        {
            stq(vu, ctx, cyc, qaddr(vi9, 0), vr19, 0xFu);vi9 = static_cast<int16_t>(vi9 + 1);
        }
        ++cyc;
        // pc_0B98
        s0B80_3 = cyc;
        const int32_t bk0B80_3 = vi11;
        {
            vi11 = static_cast<int16_t>(vi11 + 1);
        }
        ++cyc;
        // pc_0BA0
        s0B80_4 = cyc;
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vi2)) * 8u) & 0x3FFFu;
        }
        ++cyc;
        s0B80_5 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[11] = vi11;
        vu.m_viReady[11] = s0B80_3 + 1u;
        vu.m_viBranchBackupValid = false;
        { epc = jt; goto exit_continue; }
    }
seg_0BA0:
        if (cyc + 5u > budget) goto pc_0BA0;
    {
        uint64_t s0BA0_0 = 0u, s0BA0_1 = 0u;
        // pc_0BA0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[2]); cyc = r; }
        s0BA0_0 = cyc;
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vu.readBranchVi(2u))) * 8u) & 0x3FFFu;
        }
        ++cyc;
        s0BA0_1 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        { epc = jt; goto exit_continue; }
    }
seg_0BA8:
        if (cyc + 12u > budget) goto pc_0BA8;
    {
        uint64_t s0BA8_0 = 0u, s0BA8_1 = 0u, s0BA8_2 = 0u, s0BA8_3 = 0u, s0BA8_4 = 0u, s0BA8_5 = 0u, s0BA8_6 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi12 = vu.m_state.vi[12];
        // pc_0BA8
        s0BA8_0 = cyc;
        {
        }
        ++cyc;
        // pc_0BB0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][3]); r = rmax(r, vu.m_vfReady[30][0]); cyc = r; }
        s0BA8_1 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0x1u, vn17, bcast<0u>(vn30), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr25 = blendDest(vr25, uv, 0x1u); vn25 = blendDest(vn25, uv, 0x1u); }
        }
        ++cyc;
        // pc_0BB8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[21][3]); r = rmax(r, vu.m_vfReady[30][0]); cyc = r; }
        s0BA8_2 = cyc;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Mul>(vu, ctx, cyc, 0x1u, vn21, bcast<0u>(vn30), _mm_setzero_ps(), un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vr26 = blendDest(vr26, uv, 0x1u); vn26 = blendDest(vn26, uv, 0x1u); }
        }
        ++cyc;
        // pc_0BC0
        s0BA8_3 = cyc;
        const int32_t bk0BA8_3 = vi12;
        {
            vi12 = static_cast<int16_t>(0 + vi7);
        }
        ++cyc;
        // pc_0BC8
        { uint64_t r = cyc; r = rmax(r, s0BA8_1 + 4u); cyc = r; }
        s0BA8_4 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xFu, vn17, bcast<3u>(vn25), _mm_setzero_ps(), un); vn25 = uv; }
        }
        ++cyc;
        // pc_0BD0
        { uint64_t r = cyc; r = rmax(r, s0BA8_2 + 4u); cyc = r; }
        s0BA8_5 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xFu, vn21, bcast<3u>(vn26), _mm_setzero_ps(), un); vn26 = uv; }
        }
        ++cyc;
        // pc_0BD8
        s0BA8_6 = cyc;
        {
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[25], vn25); _mm_store_ps(ctx.norm[25], vn25);
        _mm_storeu_ps(vu.m_state.vf[26], vn26); _mm_store_ps(ctx.norm[26], vn26);
        vu.m_state.vi[12] = vi12;
        setReady4(vu.m_vfReady[25].data(), s0BA8_4 + 4u);
        setReady4(vu.m_vfReady[26].data(), s0BA8_5 + 4u);
        vu.m_viBranchBackupValid = false;
        { epc = 0xBE0u; goto exit_continue; }
    }
seg_0BB0:
        if (cyc + 11u > budget) goto pc_0BB0;
    {
        uint64_t s0BB0_0 = 0u, s0BB0_1 = 0u, s0BB0_2 = 0u, s0BB0_3 = 0u, s0BB0_4 = 0u, s0BB0_5 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi12 = vu.m_state.vi[12];
        // pc_0BB0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][3]); r = rmax(r, vu.m_vfReady[30][0]); cyc = r; }
        s0BB0_0 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0x1u, vn17, bcast<0u>(vn30), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr25 = blendDest(vr25, uv, 0x1u); vn25 = blendDest(vn25, uv, 0x1u); }
        }
        ++cyc;
        // pc_0BB8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[21][3]); r = rmax(r, vu.m_vfReady[30][0]); cyc = r; }
        s0BB0_1 = cyc;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Mul>(vu, ctx, cyc, 0x1u, vn21, bcast<0u>(vn30), _mm_setzero_ps(), un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vr26 = blendDest(vr26, uv, 0x1u); vn26 = blendDest(vn26, uv, 0x1u); }
        }
        ++cyc;
        // pc_0BC0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[7]); cyc = r; }
        s0BB0_2 = cyc;
        const int32_t bk0BB0_2 = vi12;
        {
            vi12 = static_cast<int16_t>(0 + vi7);
        }
        ++cyc;
        // pc_0BC8
        { uint64_t r = cyc; r = rmax(r, s0BB0_0 + 4u); cyc = r; }
        s0BB0_3 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xFu, vn17, bcast<3u>(vn25), _mm_setzero_ps(), un); vn25 = uv; }
        }
        ++cyc;
        // pc_0BD0
        { uint64_t r = cyc; r = rmax(r, s0BB0_1 + 4u); cyc = r; }
        s0BB0_4 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xFu, vn21, bcast<3u>(vn26), _mm_setzero_ps(), un); vn26 = uv; }
        }
        ++cyc;
        // pc_0BD8
        s0BB0_5 = cyc;
        {
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[25], vn25); _mm_store_ps(ctx.norm[25], vn25);
        _mm_storeu_ps(vu.m_state.vf[26], vn26); _mm_store_ps(ctx.norm[26], vn26);
        vu.m_state.vi[12] = vi12;
        setReady4(vu.m_vfReady[25].data(), s0BB0_3 + 4u);
        setReady4(vu.m_vfReady[26].data(), s0BB0_4 + 4u);
        vu.m_viBranchBackupValid = false;
        { epc = 0xBE0u; goto exit_continue; }
    }
exit_budget:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Budget;
exit_continue:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Continue;
}

template <>
VU1InterpreterAccess::StepResult VU1InterpreterAccess::fastBlock<0x5DCE334B68799D95ull, 3u>(VU1Interpreter &vu, Vu1FastCtx &ctx)
{
    uint64_t cyc = ctx.cycle;
    const uint64_t budget = ctx.budget;
    const uint8_t *const mem = ctx.mem;
    uint32_t epc = 0u;
    bool tk = false;
    uint32_t jt = 0u;
    (void)mem;
    switch (vu.m_state.pc)
    {
    case 0xBE0u: goto seg_0BE0;
    case 0xBE8u: goto seg_0BE8;
    case 0xBF0u: goto seg_0BF0;
    case 0xBF8u: goto pc_0BF8;
    case 0xC00u: goto pc_0C00;
    case 0xC08u: goto pc_0C08;
    case 0xC10u: goto pc_0C10;
    case 0xC18u: goto seg_0C18;
    case 0xC20u: goto seg_0C20;
    case 0xC28u: goto pc_0C28;
    case 0xC30u: goto pc_0C30;
    case 0xC38u: goto pc_0C38;
    case 0xC40u: goto pc_0C40;
    case 0xC48u: goto pc_0C48;
    case 0xC50u: goto pc_0C50;
    case 0xC58u: goto pc_0C58;
    case 0xC60u: goto pc_0C60;
    case 0xC68u: goto pc_0C68;
    case 0xC70u: goto pc_0C70;
    case 0xC78u: goto pc_0C78;
    case 0xC80u: goto pc_0C80;
    case 0xC88u: goto pc_0C88;
    case 0xC90u: goto pc_0C90;
    case 0xC98u: goto pc_0C98;
    case 0xCA0u: goto pc_0CA0;
    case 0xCA8u: goto pc_0CA8;
    case 0xCB0u: goto seg_0CB0;
    case 0xCB8u: goto seg_0CB8;
    case 0xCC0u: goto pc_0CC0;
    case 0xCC8u: goto pc_0CC8;
    case 0xCD0u: goto pc_0CD0;
    case 0xCD8u: goto pc_0CD8;
    case 0xCE0u: goto pc_0CE0;
    case 0xCE8u: goto seg_0CE8;
    case 0xCF0u: goto pc_0CF0;
    case 0xCF8u: goto pc_0CF8;
    case 0xD00u: goto pc_0D00;
    case 0xD08u: goto pc_0D08;
    case 0xD10u: goto pc_0D10;
    case 0xD18u: goto pc_0D18;
    case 0xD20u: goto pc_0D20;
    case 0xD28u: goto pc_0D28;
    case 0xD30u: goto pc_0D30;
    case 0xD38u: goto pc_0D38;
    case 0xD40u: goto pc_0D40;
    case 0xD48u: goto pc_0D48;
    case 0xD50u: goto pc_0D50;
    case 0xD58u: goto pc_0D58;
    case 0xD60u: goto pc_0D60;
    case 0xD68u: goto pc_0D68;
    case 0xD70u: goto pc_0D70;
    case 0xD78u: goto pc_0D78;
    case 0xD80u: goto pc_0D80;
    case 0xD88u: goto pc_0D88;
    case 0xD90u: goto pc_0D90;
    case 0xD98u: goto pc_0D98;
    case 0xDA0u: goto pc_0DA0;
    case 0xDA8u: goto pc_0DA8;
    case 0xDB0u: goto pc_0DB0;
    case 0xDB8u: goto pc_0DB8;
    case 0xDC0u: goto pc_0DC0;
    case 0xDC8u: goto pc_0DC8;
    case 0xDD0u: goto pc_0DD0;
    case 0xDD8u: goto pc_0DD8;
    case 0xDE0u: goto pc_0DE0;
    case 0xDE8u: goto pc_0DE8;
    case 0xDF0u: goto pc_0DF0;
    case 0xDF8u: goto pc_0DF8;
    case 0xE00u: goto pc_0E00;
    case 0xE08u: goto pc_0E08;
    case 0xE10u: goto pc_0E10;
    case 0xE18u: goto pc_0E18;
    case 0xE20u: goto pc_0E20;
    case 0xE28u: goto pc_0E28;
    case 0xE30u: goto pc_0E30;
    case 0xE38u: goto pc_0E38;
    case 0xE40u: goto pc_0E40;
    case 0xE48u: goto pc_0E48;
    case 0xE50u: goto pc_0E50;
    case 0xE58u: goto pc_0E58;
    case 0xE60u: goto pc_0E60;
    case 0xE68u: goto pc_0E68;
    case 0xE70u: goto seg_0E70;
    case 0xE78u: goto seg_0E78;
    case 0xE80u: goto pc_0E80;
    case 0xE88u: goto pc_0E88;
    case 0xE90u: goto pc_0E90;
    case 0xE98u: goto pc_0E98;
    case 0xEA0u: goto pc_0EA0;
    case 0xEA8u: goto pc_0EA8;
    case 0xEB0u: goto pc_0EB0;
    case 0xEB8u: goto pc_0EB8;
    case 0xEC0u: goto pc_0EC0;
    case 0xEC8u: goto seg_0EC8;
    case 0xED0u: goto pc_0ED0;
    case 0xED8u: goto pc_0ED8;
    case 0xEE0u: goto pc_0EE0;
    case 0xEE8u: goto pc_0EE8;
    case 0xEF0u: goto pc_0EF0;
    case 0xEF8u: goto pc_0EF8;
    case 0xF00u: goto pc_0F00;
    case 0xF08u: goto pc_0F08;
    case 0xF10u: goto pc_0F10;
    case 0xF18u: goto pc_0F18;
    case 0xF20u: goto pc_0F20;
    case 0xF28u: goto pc_0F28;
    case 0xF30u: goto pc_0F30;
    case 0xF38u: goto pc_0F38;
    case 0xF40u: goto pc_0F40;
    case 0xF48u: goto pc_0F48;
    case 0xF50u: goto pc_0F50;
    case 0xF58u: goto pc_0F58;
    case 0xF60u: goto pc_0F60;
    case 0xF68u: goto pc_0F68;
    case 0xF70u: goto pc_0F70;
    case 0xF78u: goto pc_0F78;
    case 0xF80u: goto pc_0F80;
    case 0xF88u: goto seg_0F88;
    case 0xF90u: goto pc_0F90;
    case 0xF98u: goto seg_0F98;
    case 0xFA0u: goto pc_0FA0;
    case 0xFA8u: goto pc_0FA8;
    case 0xFB0u: goto pc_0FB0;
    case 0xFB8u: goto pc_0FB8;
    case 0xFC0u: goto pc_0FC0;
    case 0xFC8u: goto seg_0FC8;
    case 0xFD0u: goto seg_0FD0;
    case 0xFD8u: goto pc_0FD8;
    default: return StepResult::Fallback;
    }
pc_0BE0:
        if (cyc >= budget) { epc = 0xBE0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[12]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xBE0u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) == static_cast<int16_t>(vu.readBranchVi(12u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xBE8u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xC20u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) goto seg_0C20;
        goto seg_0BF0;
pc_0BE8:
        if (cyc >= budget) { epc = 0xBE8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0BF0;
pc_0BF0:
        if (cyc >= budget) { epc = 0xBF0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_vfReady[25][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xBF0u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 mr = _mm_loadu_ps(vu.m_state.vf[25]); const __m128 mn = nv(ctx, 25u); writeVf(vu, ctx, 25u, _mm_shuffle_ps(mr, mr, _MM_SHUFFLE(0, 3, 2, 1)), _mm_shuffle_ps(mn, mn, _MM_SHUFFLE(0, 3, 2, 1)), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
        }
        ++cyc;
pc_0BF8:
        if (cyc >= budget) { epc = 0xBF8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xBF8u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 mr = _mm_loadu_ps(vu.m_state.vf[26]); const __m128 mn = nv(ctx, 26u); writeVf(vu, ctx, 26u, _mm_shuffle_ps(mr, mr, _MM_SHUFFLE(0, 3, 2, 1)), _mm_shuffle_ps(mn, mn, _MM_SHUFFLE(0, 3, 2, 1)), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][0] = cyc + 4u;
            vu.m_vfReady[26][1] = cyc + 4u;
            vu.m_vfReady[26][2] = cyc + 4u;
            vu.m_vfReady[26][3] = cyc + 4u;
        }
        ++cyc;
pc_0C00:
        if (cyc >= budget) { epc = 0xC00u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[12]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xC00u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[12];
            vu.m_state.vi[12] = static_cast<int16_t>(vu.m_state.vi[12] - 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[12] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 12u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0C08:
        if (cyc >= budget) { epc = 0xC08u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0C10:
        if (cyc >= budget) { epc = 0xC10u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xC18u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xBE0u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0BE0;
pc_0C18:
        if (cyc >= budget) { epc = 0xC18u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0C20;
pc_0C20:
        if (cyc >= budget) { epc = 0xC20u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xC20u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xEu, nv(ctx, 26u), nv(ctx, 25u), _mm_setzero_ps(), un); writeVf(vu, ctx, 27u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
        }
        ++cyc;
pc_0C28:
        if (cyc >= budget) { epc = 0xC28u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0C30:
        if (cyc >= budget) { epc = 0xC30u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0C38:
        if (cyc >= budget) { epc = 0xC38u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0C40:
        if (cyc >= budget) { epc = 0xC40u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[27][0]); if (vu.m_fdiv.valid) r = rmax(r, vu.m_fdiv.readyCycle); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xC40u; goto exit_budget; } } cyc = r; } }
        {
            divOp(vu, ctx, cyc, vu.m_state.vf[25][0], vu.m_state.vf[27][0]);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0C48:
        if (cyc >= budget) { epc = 0xC48u; goto exit_budget; }
        { uint64_t r = cyc; if (vu.m_fdiv.valid) r = rmax(r, vu.m_fdiv.readyCycle); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xC48u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0C50:
        if (cyc >= budget) { epc = 0xC50u; goto exit_budget; }
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0x8u, nv(ctx, 0u), qN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 29u, uv, uv, 0x8u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
        }
        ++cyc;
pc_0C58:
        if (cyc >= budget) { epc = 0xC58u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xC58u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = absN(nv(ctx, 29u)); writeVf(vu, ctx, 29u, uv, uv, 0x8u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
        }
        ++cyc;
pc_0C60:
        if (cyc >= budget) { epc = 0xC60u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); r = rmax(r, vu.m_vfReady[21][3]); r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xC60u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xFu, nv(ctx, 21u), nv(ctx, 17u), _mm_setzero_ps(), un); writeVf(vu, ctx, 25u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
        }
        ++cyc;
pc_0C68:
        if (cyc >= budget) { epc = 0xC68u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[22][0]); r = rmax(r, vu.m_vfReady[22][1]); r = rmax(r, vu.m_vfReady[22][2]); r = rmax(r, vu.m_vfReady[22][3]); r = rmax(r, vu.m_vfReady[18][0]); r = rmax(r, vu.m_vfReady[18][1]); r = rmax(r, vu.m_vfReady[18][2]); r = rmax(r, vu.m_vfReady[18][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xC68u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xFu, nv(ctx, 22u), nv(ctx, 18u), _mm_setzero_ps(), un); writeVf(vu, ctx, 26u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][0] = cyc + 4u;
            vu.m_vfReady[26][1] = cyc + 4u;
            vu.m_vfReady[26][2] = cyc + 4u;
            vu.m_vfReady[26][3] = cyc + 4u;
        }
        ++cyc;
pc_0C70:
        if (cyc >= budget) { epc = 0xC70u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_vfReady[23][3]); r = rmax(r, vu.m_vfReady[19][0]); r = rmax(r, vu.m_vfReady[19][1]); r = rmax(r, vu.m_vfReady[19][2]); r = rmax(r, vu.m_vfReady[19][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xC70u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xFu, nv(ctx, 23u), nv(ctx, 19u), _mm_setzero_ps(), un); writeVf(vu, ctx, 27u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
        }
        ++cyc;
pc_0C78:
        if (cyc >= budget) { epc = 0xC78u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_vfReady[25][3]); r = rmax(r, vu.m_vfReady[29][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xC78u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 25u), nbc(ctx, 29u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 25u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
        }
        ++cyc;
pc_0C80:
        if (cyc >= budget) { epc = 0xC80u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); r = rmax(r, vu.m_vfReady[29][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xC80u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 26u), nbc(ctx, 29u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 26u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][0] = cyc + 4u;
            vu.m_vfReady[26][1] = cyc + 4u;
            vu.m_vfReady[26][2] = cyc + 4u;
            vu.m_vfReady[26][3] = cyc + 4u;
        }
        ++cyc;
pc_0C88:
        if (cyc >= budget) { epc = 0xC88u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_vfReady[29][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xC88u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 27u), nbc(ctx, 29u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 27u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
        }
        ++cyc;
pc_0C90:
        if (cyc >= budget) { epc = 0xC90u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_vfReady[25][3]); r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xC90u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xFu, nv(ctx, 25u), nv(ctx, 17u), _mm_setzero_ps(), un); writeVf(vu, ctx, 25u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
        }
        ++cyc;
pc_0C98:
        if (cyc >= budget) { epc = 0xC98u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); r = rmax(r, vu.m_vfReady[18][0]); r = rmax(r, vu.m_vfReady[18][1]); r = rmax(r, vu.m_vfReady[18][2]); r = rmax(r, vu.m_vfReady[18][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xC98u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xFu, nv(ctx, 26u), nv(ctx, 18u), _mm_setzero_ps(), un); writeVf(vu, ctx, 26u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][0] = cyc + 4u;
            vu.m_vfReady[26][1] = cyc + 4u;
            vu.m_vfReady[26][2] = cyc + 4u;
            vu.m_vfReady[26][3] = cyc + 4u;
        }
        ++cyc;
pc_0CA0:
        if (cyc >= budget) { epc = 0xCA0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_vfReady[19][0]); r = rmax(r, vu.m_vfReady[19][1]); r = rmax(r, vu.m_vfReady[19][2]); r = rmax(r, vu.m_vfReady[19][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xCA0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xFu, nv(ctx, 27u), nv(ctx, 19u), _mm_setzero_ps(), un); writeVf(vu, ctx, 27u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
        }
        ++cyc;
pc_0CA8:
        if (cyc >= budget) { epc = 0xCA8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xCA8u; goto exit_budget; } } cyc = r; } }
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vu.readBranchVi(1u))) * 8u) & 0x3FFFu;
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xCB0u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = jt; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = jt; goto exit_continue; }
pc_0CB0:
        if (cyc >= budget) { epc = 0xCB0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0CB8;
pc_0CB8:
        if (cyc >= budget) { epc = 0xCB8u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[2];
            vu.m_state.vi[2] = static_cast<int16_t>(vu.m_state.vi[0] + 30);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[2] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 2u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0CC0:
        if (cyc >= budget) { epc = 0xCC0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xCC0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[3];
            vu.m_state.vi[3] = static_cast<int16_t>(vu.m_state.vi[0] + vu.m_state.vi[8]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[3] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 3u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0CC8:
        if (cyc >= budget) { epc = 0xCC8u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[11];
            vu.m_state.vi[11] = static_cast<int16_t>(vu.m_state.vi[0] + 32767);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 11u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0CD0:
        if (cyc >= budget) { epc = 0xCD0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xCD0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[11];
            vu.m_state.vi[11] = static_cast<int16_t>(vu.m_state.vi[11] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 11u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0CD8:
        if (cyc >= budget) { epc = 0xCD8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[2]); r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xCD8u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[2], 0), vu.m_state.vi[11], 0x8u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0CE0:
        if (cyc >= budget) { epc = 0xCE0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[2]); if (!xgkickStall(vu, ctx, cyc, r, budget)) { epc = 0xCE0u; goto exit_budget; } }
        {
            xgkickStart(vu, ctx, cyc, vu.m_state.vi[2]);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0CE8;
pc_0CE8:
        if (cyc >= budget) { epc = 0xCE8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xCE8u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[3], 0)); writeVf(vu, ctx, 20u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[20][0] = cyc + 4u;
            vu.m_vfReady[20][1] = cyc + 4u;
            vu.m_vfReady[20][2] = cyc + 4u;
            vu.m_vfReady[20][3] = cyc + 4u;
        }
        ++cyc;
pc_0CF0:
        if (cyc >= budget) { epc = 0xCF0u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 16)); writeVf(vu, ctx, 1u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[1][0] = cyc + 4u;
            vu.m_vfReady[1][1] = cyc + 4u;
            vu.m_vfReady[1][2] = cyc + 4u;
            vu.m_vfReady[1][3] = cyc + 4u;
        }
        ++cyc;
pc_0CF8:
        if (cyc >= budget) { epc = 0xCF8u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 17)); writeVf(vu, ctx, 2u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[2][0] = cyc + 4u;
            vu.m_vfReady[2][1] = cyc + 4u;
            vu.m_vfReady[2][2] = cyc + 4u;
            vu.m_vfReady[2][3] = cyc + 4u;
        }
        ++cyc;
pc_0D00:
        if (cyc >= budget) { epc = 0xD00u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 18)); writeVf(vu, ctx, 3u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[3][0] = cyc + 4u;
            vu.m_vfReady[3][1] = cyc + 4u;
            vu.m_vfReady[3][2] = cyc + 4u;
            vu.m_vfReady[3][3] = cyc + 4u;
        }
        ++cyc;
pc_0D08:
        if (cyc >= budget) { epc = 0xD08u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 19)); writeVf(vu, ctx, 4u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[4][0] = cyc + 4u;
            vu.m_vfReady[4][1] = cyc + 4u;
            vu.m_vfReady[4][2] = cyc + 4u;
            vu.m_vfReady[4][3] = cyc + 4u;
        }
        ++cyc;
pc_0D10:
        if (cyc >= budget) { epc = 0xD10u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[1][0]); r = rmax(r, vu.m_vfReady[1][1]); r = rmax(r, vu.m_vfReady[1][2]); r = rmax(r, vu.m_vfReady[1][3]); r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_viReady[3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xD10u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 1u), nbc(ctx, 20u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[3], 3)); writeVf(vu, ctx, 6u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[6][0] = cyc + 4u;
            vu.m_vfReady[6][1] = cyc + 4u;
            vu.m_vfReady[6][2] = cyc + 4u;
            vu.m_vfReady[6][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0D18:
        if (cyc >= budget) { epc = 0xD18u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[2][0]); r = rmax(r, vu.m_vfReady[2][1]); r = rmax(r, vu.m_vfReady[2][2]); r = rmax(r, vu.m_vfReady[2][3]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_viReady[3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xD18u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 2u), nbc(ctx, 20u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[3], 6)); writeVf(vu, ctx, 5u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[5][0] = cyc + 4u;
            vu.m_vfReady[5][1] = cyc + 4u;
            vu.m_vfReady[5][2] = cyc + 4u;
            vu.m_vfReady[5][3] = cyc + 4u;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0D20:
        if (cyc >= budget) { epc = 0xD20u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[3][0]); r = rmax(r, vu.m_vfReady[3][1]); r = rmax(r, vu.m_vfReady[3][2]); r = rmax(r, vu.m_vfReady[3][3]); r = rmax(r, vu.m_vfReady[20][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xD20u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 3u), nbc(ctx, 20u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0D28:
        if (cyc >= budget) { epc = 0xD28u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[4][0]); r = rmax(r, vu.m_vfReady[4][1]); r = rmax(r, vu.m_vfReady[4][2]); r = rmax(r, vu.m_vfReady[4][3]); r = rmax(r, vu.m_vfReady[20][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xD28u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 4u), nbc(ctx, 20u, 3u), nacc(ctx), un); writeVf(vu, ctx, 25u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
        }
        ++cyc;
pc_0D30:
        if (cyc >= budget) { epc = 0xD30u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[1][0]); r = rmax(r, vu.m_vfReady[1][1]); r = rmax(r, vu.m_vfReady[1][2]); r = rmax(r, vu.m_vfReady[1][3]); r = rmax(r, vu.m_vfReady[6][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xD30u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 1u), nbc(ctx, 6u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0D38:
        if (cyc >= budget) { epc = 0xD38u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[2][0]); r = rmax(r, vu.m_vfReady[2][1]); r = rmax(r, vu.m_vfReady[2][2]); r = rmax(r, vu.m_vfReady[2][3]); r = rmax(r, vu.m_vfReady[6][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xD38u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 2u), nbc(ctx, 6u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0D40:
        if (cyc >= budget) { epc = 0xD40u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[3][0]); r = rmax(r, vu.m_vfReady[3][1]); r = rmax(r, vu.m_vfReady[3][2]); r = rmax(r, vu.m_vfReady[3][3]); r = rmax(r, vu.m_vfReady[6][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xD40u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 3u), nbc(ctx, 6u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0D48:
        if (cyc >= budget) { epc = 0xD48u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[4][0]); r = rmax(r, vu.m_vfReady[4][1]); r = rmax(r, vu.m_vfReady[4][2]); r = rmax(r, vu.m_vfReady[4][3]); r = rmax(r, vu.m_vfReady[6][3]); r = rmax(r, vu.m_vfReady[25][3]); if (vu.m_fdiv.valid) r = rmax(r, vu.m_fdiv.readyCycle); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xD48u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 4u), nbc(ctx, 6u, 3u), nacc(ctx), un); writeVf(vu, ctx, 6u, uv, uv, 0xFu); }
            divOp(vu, ctx, cyc, vu.m_state.vf[0][3], vu.m_state.vf[25][3]);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[6][0] = cyc + 4u;
            vu.m_vfReady[6][1] = cyc + 4u;
            vu.m_vfReady[6][2] = cyc + 4u;
            vu.m_vfReady[6][3] = cyc + 4u;
        }
        ++cyc;
pc_0D50:
        if (cyc >= budget) { epc = 0xD50u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[1][0]); r = rmax(r, vu.m_vfReady[1][1]); r = rmax(r, vu.m_vfReady[1][2]); r = rmax(r, vu.m_vfReady[1][3]); r = rmax(r, vu.m_vfReady[5][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xD50u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 1u), nbc(ctx, 5u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0D58:
        if (cyc >= budget) { epc = 0xD58u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[2][0]); r = rmax(r, vu.m_vfReady[2][1]); r = rmax(r, vu.m_vfReady[2][2]); r = rmax(r, vu.m_vfReady[2][3]); r = rmax(r, vu.m_vfReady[5][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xD58u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 2u), nbc(ctx, 5u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0D60:
        if (cyc >= budget) { epc = 0xD60u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[3][0]); r = rmax(r, vu.m_vfReady[3][1]); r = rmax(r, vu.m_vfReady[3][2]); r = rmax(r, vu.m_vfReady[3][3]); r = rmax(r, vu.m_vfReady[5][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xD60u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 3u), nbc(ctx, 5u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0D68:
        if (cyc >= budget) { epc = 0xD68u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[4][0]); r = rmax(r, vu.m_vfReady[4][1]); r = rmax(r, vu.m_vfReady[4][2]); r = rmax(r, vu.m_vfReady[4][3]); r = rmax(r, vu.m_vfReady[5][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xD68u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 4u), nbc(ctx, 5u, 3u), nacc(ctx), un); writeVf(vu, ctx, 5u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[5][0] = cyc + 4u;
            vu.m_vfReady[5][1] = cyc + 4u;
            vu.m_vfReady[5][2] = cyc + 4u;
            vu.m_vfReady[5][3] = cyc + 4u;
        }
        ++cyc;
pc_0D70:
        if (cyc >= budget) { epc = 0xD70u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0D78:
        if (cyc >= budget) { epc = 0xD78u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0D80:
        if (cyc >= budget) { epc = 0xD80u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_vfReady[25][3]); r = rmax(r, vu.m_vfReady[6][3]); if (vu.m_fdiv.valid) r = rmax(r, vu.m_fdiv.readyCycle); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xD80u; goto exit_budget; } } cyc = r; } }
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 25u), qN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 20u, uv, uv, 0xFu); }
            divOp(vu, ctx, cyc, vu.m_state.vf[0][3], vu.m_state.vf[6][3]);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[20][0] = cyc + 4u;
            vu.m_vfReady[20][1] = cyc + 4u;
            vu.m_vfReady[20][2] = cyc + 4u;
            vu.m_vfReady[20][3] = cyc + 4u;
        }
        ++cyc;
pc_0D88:
        if (cyc >= budget) { epc = 0xD88u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0D90:
        if (cyc >= budget) { epc = 0xD90u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0D98:
        if (cyc >= budget) { epc = 0xD98u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0DA0:
        if (cyc >= budget) { epc = 0xDA0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0DA8:
        if (cyc >= budget) { epc = 0xDA8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0DB0:
        if (cyc >= budget) { epc = 0xDB0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0DB8:
        if (cyc >= budget) { epc = 0xDB8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_vfReady[6][2]); r = rmax(r, vu.m_vfReady[6][3]); r = rmax(r, vu.m_vfReady[5][3]); if (vu.m_fdiv.valid) r = rmax(r, vu.m_fdiv.readyCycle); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xDB8u; goto exit_budget; } } cyc = r; } }
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 6u), qN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 6u, uv, uv, 0xFu); }
            divOp(vu, ctx, cyc, vu.m_state.vf[0][3], vu.m_state.vf[5][3]);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[6][0] = cyc + 4u;
            vu.m_vfReady[6][1] = cyc + 4u;
            vu.m_vfReady[6][2] = cyc + 4u;
            vu.m_vfReady[6][3] = cyc + 4u;
        }
        ++cyc;
pc_0DC0:
        if (cyc >= budget) { epc = 0xDC0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0DC8:
        if (cyc >= budget) { epc = 0xDC8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0DD0:
        if (cyc >= budget) { epc = 0xDD0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0DD8:
        if (cyc >= budget) { epc = 0xDD8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0DE0:
        if (cyc >= budget) { epc = 0xDE0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0DE8:
        if (cyc >= budget) { epc = 0xDE8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0DF0:
        if (cyc >= budget) { epc = 0xDF0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[5][0]); r = rmax(r, vu.m_vfReady[5][1]); r = rmax(r, vu.m_vfReady[5][2]); r = rmax(r, vu.m_vfReady[5][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xDF0u; goto exit_budget; } } cyc = r; } }
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 5u), qN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 5u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[5][0] = cyc + 4u;
            vu.m_vfReady[5][1] = cyc + 4u;
            vu.m_vfReady[5][2] = cyc + 4u;
            vu.m_vfReady[5][3] = cyc + 4u;
        }
        ++cyc;
pc_0DF8:
        if (cyc >= budget) { epc = 0xDF8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0E00:
        if (cyc >= budget) { epc = 0xE00u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0E08:
        if (cyc >= budget) { epc = 0xE08u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_vfReady[6][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xE08u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xEu, nv(ctx, 20u), nv(ctx, 6u), _mm_setzero_ps(), un); writeVf(vu, ctx, 20u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[20][0] = cyc + 4u;
            vu.m_vfReady[20][1] = cyc + 4u;
            vu.m_vfReady[20][2] = cyc + 4u;
        }
        ++cyc;
pc_0E10:
        if (cyc >= budget) { epc = 0xE10u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[5][0]); r = rmax(r, vu.m_vfReady[5][1]); r = rmax(r, vu.m_vfReady[5][2]); r = rmax(r, vu.m_vfReady[6][0]); r = rmax(r, vu.m_vfReady[6][1]); r = rmax(r, vu.m_vfReady[6][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xE10u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xEu, nv(ctx, 5u), nv(ctx, 6u), _mm_setzero_ps(), un); writeVf(vu, ctx, 5u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[5][0] = cyc + 4u;
            vu.m_vfReady[5][1] = cyc + 4u;
            vu.m_vfReady[5][2] = cyc + 4u;
        }
        ++cyc;
pc_0E18:
        if (cyc >= budget) { epc = 0xE18u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0E20:
        if (cyc >= budget) { epc = 0xE20u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0E28:
        if (cyc >= budget) { epc = 0xE28u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0E30:
        if (cyc >= budget) { epc = 0xE30u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[5][0]); r = rmax(r, vu.m_vfReady[5][1]); r = rmax(r, vu.m_vfReady[5][2]); r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xE30u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmula>(vu, ctx, cyc, 0xEu, nv(ctx, 5u), nv(ctx, 20u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
        }
        ++cyc;
pc_0E38:
        if (cyc >= budget) { epc = 0xE38u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[20][0]); r = rmax(r, vu.m_vfReady[20][1]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[5][0]); r = rmax(r, vu.m_vfReady[5][1]); r = rmax(r, vu.m_vfReady[5][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xE38u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmsub>(vu, ctx, cyc, 0xEu, nv(ctx, 20u), nv(ctx, 5u), nacc(ctx), un); writeVf(vu, ctx, 0u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            resetVf0(vu, ctx);
        }
        ++cyc;
pc_0E40:
        if (cyc >= budget) { epc = 0xE40u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0E48:
        if (cyc >= budget) { epc = 0xE48u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0E50:
        if (cyc >= budget) { epc = 0xE50u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0E58:
        if (cyc >= budget) { epc = 0xE58u; goto exit_budget; }
        {
            const int32_t oldVi = vu.m_state.vi[7];
            vu.m_state.vi[7] = static_cast<int16_t>(vu.m_state.vi[0] + 32);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[7] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 7u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0E60:
        if (cyc >= budget) { epc = 0xE60u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[7]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xE60u; goto exit_budget; } } cyc = r; } }
        {
            commitStatus(vu, ctx, cyc); vu.m_state.vi[7] = static_cast<int16_t>(vu.m_state.mac & static_cast<uint32_t>(static_cast<uint16_t>(vu.m_state.vi[7])));
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[7] = cyc + 1u;
        }
        ++cyc;
pc_0E68:
        if (cyc >= budget) { epc = 0xE68u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[7]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xE68u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(7u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xE70u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xF98u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) goto seg_0F98;
        goto seg_0E78;
pc_0E70:
        if (cyc >= budget) { epc = 0xE70u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0E78;
pc_0E78:
        if (cyc >= budget) { epc = 0xE78u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xE78u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[7];
            vu.m_state.vi[7] = static_cast<int16_t>(vu.m_state.vi[2] + 2);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[7] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 7u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0E80:
        if (cyc >= budget) { epc = 0xE80u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xE80u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[11];
            vu.m_state.vi[11] = static_cast<int16_t>(vu.m_state.vi[10] + 32767);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 11u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0E88:
        if (cyc >= budget) { epc = 0xE88u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xE88u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[11];
            vu.m_state.vi[11] = static_cast<int16_t>(vu.m_state.vi[11] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 11u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0E90:
        if (cyc >= budget) { epc = 0xE90u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[2]); r = rmax(r, vu.m_viReady[11]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xE90u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[2], 0), vu.m_state.vi[11], 0x8u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0E98:
        if (cyc >= budget) { epc = 0xE98u; goto exit_budget; }
        {
            { const __m128 mr = _mm_loadu_ps(vu.m_state.vf[0]); const __m128 mn = nv(ctx, 0u); writeVf(vu, ctx, 21u, _mm_shuffle_ps(mr, mr, _MM_SHUFFLE(0, 3, 2, 1)), _mm_shuffle_ps(mn, mn, _MM_SHUFFLE(0, 3, 2, 1)), 0x2u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[21][2] = cyc + 4u;
        }
        ++cyc;
pc_0EA0:
        if (cyc >= budget) { epc = 0xEA0u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 8)); writeVf(vu, ctx, 5u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[5][0] = cyc + 4u;
            vu.m_vfReady[5][1] = cyc + 4u;
            vu.m_vfReady[5][2] = cyc + 4u;
            vu.m_vfReady[5][3] = cyc + 4u;
        }
        ++cyc;
pc_0EA8:
        if (cyc >= budget) { epc = 0xEA8u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 9)); writeVf(vu, ctx, 6u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[6][0] = cyc + 4u;
            vu.m_vfReady[6][1] = cyc + 4u;
            vu.m_vfReady[6][2] = cyc + 4u;
            vu.m_vfReady[6][3] = cyc + 4u;
        }
        ++cyc;
pc_0EB0:
        if (cyc >= budget) { epc = 0xEB0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][3]); if (vu.m_fdiv.valid) r = rmax(r, vu.m_fdiv.readyCycle); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xEB0u; goto exit_budget; } } cyc = r; } }
        {
            divOp(vu, ctx, cyc, vu.m_state.vf[0][3], vu.m_state.vf[25][3]);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0EB8:
        if (cyc >= budget) { epc = 0xEB8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0EC0:
        if (cyc >= budget) { epc = 0xEC0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0EC8;
pc_0EC8:
        if (cyc >= budget) { epc = 0xEC8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xEC8u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[3], 1)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
        }
        ++cyc;
pc_0ED0:
        if (cyc >= budget) { epc = 0xED0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xED0u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[3], 2)); writeVf(vu, ctx, 21u, lv, vnorm(lv), 0xCu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[21][0] = cyc + 4u;
            vu.m_vfReady[21][1] = cyc + 4u;
        }
        ++cyc;
pc_0ED8:
        if (cyc >= budget) { epc = 0xED8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[5][3]); r = rmax(r, vu.m_viReady[3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xED8u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0x1u, nv(ctx, 5u), nv(ctx, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0x1u); }
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[3], 3)); writeVf(vu, ctx, 20u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[20][0] = cyc + 4u;
            vu.m_vfReady[20][1] = cyc + 4u;
            vu.m_vfReady[20][2] = cyc + 4u;
            vu.m_vfReady[20][3] = cyc + 4u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0EE0:
        if (cyc >= budget) { epc = 0xEE0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xEE0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[10];
            vu.m_state.vi[10] = static_cast<int16_t>(vu.m_state.vi[10] + -1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[10] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 10u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0EE8:
        if (cyc >= budget) { epc = 0xEE8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xEE8u; goto exit_budget; } } cyc = r; } }
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, nv(ctx, 25u), qN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 26u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][0] = cyc + 4u;
            vu.m_vfReady[26][1] = cyc + 4u;
            vu.m_vfReady[26][2] = cyc + 4u;
        }
        ++cyc;
pc_0EF0:
        if (cyc >= budget) { epc = 0xEF0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[6][3]); r = rmax(r, vu.m_vfReady[25][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xEF0u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0x1u, nv(ctx, 6u), nv(ctx, 25u), nacc(ctx), un); writeVf(vu, ctx, 26u, uv, uv, 0x1u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][3] = cyc + 4u;
        }
        ++cyc;
pc_0EF8:
        if (cyc >= budget) { epc = 0xEF8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xEF8u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = ftoi<0u>(nv(ctx, 27u)); writeVf(vu, ctx, 29u, uv, vnorm(uv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
            vu.m_vfReady[29][1] = cyc + 4u;
            vu.m_vfReady[29][2] = cyc + 4u;
            vu.m_vfReady[29][3] = cyc + 4u;
        }
        ++cyc;
pc_0F00:
        if (cyc >= budget) { epc = 0xF00u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xF00u; goto exit_budget; } } cyc = r; } }
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xEu, nv(ctx, 21u), qN(vu), _mm_setzero_ps(), un); writeVf(vu, ctx, 28u, uv, uv, 0xEu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[28][0] = cyc + 4u;
            vu.m_vfReady[28][1] = cyc + 4u;
            vu.m_vfReady[28][2] = cyc + 4u;
        }
        ++cyc;
pc_0F08:
        if (cyc >= budget) { epc = 0xF08u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0F10:
        if (cyc >= budget) { epc = 0xF10u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xF10u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = _mm_min_ps(nv(ctx, 26u), iN(vu)); writeVf(vu, ctx, 26u, uv, uv, 0x1u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][3] = cyc + 4u;
        }
        ++cyc;
pc_0F18:
        if (cyc >= budget) { epc = 0xF18u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0F20:
        if (cyc >= budget) { epc = 0xF20u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0F28:
        if (cyc >= budget) { epc = 0xF28u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0F30:
        if (cyc >= budget) { epc = 0xF30u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xF30u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = _mm_max_ps(nv(ctx, 26u), nbc(ctx, 0u, 0u)); writeVf(vu, ctx, 26u, uv, uv, 0x1u); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][3] = cyc + 4u;
        }
        ++cyc;
pc_0F38:
        if (cyc >= budget) { epc = 0xF38u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[1][0]); r = rmax(r, vu.m_vfReady[1][1]); r = rmax(r, vu.m_vfReady[1][2]); r = rmax(r, vu.m_vfReady[1][3]); r = rmax(r, vu.m_vfReady[20][0]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xF38u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, nv(ctx, 1u), nbc(ctx, 20u, 0u), _mm_setzero_ps(), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0F40:
        if (cyc >= budget) { epc = 0xF40u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[2][0]); r = rmax(r, vu.m_vfReady[2][1]); r = rmax(r, vu.m_vfReady[2][2]); r = rmax(r, vu.m_vfReady[2][3]); r = rmax(r, vu.m_vfReady[20][1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xF40u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 2u), nbc(ctx, 20u, 1u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0F48:
        if (cyc >= budget) { epc = 0xF48u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[3][0]); r = rmax(r, vu.m_vfReady[3][1]); r = rmax(r, vu.m_vfReady[3][2]); r = rmax(r, vu.m_vfReady[3][3]); r = rmax(r, vu.m_vfReady[20][2]); r = rmax(r, vu.m_vfReady[29][0]); r = rmax(r, vu.m_vfReady[29][1]); r = rmax(r, vu.m_vfReady[29][2]); r = rmax(r, vu.m_vfReady[29][3]); r = rmax(r, vu.m_viReady[7]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xF48u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 3u), nbc(ctx, 20u, 2u), nacc(ctx), un); writeVf(vu, ctx, 32u, uv, uv, 0xFu); }
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[7], 0), _mm_loadu_ps(vu.m_state.vf[29]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_accReady[0] = cyc + 1u;
            vu.m_accReady[1] = cyc + 1u;
            vu.m_accReady[2] = cyc + 1u;
            vu.m_accReady[3] = cyc + 1u;
        }
        ++cyc;
pc_0F50:
        if (cyc >= budget) { epc = 0xF50u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xF50u; goto exit_budget; } } cyc = r; } }
        {
            { const __m128 uv = ftoi<4u>(nv(ctx, 26u)); writeVf(vu, ctx, 26u, uv, vnorm(uv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][0] = cyc + 4u;
            vu.m_vfReady[26][1] = cyc + 4u;
            vu.m_vfReady[26][2] = cyc + 4u;
            vu.m_vfReady[26][3] = cyc + 4u;
        }
        ++cyc;
pc_0F58:
        if (cyc >= budget) { epc = 0xF58u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[4][0]); r = rmax(r, vu.m_vfReady[4][1]); r = rmax(r, vu.m_vfReady[4][2]); r = rmax(r, vu.m_vfReady[4][3]); r = rmax(r, vu.m_vfReady[20][3]); r = rmax(r, vu.m_vfReady[28][0]); r = rmax(r, vu.m_vfReady[28][1]); r = rmax(r, vu.m_vfReady[28][2]); r = rmax(r, vu.m_vfReady[28][3]); r = rmax(r, vu.m_viReady[7]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xF58u; goto exit_budget; } } cyc = r; } }
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, nv(ctx, 4u), nbc(ctx, 20u, 3u), nacc(ctx), un); writeVf(vu, ctx, 25u, uv, uv, 0xFu); }
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[7], -1), _mm_loadu_ps(vu.m_state.vf[28]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
        }
        ++cyc;
pc_0F60:
        if (cyc >= budget) { epc = 0xF60u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[7]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xF60u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[7];
            vu.m_state.vi[7] = static_cast<int16_t>(vu.m_state.vi[7] + 3);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[7] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 7u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0F68:
        if (cyc >= budget) { epc = 0xF68u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[3]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xF68u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[3];
            vu.m_state.vi[3] = static_cast<int16_t>(vu.m_state.vi[3] + 3);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[3] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 3u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0F70:
        if (cyc >= budget) { epc = 0xF70u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); r = rmax(r, vu.m_viReady[7]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xF70u; goto exit_budget; } } cyc = r; } }
        {
            stq(vu, ctx, cyc, qaddr(vu.m_state.vi[7], -2), _mm_loadu_ps(vu.m_state.vf[26]), 0xFu);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0F78:
        if (cyc >= budget) { epc = 0xF78u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][3]); if (vu.m_fdiv.valid) r = rmax(r, vu.m_fdiv.readyCycle); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xF78u; goto exit_budget; } } cyc = r; } }
        {
            divOp(vu, ctx, cyc, vu.m_state.vf[0][3], vu.m_state.vf[25][3]);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0F80:
        if (cyc >= budget) { epc = 0xF80u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xF80u; goto exit_budget; } } cyc = r; } }
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) != static_cast<int16_t>(vu.readBranchVi(10u));
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xF88u; if (tk) { vu.m_state.branchPending = true; vu.m_state.branchTarget = 0xEC8u; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        if (tk) goto seg_0EC8;
        goto pc_0F90;
pc_0F88:
        if (cyc >= budget) { epc = 0xF88u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0F90:
        if (cyc >= budget) { epc = 0xF90u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[2]); if (!xgkickStall(vu, ctx, cyc, r, budget)) { epc = 0xF90u; goto exit_budget; } }
        {
            xgkickStart(vu, ctx, cyc, vu.m_state.vi[2]);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0F98;
pc_0F98:
        if (cyc >= budget) { epc = 0xF98u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 0)); writeVf(vu, ctx, 1u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[1][0] = cyc + 4u;
            vu.m_vfReady[1][1] = cyc + 4u;
            vu.m_vfReady[1][2] = cyc + 4u;
            vu.m_vfReady[1][3] = cyc + 4u;
        }
        ++cyc;
pc_0FA0:
        if (cyc >= budget) { epc = 0xFA0u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 1)); writeVf(vu, ctx, 2u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[2][0] = cyc + 4u;
            vu.m_vfReady[2][1] = cyc + 4u;
            vu.m_vfReady[2][2] = cyc + 4u;
            vu.m_vfReady[2][3] = cyc + 4u;
        }
        ++cyc;
pc_0FA8:
        if (cyc >= budget) { epc = 0xFA8u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 2)); writeVf(vu, ctx, 3u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[3][0] = cyc + 4u;
            vu.m_vfReady[3][1] = cyc + 4u;
            vu.m_vfReady[3][2] = cyc + 4u;
            vu.m_vfReady[3][3] = cyc + 4u;
        }
        ++cyc;
pc_0FB0:
        if (cyc >= budget) { epc = 0xFB0u; goto exit_budget; }
        {
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[0], 3)); writeVf(vu, ctx, 4u, lv, vnorm(lv), 0xFu); }
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[4][0] = cyc + 4u;
            vu.m_vfReady[4][1] = cyc + 4u;
            vu.m_vfReady[4][2] = cyc + 4u;
            vu.m_vfReady[4][3] = cyc + 4u;
        }
        ++cyc;
pc_0FB8:
        if (cyc >= budget) { epc = 0xFB8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_0FC0:
        if (cyc >= budget) { epc = 0xFC0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xFC0u; goto exit_budget; } } cyc = r; } }
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vu.readBranchVi(1u))) * 8u) & 0x3FFFu;
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0xFC8u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = jt; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = jt; goto exit_continue; }
pc_0FC8:
        if (cyc >= budget) { epc = 0xFC8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_0FD0;
pc_0FD0:
        if (cyc >= budget) { epc = 0xFD0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[5][0]); r = rmax(r, vu.m_vfReady[5][1]); r = rmax(r, vu.m_vfReady[5][2]); r = rmax(r, vu.m_vfReady[5][3]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xFD0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);stq(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), _mm_loadu_ps(vu.m_state.vf[5]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0FD8:
        if (cyc >= budget) { epc = 0xFD8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xFD8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);stq(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), _mm_loadu_ps(vu.m_state.vf[17]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
        { epc = 0xFE0u; goto exit_continue; }
seg_0BE0:
        if (cyc + 5u > budget) goto pc_0BE0;
    {
        uint64_t s0BE0_0 = 0u, s0BE0_1 = 0u;
        // pc_0BE0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[12]); cyc = r; }
        s0BE0_0 = cyc;
        {
            tk = static_cast<int16_t>(vu.readBranchVi(0u)) == static_cast<int16_t>(vu.readBranchVi(12u));
        }
        ++cyc;
        s0BE0_1 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0C20;
        goto seg_0BF0;
    }
seg_0BE8:
        if (cyc + 10u > budget) goto pc_0BE8;
    {
        uint64_t s0BE8_0 = 0u, s0BE8_1 = 0u, s0BE8_2 = 0u, s0BE8_3 = 0u, s0BE8_4 = 0u, s0BE8_5 = 0u, s0BE8_6 = 0u;
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        int32_t vi12 = vu.m_state.vi[12];
        // pc_0BE8
        s0BE8_0 = cyc;
        {
        }
        ++cyc;
        // pc_0BF0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_vfReady[25][3]); cyc = r; }
        s0BE8_1 = cyc;
        {
            { const __m128 mr = vr25; const __m128 mn = vn25; _mm_storeu_ps(vu.m_state.vf[25], _mm_shuffle_ps(mr, mr, _MM_SHUFFLE(0, 3, 2, 1))); vn25 = _mm_shuffle_ps(mn, mn, _MM_SHUFFLE(0, 3, 2, 1)); }
        }
        ++cyc;
        // pc_0BF8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); cyc = r; }
        s0BE8_2 = cyc;
        {
            { const __m128 mr = vr26; const __m128 mn = vn26; _mm_storeu_ps(vu.m_state.vf[26], _mm_shuffle_ps(mr, mr, _MM_SHUFFLE(0, 3, 2, 1))); vn26 = _mm_shuffle_ps(mn, mn, _MM_SHUFFLE(0, 3, 2, 1)); }
        }
        ++cyc;
        // pc_0C00
        s0BE8_3 = cyc;
        const int32_t bk0BE8_3 = vi12;
        {
            vi12 = static_cast<int16_t>(vi12 - 1);
        }
        ++cyc;
        // pc_0C08
        s0BE8_4 = cyc;
        {
        }
        ++cyc;
        // pc_0C10
        s0BE8_5 = cyc;
        {
        }
        ++cyc;
        s0BE8_6 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[25], vn25);
 _mm_store_ps(ctx.norm[26], vn26);
        vu.m_state.vi[12] = vi12;
        vu.m_viBranchBackupValid = false;
        goto seg_0BE0;
    }
seg_0BF0:
        if (cyc + 9u > budget) goto pc_0BF0;
    {
        uint64_t s0BF0_0 = 0u, s0BF0_1 = 0u, s0BF0_2 = 0u, s0BF0_3 = 0u, s0BF0_4 = 0u, s0BF0_5 = 0u;
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        int32_t vi12 = vu.m_state.vi[12];
        // pc_0BF0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_vfReady[25][3]); cyc = r; }
        s0BF0_0 = cyc;
        {
            { const __m128 mr = vr25; const __m128 mn = vn25; _mm_storeu_ps(vu.m_state.vf[25], _mm_shuffle_ps(mr, mr, _MM_SHUFFLE(0, 3, 2, 1))); vn25 = _mm_shuffle_ps(mn, mn, _MM_SHUFFLE(0, 3, 2, 1)); }
        }
        ++cyc;
        // pc_0BF8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); cyc = r; }
        s0BF0_1 = cyc;
        {
            { const __m128 mr = vr26; const __m128 mn = vn26; _mm_storeu_ps(vu.m_state.vf[26], _mm_shuffle_ps(mr, mr, _MM_SHUFFLE(0, 3, 2, 1))); vn26 = _mm_shuffle_ps(mn, mn, _MM_SHUFFLE(0, 3, 2, 1)); }
        }
        ++cyc;
        // pc_0C00
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[12]); cyc = r; }
        s0BF0_2 = cyc;
        const int32_t bk0BF0_2 = vi12;
        {
            vi12 = static_cast<int16_t>(vi12 - 1);
        }
        ++cyc;
        // pc_0C08
        s0BF0_3 = cyc;
        {
        }
        ++cyc;
        // pc_0C10
        s0BF0_4 = cyc;
        {
        }
        ++cyc;
        s0BF0_5 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[25], vn25);
 _mm_store_ps(ctx.norm[26], vn26);
        vu.m_state.vi[12] = vi12;
        vu.m_viBranchBackupValid = false;
        goto seg_0BE0;
    }
seg_0C18:
        if (cyc + 38u > budget) goto pc_0C18;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 5u) goto pc_0C18;
    {
        uint64_t s0C18_0 = 0u, s0C18_1 = 0u, s0C18_2 = 0u, s0C18_3 = 0u, s0C18_4 = 0u, s0C18_5 = 0u, s0C18_6 = 0u, s0C18_7 = 0u, s0C18_8 = 0u, s0C18_9 = 0u, s0C18_10 = 0u, s0C18_11 = 0u, s0C18_12 = 0u, s0C18_13 = 0u, s0C18_14 = 0u, s0C18_15 = 0u, s0C18_16 = 0u, s0C18_17 = 0u, s0C18_18 = 0u, s0C18_19 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr18 = _mm_loadu_ps(vu.m_state.vf[18]); __m128 vn18 = _mm_load_ps(ctx.norm[18]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        int32_t vi1 = vu.m_state.vi[1];
        // pc_0C18
        s0C18_0 = cyc;
        {
        }
        ++cyc;
        // pc_0C20
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); cyc = r; }
        s0C18_1 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Sub>(vu, ctx, cyc, 0xEu, vn26, vn25, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr27 = blendDest(vr27, uv, 0xEu); vn27 = blendDest(vn27, uv, 0xEu); }
        }
        ++cyc;
        // pc_0C28
        s0C18_2 = cyc;
        {
        }
        ++cyc;
        // pc_0C30
        s0C18_3 = cyc;
        {
        }
        ++cyc;
        // pc_0C38
        s0C18_4 = cyc;
        {
        }
        ++cyc;
        // pc_0C40
        s0C18_5 = cyc;
        {
            divOp(vu, ctx, cyc, laneF<0u>(vr25), laneF<0u>(vr27));
        }
        ++cyc;
        // pc_0C48
        { uint64_t r = cyc; r = rmax(r, s0C18_5 + 7u); cyc = r; }
        s0C18_6 = cyc;
        {
        }
        ++cyc;
        // pc_0C50
        s0C18_7 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmacV<FK::Add>(vu, ctx, cyc, 0x8u, kVf0(), qN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr29 = blendDest(vr29, uv, 0x8u); vn29 = blendDest(vn29, uv, 0x8u); }
        }
        ++cyc;
        // pc_0C58
        { uint64_t r = cyc; r = rmax(r, s0C18_7 + 4u); cyc = r; }
        s0C18_8 = cyc;
        {
            { const __m128 uv = absN(vn29); vr29 = blendDest(vr29, uv, 0x8u); vn29 = blendDest(vn29, uv, 0x8u); }
        }
        ++cyc;
        // pc_0C60
        s0C18_9 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Sub>(vu, ctx, cyc, 0xFu, vn21, vn17, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn25 = uv; }
        }
        ++cyc;
        // pc_0C68
        s0C18_10 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Sub>(vu, ctx, cyc, 0xFu, vn22, vn18, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn26 = uv; }
        }
        ++cyc;
        // pc_0C70
        s0C18_11 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Sub>(vu, ctx, cyc, 0xFu, vn23, vn19, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn27 = uv; }
        }
        ++cyc;
        // pc_0C78
        { uint64_t r = cyc; r = rmax(r, s0C18_9 + 4u); r = rmax(r, s0C18_9 + 4u); r = rmax(r, s0C18_9 + 4u); r = rmax(r, s0C18_9 + 4u); cyc = r; }
        s0C18_12 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn25, bcast<0u>(vn29), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn25 = uv; }
        }
        ++cyc;
        // pc_0C80
        { uint64_t r = cyc; r = rmax(r, s0C18_10 + 4u); r = rmax(r, s0C18_10 + 4u); r = rmax(r, s0C18_10 + 4u); r = rmax(r, s0C18_10 + 4u); cyc = r; }
        s0C18_13 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn26, bcast<0u>(vn29), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn26 = uv; }
        }
        ++cyc;
        // pc_0C88
        { uint64_t r = cyc; r = rmax(r, s0C18_11 + 4u); r = rmax(r, s0C18_11 + 4u); r = rmax(r, s0C18_11 + 4u); r = rmax(r, s0C18_11 + 4u); cyc = r; }
        s0C18_14 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn27, bcast<0u>(vn29), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn27 = uv; }
        }
        ++cyc;
        // pc_0C90
        { uint64_t r = cyc; r = rmax(r, s0C18_12 + 4u); r = rmax(r, s0C18_12 + 4u); r = rmax(r, s0C18_12 + 4u); r = rmax(r, s0C18_12 + 4u); cyc = r; }
        s0C18_15 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Add>(vu, ctx, cyc, 0xFu, vn25, vn17, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn25 = uv; }
        }
        ++cyc;
        // pc_0C98
        { uint64_t r = cyc; r = rmax(r, s0C18_13 + 4u); r = rmax(r, s0C18_13 + 4u); r = rmax(r, s0C18_13 + 4u); r = rmax(r, s0C18_13 + 4u); cyc = r; }
        s0C18_16 = cyc;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Add>(vu, ctx, cyc, 0xFu, vn26, vn18, _mm_setzero_ps(), un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vn26 = uv; }
        }
        ++cyc;
        // pc_0CA0
        { uint64_t r = cyc; r = rmax(r, s0C18_14 + 4u); r = rmax(r, s0C18_14 + 4u); r = rmax(r, s0C18_14 + 4u); r = rmax(r, s0C18_14 + 4u); cyc = r; }
        s0C18_17 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xFu, vn27, vn19, _mm_setzero_ps(), un); vn27 = uv; }
        }
        ++cyc;
        // pc_0CA8
        s0C18_18 = cyc;
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vi1)) * 8u) & 0x3FFFu;
        }
        ++cyc;
        s0C18_19 = cyc;
        {
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[25], vn25); _mm_store_ps(ctx.norm[25], vn25);
        _mm_storeu_ps(vu.m_state.vf[26], vn26); _mm_store_ps(ctx.norm[26], vn26);
        _mm_storeu_ps(vu.m_state.vf[27], vn27); _mm_store_ps(ctx.norm[27], vn27);
        _mm_storeu_ps(vu.m_state.vf[29], vr29); _mm_store_ps(ctx.norm[29], vn29);
        setReady4(vu.m_vfReady[27].data(), s0C18_17 + 4u);
        vu.m_viBranchBackupValid = false;
        { epc = jt; goto exit_continue; }
    }
seg_0C20:
        if (cyc + 37u > budget) goto pc_0C20;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 4u) goto pc_0C20;
    {
        uint64_t s0C20_0 = 0u, s0C20_1 = 0u, s0C20_2 = 0u, s0C20_3 = 0u, s0C20_4 = 0u, s0C20_5 = 0u, s0C20_6 = 0u, s0C20_7 = 0u, s0C20_8 = 0u, s0C20_9 = 0u, s0C20_10 = 0u, s0C20_11 = 0u, s0C20_12 = 0u, s0C20_13 = 0u, s0C20_14 = 0u, s0C20_15 = 0u, s0C20_16 = 0u, s0C20_17 = 0u, s0C20_18 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr18 = _mm_loadu_ps(vu.m_state.vf[18]); __m128 vn18 = _mm_load_ps(ctx.norm[18]);
        __m128 vr19 = _mm_loadu_ps(vu.m_state.vf[19]); __m128 vn19 = _mm_load_ps(ctx.norm[19]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr22 = _mm_loadu_ps(vu.m_state.vf[22]); __m128 vn22 = _mm_load_ps(ctx.norm[22]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        int32_t vi1 = vu.m_state.vi[1];
        // pc_0C20
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); cyc = r; }
        s0C20_0 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Sub>(vu, ctx, cyc, 0xEu, vn26, vn25, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr27 = blendDest(vr27, uv, 0xEu); vn27 = blendDest(vn27, uv, 0xEu); }
        }
        ++cyc;
        // pc_0C28
        s0C20_1 = cyc;
        {
        }
        ++cyc;
        // pc_0C30
        s0C20_2 = cyc;
        {
        }
        ++cyc;
        // pc_0C38
        s0C20_3 = cyc;
        {
        }
        ++cyc;
        // pc_0C40
        s0C20_4 = cyc;
        {
            divOp(vu, ctx, cyc, laneF<0u>(vr25), laneF<0u>(vr27));
        }
        ++cyc;
        // pc_0C48
        { uint64_t r = cyc; r = rmax(r, s0C20_4 + 7u); cyc = r; }
        s0C20_5 = cyc;
        {
        }
        ++cyc;
        // pc_0C50
        s0C20_6 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmacV<FK::Add>(vu, ctx, cyc, 0x8u, kVf0(), qN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr29 = blendDest(vr29, uv, 0x8u); vn29 = blendDest(vn29, uv, 0x8u); }
        }
        ++cyc;
        // pc_0C58
        { uint64_t r = cyc; r = rmax(r, s0C20_6 + 4u); cyc = r; }
        s0C20_7 = cyc;
        {
            { const __m128 uv = absN(vn29); vr29 = blendDest(vr29, uv, 0x8u); vn29 = blendDest(vn29, uv, 0x8u); }
        }
        ++cyc;
        // pc_0C60
        s0C20_8 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Sub>(vu, ctx, cyc, 0xFu, vn21, vn17, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn25 = uv; }
        }
        ++cyc;
        // pc_0C68
        s0C20_9 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Sub>(vu, ctx, cyc, 0xFu, vn22, vn18, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn26 = uv; }
        }
        ++cyc;
        // pc_0C70
        s0C20_10 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Sub>(vu, ctx, cyc, 0xFu, vn23, vn19, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn27 = uv; }
        }
        ++cyc;
        // pc_0C78
        { uint64_t r = cyc; r = rmax(r, s0C20_8 + 4u); r = rmax(r, s0C20_8 + 4u); r = rmax(r, s0C20_8 + 4u); r = rmax(r, s0C20_8 + 4u); cyc = r; }
        s0C20_11 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn25, bcast<0u>(vn29), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn25 = uv; }
        }
        ++cyc;
        // pc_0C80
        { uint64_t r = cyc; r = rmax(r, s0C20_9 + 4u); r = rmax(r, s0C20_9 + 4u); r = rmax(r, s0C20_9 + 4u); r = rmax(r, s0C20_9 + 4u); cyc = r; }
        s0C20_12 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn26, bcast<0u>(vn29), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn26 = uv; }
        }
        ++cyc;
        // pc_0C88
        { uint64_t r = cyc; r = rmax(r, s0C20_10 + 4u); r = rmax(r, s0C20_10 + 4u); r = rmax(r, s0C20_10 + 4u); r = rmax(r, s0C20_10 + 4u); cyc = r; }
        s0C20_13 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn27, bcast<0u>(vn29), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn27 = uv; }
        }
        ++cyc;
        // pc_0C90
        { uint64_t r = cyc; r = rmax(r, s0C20_11 + 4u); r = rmax(r, s0C20_11 + 4u); r = rmax(r, s0C20_11 + 4u); r = rmax(r, s0C20_11 + 4u); cyc = r; }
        s0C20_14 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Add>(vu, ctx, cyc, 0xFu, vn25, vn17, _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn25 = uv; }
        }
        ++cyc;
        // pc_0C98
        { uint64_t r = cyc; r = rmax(r, s0C20_12 + 4u); r = rmax(r, s0C20_12 + 4u); r = rmax(r, s0C20_12 + 4u); r = rmax(r, s0C20_12 + 4u); cyc = r; }
        s0C20_15 = cyc;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Add>(vu, ctx, cyc, 0xFu, vn26, vn18, _mm_setzero_ps(), un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vn26 = uv; }
        }
        ++cyc;
        // pc_0CA0
        { uint64_t r = cyc; r = rmax(r, s0C20_13 + 4u); r = rmax(r, s0C20_13 + 4u); r = rmax(r, s0C20_13 + 4u); r = rmax(r, s0C20_13 + 4u); cyc = r; }
        s0C20_16 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Add>(vu, ctx, cyc, 0xFu, vn27, vn19, _mm_setzero_ps(), un); vn27 = uv; }
        }
        ++cyc;
        // pc_0CA8
        s0C20_17 = cyc;
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vi1)) * 8u) & 0x3FFFu;
        }
        ++cyc;
        s0C20_18 = cyc;
        {
        }
        ++cyc;
        _mm_storeu_ps(vu.m_state.vf[25], vn25); _mm_store_ps(ctx.norm[25], vn25);
        _mm_storeu_ps(vu.m_state.vf[26], vn26); _mm_store_ps(ctx.norm[26], vn26);
        _mm_storeu_ps(vu.m_state.vf[27], vn27); _mm_store_ps(ctx.norm[27], vn27);
        _mm_storeu_ps(vu.m_state.vf[29], vr29); _mm_store_ps(ctx.norm[29], vn29);
        setReady4(vu.m_vfReady[27].data(), s0C20_16 + 4u);
        vu.m_viBranchBackupValid = false;
        { epc = jt; goto exit_continue; }
    }
seg_0CB0:
        if (cyc + 9u > budget) goto pc_0CB0;
    {
        uint64_t s0CB0_0 = 0u, s0CB0_1 = 0u, s0CB0_2 = 0u, s0CB0_3 = 0u, s0CB0_4 = 0u, s0CB0_5 = 0u;
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0CB0
        s0CB0_0 = cyc;
        {
        }
        ++cyc;
        // pc_0CB8
        s0CB0_1 = cyc;
        const int32_t bk0CB0_1 = vi2;
        {
            vi2 = static_cast<int16_t>(0 + 30);
        }
        ++cyc;
        // pc_0CC0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); cyc = r; }
        s0CB0_2 = cyc;
        const int32_t bk0CB0_2 = vi3;
        {
            vi3 = static_cast<int16_t>(0 + vi8);
        }
        ++cyc;
        // pc_0CC8
        s0CB0_3 = cyc;
        const int32_t bk0CB0_3 = vi11;
        {
            vi11 = static_cast<int16_t>(0 + 32767);
        }
        ++cyc;
        // pc_0CD0
        s0CB0_4 = cyc;
        const int32_t bk0CB0_4 = vi11;
        {
            vi11 = static_cast<int16_t>(vi11 + 1);
        }
        ++cyc;
        // pc_0CD8
        s0CB0_5 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi2, 0), vi11, 0x8u);
        }
        ++cyc;
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[3] = vi3;
        vu.m_state.vi[11] = vi11;
        vu.m_viReady[11] = s0CB0_4 + 1u;
        vu.m_viBranchBackupValid = false;
        goto pc_0CE0;
    }
seg_0CB8:
        if (cyc + 8u > budget) goto pc_0CB8;
    {
        uint64_t s0CB8_0 = 0u, s0CB8_1 = 0u, s0CB8_2 = 0u, s0CB8_3 = 0u, s0CB8_4 = 0u;
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0CB8
        s0CB8_0 = cyc;
        const int32_t bk0CB8_0 = vi2;
        {
            vi2 = static_cast<int16_t>(0 + 30);
        }
        ++cyc;
        // pc_0CC0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); cyc = r; }
        s0CB8_1 = cyc;
        const int32_t bk0CB8_1 = vi3;
        {
            vi3 = static_cast<int16_t>(0 + vi8);
        }
        ++cyc;
        // pc_0CC8
        s0CB8_2 = cyc;
        const int32_t bk0CB8_2 = vi11;
        {
            vi11 = static_cast<int16_t>(0 + 32767);
        }
        ++cyc;
        // pc_0CD0
        s0CB8_3 = cyc;
        const int32_t bk0CB8_3 = vi11;
        {
            vi11 = static_cast<int16_t>(vi11 + 1);
        }
        ++cyc;
        // pc_0CD8
        s0CB8_4 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi2, 0), vi11, 0x8u);
        }
        ++cyc;
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[3] = vi3;
        vu.m_state.vi[11] = vi11;
        vu.m_viReady[11] = s0CB8_3 + 1u;
        vu.m_viBranchBackupValid = false;
        goto pc_0CE0;
    }
seg_0CE8:
        if (cyc + 53u > budget) goto pc_0CE8;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 12u) goto pc_0CE8;
    {
        uint64_t s0CE8_0 = 0u, s0CE8_1 = 0u, s0CE8_2 = 0u, s0CE8_3 = 0u, s0CE8_4 = 0u, s0CE8_5 = 0u, s0CE8_6 = 0u, s0CE8_7 = 0u, s0CE8_8 = 0u, s0CE8_9 = 0u, s0CE8_10 = 0u, s0CE8_11 = 0u, s0CE8_12 = 0u, s0CE8_13 = 0u, s0CE8_14 = 0u, s0CE8_15 = 0u, s0CE8_16 = 0u, s0CE8_17 = 0u, s0CE8_18 = 0u, s0CE8_19 = 0u, s0CE8_20 = 0u, s0CE8_21 = 0u, s0CE8_22 = 0u, s0CE8_23 = 0u, s0CE8_24 = 0u, s0CE8_25 = 0u, s0CE8_26 = 0u, s0CE8_27 = 0u, s0CE8_28 = 0u, s0CE8_29 = 0u, s0CE8_30 = 0u, s0CE8_31 = 0u, s0CE8_32 = 0u, s0CE8_33 = 0u, s0CE8_34 = 0u, s0CE8_35 = 0u, s0CE8_36 = 0u, s0CE8_37 = 0u, s0CE8_38 = 0u, s0CE8_39 = 0u, s0CE8_40 = 0u, s0CE8_41 = 0u, s0CE8_42 = 0u, s0CE8_43 = 0u, s0CE8_44 = 0u, s0CE8_45 = 0u, s0CE8_46 = 0u, s0CE8_47 = 0u, s0CE8_48 = 0u, s0CE8_49 = 0u;
        __m128 vr1 = _mm_loadu_ps(vu.m_state.vf[1]); __m128 vn1 = _mm_load_ps(ctx.norm[1]);
        __m128 vr2 = _mm_loadu_ps(vu.m_state.vf[2]); __m128 vn2 = _mm_load_ps(ctx.norm[2]);
        __m128 vr3 = _mm_loadu_ps(vu.m_state.vf[3]); __m128 vn3 = _mm_load_ps(ctx.norm[3]);
        __m128 vr4 = _mm_loadu_ps(vu.m_state.vf[4]); __m128 vn4 = _mm_load_ps(ctx.norm[4]);
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi7 = vu.m_state.vi[7];
        // pc_0CE8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[3]); cyc = r; }
        s0CE8_0 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi3, 0)); _mm_storeu_ps(vu.m_state.vf[20], lv); vn20 = vnorm(lv); }
        }
        ++cyc;
        // pc_0CF0
        s0CE8_1 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 16)); _mm_storeu_ps(vu.m_state.vf[1], lv); vn1 = vnorm(lv); }
        }
        ++cyc;
        // pc_0CF8
        s0CE8_2 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 17)); _mm_storeu_ps(vu.m_state.vf[2], lv); vn2 = vnorm(lv); }
        }
        ++cyc;
        // pc_0D00
        s0CE8_3 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 18)); _mm_storeu_ps(vu.m_state.vf[3], lv); vn3 = vnorm(lv); }
        }
        ++cyc;
        // pc_0D08
        s0CE8_4 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 19)); _mm_storeu_ps(vu.m_state.vf[4], lv); vn4 = vnorm(lv); }
        }
        ++cyc;
        // pc_0D10
        s0CE8_5 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn1, bcast<0u>(vn20), _mm_setzero_ps(), un); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi3, 3)); _mm_storeu_ps(vu.m_state.vf[6], lv); vn6 = vnorm(lv); }
        }
        ++cyc;
        // pc_0D18
        s0CE8_6 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn2, bcast<1u>(vn20), vn32, un); vn32 = uv; }
            { const __m128 lv = ldq(mem, qaddr(vi3, 6)); _mm_storeu_ps(vu.m_state.vf[5], lv); vn5 = vnorm(lv); }
        }
        ++cyc;
        // pc_0D20
        s0CE8_7 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn3, bcast<2u>(vn20), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_0D28
        s0CE8_8 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn4, bcast<3u>(vn20), vn32, un); vn25 = uv; }
        }
        ++cyc;
        // pc_0D30
        s0CE8_9 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn1, bcast<0u>(vn6), _mm_setzero_ps(), un); vn32 = uv; }
        }
        ++cyc;
        // pc_0D38
        s0CE8_10 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn2, bcast<1u>(vn6), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_0D40
        s0CE8_11 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn3, bcast<2u>(vn6), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_0D48
        s0CE8_12 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn4, bcast<3u>(vn6), vn32, un); vn6 = uv; }
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vn25));
        }
        ++cyc;
        // pc_0D50
        s0CE8_13 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn1, bcast<0u>(vn5), _mm_setzero_ps(), un); vn32 = uv; }
        }
        ++cyc;
        // pc_0D58
        s0CE8_14 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn2, bcast<1u>(vn5), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_0D60
        s0CE8_15 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn3, bcast<2u>(vn5), vn32, un); vn32 = uv; }
        }
        ++cyc;
        // pc_0D68
        s0CE8_16 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Madd>(vu, ctx, cyc, 0xFu, vn4, bcast<3u>(vn5), vn32, un); vn5 = uv; }
        }
        ++cyc;
        // pc_0D70
        s0CE8_17 = cyc;
        {
        }
        ++cyc;
        // pc_0D78
        s0CE8_18 = cyc;
        {
        }
        ++cyc;
        // pc_0D80
        s0CE8_19 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn25, qN(vu), _mm_setzero_ps(), un); vn20 = uv; }
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vn6));
        }
        ++cyc;
        // pc_0D88
        s0CE8_20 = cyc;
        {
        }
        ++cyc;
        // pc_0D90
        s0CE8_21 = cyc;
        {
        }
        ++cyc;
        // pc_0D98
        s0CE8_22 = cyc;
        {
        }
        ++cyc;
        // pc_0DA0
        s0CE8_23 = cyc;
        {
        }
        ++cyc;
        // pc_0DA8
        s0CE8_24 = cyc;
        {
        }
        ++cyc;
        // pc_0DB0
        s0CE8_25 = cyc;
        {
        }
        ++cyc;
        // pc_0DB8
        s0CE8_26 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn6, qN(vu), _mm_setzero_ps(), un); vn6 = uv; }
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vn5));
        }
        ++cyc;
        // pc_0DC0
        s0CE8_27 = cyc;
        {
        }
        ++cyc;
        // pc_0DC8
        s0CE8_28 = cyc;
        {
        }
        ++cyc;
        // pc_0DD0
        s0CE8_29 = cyc;
        {
        }
        ++cyc;
        // pc_0DD8
        s0CE8_30 = cyc;
        {
        }
        ++cyc;
        // pc_0DE0
        s0CE8_31 = cyc;
        {
        }
        ++cyc;
        // pc_0DE8
        s0CE8_32 = cyc;
        {
        }
        ++cyc;
        // pc_0DF0
        s0CE8_33 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmac<FK::Mul>(vu, ctx, cyc, 0xFu, vn5, qN(vu), _mm_setzero_ps(), un); vn5 = uv; }
        }
        ++cyc;
        // pc_0DF8
        s0CE8_34 = cyc;
        {
        }
        ++cyc;
        // pc_0E00
        s0CE8_35 = cyc;
        {
        }
        ++cyc;
        // pc_0E08
        s0CE8_36 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xEu, vn20, vn6, _mm_setzero_ps(), un); vn20 = blendDest(vn20, uv, 0xEu); }
        }
        ++cyc;
        // pc_0E10
        s0CE8_37 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Sub>(vu, ctx, cyc, 0xEu, vn5, vn6, _mm_setzero_ps(), un); vn5 = blendDest(vn5, uv, 0xEu); }
        }
        ++cyc;
        // pc_0E18
        s0CE8_38 = cyc;
        {
        }
        ++cyc;
        // pc_0E20
        s0CE8_39 = cyc;
        {
        }
        ++cyc;
        // pc_0E28
        s0CE8_40 = cyc;
        {
        }
        ++cyc;
        // pc_0E30
        s0CE8_41 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmula>(vu, ctx, cyc, 0xEu, vn5, vn20, _mm_setzero_ps(), un); vn32 = blendDest(vn32, uv, 0xEu); }
        }
        ++cyc;
        // pc_0E38
        s0CE8_42 = cyc;
        {
            { __m128 un; const __m128 uv = fmac<FK::Opmsub>(vu, ctx, cyc, 0xEu, vn20, vn5, vn32, un);  }
        }
        ++cyc;
        // pc_0E40
        s0CE8_43 = cyc;
        {
        }
        ++cyc;
        // pc_0E48
        s0CE8_44 = cyc;
        {
        }
        ++cyc;
        // pc_0E50
        s0CE8_45 = cyc;
        {
        }
        ++cyc;
        // pc_0E58
        s0CE8_46 = cyc;
        const int32_t bk0CE8_46 = vi7;
        {
            vi7 = static_cast<int16_t>(0 + 32);
        }
        ++cyc;
        // pc_0E60
        s0CE8_47 = cyc;
        {
            commitStatus(vu, ctx, cyc); vi7 = static_cast<int16_t>(vu.m_state.mac & static_cast<uint32_t>(static_cast<uint16_t>(vi7)));
        }
        ++cyc;
        // pc_0E68
        s0CE8_48 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi7);
        }
        ++cyc;
        s0CE8_49 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[1], vn1);
 _mm_store_ps(ctx.norm[2], vn2);
 _mm_store_ps(ctx.norm[3], vn3);
 _mm_store_ps(ctx.norm[4], vn4);
        _mm_storeu_ps(vu.m_state.vf[5], vn5); _mm_store_ps(ctx.norm[5], vn5);
        _mm_storeu_ps(vu.m_state.vf[6], vn6); _mm_store_ps(ctx.norm[6], vn6);
        _mm_storeu_ps(vu.m_state.vf[20], vn20); _mm_store_ps(ctx.norm[20], vn20);
        _mm_storeu_ps(vu.m_state.vf[25], vn25); _mm_store_ps(ctx.norm[25], vn25);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[7] = vi7;
        vu.m_viReady[7] = s0CE8_47 + 1u;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0F98;
        goto seg_0E78;
    }
seg_0E70:
        if (cyc + 39u > budget) goto pc_0E70;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 8u) goto pc_0E70;
    {
        uint64_t s0E70_0 = 0u, s0E70_1 = 0u, s0E70_2 = 0u, s0E70_3 = 0u, s0E70_4 = 0u, s0E70_5 = 0u, s0E70_6 = 0u, s0E70_7 = 0u, s0E70_8 = 0u, s0E70_9 = 0u, s0E70_10 = 0u, s0E70_11 = 0u, s0E70_12 = 0u, s0E70_13 = 0u, s0E70_14 = 0u, s0E70_15 = 0u, s0E70_16 = 0u, s0E70_17 = 0u, s0E70_18 = 0u, s0E70_19 = 0u, s0E70_20 = 0u, s0E70_21 = 0u, s0E70_22 = 0u, s0E70_23 = 0u, s0E70_24 = 0u, s0E70_25 = 0u, s0E70_26 = 0u, s0E70_27 = 0u, s0E70_28 = 0u, s0E70_29 = 0u, s0E70_30 = 0u, s0E70_31 = 0u, s0E70_32 = 0u, s0E70_33 = 0u, s0E70_34 = 0u, s0E70_35 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr1 = _mm_loadu_ps(vu.m_state.vf[1]); __m128 vn1 = _mm_load_ps(ctx.norm[1]);
        __m128 vr2 = _mm_loadu_ps(vu.m_state.vf[2]); __m128 vn2 = _mm_load_ps(ctx.norm[2]);
        __m128 vr3 = _mm_loadu_ps(vu.m_state.vf[3]); __m128 vn3 = _mm_load_ps(ctx.norm[3]);
        __m128 vr4 = _mm_loadu_ps(vu.m_state.vf[4]); __m128 vn4 = _mm_load_ps(ctx.norm[4]);
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr28 = _mm_loadu_ps(vu.m_state.vf[28]); __m128 vn28 = _mm_load_ps(ctx.norm[28]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0E70
        s0E70_0 = cyc;
        {
        }
        ++cyc;
        // pc_0E78
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[2]); cyc = r; }
        s0E70_1 = cyc;
        const int32_t bk0E70_1 = vi7;
        {
            vi7 = static_cast<int16_t>(vi2 + 2);
        }
        ++cyc;
        // pc_0E80
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); cyc = r; }
        s0E70_2 = cyc;
        const int32_t bk0E70_2 = vi11;
        {
            vi11 = static_cast<int16_t>(vi10 + 32767);
        }
        ++cyc;
        // pc_0E88
        s0E70_3 = cyc;
        const int32_t bk0E70_3 = vi11;
        {
            vi11 = static_cast<int16_t>(vi11 + 1);
        }
        ++cyc;
        // pc_0E90
        s0E70_4 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi2, 0), vi11, 0x8u);
        }
        ++cyc;
        // pc_0E98
        s0E70_5 = cyc;
        {
            { const __m128 mr = kVf0(); const __m128 mn = kVf0(); vr21 = blendDest(vr21, _mm_shuffle_ps(mr, mr, _MM_SHUFFLE(0, 3, 2, 1)), 0x2u); vn21 = blendDest(vn21, _mm_shuffle_ps(mn, mn, _MM_SHUFFLE(0, 3, 2, 1)), 0x2u); }
        }
        ++cyc;
        // pc_0EA0
        s0E70_6 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 8)); _mm_storeu_ps(vu.m_state.vf[5], lv); vn5 = vnorm(lv); }
        }
        ++cyc;
        // pc_0EA8
        s0E70_7 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 9)); _mm_storeu_ps(vu.m_state.vf[6], lv); vn6 = vnorm(lv); }
        }
        ++cyc;
        // pc_0EB0
        s0E70_8 = cyc;
        {
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vr25));
        }
        ++cyc;
        // pc_0EB8
        s0E70_9 = cyc;
        {
        }
        ++cyc;
        // pc_0EC0
        s0E70_10 = cyc;
        {
        }
        ++cyc;
        // pc_0EC8
        s0E70_11 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi3, 1)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0ED0
        s0E70_12 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi3, 2)); vr21 = blendDest(vr21, lv, 0xCu); vn21 = blendDest(vn21, vnorm(lv), 0xCu); }
        }
        ++cyc;
        // pc_0ED8
        s0E70_13 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0x1u, vn5, kVf0(), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr32 = blendDest(vr32, uv, 0x1u); vn32 = blendDest(vn32, uv, 0x1u); }
            { const __m128 lv = ldq(mem, qaddr(vi3, 3)); _mm_storeu_ps(vu.m_state.vf[20], lv); vn20 = vnorm(lv); }
        }
        ++cyc;
        // pc_0EE0
        s0E70_14 = cyc;
        const int32_t bk0E70_14 = vi10;
        {
            vi10 = static_cast<int16_t>(vi10 + -1);
        }
        ++cyc;
        // pc_0EE8
        s0E70_15 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn25, qN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr26 = blendDest(vr26, uv, 0xEu); vn26 = blendDest(vn26, uv, 0xEu); }
        }
        ++cyc;
        // pc_0EF0
        s0E70_16 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0x1u, vn6, vn25, vn32, un, fAccZ, fAccS, fAccScalar); vr26 = blendDest(vr26, uv, 0x1u); vn26 = blendDest(vn26, uv, 0x1u); }
        }
        ++cyc;
        // pc_0EF8
        s0E70_17 = cyc;
        {
            { const __m128 uv = ftoi<0u>(vn27); _mm_storeu_ps(vu.m_state.vf[29], uv); vn29 = vnorm(uv); }
        }
        ++cyc;
        // pc_0F00
        s0E70_18 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn21, qN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr28 = blendDest(vr28, uv, 0xEu); vn28 = blendDest(vn28, uv, 0xEu); }
        }
        ++cyc;
        // pc_0F08
        s0E70_19 = cyc;
        {
        }
        ++cyc;
        // pc_0F10
        s0E70_20 = cyc;
        {
            { const __m128 uv = _mm_min_ps(vn26, iN(vu)); vr26 = blendDest(vr26, uv, 0x1u); vn26 = blendDest(vn26, uv, 0x1u); }
        }
        ++cyc;
        // pc_0F18
        s0E70_21 = cyc;
        {
        }
        ++cyc;
        // pc_0F20
        s0E70_22 = cyc;
        {
        }
        ++cyc;
        // pc_0F28
        s0E70_23 = cyc;
        {
        }
        ++cyc;
        // pc_0F30
        s0E70_24 = cyc;
        {
            { const __m128 uv = _mm_max_ps(vn26, bcast<0u>(kVf0())); vr26 = blendDest(vr26, uv, 0x1u); vn26 = blendDest(vn26, uv, 0x1u); }
        }
        ++cyc;
        // pc_0F38
        s0E70_25 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn1, bcast<0u>(vn20), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0F40
        s0E70_26 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn2, bcast<1u>(vn20), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0F48
        s0E70_27 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn3, bcast<2u>(vn20), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            stq(vu, ctx, cyc, qaddr(vi7, 0), _mm_loadu_ps(vu.m_state.vf[29]), 0xFu);
        }
        ++cyc;
        // pc_0F50
        s0E70_28 = cyc;
        {
            { const __m128 uv = ftoi<4u>(vn26); _mm_storeu_ps(vu.m_state.vf[26], uv); vn26 = vnorm(uv); }
        }
        ++cyc;
        // pc_0F58
        s0E70_29 = cyc;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Madd>(vu, ctx, cyc, 0xFu, vn4, bcast<3u>(vn20), vn32, un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vn25 = uv; }
            stq(vu, ctx, cyc, qaddr(vi7, -1), vr28, 0xFu);
        }
        ++cyc;
        // pc_0F60
        s0E70_30 = cyc;
        const int32_t bk0E70_30 = vi7;
        {
            vi7 = static_cast<int16_t>(vi7 + 3);
        }
        ++cyc;
        // pc_0F68
        s0E70_31 = cyc;
        const int32_t bk0E70_31 = vi3;
        {
            vi3 = static_cast<int16_t>(vi3 + 3);
        }
        ++cyc;
        // pc_0F70
        s0E70_32 = cyc;
        {
            stq(vu, ctx, cyc, qaddr(vi7, -2), _mm_loadu_ps(vu.m_state.vf[26]), 0xFu);
        }
        ++cyc;
        // pc_0F78
        s0E70_33 = cyc;
        {
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vn25));
        }
        ++cyc;
        // pc_0F80
        s0E70_34 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi10);
        }
        ++cyc;
        s0E70_35 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[5], vn5);
 _mm_store_ps(ctx.norm[6], vn6);
 _mm_store_ps(ctx.norm[20], vn20);
        _mm_storeu_ps(vu.m_state.vf[21], vr21); _mm_store_ps(ctx.norm[21], vn21);
        _mm_storeu_ps(vu.m_state.vf[25], vn25); _mm_store_ps(ctx.norm[25], vn25);
 _mm_store_ps(ctx.norm[26], vn26);
 _mm_store_ps(ctx.norm[27], vn27);
        _mm_storeu_ps(vu.m_state.vf[28], vr28); _mm_store_ps(ctx.norm[28], vn28);
 _mm_store_ps(ctx.norm[29], vn29);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[3] = vi3;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0EC8;
        goto pc_0F90;
    }
seg_0E78:
        if (cyc + 38u > budget) goto pc_0E78;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 7u) goto pc_0E78;
    {
        uint64_t s0E78_0 = 0u, s0E78_1 = 0u, s0E78_2 = 0u, s0E78_3 = 0u, s0E78_4 = 0u, s0E78_5 = 0u, s0E78_6 = 0u, s0E78_7 = 0u, s0E78_8 = 0u, s0E78_9 = 0u, s0E78_10 = 0u, s0E78_11 = 0u, s0E78_12 = 0u, s0E78_13 = 0u, s0E78_14 = 0u, s0E78_15 = 0u, s0E78_16 = 0u, s0E78_17 = 0u, s0E78_18 = 0u, s0E78_19 = 0u, s0E78_20 = 0u, s0E78_21 = 0u, s0E78_22 = 0u, s0E78_23 = 0u, s0E78_24 = 0u, s0E78_25 = 0u, s0E78_26 = 0u, s0E78_27 = 0u, s0E78_28 = 0u, s0E78_29 = 0u, s0E78_30 = 0u, s0E78_31 = 0u, s0E78_32 = 0u, s0E78_33 = 0u, s0E78_34 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr1 = _mm_loadu_ps(vu.m_state.vf[1]); __m128 vn1 = _mm_load_ps(ctx.norm[1]);
        __m128 vr2 = _mm_loadu_ps(vu.m_state.vf[2]); __m128 vn2 = _mm_load_ps(ctx.norm[2]);
        __m128 vr3 = _mm_loadu_ps(vu.m_state.vf[3]); __m128 vn3 = _mm_load_ps(ctx.norm[3]);
        __m128 vr4 = _mm_loadu_ps(vu.m_state.vf[4]); __m128 vn4 = _mm_load_ps(ctx.norm[4]);
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr28 = _mm_loadu_ps(vu.m_state.vf[28]); __m128 vn28 = _mm_load_ps(ctx.norm[28]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        // pc_0E78
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[2]); cyc = r; }
        s0E78_0 = cyc;
        const int32_t bk0E78_0 = vi7;
        {
            vi7 = static_cast<int16_t>(vi2 + 2);
        }
        ++cyc;
        // pc_0E80
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); cyc = r; }
        s0E78_1 = cyc;
        const int32_t bk0E78_1 = vi11;
        {
            vi11 = static_cast<int16_t>(vi10 + 32767);
        }
        ++cyc;
        // pc_0E88
        s0E78_2 = cyc;
        const int32_t bk0E78_2 = vi11;
        {
            vi11 = static_cast<int16_t>(vi11 + 1);
        }
        ++cyc;
        // pc_0E90
        s0E78_3 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi2, 0), vi11, 0x8u);
        }
        ++cyc;
        // pc_0E98
        s0E78_4 = cyc;
        {
            { const __m128 mr = kVf0(); const __m128 mn = kVf0(); vr21 = blendDest(vr21, _mm_shuffle_ps(mr, mr, _MM_SHUFFLE(0, 3, 2, 1)), 0x2u); vn21 = blendDest(vn21, _mm_shuffle_ps(mn, mn, _MM_SHUFFLE(0, 3, 2, 1)), 0x2u); }
        }
        ++cyc;
        // pc_0EA0
        s0E78_5 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 8)); _mm_storeu_ps(vu.m_state.vf[5], lv); vn5 = vnorm(lv); }
        }
        ++cyc;
        // pc_0EA8
        s0E78_6 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 9)); _mm_storeu_ps(vu.m_state.vf[6], lv); vn6 = vnorm(lv); }
        }
        ++cyc;
        // pc_0EB0
        s0E78_7 = cyc;
        {
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vr25));
        }
        ++cyc;
        // pc_0EB8
        s0E78_8 = cyc;
        {
        }
        ++cyc;
        // pc_0EC0
        s0E78_9 = cyc;
        {
        }
        ++cyc;
        // pc_0EC8
        s0E78_10 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi3, 1)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0ED0
        s0E78_11 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi3, 2)); vr21 = blendDest(vr21, lv, 0xCu); vn21 = blendDest(vn21, vnorm(lv), 0xCu); }
        }
        ++cyc;
        // pc_0ED8
        s0E78_12 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0x1u, vn5, kVf0(), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr32 = blendDest(vr32, uv, 0x1u); vn32 = blendDest(vn32, uv, 0x1u); }
            { const __m128 lv = ldq(mem, qaddr(vi3, 3)); _mm_storeu_ps(vu.m_state.vf[20], lv); vn20 = vnorm(lv); }
        }
        ++cyc;
        // pc_0EE0
        s0E78_13 = cyc;
        const int32_t bk0E78_13 = vi10;
        {
            vi10 = static_cast<int16_t>(vi10 + -1);
        }
        ++cyc;
        // pc_0EE8
        s0E78_14 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn25, qN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr26 = blendDest(vr26, uv, 0xEu); vn26 = blendDest(vn26, uv, 0xEu); }
        }
        ++cyc;
        // pc_0EF0
        s0E78_15 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0x1u, vn6, vn25, vn32, un, fAccZ, fAccS, fAccScalar); vr26 = blendDest(vr26, uv, 0x1u); vn26 = blendDest(vn26, uv, 0x1u); }
        }
        ++cyc;
        // pc_0EF8
        s0E78_16 = cyc;
        {
            { const __m128 uv = ftoi<0u>(vn27); _mm_storeu_ps(vu.m_state.vf[29], uv); vn29 = vnorm(uv); }
        }
        ++cyc;
        // pc_0F00
        s0E78_17 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn21, qN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr28 = blendDest(vr28, uv, 0xEu); vn28 = blendDest(vn28, uv, 0xEu); }
        }
        ++cyc;
        // pc_0F08
        s0E78_18 = cyc;
        {
        }
        ++cyc;
        // pc_0F10
        s0E78_19 = cyc;
        {
            { const __m128 uv = _mm_min_ps(vn26, iN(vu)); vr26 = blendDest(vr26, uv, 0x1u); vn26 = blendDest(vn26, uv, 0x1u); }
        }
        ++cyc;
        // pc_0F18
        s0E78_20 = cyc;
        {
        }
        ++cyc;
        // pc_0F20
        s0E78_21 = cyc;
        {
        }
        ++cyc;
        // pc_0F28
        s0E78_22 = cyc;
        {
        }
        ++cyc;
        // pc_0F30
        s0E78_23 = cyc;
        {
            { const __m128 uv = _mm_max_ps(vn26, bcast<0u>(kVf0())); vr26 = blendDest(vr26, uv, 0x1u); vn26 = blendDest(vn26, uv, 0x1u); }
        }
        ++cyc;
        // pc_0F38
        s0E78_24 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn1, bcast<0u>(vn20), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0F40
        s0E78_25 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn2, bcast<1u>(vn20), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0F48
        s0E78_26 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn3, bcast<2u>(vn20), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            stq(vu, ctx, cyc, qaddr(vi7, 0), _mm_loadu_ps(vu.m_state.vf[29]), 0xFu);
        }
        ++cyc;
        // pc_0F50
        s0E78_27 = cyc;
        {
            { const __m128 uv = ftoi<4u>(vn26); _mm_storeu_ps(vu.m_state.vf[26], uv); vn26 = vnorm(uv); }
        }
        ++cyc;
        // pc_0F58
        s0E78_28 = cyc;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Madd>(vu, ctx, cyc, 0xFu, vn4, bcast<3u>(vn20), vn32, un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vn25 = uv; }
            stq(vu, ctx, cyc, qaddr(vi7, -1), vr28, 0xFu);
        }
        ++cyc;
        // pc_0F60
        s0E78_29 = cyc;
        const int32_t bk0E78_29 = vi7;
        {
            vi7 = static_cast<int16_t>(vi7 + 3);
        }
        ++cyc;
        // pc_0F68
        s0E78_30 = cyc;
        const int32_t bk0E78_30 = vi3;
        {
            vi3 = static_cast<int16_t>(vi3 + 3);
        }
        ++cyc;
        // pc_0F70
        s0E78_31 = cyc;
        {
            stq(vu, ctx, cyc, qaddr(vi7, -2), _mm_loadu_ps(vu.m_state.vf[26]), 0xFu);
        }
        ++cyc;
        // pc_0F78
        s0E78_32 = cyc;
        {
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vn25));
        }
        ++cyc;
        // pc_0F80
        s0E78_33 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi10);
        }
        ++cyc;
        s0E78_34 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[5], vn5);
 _mm_store_ps(ctx.norm[6], vn6);
 _mm_store_ps(ctx.norm[20], vn20);
        _mm_storeu_ps(vu.m_state.vf[21], vr21); _mm_store_ps(ctx.norm[21], vn21);
        _mm_storeu_ps(vu.m_state.vf[25], vn25); _mm_store_ps(ctx.norm[25], vn25);
 _mm_store_ps(ctx.norm[26], vn26);
 _mm_store_ps(ctx.norm[27], vn27);
        _mm_storeu_ps(vu.m_state.vf[28], vr28); _mm_store_ps(ctx.norm[28], vn28);
 _mm_store_ps(ctx.norm[29], vn29);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[3] = vi3;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        vu.m_viBranchBackupValid = false;
        if (tk) goto seg_0EC8;
        goto pc_0F90;
    }
seg_0EC8:
        if (cyc + 28u > budget) goto pc_0EC8;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 22u) goto pc_0EC8;
    {
        uint64_t s0EC8_0 = 0u, s0EC8_1 = 0u, s0EC8_2 = 0u, s0EC8_3 = 0u, s0EC8_4 = 0u, s0EC8_5 = 0u, s0EC8_6 = 0u, s0EC8_7 = 0u, s0EC8_8 = 0u, s0EC8_9 = 0u, s0EC8_10 = 0u, s0EC8_11 = 0u, s0EC8_12 = 0u, s0EC8_13 = 0u, s0EC8_14 = 0u, s0EC8_15 = 0u, s0EC8_16 = 0u, s0EC8_17 = 0u, s0EC8_18 = 0u, s0EC8_19 = 0u, s0EC8_20 = 0u, s0EC8_21 = 0u, s0EC8_22 = 0u, s0EC8_23 = 0u, s0EC8_24 = 0u;
        __m128 fAccZ = _mm_setzero_ps(), fAccS = _mm_setzero_ps(); uint32_t fAccScalar = 0u;
        __m128 vr1 = _mm_loadu_ps(vu.m_state.vf[1]); __m128 vn1 = _mm_load_ps(ctx.norm[1]);
        __m128 vr2 = _mm_loadu_ps(vu.m_state.vf[2]); __m128 vn2 = _mm_load_ps(ctx.norm[2]);
        __m128 vr3 = _mm_loadu_ps(vu.m_state.vf[3]); __m128 vn3 = _mm_load_ps(ctx.norm[3]);
        __m128 vr4 = _mm_loadu_ps(vu.m_state.vf[4]); __m128 vn4 = _mm_load_ps(ctx.norm[4]);
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr6 = _mm_loadu_ps(vu.m_state.vf[6]); __m128 vn6 = _mm_load_ps(ctx.norm[6]);
        __m128 vr20 = _mm_loadu_ps(vu.m_state.vf[20]); __m128 vn20 = _mm_load_ps(ctx.norm[20]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr28 = _mm_loadu_ps(vu.m_state.vf[28]); __m128 vn28 = _mm_load_ps(ctx.norm[28]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        __m128 vr32 = _mm_loadu_ps(vu.m_state.acc); __m128 vn32 = _mm_load_ps(ctx.norm[32]);
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi10 = vu.m_state.vi[10];
segb_0EC8:
        // pc_0EC8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[3]); cyc = r; }
        s0EC8_0 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi3, 1)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }
        }
        ++cyc;
        // pc_0ED0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[3]); cyc = r; }
        s0EC8_1 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(vi3, 2)); vr21 = blendDest(vr21, lv, 0xCu); vn21 = blendDest(vn21, vnorm(lv), 0xCu); }
        }
        ++cyc;
        // pc_0ED8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[5][3]); r = rmax(r, vu.m_viReady[3]); cyc = r; }
        s0EC8_2 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0x1u, vn5, kVf0(), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr32 = blendDest(vr32, uv, 0x1u); vn32 = blendDest(vn32, uv, 0x1u); }
            { const __m128 lv = ldq(mem, qaddr(vi3, 3)); _mm_storeu_ps(vu.m_state.vf[20], lv); vn20 = vnorm(lv); }
        }
        ++cyc;
        // pc_0EE0
        s0EC8_3 = cyc;
        const int32_t bk0EC8_3 = vi10;
        {
            vi10 = static_cast<int16_t>(vi10 + -1);
        }
        ++cyc;
        // pc_0EE8
        s0EC8_4 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn25, qN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr26 = blendDest(vr26, uv, 0xEu); vn26 = blendDest(vn26, uv, 0xEu); }
        }
        ++cyc;
        // pc_0EF0
        s0EC8_5 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0x1u, vn6, vn25, vn32, un, fAccZ, fAccS, fAccScalar); vr26 = blendDest(vr26, uv, 0x1u); vn26 = blendDest(vn26, uv, 0x1u); }
        }
        ++cyc;
        // pc_0EF8
        s0EC8_6 = cyc;
        {
            { const __m128 uv = ftoi<0u>(vn27); _mm_storeu_ps(vu.m_state.vf[29], uv); vn29 = vnorm(uv); }
        }
        ++cyc;
        // pc_0F00
        s0EC8_7 = cyc;
        {
            syncQ(vu, ctx, cyc);
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xEu, vn21, qN(vu), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vr28 = blendDest(vr28, uv, 0xEu); vn28 = blendDest(vn28, uv, 0xEu); }
        }
        ++cyc;
        // pc_0F08
        s0EC8_8 = cyc;
        {
        }
        ++cyc;
        // pc_0F10
        s0EC8_9 = cyc;
        {
            { const __m128 uv = _mm_min_ps(vn26, iN(vu)); vr26 = blendDest(vr26, uv, 0x1u); vn26 = blendDest(vn26, uv, 0x1u); }
        }
        ++cyc;
        // pc_0F18
        s0EC8_10 = cyc;
        {
        }
        ++cyc;
        // pc_0F20
        s0EC8_11 = cyc;
        {
        }
        ++cyc;
        // pc_0F28
        s0EC8_12 = cyc;
        {
        }
        ++cyc;
        // pc_0F30
        s0EC8_13 = cyc;
        {
            { const __m128 uv = _mm_max_ps(vn26, bcast<0u>(kVf0())); vr26 = blendDest(vr26, uv, 0x1u); vn26 = blendDest(vn26, uv, 0x1u); }
        }
        ++cyc;
        // pc_0F38
        s0EC8_14 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Mul>(vu, ctx, cyc, 0xFu, vn1, bcast<0u>(vn20), _mm_setzero_ps(), un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0F40
        s0EC8_15 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn2, bcast<1u>(vn20), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
        }
        ++cyc;
        // pc_0F48
        s0EC8_16 = cyc;
        {
            { __m128 un; const __m128 uv = fmacV<FK::Madd>(vu, ctx, cyc, 0xFu, vn3, bcast<2u>(vn20), vn32, un, fAccZ, fAccS, fAccScalar); vn32 = uv; }
            stq(vu, ctx, cyc, qaddr(vi7, 0), _mm_loadu_ps(vu.m_state.vf[29]), 0xFu);
        }
        ++cyc;
        // pc_0F50
        s0EC8_17 = cyc;
        {
            { const __m128 uv = ftoi<4u>(vn26); _mm_storeu_ps(vu.m_state.vf[26], uv); vn26 = vnorm(uv); }
        }
        ++cyc;
        // pc_0F58
        s0EC8_18 = cyc;
        {
            { __m128 un; FmacFlags fl; const __m128 uv = fmacF<FK::Madd>(vu, ctx, cyc, 0xFu, vn4, bcast<3u>(vn20), vn32, un, fl); pushFmacFlags(vu, ctx, cyc, fl.mac, fl.status, fl.status | fl.extra | fAccScalar | stickyOf(fAccZ, fAccS)); vn25 = uv; }
            stq(vu, ctx, cyc, qaddr(vi7, -1), vr28, 0xFu);
        }
        ++cyc;
        // pc_0F60
        s0EC8_19 = cyc;
        const int32_t bk0EC8_19 = vi7;
        {
            vi7 = static_cast<int16_t>(vi7 + 3);
        }
        ++cyc;
        // pc_0F68
        s0EC8_20 = cyc;
        const int32_t bk0EC8_20 = vi3;
        {
            vi3 = static_cast<int16_t>(vi3 + 3);
        }
        ++cyc;
        // pc_0F70
        s0EC8_21 = cyc;
        {
            stq(vu, ctx, cyc, qaddr(vi7, -2), _mm_loadu_ps(vu.m_state.vf[26]), 0xFu);
        }
        ++cyc;
        // pc_0F78
        s0EC8_22 = cyc;
        {
            divOp(vu, ctx, cyc, laneF<3u>(kVf0()), laneF<3u>(vn25));
        }
        ++cyc;
        // pc_0F80
        s0EC8_23 = cyc;
        {
            tk = static_cast<int16_t>(0) != static_cast<int16_t>(vi10);
        }
        ++cyc;
        s0EC8_24 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[20], vn20);
        _mm_storeu_ps(vu.m_state.vf[21], vr21); _mm_store_ps(ctx.norm[21], vn21);
        _mm_storeu_ps(vu.m_state.vf[25], vn25); _mm_store_ps(ctx.norm[25], vn25);
 _mm_store_ps(ctx.norm[26], vn26);
 _mm_store_ps(ctx.norm[27], vn27);
        _mm_storeu_ps(vu.m_state.vf[28], vr28); _mm_store_ps(ctx.norm[28], vn28);
 _mm_store_ps(ctx.norm[29], vn29);
        _mm_storeu_ps(vu.m_state.acc, vn32); _mm_store_ps(ctx.norm[32], vn32);
        vu.m_state.vi[3] = vi3;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[10] = vi10;
        vu.m_viBranchBackupValid = false;
        if (tk) {
        if (cyc + 28u > budget) goto pc_0EC8;
        if (vu.m_fdiv.valid && vu.m_fdiv.readyCycle > cyc + 22u) goto pc_0EC8;
        vr20 = _mm_loadu_ps(vu.m_state.vf[20]);
        vr25 = vn25;
        vr26 = _mm_loadu_ps(vu.m_state.vf[26]);
        vr27 = _mm_loadu_ps(vu.m_state.vf[27]);
        vr29 = _mm_loadu_ps(vu.m_state.vf[29]);
        vr32 = vn32;
        fAccZ = _mm_setzero_ps(); fAccS = _mm_setzero_ps(); fAccScalar = 0u;
        goto segb_0EC8;
        }
        goto pc_0F90;
    }
seg_0F88:
        if (cyc + 4u > budget) goto pc_0F88;
    {
        uint64_t s0F88_0 = 0u;
        // pc_0F88
        s0F88_0 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        goto pc_0F90;
    }
seg_0F98:
        if (cyc + 10u > budget) goto pc_0F98;
    {
        uint64_t s0F98_0 = 0u, s0F98_1 = 0u, s0F98_2 = 0u, s0F98_3 = 0u, s0F98_4 = 0u, s0F98_5 = 0u, s0F98_6 = 0u;
        __m128 vr1 = _mm_loadu_ps(vu.m_state.vf[1]); __m128 vn1 = _mm_load_ps(ctx.norm[1]);
        __m128 vr2 = _mm_loadu_ps(vu.m_state.vf[2]); __m128 vn2 = _mm_load_ps(ctx.norm[2]);
        __m128 vr3 = _mm_loadu_ps(vu.m_state.vf[3]); __m128 vn3 = _mm_load_ps(ctx.norm[3]);
        __m128 vr4 = _mm_loadu_ps(vu.m_state.vf[4]); __m128 vn4 = _mm_load_ps(ctx.norm[4]);
        int32_t vi1 = vu.m_state.vi[1];
        // pc_0F98
        s0F98_0 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 0)); _mm_storeu_ps(vu.m_state.vf[1], lv); vn1 = vnorm(lv); }
        }
        ++cyc;
        // pc_0FA0
        s0F98_1 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 1)); _mm_storeu_ps(vu.m_state.vf[2], lv); vn2 = vnorm(lv); }
        }
        ++cyc;
        // pc_0FA8
        s0F98_2 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 2)); _mm_storeu_ps(vu.m_state.vf[3], lv); vn3 = vnorm(lv); }
        }
        ++cyc;
        // pc_0FB0
        s0F98_3 = cyc;
        {
            { const __m128 lv = ldq(mem, qaddr(0, 3)); _mm_storeu_ps(vu.m_state.vf[4], lv); vn4 = vnorm(lv); }
        }
        ++cyc;
        // pc_0FB8
        s0F98_4 = cyc;
        {
        }
        ++cyc;
        // pc_0FC0
        s0F98_5 = cyc;
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vi1)) * 8u) & 0x3FFFu;
        }
        ++cyc;
        s0F98_6 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[1], vn1);
 _mm_store_ps(ctx.norm[2], vn2);
 _mm_store_ps(ctx.norm[3], vn3);
 _mm_store_ps(ctx.norm[4], vn4);
        vu.m_viBranchBackupValid = false;
        { epc = jt; goto exit_continue; }
    }
seg_0FC8:
        if (cyc + 6u > budget) goto pc_0FC8;
    {
        uint64_t s0FC8_0 = 0u, s0FC8_1 = 0u, s0FC8_2 = 0u;
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        int32_t vi14 = vu.m_state.vi[14];
        // pc_0FC8
        s0FC8_0 = cyc;
        {
        }
        ++cyc;
        // pc_0FD0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[5][0]); r = rmax(r, vu.m_vfReady[5][1]); r = rmax(r, vu.m_vfReady[5][2]); r = rmax(r, vu.m_vfReady[5][3]); r = rmax(r, vu.m_viReady[14]); cyc = r; }
        s0FC8_1 = cyc;
        const int32_t bk0FC8_1 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);stq(vu, ctx, cyc, qaddr(vi14, 0), vr5, 0xFu);
        }
        ++cyc;
        // pc_0FD8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); cyc = r; }
        s0FC8_2 = cyc;
        const int32_t bk0FC8_2 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);stq(vu, ctx, cyc, qaddr(vi14, 0), vr17, 0xFu);
        }
        ++cyc;
        vu.m_state.vi[14] = vi14;
        vu.m_viReady[14] = s0FC8_2 + 1u;
        vu.m_viBranchBackupValue = bk0FC8_2; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        { epc = 0xFE0u; goto exit_continue; }
    }
seg_0FD0:
        if (cyc + 5u > budget) goto pc_0FD0;
    {
        uint64_t s0FD0_0 = 0u, s0FD0_1 = 0u;
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        int32_t vi14 = vu.m_state.vi[14];
        // pc_0FD0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[5][0]); r = rmax(r, vu.m_vfReady[5][1]); r = rmax(r, vu.m_vfReady[5][2]); r = rmax(r, vu.m_vfReady[5][3]); r = rmax(r, vu.m_viReady[14]); cyc = r; }
        s0FD0_0 = cyc;
        const int32_t bk0FD0_0 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);stq(vu, ctx, cyc, qaddr(vi14, 0), vr5, 0xFu);
        }
        ++cyc;
        // pc_0FD8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[17][0]); r = rmax(r, vu.m_vfReady[17][1]); r = rmax(r, vu.m_vfReady[17][2]); r = rmax(r, vu.m_vfReady[17][3]); cyc = r; }
        s0FD0_1 = cyc;
        const int32_t bk0FD0_1 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);stq(vu, ctx, cyc, qaddr(vi14, 0), vr17, 0xFu);
        }
        ++cyc;
        vu.m_state.vi[14] = vi14;
        vu.m_viReady[14] = s0FD0_1 + 1u;
        vu.m_viBranchBackupValue = bk0FD0_1; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        { epc = 0xFE0u; goto exit_continue; }
    }
exit_budget:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Budget;
exit_continue:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Continue;
}

template <>
VU1InterpreterAccess::StepResult VU1InterpreterAccess::fastBlock<0x5DCE334B68799D95ull, 4u>(VU1Interpreter &vu, Vu1FastCtx &ctx)
{
    uint64_t cyc = ctx.cycle;
    const uint64_t budget = ctx.budget;
    const uint8_t *const mem = ctx.mem;
    uint32_t epc = 0u;
    uint32_t jt = 0u;
    (void)mem;
    switch (vu.m_state.pc)
    {
    case 0xFE0u: goto seg_0FE0;
    case 0xFE8u: goto pc_0FE8;
    case 0xFF0u: goto pc_0FF0;
    case 0xFF8u: goto pc_0FF8;
    case 0x1000u: goto pc_1000;
    case 0x1008u: goto pc_1008;
    case 0x1010u: goto pc_1010;
    case 0x1018u: goto pc_1018;
    case 0x1020u: goto pc_1020;
    case 0x1028u: goto pc_1028;
    case 0x1030u: goto pc_1030;
    case 0x1038u: goto pc_1038;
    case 0x1040u: goto pc_1040;
    case 0x1048u: goto pc_1048;
    case 0x1050u: goto pc_1050;
    case 0x1058u: goto pc_1058;
    case 0x1060u: goto pc_1060;
    case 0x1068u: goto pc_1068;
    case 0x1070u: goto pc_1070;
    case 0x1078u: goto pc_1078;
    case 0x1080u: goto pc_1080;
    case 0x1088u: goto pc_1088;
    case 0x1090u: goto pc_1090;
    case 0x1098u: goto pc_1098;
    case 0x10A0u: goto pc_10A0;
    case 0x10A8u: goto pc_10A8;
    case 0x10B0u: goto pc_10B0;
    case 0x10B8u: goto pc_10B8;
    case 0x10C0u: goto pc_10C0;
    case 0x10C8u: goto pc_10C8;
    case 0x10D0u: goto seg_10D0;
    case 0x10D8u: goto seg_10D8;
    case 0x10E0u: goto pc_10E0;
    case 0x10E8u: goto pc_10E8;
    case 0x10F0u: goto pc_10F0;
    case 0x10F8u: goto pc_10F8;
    case 0x1100u: goto pc_1100;
    case 0x1108u: goto pc_1108;
    case 0x1110u: goto pc_1110;
    case 0x1118u: goto pc_1118;
    case 0x1120u: goto pc_1120;
    case 0x1128u: goto pc_1128;
    case 0x1130u: goto pc_1130;
    case 0x1138u: goto pc_1138;
    case 0x1140u: goto pc_1140;
    case 0x1148u: goto pc_1148;
    case 0x1150u: goto pc_1150;
    case 0x1158u: goto pc_1158;
    case 0x1160u: goto pc_1160;
    case 0x1168u: goto pc_1168;
    case 0x1170u: goto pc_1170;
    case 0x1178u: goto pc_1178;
    case 0x1180u: goto pc_1180;
    case 0x1188u: goto pc_1188;
    case 0x1190u: goto pc_1190;
    case 0x1198u: goto pc_1198;
    case 0x11A0u: goto pc_11A0;
    case 0x11A8u: goto pc_11A8;
    case 0x11B0u: goto pc_11B0;
    case 0x11B8u: goto pc_11B8;
    case 0x11C0u: goto pc_11C0;
    case 0x11C8u: goto pc_11C8;
    case 0x11D0u: goto pc_11D0;
    case 0x11D8u: goto pc_11D8;
    case 0x11E0u: goto seg_11E0;
    case 0x11E8u: goto seg_11E8;
    case 0x11F0u: goto pc_11F0;
    default: return StepResult::Fallback;
    }
pc_0FE0:
        if (cyc >= budget) { epc = 0xFE0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); r = rmax(r, vu.m_vfReady[21][3]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xFE0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);stq(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), _mm_loadu_ps(vu.m_state.vf[21]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0FE8:
        if (cyc >= budget) { epc = 0xFE8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_vfReady[23][3]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xFE8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);stq(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), _mm_loadu_ps(vu.m_state.vf[23]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0FF0:
        if (cyc >= budget) { epc = 0xFF0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[24][0]); r = rmax(r, vu.m_vfReady[24][1]); r = rmax(r, vu.m_vfReady[24][2]); r = rmax(r, vu.m_vfReady[24][3]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xFF0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);stq(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), _mm_loadu_ps(vu.m_state.vf[24]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_0FF8:
        if (cyc >= budget) { epc = 0xFF8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[25][0]); r = rmax(r, vu.m_vfReady[25][1]); r = rmax(r, vu.m_vfReady[25][2]); r = rmax(r, vu.m_vfReady[25][3]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0xFF8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);stq(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), _mm_loadu_ps(vu.m_state.vf[25]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1000:
        if (cyc >= budget) { epc = 0x1000u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[26][0]); r = rmax(r, vu.m_vfReady[26][1]); r = rmax(r, vu.m_vfReady[26][2]); r = rmax(r, vu.m_vfReady[26][3]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1000u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);stq(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), _mm_loadu_ps(vu.m_state.vf[26]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1008:
        if (cyc >= budget) { epc = 0x1008u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[27][0]); r = rmax(r, vu.m_vfReady[27][1]); r = rmax(r, vu.m_vfReady[27][2]); r = rmax(r, vu.m_vfReady[27][3]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1008u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);stq(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), _mm_loadu_ps(vu.m_state.vf[27]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1010:
        if (cyc >= budget) { epc = 0x1010u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[28][0]); r = rmax(r, vu.m_vfReady[28][1]); r = rmax(r, vu.m_vfReady[28][2]); r = rmax(r, vu.m_vfReady[28][3]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1010u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);stq(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), _mm_loadu_ps(vu.m_state.vf[28]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1018:
        if (cyc >= budget) { epc = 0x1018u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[29][0]); r = rmax(r, vu.m_vfReady[29][1]); r = rmax(r, vu.m_vfReady[29][2]); r = rmax(r, vu.m_vfReady[29][3]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1018u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);stq(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), _mm_loadu_ps(vu.m_state.vf[29]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1020:
        if (cyc >= budget) { epc = 0x1020u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[30][0]); r = rmax(r, vu.m_vfReady[30][1]); r = rmax(r, vu.m_vfReady[30][2]); r = rmax(r, vu.m_vfReady[30][3]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1020u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);stq(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), _mm_loadu_ps(vu.m_state.vf[30]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1028:
        if (cyc >= budget) { epc = 0x1028u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[31][0]); r = rmax(r, vu.m_vfReady[31][1]); r = rmax(r, vu.m_vfReady[31][2]); r = rmax(r, vu.m_vfReady[31][3]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1028u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);stq(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), _mm_loadu_ps(vu.m_state.vf[31]), 0xFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1030:
        if (cyc >= budget) { epc = 0x1030u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1030u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1038:
        if (cyc >= budget) { epc = 0x1038u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[2]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1038u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[2], 0x8u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1040:
        if (cyc >= budget) { epc = 0x1040u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[3]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1040u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[3], 0x4u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1048:
        if (cyc >= budget) { epc = 0x1048u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[4]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1048u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[4], 0x2u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1050:
        if (cyc >= budget) { epc = 0x1050u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[5]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1050u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[5], 0x1u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1058:
        if (cyc >= budget) { epc = 0x1058u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1058u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1060:
        if (cyc >= budget) { epc = 0x1060u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[6]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1060u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[6], 0x8u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1068:
        if (cyc >= budget) { epc = 0x1068u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[7]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1068u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[7], 0x4u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1070:
        if (cyc >= budget) { epc = 0x1070u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[8]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1070u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[8], 0x2u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1078:
        if (cyc >= budget) { epc = 0x1078u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[9]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1078u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[9], 0x1u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1080:
        if (cyc >= budget) { epc = 0x1080u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1080u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1088:
        if (cyc >= budget) { epc = 0x1088u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[10]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1088u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[10], 0x8u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1090:
        if (cyc >= budget) { epc = 0x1090u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[11]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1090u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[11], 0x4u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_1098:
        if (cyc >= budget) { epc = 0x1098u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[12]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1098u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[12], 0x2u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_10A0:
        if (cyc >= budget) { epc = 0x10A0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[13]); r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x10A0u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[13], 0x1u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_10A8:
        if (cyc >= budget) { epc = 0x10A8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x10A8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] - 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_10B0:
        if (cyc >= budget) { epc = 0x10B0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x10B0u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[14], 0x8u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_10B8:
        if (cyc >= budget) { epc = 0x10B8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); r = rmax(r, vu.m_viReady[15]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x10B8u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[15], 0x4u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_10C0:
        if (cyc >= budget) { epc = 0x10C0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_10C8:
        if (cyc >= budget) { epc = 0x10C8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[15]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x10C8u; goto exit_budget; } } cyc = r; } }
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vu.readBranchVi(15u))) * 8u) & 0x3FFFu;
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x10D0u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = jt; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = jt; goto exit_continue; }
pc_10D0:
        if (cyc >= budget) { epc = 0x10D0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_10D8;
pc_10D8:
        if (cyc >= budget) { epc = 0x10D8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[15]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x10D8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[1];
            vu.m_state.vi[1] = static_cast<int16_t>(vu.m_state.vi[0] + vu.m_state.vi[15]);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[1] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 1u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_10E0:
        if (cyc >= budget) { epc = 0x10E0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x10E0u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[14], 0x8u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_10E8:
        if (cyc >= budget) { epc = 0x10E8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); r = rmax(r, vu.m_viReady[15]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x10E8u; goto exit_budget; } } cyc = r; } }
        {
            stw(vu, ctx, cyc, qaddr(vu.m_state.vi[14], 0), vu.m_state.vi[15], 0x4u);
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_10F0:
        if (cyc >= budget) { epc = 0x10F0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x10F0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_10F8:
        if (cyc >= budget) { epc = 0x10F8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x10F8u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[10] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[14], 0) + 0u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[10] = cyc + 4u;
        }
        ++cyc;
pc_1100:
        if (cyc >= budget) { epc = 0x1100u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1100u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[11] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[14], 0) + 4u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[11] = cyc + 4u;
        }
        ++cyc;
pc_1108:
        if (cyc >= budget) { epc = 0x1108u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1108u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[12] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[14], 0) + 8u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[12] = cyc + 4u;
        }
        ++cyc;
pc_1110:
        if (cyc >= budget) { epc = 0x1110u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1110u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[13] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[14], 0) + 12u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[13] = cyc + 4u;
        }
        ++cyc;
pc_1118:
        if (cyc >= budget) { epc = 0x1118u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1118u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1120:
        if (cyc >= budget) { epc = 0x1120u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1120u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[6] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[14], 0) + 0u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[6] = cyc + 4u;
        }
        ++cyc;
pc_1128:
        if (cyc >= budget) { epc = 0x1128u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1128u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[7] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[14], 0) + 4u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[7] = cyc + 4u;
        }
        ++cyc;
pc_1130:
        if (cyc >= budget) { epc = 0x1130u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1130u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[8] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[14], 0) + 8u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[8] = cyc + 4u;
        }
        ++cyc;
pc_1138:
        if (cyc >= budget) { epc = 0x1138u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1138u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[9] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[14], 0) + 12u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[9] = cyc + 4u;
        }
        ++cyc;
pc_1140:
        if (cyc >= budget) { epc = 0x1140u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1140u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1148:
        if (cyc >= budget) { epc = 0x1148u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1148u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[2] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[14], 0) + 0u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[2] = cyc + 4u;
        }
        ++cyc;
pc_1150:
        if (cyc >= budget) { epc = 0x1150u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1150u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[3] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[14], 0) + 4u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[3] = cyc + 4u;
        }
        ++cyc;
pc_1158:
        if (cyc >= budget) { epc = 0x1158u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1158u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[4] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[14], 0) + 8u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[4] = cyc + 4u;
        }
        ++cyc;
pc_1160:
        if (cyc >= budget) { epc = 0x1160u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1160u; goto exit_budget; } } cyc = r; } }
        {
            vu.m_state.vi[5] = static_cast<int16_t>(ldw(mem, qaddr(vu.m_state.vi[14], 0) + 12u) & 0xFFFFu);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[5] = cyc + 4u;
        }
        ++cyc;
pc_1168:
        if (cyc >= budget) { epc = 0x1168u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1168u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1170:
        if (cyc >= budget) { epc = 0x1170u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1170u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[14], 0)); writeVf(vu, ctx, 31u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[31][0] = cyc + 4u;
            vu.m_vfReady[31][1] = cyc + 4u;
            vu.m_vfReady[31][2] = cyc + 4u;
            vu.m_vfReady[31][3] = cyc + 4u;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1178:
        if (cyc >= budget) { epc = 0x1178u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1178u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[14], 0)); writeVf(vu, ctx, 30u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[30][0] = cyc + 4u;
            vu.m_vfReady[30][1] = cyc + 4u;
            vu.m_vfReady[30][2] = cyc + 4u;
            vu.m_vfReady[30][3] = cyc + 4u;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1180:
        if (cyc >= budget) { epc = 0x1180u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1180u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[14], 0)); writeVf(vu, ctx, 29u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[29][0] = cyc + 4u;
            vu.m_vfReady[29][1] = cyc + 4u;
            vu.m_vfReady[29][2] = cyc + 4u;
            vu.m_vfReady[29][3] = cyc + 4u;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1188:
        if (cyc >= budget) { epc = 0x1188u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1188u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[14], 0)); writeVf(vu, ctx, 28u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[28][0] = cyc + 4u;
            vu.m_vfReady[28][1] = cyc + 4u;
            vu.m_vfReady[28][2] = cyc + 4u;
            vu.m_vfReady[28][3] = cyc + 4u;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1190:
        if (cyc >= budget) { epc = 0x1190u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1190u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[14], 0)); writeVf(vu, ctx, 27u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[27][0] = cyc + 4u;
            vu.m_vfReady[27][1] = cyc + 4u;
            vu.m_vfReady[27][2] = cyc + 4u;
            vu.m_vfReady[27][3] = cyc + 4u;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_1198:
        if (cyc >= budget) { epc = 0x1198u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x1198u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[14], 0)); writeVf(vu, ctx, 26u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[26][0] = cyc + 4u;
            vu.m_vfReady[26][1] = cyc + 4u;
            vu.m_vfReady[26][2] = cyc + 4u;
            vu.m_vfReady[26][3] = cyc + 4u;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_11A0:
        if (cyc >= budget) { epc = 0x11A0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x11A0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[14], 0)); writeVf(vu, ctx, 25u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[25][0] = cyc + 4u;
            vu.m_vfReady[25][1] = cyc + 4u;
            vu.m_vfReady[25][2] = cyc + 4u;
            vu.m_vfReady[25][3] = cyc + 4u;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_11A8:
        if (cyc >= budget) { epc = 0x11A8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x11A8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[14], 0)); writeVf(vu, ctx, 24u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[24][0] = cyc + 4u;
            vu.m_vfReady[24][1] = cyc + 4u;
            vu.m_vfReady[24][2] = cyc + 4u;
            vu.m_vfReady[24][3] = cyc + 4u;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_11B0:
        if (cyc >= budget) { epc = 0x11B0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x11B0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[14], 0)); writeVf(vu, ctx, 23u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[23][0] = cyc + 4u;
            vu.m_vfReady[23][1] = cyc + 4u;
            vu.m_vfReady[23][2] = cyc + 4u;
            vu.m_vfReady[23][3] = cyc + 4u;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_11B8:
        if (cyc >= budget) { epc = 0x11B8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x11B8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[14], 0)); writeVf(vu, ctx, 21u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[21][0] = cyc + 4u;
            vu.m_vfReady[21][1] = cyc + 4u;
            vu.m_vfReady[21][2] = cyc + 4u;
            vu.m_vfReady[21][3] = cyc + 4u;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_11C0:
        if (cyc >= budget) { epc = 0x11C0u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x11C0u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[14], 0)); writeVf(vu, ctx, 17u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[17][0] = cyc + 4u;
            vu.m_vfReady[17][1] = cyc + 4u;
            vu.m_vfReady[17][2] = cyc + 4u;
            vu.m_vfReady[17][3] = cyc + 4u;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_11C8:
        if (cyc >= budget) { epc = 0x11C8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x11C8u; goto exit_budget; } } cyc = r; } }
        {
            const int32_t oldVi = vu.m_state.vi[14];
            { const __m128 lv = ldq(mem, qaddr(vu.m_state.vi[14], 0)); writeVf(vu, ctx, 5u, lv, vnorm(lv), 0xFu); }vu.m_state.vi[14] = static_cast<int16_t>(vu.m_state.vi[14] + 1);
            vu.m_viBranchBackupValid = false;
            vu.m_vfReady[5][0] = cyc + 4u;
            vu.m_vfReady[5][1] = cyc + 4u;
            vu.m_vfReady[5][2] = cyc + 4u;
            vu.m_vfReady[5][3] = cyc + 4u;
            vu.m_viReady[14] = cyc + 1u;
            vu.m_viBranchBackupValue = oldVi; vu.m_viBranchBackupReg = 14u; vu.m_viBranchBackupValid = true;
        }
        ++cyc;
pc_11D0:
        if (cyc >= budget) { epc = 0x11D0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_11D8:
        if (cyc >= budget) { epc = 0x11D8u; goto exit_budget; }
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[1]); if (r > cyc) { if (r >= budget) { cyc = budget; { epc = 0x11D8u; goto exit_budget; } } cyc = r; } }
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vu.readBranchVi(1u))) * 8u) & 0x3FFFu;
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        // delay slot
        if (cyc >= budget) { epc = 0x11E0u; { vu.m_state.branchPending = true; vu.m_state.branchTarget = jt; vu.m_state.branchDelay = 0u; } goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = jt; goto exit_continue; }
pc_11E0:
        if (cyc >= budget) { epc = 0x11E0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        goto seg_11E8;
pc_11E8:
        if (cyc >= budget) { epc = 0x11E8u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
pc_11F0:
        if (cyc >= budget) { epc = 0x11F0u; goto exit_budget; }
        {
            vu.m_viBranchBackupValid = false;
        }
        ++cyc;
        { epc = 0x11F8u; goto exit_continue; }
seg_0FE0:
        if (cyc + 34u > budget) goto pc_0FE0;
    {
        uint64_t s0FE0_0 = 0u, s0FE0_1 = 0u, s0FE0_2 = 0u, s0FE0_3 = 0u, s0FE0_4 = 0u, s0FE0_5 = 0u, s0FE0_6 = 0u, s0FE0_7 = 0u, s0FE0_8 = 0u, s0FE0_9 = 0u, s0FE0_10 = 0u, s0FE0_11 = 0u, s0FE0_12 = 0u, s0FE0_13 = 0u, s0FE0_14 = 0u, s0FE0_15 = 0u, s0FE0_16 = 0u, s0FE0_17 = 0u, s0FE0_18 = 0u, s0FE0_19 = 0u, s0FE0_20 = 0u, s0FE0_21 = 0u, s0FE0_22 = 0u, s0FE0_23 = 0u, s0FE0_24 = 0u, s0FE0_25 = 0u, s0FE0_26 = 0u, s0FE0_27 = 0u, s0FE0_28 = 0u, s0FE0_29 = 0u, s0FE0_30 = 0u;
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr28 = _mm_loadu_ps(vu.m_state.vf[28]); __m128 vn28 = _mm_load_ps(ctx.norm[28]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        __m128 vr31 = _mm_loadu_ps(vu.m_state.vf[31]); __m128 vn31 = _mm_load_ps(ctx.norm[31]);
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi5 = vu.m_state.vi[5];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        int32_t vi12 = vu.m_state.vi[12];
        int32_t vi13 = vu.m_state.vi[13];
        int32_t vi14 = vu.m_state.vi[14];
        int32_t vi15 = vu.m_state.vi[15];
        // pc_0FE0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[21][0]); r = rmax(r, vu.m_vfReady[21][1]); r = rmax(r, vu.m_vfReady[21][2]); r = rmax(r, vu.m_vfReady[21][3]); r = rmax(r, vu.m_viReady[14]); cyc = r; }
        s0FE0_0 = cyc;
        const int32_t bk0FE0_0 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);stq(vu, ctx, cyc, qaddr(vi14, 0), vr21, 0xFu);
        }
        ++cyc;
        // pc_0FE8
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[23][0]); r = rmax(r, vu.m_vfReady[23][1]); r = rmax(r, vu.m_vfReady[23][2]); r = rmax(r, vu.m_vfReady[23][3]); cyc = r; }
        s0FE0_1 = cyc;
        const int32_t bk0FE0_1 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);stq(vu, ctx, cyc, qaddr(vi14, 0), vr23, 0xFu);
        }
        ++cyc;
        // pc_0FF0
        { uint64_t r = cyc; r = rmax(r, vu.m_vfReady[24][0]); r = rmax(r, vu.m_vfReady[24][1]); r = rmax(r, vu.m_vfReady[24][2]); r = rmax(r, vu.m_vfReady[24][3]); cyc = r; }
        s0FE0_2 = cyc;
        const int32_t bk0FE0_2 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);stq(vu, ctx, cyc, qaddr(vi14, 0), vr24, 0xFu);
        }
        ++cyc;
        // pc_0FF8
        s0FE0_3 = cyc;
        const int32_t bk0FE0_3 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);stq(vu, ctx, cyc, qaddr(vi14, 0), vr25, 0xFu);
        }
        ++cyc;
        // pc_1000
        s0FE0_4 = cyc;
        const int32_t bk0FE0_4 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);stq(vu, ctx, cyc, qaddr(vi14, 0), vr26, 0xFu);
        }
        ++cyc;
        // pc_1008
        s0FE0_5 = cyc;
        const int32_t bk0FE0_5 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);stq(vu, ctx, cyc, qaddr(vi14, 0), vr27, 0xFu);
        }
        ++cyc;
        // pc_1010
        s0FE0_6 = cyc;
        const int32_t bk0FE0_6 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);stq(vu, ctx, cyc, qaddr(vi14, 0), vr28, 0xFu);
        }
        ++cyc;
        // pc_1018
        s0FE0_7 = cyc;
        const int32_t bk0FE0_7 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);stq(vu, ctx, cyc, qaddr(vi14, 0), vr29, 0xFu);
        }
        ++cyc;
        // pc_1020
        s0FE0_8 = cyc;
        const int32_t bk0FE0_8 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);stq(vu, ctx, cyc, qaddr(vi14, 0), vr30, 0xFu);
        }
        ++cyc;
        // pc_1028
        s0FE0_9 = cyc;
        const int32_t bk0FE0_9 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);stq(vu, ctx, cyc, qaddr(vi14, 0), vr31, 0xFu);
        }
        ++cyc;
        // pc_1030
        s0FE0_10 = cyc;
        const int32_t bk0FE0_10 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);
        }
        ++cyc;
        // pc_1038
        s0FE0_11 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi2, 0x8u);
        }
        ++cyc;
        // pc_1040
        s0FE0_12 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi3, 0x4u);
        }
        ++cyc;
        // pc_1048
        s0FE0_13 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi4, 0x2u);
        }
        ++cyc;
        // pc_1050
        s0FE0_14 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi5, 0x1u);
        }
        ++cyc;
        // pc_1058
        s0FE0_15 = cyc;
        const int32_t bk0FE0_15 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);
        }
        ++cyc;
        // pc_1060
        s0FE0_16 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi6, 0x8u);
        }
        ++cyc;
        // pc_1068
        s0FE0_17 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi7, 0x4u);
        }
        ++cyc;
        // pc_1070
        s0FE0_18 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi8, 0x2u);
        }
        ++cyc;
        // pc_1078
        s0FE0_19 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi9, 0x1u);
        }
        ++cyc;
        // pc_1080
        s0FE0_20 = cyc;
        const int32_t bk0FE0_20 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);
        }
        ++cyc;
        // pc_1088
        s0FE0_21 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi10, 0x8u);
        }
        ++cyc;
        // pc_1090
        s0FE0_22 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi11, 0x4u);
        }
        ++cyc;
        // pc_1098
        s0FE0_23 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi12, 0x2u);
        }
        ++cyc;
        // pc_10A0
        s0FE0_24 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi13, 0x1u);
        }
        ++cyc;
        // pc_10A8
        s0FE0_25 = cyc;
        const int32_t bk0FE0_25 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 - 1);
        }
        ++cyc;
        // pc_10B0
        s0FE0_26 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi14, 0x8u);
        }
        ++cyc;
        // pc_10B8
        s0FE0_27 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi15, 0x4u);
        }
        ++cyc;
        // pc_10C0
        s0FE0_28 = cyc;
        {
        }
        ++cyc;
        // pc_10C8
        s0FE0_29 = cyc;
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vi15)) * 8u) & 0x3FFFu;
        }
        ++cyc;
        s0FE0_30 = cyc;
        {
        }
        ++cyc;
        vu.m_state.vi[14] = vi14;
        vu.m_viBranchBackupValid = false;
        { epc = jt; goto exit_continue; }
    }
seg_10D0:
        if (cyc + 38u > budget) goto pc_10D0;
    {
        uint64_t s10D0_0 = 0u, s10D0_1 = 0u, s10D0_2 = 0u, s10D0_3 = 0u, s10D0_4 = 0u, s10D0_5 = 0u, s10D0_6 = 0u, s10D0_7 = 0u, s10D0_8 = 0u, s10D0_9 = 0u, s10D0_10 = 0u, s10D0_11 = 0u, s10D0_12 = 0u, s10D0_13 = 0u, s10D0_14 = 0u, s10D0_15 = 0u, s10D0_16 = 0u, s10D0_17 = 0u, s10D0_18 = 0u, s10D0_19 = 0u, s10D0_20 = 0u, s10D0_21 = 0u, s10D0_22 = 0u, s10D0_23 = 0u, s10D0_24 = 0u, s10D0_25 = 0u, s10D0_26 = 0u, s10D0_27 = 0u, s10D0_28 = 0u, s10D0_29 = 0u, s10D0_30 = 0u, s10D0_31 = 0u, s10D0_32 = 0u, s10D0_33 = 0u, s10D0_34 = 0u;
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr28 = _mm_loadu_ps(vu.m_state.vf[28]); __m128 vn28 = _mm_load_ps(ctx.norm[28]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        __m128 vr31 = _mm_loadu_ps(vu.m_state.vf[31]); __m128 vn31 = _mm_load_ps(ctx.norm[31]);
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi5 = vu.m_state.vi[5];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        int32_t vi12 = vu.m_state.vi[12];
        int32_t vi13 = vu.m_state.vi[13];
        int32_t vi14 = vu.m_state.vi[14];
        int32_t vi15 = vu.m_state.vi[15];
        // pc_10D0
        s10D0_0 = cyc;
        {
        }
        ++cyc;
        // pc_10D8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[15]); cyc = r; }
        s10D0_1 = cyc;
        const int32_t bk10D0_1 = vi1;
        {
            vi1 = static_cast<int16_t>(0 + vi15);
        }
        ++cyc;
        // pc_10E0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); cyc = r; }
        s10D0_2 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi14, 0x8u);
        }
        ++cyc;
        // pc_10E8
        s10D0_3 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi15, 0x4u);
        }
        ++cyc;
        // pc_10F0
        s10D0_4 = cyc;
        const int32_t bk10D0_4 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_10F8
        s10D0_5 = cyc;
        {
            vi10 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 0u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1100
        s10D0_6 = cyc;
        {
            vi11 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 4u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1108
        s10D0_7 = cyc;
        {
            vi12 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 8u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1110
        s10D0_8 = cyc;
        {
            vi13 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 12u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1118
        s10D0_9 = cyc;
        const int32_t bk10D0_9 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1120
        s10D0_10 = cyc;
        {
            vi6 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 0u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1128
        s10D0_11 = cyc;
        {
            vi7 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 4u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1130
        s10D0_12 = cyc;
        {
            vi8 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 8u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1138
        s10D0_13 = cyc;
        {
            vi9 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 12u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1140
        s10D0_14 = cyc;
        const int32_t bk10D0_14 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1148
        s10D0_15 = cyc;
        {
            vi2 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 0u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1150
        s10D0_16 = cyc;
        {
            vi3 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 4u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1158
        s10D0_17 = cyc;
        {
            vi4 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 8u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1160
        s10D0_18 = cyc;
        {
            vi5 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 12u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1168
        s10D0_19 = cyc;
        const int32_t bk10D0_19 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1170
        s10D0_20 = cyc;
        const int32_t bk10D0_20 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[31], lv); vn31 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1178
        s10D0_21 = cyc;
        const int32_t bk10D0_21 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1180
        s10D0_22 = cyc;
        const int32_t bk10D0_22 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1188
        s10D0_23 = cyc;
        const int32_t bk10D0_23 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1190
        s10D0_24 = cyc;
        const int32_t bk10D0_24 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1198
        s10D0_25 = cyc;
        const int32_t bk10D0_25 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[26], lv); vn26 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_11A0
        s10D0_26 = cyc;
        const int32_t bk10D0_26 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[25], lv); vn25 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_11A8
        s10D0_27 = cyc;
        const int32_t bk10D0_27 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[24], lv); vn24 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_11B0
        s10D0_28 = cyc;
        const int32_t bk10D0_28 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_11B8
        s10D0_29 = cyc;
        const int32_t bk10D0_29 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_11C0
        s10D0_30 = cyc;
        const int32_t bk10D0_30 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[17], lv); vn17 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_11C8
        s10D0_31 = cyc;
        const int32_t bk10D0_31 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[5], lv); vn5 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_11D0
        s10D0_32 = cyc;
        {
        }
        ++cyc;
        // pc_11D8
        s10D0_33 = cyc;
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vi1)) * 8u) & 0x3FFFu;
        }
        ++cyc;
        s10D0_34 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[5], vn5);
 _mm_store_ps(ctx.norm[17], vn17);
 _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[23], vn23);
 _mm_store_ps(ctx.norm[24], vn24);
 _mm_store_ps(ctx.norm[25], vn25);
 _mm_store_ps(ctx.norm[26], vn26);
 _mm_store_ps(ctx.norm[27], vn27);
 _mm_store_ps(ctx.norm[28], vn28);
 _mm_store_ps(ctx.norm[29], vn29);
 _mm_store_ps(ctx.norm[30], vn30);
 _mm_store_ps(ctx.norm[31], vn31);
        vu.m_state.vi[1] = vi1;
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[3] = vi3;
        vu.m_state.vi[4] = vi4;
        vu.m_state.vi[5] = vi5;
        vu.m_state.vi[6] = vi6;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[8] = vi8;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        vu.m_state.vi[12] = vi12;
        vu.m_state.vi[13] = vi13;
        vu.m_state.vi[14] = vi14;
        vu.m_viBranchBackupValid = false;
        { epc = jt; goto exit_continue; }
    }
seg_10D8:
        if (cyc + 37u > budget) goto pc_10D8;
    {
        uint64_t s10D8_0 = 0u, s10D8_1 = 0u, s10D8_2 = 0u, s10D8_3 = 0u, s10D8_4 = 0u, s10D8_5 = 0u, s10D8_6 = 0u, s10D8_7 = 0u, s10D8_8 = 0u, s10D8_9 = 0u, s10D8_10 = 0u, s10D8_11 = 0u, s10D8_12 = 0u, s10D8_13 = 0u, s10D8_14 = 0u, s10D8_15 = 0u, s10D8_16 = 0u, s10D8_17 = 0u, s10D8_18 = 0u, s10D8_19 = 0u, s10D8_20 = 0u, s10D8_21 = 0u, s10D8_22 = 0u, s10D8_23 = 0u, s10D8_24 = 0u, s10D8_25 = 0u, s10D8_26 = 0u, s10D8_27 = 0u, s10D8_28 = 0u, s10D8_29 = 0u, s10D8_30 = 0u, s10D8_31 = 0u, s10D8_32 = 0u, s10D8_33 = 0u;
        __m128 vr5 = _mm_loadu_ps(vu.m_state.vf[5]); __m128 vn5 = _mm_load_ps(ctx.norm[5]);
        __m128 vr17 = _mm_loadu_ps(vu.m_state.vf[17]); __m128 vn17 = _mm_load_ps(ctx.norm[17]);
        __m128 vr21 = _mm_loadu_ps(vu.m_state.vf[21]); __m128 vn21 = _mm_load_ps(ctx.norm[21]);
        __m128 vr23 = _mm_loadu_ps(vu.m_state.vf[23]); __m128 vn23 = _mm_load_ps(ctx.norm[23]);
        __m128 vr24 = _mm_loadu_ps(vu.m_state.vf[24]); __m128 vn24 = _mm_load_ps(ctx.norm[24]);
        __m128 vr25 = _mm_loadu_ps(vu.m_state.vf[25]); __m128 vn25 = _mm_load_ps(ctx.norm[25]);
        __m128 vr26 = _mm_loadu_ps(vu.m_state.vf[26]); __m128 vn26 = _mm_load_ps(ctx.norm[26]);
        __m128 vr27 = _mm_loadu_ps(vu.m_state.vf[27]); __m128 vn27 = _mm_load_ps(ctx.norm[27]);
        __m128 vr28 = _mm_loadu_ps(vu.m_state.vf[28]); __m128 vn28 = _mm_load_ps(ctx.norm[28]);
        __m128 vr29 = _mm_loadu_ps(vu.m_state.vf[29]); __m128 vn29 = _mm_load_ps(ctx.norm[29]);
        __m128 vr30 = _mm_loadu_ps(vu.m_state.vf[30]); __m128 vn30 = _mm_load_ps(ctx.norm[30]);
        __m128 vr31 = _mm_loadu_ps(vu.m_state.vf[31]); __m128 vn31 = _mm_load_ps(ctx.norm[31]);
        int32_t vi1 = vu.m_state.vi[1];
        int32_t vi2 = vu.m_state.vi[2];
        int32_t vi3 = vu.m_state.vi[3];
        int32_t vi4 = vu.m_state.vi[4];
        int32_t vi5 = vu.m_state.vi[5];
        int32_t vi6 = vu.m_state.vi[6];
        int32_t vi7 = vu.m_state.vi[7];
        int32_t vi8 = vu.m_state.vi[8];
        int32_t vi9 = vu.m_state.vi[9];
        int32_t vi10 = vu.m_state.vi[10];
        int32_t vi11 = vu.m_state.vi[11];
        int32_t vi12 = vu.m_state.vi[12];
        int32_t vi13 = vu.m_state.vi[13];
        int32_t vi14 = vu.m_state.vi[14];
        int32_t vi15 = vu.m_state.vi[15];
        // pc_10D8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[15]); cyc = r; }
        s10D8_0 = cyc;
        const int32_t bk10D8_0 = vi1;
        {
            vi1 = static_cast<int16_t>(0 + vi15);
        }
        ++cyc;
        // pc_10E0
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); cyc = r; }
        s10D8_1 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi14, 0x8u);
        }
        ++cyc;
        // pc_10E8
        { uint64_t r = cyc; r = rmax(r, vu.m_viReady[14]); r = rmax(r, vu.m_viReady[15]); cyc = r; }
        s10D8_2 = cyc;
        {
            stw(vu, ctx, cyc, qaddr(vi14, 0), vi15, 0x4u);
        }
        ++cyc;
        // pc_10F0
        s10D8_3 = cyc;
        const int32_t bk10D8_3 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_10F8
        s10D8_4 = cyc;
        {
            vi10 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 0u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1100
        s10D8_5 = cyc;
        {
            vi11 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 4u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1108
        s10D8_6 = cyc;
        {
            vi12 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 8u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1110
        s10D8_7 = cyc;
        {
            vi13 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 12u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1118
        s10D8_8 = cyc;
        const int32_t bk10D8_8 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1120
        s10D8_9 = cyc;
        {
            vi6 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 0u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1128
        s10D8_10 = cyc;
        {
            vi7 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 4u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1130
        s10D8_11 = cyc;
        {
            vi8 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 8u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1138
        s10D8_12 = cyc;
        {
            vi9 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 12u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1140
        s10D8_13 = cyc;
        const int32_t bk10D8_13 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1148
        s10D8_14 = cyc;
        {
            vi2 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 0u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1150
        s10D8_15 = cyc;
        {
            vi3 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 4u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1158
        s10D8_16 = cyc;
        {
            vi4 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 8u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1160
        s10D8_17 = cyc;
        {
            vi5 = static_cast<int16_t>(ldw(mem, qaddr(vi14, 0) + 12u) & 0xFFFFu);
        }
        ++cyc;
        // pc_1168
        s10D8_18 = cyc;
        const int32_t bk10D8_18 = vi14;
        {
            vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1170
        s10D8_19 = cyc;
        const int32_t bk10D8_19 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[31], lv); vn31 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1178
        s10D8_20 = cyc;
        const int32_t bk10D8_20 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[30], lv); vn30 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1180
        s10D8_21 = cyc;
        const int32_t bk10D8_21 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[29], lv); vn29 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1188
        s10D8_22 = cyc;
        const int32_t bk10D8_22 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[28], lv); vn28 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1190
        s10D8_23 = cyc;
        const int32_t bk10D8_23 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[27], lv); vn27 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_1198
        s10D8_24 = cyc;
        const int32_t bk10D8_24 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[26], lv); vn26 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_11A0
        s10D8_25 = cyc;
        const int32_t bk10D8_25 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[25], lv); vn25 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_11A8
        s10D8_26 = cyc;
        const int32_t bk10D8_26 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[24], lv); vn24 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_11B0
        s10D8_27 = cyc;
        const int32_t bk10D8_27 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[23], lv); vn23 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_11B8
        s10D8_28 = cyc;
        const int32_t bk10D8_28 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[21], lv); vn21 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_11C0
        s10D8_29 = cyc;
        const int32_t bk10D8_29 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[17], lv); vn17 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_11C8
        s10D8_30 = cyc;
        const int32_t bk10D8_30 = vi14;
        {
            { const __m128 lv = ldq(mem, qaddr(vi14, 0)); _mm_storeu_ps(vu.m_state.vf[5], lv); vn5 = vnorm(lv); }vi14 = static_cast<int16_t>(vi14 + 1);
        }
        ++cyc;
        // pc_11D0
        s10D8_31 = cyc;
        {
        }
        ++cyc;
        // pc_11D8
        s10D8_32 = cyc;
        {
            jt = (static_cast<uint32_t>(static_cast<uint16_t>(vi1)) * 8u) & 0x3FFFu;
        }
        ++cyc;
        s10D8_33 = cyc;
        {
        }
        ++cyc;
 _mm_store_ps(ctx.norm[5], vn5);
 _mm_store_ps(ctx.norm[17], vn17);
 _mm_store_ps(ctx.norm[21], vn21);
 _mm_store_ps(ctx.norm[23], vn23);
 _mm_store_ps(ctx.norm[24], vn24);
 _mm_store_ps(ctx.norm[25], vn25);
 _mm_store_ps(ctx.norm[26], vn26);
 _mm_store_ps(ctx.norm[27], vn27);
 _mm_store_ps(ctx.norm[28], vn28);
 _mm_store_ps(ctx.norm[29], vn29);
 _mm_store_ps(ctx.norm[30], vn30);
 _mm_store_ps(ctx.norm[31], vn31);
        vu.m_state.vi[1] = vi1;
        vu.m_state.vi[2] = vi2;
        vu.m_state.vi[3] = vi3;
        vu.m_state.vi[4] = vi4;
        vu.m_state.vi[5] = vi5;
        vu.m_state.vi[6] = vi6;
        vu.m_state.vi[7] = vi7;
        vu.m_state.vi[8] = vi8;
        vu.m_state.vi[9] = vi9;
        vu.m_state.vi[10] = vi10;
        vu.m_state.vi[11] = vi11;
        vu.m_state.vi[12] = vi12;
        vu.m_state.vi[13] = vi13;
        vu.m_state.vi[14] = vi14;
        vu.m_viBranchBackupValid = false;
        { epc = jt; goto exit_continue; }
    }
seg_11E0:
        if (cyc + 6u > budget) goto pc_11E0;
    {
        uint64_t s11E0_0 = 0u, s11E0_1 = 0u, s11E0_2 = 0u;
        // pc_11E0
        s11E0_0 = cyc;
        {
        }
        ++cyc;
        // pc_11E8
        s11E0_1 = cyc;
        {
        }
        ++cyc;
        // pc_11F0
        s11E0_2 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        { epc = 0x11F8u; goto exit_continue; }
    }
seg_11E8:
        if (cyc + 5u > budget) goto pc_11E8;
    {
        uint64_t s11E8_0 = 0u, s11E8_1 = 0u;
        // pc_11E8
        s11E8_0 = cyc;
        {
        }
        ++cyc;
        // pc_11F0
        s11E8_1 = cyc;
        {
        }
        ++cyc;
        vu.m_viBranchBackupValid = false;
        { epc = 0x11F8u; goto exit_continue; }
    }
exit_budget:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Budget;
exit_continue:
    ctx.cycle = cyc;
    vu.m_state.pc = epc;
    return StepResult::Continue;
}

