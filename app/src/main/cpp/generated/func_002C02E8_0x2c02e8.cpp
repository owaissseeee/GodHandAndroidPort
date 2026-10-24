#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_002C02E8
// Address: 0x2c02e8 - 0x2c05b0
void func_002C02E8_0x2c02e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C02E8_0x2c02e8");
#endif

    switch (ctx->pc) {
        case 0x2c0358u: goto label_2c0358;
        case 0x2c0394u: goto label_2c0394;
        case 0x2c03d4u: goto label_2c03d4;
        case 0x2c0410u: goto label_2c0410;
        case 0x2c041cu: goto label_2c041c;
        case 0x2c045cu: goto label_2c045c;
        case 0x2c04d4u: goto label_2c04d4;
        case 0x2c04dcu: goto label_2c04dc;
        case 0x2c04e8u: goto label_2c04e8;
        case 0x2c057cu: goto label_2c057c;
        default: break;
    }

    ctx->pc = 0x2c02e8u;

    // 0x2c02e8: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x2c02e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x2c02ec: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2c02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2c02f0: 0x7fb30210  sq          $s3, 0x210($sp)
    ctx->pc = 0x2c02f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 19));
    // 0x2c02f4: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x2c02f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2c02f8: 0x8c439b70  lw          $v1, -0x6490($v0)
    ctx->pc = 0x2c02f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x569B70u));
    // 0x2c02fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c02fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0300: 0x7fb00240  sq          $s0, 0x240($sp)
    ctx->pc = 0x2c0300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 16));
    // 0x2c0304: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2c0304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2c0308: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c0308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c030c: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x2c030cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2c0310: 0x27a80190  addiu       $t0, $sp, 0x190
    ctx->pc = 0x2c0310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x2c0314: 0x7fb20220  sq          $s2, 0x220($sp)
    ctx->pc = 0x2c0314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 18));
    // 0x2c0318: 0x7fb40200  sq          $s4, 0x200($sp)
    ctx->pc = 0x2c0318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 20));
    // 0x2c031c: 0x24620270  addiu       $v0, $v1, 0x270
    ctx->pc = 0x2c031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 624));
    // 0x2c0320: 0x7fb10230  sq          $s1, 0x230($sp)
    ctx->pc = 0x2c0320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 17));
    // 0x2c0324: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c0324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0328: 0x7fb501f0  sq          $s5, 0x1F0($sp)
    ctx->pc = 0x2c0328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 21));
    // 0x2c032c: 0x27b200e0  addiu       $s2, $sp, 0xE0
    ctx->pc = 0x2c032cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2c0330: 0x7fb601e0  sq          $s6, 0x1E0($sp)
    ctx->pc = 0x2c0330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 22));
    // 0x2c0334: 0x246301b0  addiu       $v1, $v1, 0x1B0
    ctx->pc = 0x2c0334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 432));
    // 0x2c0338: 0x7fb701d0  sq          $s7, 0x1D0($sp)
    ctx->pc = 0x2c0338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 23));
    // 0x2c033c: 0x27b400c0  addiu       $s4, $sp, 0xC0
    ctx->pc = 0x2c033cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2c0340: 0x7fbe01c0  sq          $fp, 0x1C0($sp)
    ctx->pc = 0x2c0340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 30));
    // 0x2c0344: 0xffbf01b0  sd          $ra, 0x1B0($sp)
    ctx->pc = 0x2c0344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 31));
    // 0x2c0348: 0xafa401a8  sw          $a0, 0x1A8($sp)
    ctx->pc = 0x2c0348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 4));
    // 0x2c034c: 0xafa601ac  sw          $a2, 0x1AC($sp)
    ctx->pc = 0x2c034cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 6));
    // 0x2c0350: 0xafa701a0  sw          $a3, 0x1A0($sp)
    ctx->pc = 0x2c0350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 7));
    // 0x2c0354: 0xafa801a4  sw          $t0, 0x1A4($sp)
    ctx->pc = 0x2c0354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 8));
label_2c0358:
    // 0x2c0358: 0x78690000  lq          $t1, 0x0($v1)
    ctx->pc = 0x2c0358u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c035c: 0x78640010  lq          $a0, 0x10($v1)
    ctx->pc = 0x2c035cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c0360: 0x7ca90000  sq          $t1, 0x0($a1)
    ctx->pc = 0x2c0360u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 9));
    // 0x2c0364: 0x7ca40010  sq          $a0, 0x10($a1)
    ctx->pc = 0x2c0364u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 4));
    // 0x2c0368: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2c0368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2c036c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C036Cu;
    {
        const bool branch_taken_0x2c036c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C036Cu;
        // 0x2c0370: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c036c) {
            ctx->pc = 0x2C0358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0358;
        }
    }
    ctx->pc = 0x2C0374u;
    // 0x2c0374: 0x8e029b70  lw          $v0, -0x6490($s0)
    ctx->pc = 0x2c0374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
    // 0x2c0378: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c037c: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x2c037cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0380: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x2c0380u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c0384: 0x7ca80000  sq          $t0, 0x0($a1)
    ctx->pc = 0x2c0384u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 8));
    // 0x2c0388: 0xfca90010  sd          $t1, 0x10($a1)
    ctx->pc = 0x2c0388u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 9));
    // 0x2c038c: 0x24430130  addiu       $v1, $v0, 0x130
    ctx->pc = 0x2c038cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
    // 0x2c0390: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2c0390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_2c0394:
    // 0x2c0394: 0x78480000  lq          $t0, 0x0($v0)
    ctx->pc = 0x2c0394u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0398: 0x78490010  lq          $t1, 0x10($v0)
    ctx->pc = 0x2c0398u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c039c: 0x7c880000  sq          $t0, 0x0($a0)
    ctx->pc = 0x2c039cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 8));
    // 0x2c03a0: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x2c03a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x2c03a4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2c03a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2c03a8: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C03A8u;
    {
        const bool branch_taken_0x2c03a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C03A8u;
        // 0x2c03ac: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c03a8) {
            ctx->pc = 0x2C0394u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0394;
        }
    }
    ctx->pc = 0x2C03B0u;
    // 0x2c03b0: 0x8e049b70  lw          $a0, -0x6490($s0)
    ctx->pc = 0x2c03b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
    // 0x2c03b4: 0xdc820098  ld          $v0, 0x98($a0)
    ctx->pc = 0x2c03b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x2c03b8: 0xffa20160  sd          $v0, 0x160($sp)
    ctx->pc = 0x2c03b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 2));
    // 0x2c03bc: 0x948300a0  lhu         $v1, 0xA0($a0)
    ctx->pc = 0x2c03bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x2c03c0: 0xa7a30168  sh          $v1, 0x168($sp)
    ctx->pc = 0x2c03c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 360), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c03c4: 0x949e0bba  lhu         $fp, 0xBBA($a0)
    ctx->pc = 0x2c03c4u;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3002)));
    // 0x2c03c8: 0x8c960170  lw          $s6, 0x170($a0)
    ctx->pc = 0x2c03c8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 368)));
    // 0x2c03cc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2C03CCu;
    SET_GPR_U32(ctx, 31, 0x2C03D4u);
    ctx->pc = 0x2C03D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C03CCu;
    // 0x2c03d0: 0x8c970174  lw          $s7, 0x174($a0) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C03CCu, 0x2C03D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C03D4u;
label_2c03d4:
    // 0x2c03d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c03d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c03d8: 0x8e2206a8  lw          $v0, 0x6A8($s1)
    ctx->pc = 0x2c03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
    // 0x2c03dc: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x2c03dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2c03e0: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x2c03e0u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c03e4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2c03e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c03e8: 0xfba40170  sqc2        $vf4, 0x170($sp)
    ctx->pc = 0x2c03e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c03ec: 0x26220490  addiu       $v0, $s1, 0x490
    ctx->pc = 0x2c03ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
    // 0x2c03f0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2c03f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c03f4: 0xfba40180  sqc2        $vf4, 0x180($sp)
    ctx->pc = 0x2c03f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c03f8: 0x26230100  addiu       $v1, $s1, 0x100
    ctx->pc = 0x2c03f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x2c03fc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2c03fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0400: 0xfba40190  sqc2        $vf4, 0x190($sp)
    ctx->pc = 0x2c0400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2c0404: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c0404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0408: 0xc0b01b4  jal         func_2C06D0
    ctx->pc = 0x2C0408u;
    SET_GPR_U32(ctx, 31, 0x2C0410u);
    ctx->pc = 0x2C040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0408u;
    // 0x2c040c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C06D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C06D0u, 0x2C0408u, 0x2C0410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0410u;
label_2c0410:
    // 0x2c0410: 0x8e029b70  lw          $v0, -0x6490($s0)
    ctx->pc = 0x2c0410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
    // 0x2c0414: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2c0414u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0418: 0x244201b0  addiu       $v0, $v0, 0x1B0
    ctx->pc = 0x2c0418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
label_2c041c:
    // 0x2c041c: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x2c041cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0420: 0x78680010  lq          $t0, 0x10($v1)
    ctx->pc = 0x2c0420u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c0424: 0x7c470000  sq          $a3, 0x0($v0)
    ctx->pc = 0x2c0424u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 7));
    // 0x2c0428: 0x7c480010  sq          $t0, 0x10($v0)
    ctx->pc = 0x2c0428u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 8));
    // 0x2c042c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2c042cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2c0430: 0x1474fffa  bne         $v1, $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C0430u;
    {
        const bool branch_taken_0x2c0430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x2C0434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0430u;
        // 0x2c0434: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0430) {
            ctx->pc = 0x2C041Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c041c;
        }
    }
    ctx->pc = 0x2C0438u;
    // 0x2c0438: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x2c0438u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c043c: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x2c043cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c0440: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x2c0440u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x2c0444: 0x26330100  addiu       $s3, $s1, 0x100
    ctx->pc = 0x2c0444u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x2c0448: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x2c0448u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x2c044c: 0x8e029b70  lw          $v0, -0x6490($s0)
    ctx->pc = 0x2c044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
    // 0x2c0450: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2c0450u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0454: 0x26320490  addiu       $s2, $s1, 0x490
    ctx->pc = 0x2c0454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
    // 0x2c0458: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2c0458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_2c045c:
    // 0x2c045c: 0x78690000  lq          $t1, 0x0($v1)
    ctx->pc = 0x2c045cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0460: 0x78640010  lq          $a0, 0x10($v1)
    ctx->pc = 0x2c0460u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2c0464: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x2c0464u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x2c0468: 0x7c440010  sq          $a0, 0x10($v0)
    ctx->pc = 0x2c0468u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 4));
    // 0x2c046c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2c046cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2c0470: 0x8fa701a8  lw          $a3, 0x1A8($sp)
    ctx->pc = 0x2c0470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2c0474: 0x1467fff9  bne         $v1, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C0474u;
    {
        const bool branch_taken_0x2c0474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x2C0478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0474u;
        // 0x2c0478: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0474) {
            ctx->pc = 0x2C045Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c045c;
        }
    }
    ctx->pc = 0x2C047Cu;
    // 0x2c047c: 0x8e049b70  lw          $a0, -0x6490($s0)
    ctx->pc = 0x2c047cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
    // 0x2c0480: 0xdfa20160  ld          $v0, 0x160($sp)
    ctx->pc = 0x2c0480u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2c0484: 0xfc820098  sd          $v0, 0x98($a0)
    ctx->pc = 0x2c0484u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 152), GPR_U64(ctx, 2));
    // 0x2c0488: 0x97a30168  lhu         $v1, 0x168($sp)
    ctx->pc = 0x2c0488u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2c048c: 0xa48300a0  sh          $v1, 0xA0($a0)
    ctx->pc = 0x2c048cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c0490: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c0490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c0494: 0x8e029b70  lw          $v0, -0x6490($s0)
    ctx->pc = 0x2c0494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
    // 0x2c0498: 0xac560170  sw          $s6, 0x170($v0)
    ctx->pc = 0x2c0498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 368), GPR_U32(ctx, 22));
    // 0x2c049c: 0x8e039b70  lw          $v1, -0x6490($s0)
    ctx->pc = 0x2c049cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
    // 0x2c04a0: 0xac770174  sw          $s7, 0x174($v1)
    ctx->pc = 0x2c04a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 372), GPR_U32(ctx, 23));
    // 0x2c04a4: 0x8e029b70  lw          $v0, -0x6490($s0)
    ctx->pc = 0x2c04a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
    // 0x2c04a8: 0xa0550157  sb          $s5, 0x157($v0)
    ctx->pc = 0x2c04a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 343), (uint8_t)GPR_U32(ctx, 21));
    // 0x2c04ac: 0x8e039b70  lw          $v1, -0x6490($s0)
    ctx->pc = 0x2c04acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
    // 0x2c04b0: 0xa47e0bba  sh          $fp, 0xBBA($v1)
    ctx->pc = 0x2c04b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3002), (uint16_t)GPR_U32(ctx, 30));
    // 0x2c04b4: 0x9c828240  lwu         $v0, -0x7DC0($a0)
    ctx->pc = 0x2c04b4u;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x568240u));
    // 0x2c04b8: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2c04b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2c04bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c04bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c04c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C04C0u;
    {
        const bool branch_taken_0x2c04c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C04C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C04C0u;
        // 0x2c04c4: 0x26149b70  addiu       $s4, $s0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c04c0) {
            ctx->pc = 0x2C04D4u;
            goto label_2c04d4;
        }
    }
    ctx->pc = 0x2C04C8u;
    // 0x2c04c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c04c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04cc: 0xc07eb26  jal         func_1FAC98
    ctx->pc = 0x2C04CCu;
    SET_GPR_U32(ctx, 31, 0x2C04D4u);
    ctx->pc = 0x2C04D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C04CCu;
    // 0x2c04d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC98u, 0x2C04CCu, 0x2C04D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C04D4u;
label_2c04d4:
    // 0x2c04d4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2C04D4u;
    SET_GPR_U32(ctx, 31, 0x2C04DCu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C04D4u, 0x2C04DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C04DCu;
label_2c04dc:
    // 0x2c04dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c04dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04e0: 0xc07eb1a  jal         func_1FAC68
    ctx->pc = 0x2C04E0u;
    SET_GPR_U32(ctx, 31, 0x2C04E8u);
    ctx->pc = 0x2C04E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C04E0u;
    // 0x2c04e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC68u, 0x2C04E0u, 0x2C04E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C04E8u;
label_2c04e8:
    // 0x2c04e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c04e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c04ec: 0x86020548  lh          $v0, 0x548($s0)
    ctx->pc = 0x2c04ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
    // 0x2c04f0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2c04f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c04f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C04F4u;
    {
        const bool branch_taken_0x2c04f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C04F4u;
        // 0x2c04f8: 0x96040548  lhu         $a0, 0x548($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c04f4) {
            ctx->pc = 0x2C0504u;
            goto label_2c0504;
        }
    }
    ctx->pc = 0x2C04FCu;
    // 0x2c04fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C04FCu;
    {
        const bool branch_taken_0x2c04fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C04FCu;
        // 0x2c0500: 0xa604054a  sh          $a0, 0x54A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c04fc) {
            ctx->pc = 0x2C0508u;
            goto label_2c0508;
        }
    }
    ctx->pc = 0x2C0504u;
label_2c0504:
    // 0x2c0504: 0xa603054a  sh          $v1, 0x54A($s0)
    ctx->pc = 0x2c0504u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 3));
label_2c0508:
    // 0x2c0508: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2c0508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2c050c: 0x8fa801ac  lw          $t0, 0x1AC($sp)
    ctx->pc = 0x2c050cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x2c0510: 0x10480006  beq         $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0510u;
    {
        const bool branch_taken_0x2c0510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        ctx->pc = 0x2C0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0510u;
        // 0x2c0514: 0xc7a00170  lwc1        $f0, 0x170($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0510) {
            ctx->pc = 0x2C052Cu;
            goto label_2c052c;
        }
    }
    ctx->pc = 0x2C0518u;
    // 0x2c0518: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2c0518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c051c: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x2c051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0520: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c0520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c0524: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x2c0524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0528: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c0528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2c052c:
    // 0x2c052c: 0x8fa901a0  lw          $t1, 0x1A0($sp)
    ctx->pc = 0x2c052cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2c0530: 0x12490006  beq         $s2, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0530u;
    {
        const bool branch_taken_0x2c0530 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 9));
        ctx->pc = 0x2C0534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0530u;
        // 0x2c0534: 0xc7a00180  lwc1        $f0, 0x180($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0530) {
            ctx->pc = 0x2C054Cu;
            goto label_2c054c;
        }
    }
    ctx->pc = 0x2C0538u;
    // 0x2c0538: 0xe6200490  swc1        $f0, 0x490($s1)
    ctx->pc = 0x2c0538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1168), bits); }
    // 0x2c053c: 0xc7a10184  lwc1        $f1, 0x184($sp)
    ctx->pc = 0x2c053cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0540: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2c0540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2c0544: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x2c0544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0548: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2c0548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_2c054c:
    // 0x2c054c: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x2c054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x2c0550: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0550u;
    {
        const bool branch_taken_0x2c0550 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0550u;
        // 0x2c0554: 0xc7a00190  lwc1        $f0, 0x190($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0550) {
            ctx->pc = 0x2C056Cu;
            goto label_2c056c;
        }
    }
    ctx->pc = 0x2C0558u;
    // 0x2c0558: 0xe6200100  swc1        $f0, 0x100($s1)
    ctx->pc = 0x2c0558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 256), bits); }
    // 0x2c055c: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x2c055cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0560: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x2c0560u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2c0564: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x2c0564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0568: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x2c0568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_2c056c:
    // 0x2c056c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c056cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c0570: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x2c0570u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x2c0574: 0xc050d2a  jal         func_1434A8
    ctx->pc = 0x2C0574u;
    SET_GPR_U32(ctx, 31, 0x2C057Cu);
    ctx->pc = 0x2C0578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0574u;
    // 0x2c0578: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434A8u, 0x2C0574u, 0x2C057Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C057Cu;
label_2c057c:
    // 0x2c057c: 0x7bb00240  lq          $s0, 0x240($sp)
    ctx->pc = 0x2c057cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2c0580: 0x7bb10230  lq          $s1, 0x230($sp)
    ctx->pc = 0x2c0580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2c0584: 0x7bb20220  lq          $s2, 0x220($sp)
    ctx->pc = 0x2c0584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2c0588: 0x7bb30210  lq          $s3, 0x210($sp)
    ctx->pc = 0x2c0588u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c058c: 0x7bb40200  lq          $s4, 0x200($sp)
    ctx->pc = 0x2c058cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x2c0590: 0x7bb501f0  lq          $s5, 0x1F0($sp)
    ctx->pc = 0x2c0590u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2c0594: 0x7bb601e0  lq          $s6, 0x1E0($sp)
    ctx->pc = 0x2c0594u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2c0598: 0x7bb701d0  lq          $s7, 0x1D0($sp)
    ctx->pc = 0x2c0598u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2c059c: 0x7bbe01c0  lq          $fp, 0x1C0($sp)
    ctx->pc = 0x2c059cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2c05a0: 0xdfbf01b0  ld          $ra, 0x1B0($sp)
    ctx->pc = 0x2c05a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x2c05a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C05A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C05A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C05A4u;
        // 0x2c05a8: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C05A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C05ACu;
    // 0x2c05ac: 0x0  nop
    ctx->pc = 0x2c05acu;
    // NOP
    ctx->pc = 0x2c05b0u;
}
