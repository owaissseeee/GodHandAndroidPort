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

// Function: func_0028D7E8
// Address: 0x28d7e8 - 0x28dfc8
void func_0028D7E8_0x28d7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028D7E8_0x28d7e8");
#endif

    switch (ctx->pc) {
        case 0x28d980u: goto label_28d980;
        case 0x28d9a8u: goto label_28d9a8;
        case 0x28d9ccu: goto label_28d9cc;
        case 0x28d9f0u: goto label_28d9f0;
        case 0x28da14u: goto label_28da14;
        case 0x28da38u: goto label_28da38;
        case 0x28da5cu: goto label_28da5c;
        case 0x28da80u: goto label_28da80;
        case 0x28daacu: goto label_28daac;
        case 0x28dad8u: goto label_28dad8;
        case 0x28db04u: goto label_28db04;
        case 0x28db30u: goto label_28db30;
        case 0x28db54u: goto label_28db54;
        case 0x28db80u: goto label_28db80;
        case 0x28dbacu: goto label_28dbac;
        case 0x28dbd8u: goto label_28dbd8;
        case 0x28dc34u: goto label_28dc34;
        case 0x28dc58u: goto label_28dc58;
        case 0x28dc7cu: goto label_28dc7c;
        case 0x28dcb0u: goto label_28dcb0;
        case 0x28dcd8u: goto label_28dcd8;
        case 0x28de64u: goto label_28de64;
        case 0x28df88u: goto label_28df88;
        default: break;
    }

    ctx->pc = 0x28d7e8u;

    // 0x28d7e8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x28d7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x28d7ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28d7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28d7f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28d7f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d7f4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x28d7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x28d7f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28d7f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d7fc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x28d7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x28d800: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x28d800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x28d804: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x28d804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x28d808: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x28d808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x28d80c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28d80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x28d810: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x28d810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28d814: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x28d814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28d818: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x28d818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x28d81c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x28d81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x28d820: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x28d820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28d824: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x28d824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28d828: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x28d828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28d82c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x28d82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x28d830: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x28d830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x28d834: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x28d834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28d838: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x28d838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28d83c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x28d83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28d840: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28d840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x28d844: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x28d844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x28d848: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x28d848u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x28d84c: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x28d84cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x28d850: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x28d850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x28d854: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x28d854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x28d858: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x28d858u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x28d85c: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x28d85cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x28d860: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x28d860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x28d864: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x28d864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28d868: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x28d868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x28d86c: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x28d86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d870: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x28d870u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x28d874: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x28d874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x28d878: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x28d878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x28d87c: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x28d87cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x28d880: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x28d880u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x28d884: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28D884u;
    {
        const bool branch_taken_0x28d884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D884u;
        // 0x28d888: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d884) {
            ctx->pc = 0x28D8A8u;
            goto label_28d8a8;
        }
    }
    ctx->pc = 0x28D88Cu;
    // 0x28d88c: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x28d88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
    // 0x28d890: 0x104001c5  beqz        $v0, . + 4 + (0x1C5 << 2)
    ctx->pc = 0x28D890u;
    {
        const bool branch_taken_0x28d890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D890u;
        // 0x28d894: 0x2402020b  addiu       $v0, $zero, 0x20B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d890) {
            ctx->pc = 0x28DFA8u;
            goto label_28dfa8;
        }
    }
    ctx->pc = 0x28D898u;
    // 0x28d898: 0x106201c3  beq         $v1, $v0, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x28D898u;
    {
        const bool branch_taken_0x28d898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D898u;
        // 0x28d89c: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d898) {
            ctx->pc = 0x28DFA8u;
            goto label_28dfa8;
        }
    }
    ctx->pc = 0x28D8A0u;
    // 0x28d8a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28D8A0u;
    {
        const bool branch_taken_0x28d8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d8a0) {
            ctx->pc = 0x28D8ACu;
            goto label_28d8ac;
        }
    }
    ctx->pc = 0x28D8A8u;
label_28d8a8:
    // 0x28d8a8: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x28d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_28d8ac:
    // 0x28d8ac: 0x506201bf  beql        $v1, $v0, . + 4 + (0x1BF << 2)
    ctx->pc = 0x28D8ACu;
    {
        const bool branch_taken_0x28d8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x28d8ac) {
            ctx->pc = 0x28D8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D8ACu;
            // 0x28d8b0: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DFACu;
            goto label_28dfac;
        }
    }
    ctx->pc = 0x28D8B4u;
    // 0x28d8b4: 0x8e031550  lw          $v1, 0x1550($s0)
    ctx->pc = 0x28d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5456)));
    // 0x28d8b8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D8B8u;
    {
        const bool branch_taken_0x28d8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d8b8) {
            ctx->pc = 0x28D8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D8B8u;
            // 0x28d8bc: 0x8e031554  lw          $v1, 0x1554($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D8D0u;
            goto label_28d8d0;
        }
    }
    ctx->pc = 0x28D8C0u;
    // 0x28d8c0: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x28d8c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28d8c8: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28d8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x28d8cc: 0x8e031554  lw          $v1, 0x1554($s0)
    ctx->pc = 0x28d8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5460)));
label_28d8d0:
    // 0x28d8d0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D8D0u;
    {
        const bool branch_taken_0x28d8d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d8d0) {
            ctx->pc = 0x28D8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D8D0u;
            // 0x28d8d4: 0x8e031558  lw          $v1, 0x1558($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D8E8u;
            goto label_28d8e8;
        }
    }
    ctx->pc = 0x28D8D8u;
    // 0x28d8d8: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x28d8dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28d8e0: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28d8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x28d8e4: 0x8e031558  lw          $v1, 0x1558($s0)
    ctx->pc = 0x28d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5464)));
label_28d8e8:
    // 0x28d8e8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D8E8u;
    {
        const bool branch_taken_0x28d8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d8e8) {
            ctx->pc = 0x28D8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D8E8u;
            // 0x28d8ec: 0x8e031560  lw          $v1, 0x1560($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D900u;
            goto label_28d900;
        }
    }
    ctx->pc = 0x28D8F0u;
    // 0x28d8f0: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x28d8f4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28d8f8: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x28d8fc: 0x8e031560  lw          $v1, 0x1560($s0)
    ctx->pc = 0x28d8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5472)));
label_28d900:
    // 0x28d900: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D900u;
    {
        const bool branch_taken_0x28d900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d900) {
            ctx->pc = 0x28D904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D900u;
            // 0x28d904: 0x8e031564  lw          $v1, 0x1564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D918u;
            goto label_28d918;
        }
    }
    ctx->pc = 0x28D908u;
    // 0x28d908: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28d908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x28d90c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28d910: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28d910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x28d914: 0x8e031564  lw          $v1, 0x1564($s0)
    ctx->pc = 0x28d914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5476)));
label_28d918:
    // 0x28d918: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D918u;
    {
        const bool branch_taken_0x28d918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d918) {
            ctx->pc = 0x28D91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D918u;
            // 0x28d91c: 0x8e031568  lw          $v1, 0x1568($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D930u;
            goto label_28d930;
        }
    }
    ctx->pc = 0x28D920u;
    // 0x28d920: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28d920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x28d924: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28d928: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28d928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x28d92c: 0x8e031568  lw          $v1, 0x1568($s0)
    ctx->pc = 0x28d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5480)));
label_28d930:
    // 0x28d930: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D930u;
    {
        const bool branch_taken_0x28d930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d930) {
            ctx->pc = 0x28D934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D930u;
            // 0x28d934: 0x8e020564  lw          $v0, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D948u;
            goto label_28d948;
        }
    }
    ctx->pc = 0x28D938u;
    // 0x28d938: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x28d938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x28d93c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28d940: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x28d940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x28d944: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x28d944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_28d948:
    // 0x28d948: 0x2444fdbe  addiu       $a0, $v0, -0x242
    ctx->pc = 0x28d948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966718));
    // 0x28d94c: 0x2c830035  sltiu       $v1, $a0, 0x35
    ctx->pc = 0x28d94cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)53) ? 1 : 0);
    // 0x28d950: 0x106000e7  beqz        $v1, . + 4 + (0xE7 << 2)
    ctx->pc = 0x28D950u;
    {
        const bool branch_taken_0x28d950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D950u;
        // 0x28d954: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d950) {
            ctx->pc = 0x28DCF0u;
            goto label_28dcf0;
        }
    }
    ctx->pc = 0x28D958u;
    // 0x28d958: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x28d958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28d95c: 0x2442a330  addiu       $v0, $v0, -0x5CD0
    ctx->pc = 0x28d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943536));
    // 0x28d960: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28d960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28d964: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28d964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28d968: 0x800008  jr          $a0
    ctx->pc = 0x28D968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D970u: goto label_28d970;
            case 0x28D998u: goto label_28d998;
            case 0x28DBFCu: goto label_28dbfc;
            case 0x28DC24u: goto label_28dc24;
            case 0x28DCA0u: goto label_28dca0;
            case 0x28DCF0u: goto label_28dcf0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D968u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28D970u;
label_28d970:
    // 0x28d970: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28d970u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x28d974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d978: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28D978u;
    SET_GPR_U32(ctx, 31, 0x28D980u);
    ctx->pc = 0x28D97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D978u;
    // 0x28d97c: 0x24a5a2b0  addiu       $a1, $a1, -0x5D50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28D978u, 0x28D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D980u;
label_28d980:
    // 0x28d980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28d980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d984: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D984u;
    {
        const bool branch_taken_0x28d984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d984) {
            ctx->pc = 0x28D988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D984u;
            // 0x28d988: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D99Cu;
            goto label_28d99c;
        }
    }
    ctx->pc = 0x28D98Cu;
    // 0x28d98c: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28d990: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28d994: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28d994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_28d998:
    // 0x28d998: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28d998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_28d99c:
    // 0x28d99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9a0: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28D9A0u;
    SET_GPR_U32(ctx, 31, 0x28D9A8u);
    ctx->pc = 0x28D9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D9A0u;
    // 0x28d9a4: 0x24a5a2b8  addiu       $a1, $a1, -0x5D48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28D9A0u, 0x28D9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D9A8u;
label_28d9a8:
    // 0x28d9a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28d9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D9ACu;
    {
        const bool branch_taken_0x28d9ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9ACu;
        // 0x28d9b0: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9ac) {
            ctx->pc = 0x28D9C0u;
            goto label_28d9c0;
        }
    }
    ctx->pc = 0x28D9B4u;
    // 0x28d9b4: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28d9b8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28d9bc: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28d9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_28d9c0:
    // 0x28d9c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9c4: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28D9C4u;
    SET_GPR_U32(ctx, 31, 0x28D9CCu);
    ctx->pc = 0x28D9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D9C4u;
    // 0x28d9c8: 0x24a5a2c0  addiu       $a1, $a1, -0x5D40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28D9C4u, 0x28D9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D9CCu;
label_28d9cc:
    // 0x28d9cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28d9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9d0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D9D0u;
    {
        const bool branch_taken_0x28d9d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9D0u;
        // 0x28d9d4: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9d0) {
            ctx->pc = 0x28D9E4u;
            goto label_28d9e4;
        }
    }
    ctx->pc = 0x28D9D8u;
    // 0x28d9d8: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28d9dc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28d9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28d9e0: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28d9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_28d9e4:
    // 0x28d9e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28d9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9e8: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28D9E8u;
    SET_GPR_U32(ctx, 31, 0x28D9F0u);
    ctx->pc = 0x28D9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D9E8u;
    // 0x28d9ec: 0x24a5a2c8  addiu       $a1, $a1, -0x5D38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28D9E8u, 0x28D9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D9F0u;
label_28d9f0:
    // 0x28d9f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28d9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d9f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D9F4u;
    {
        const bool branch_taken_0x28d9f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D9F4u;
        // 0x28d9f8: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d9f4) {
            ctx->pc = 0x28DA08u;
            goto label_28da08;
        }
    }
    ctx->pc = 0x28D9FCu;
    // 0x28d9fc: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28da00: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28da00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28da04: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28da04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_28da08:
    // 0x28da08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28da08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da0c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DA0Cu;
    SET_GPR_U32(ctx, 31, 0x28DA14u);
    ctx->pc = 0x28DA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA0Cu;
    // 0x28da10: 0x24a5a2d0  addiu       $a1, $a1, -0x5D30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DA0Cu, 0x28DA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA14u;
label_28da14:
    // 0x28da14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28da14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da18: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DA18u;
    {
        const bool branch_taken_0x28da18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA18u;
        // 0x28da1c: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da18) {
            ctx->pc = 0x28DA2Cu;
            goto label_28da2c;
        }
    }
    ctx->pc = 0x28DA20u;
    // 0x28da20: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28da24: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28da24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28da28: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28da28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_28da2c:
    // 0x28da2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28da2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da30: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DA30u;
    SET_GPR_U32(ctx, 31, 0x28DA38u);
    ctx->pc = 0x28DA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA30u;
    // 0x28da34: 0x24a5a2d8  addiu       $a1, $a1, -0x5D28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DA30u, 0x28DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA38u;
label_28da38:
    // 0x28da38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28da38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da3c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DA3Cu;
    {
        const bool branch_taken_0x28da3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA3Cu;
        // 0x28da40: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da3c) {
            ctx->pc = 0x28DA50u;
            goto label_28da50;
        }
    }
    ctx->pc = 0x28DA44u;
    // 0x28da44: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28da44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28da48: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28da48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28da4c: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_28da50:
    // 0x28da50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28da50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da54: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DA54u;
    SET_GPR_U32(ctx, 31, 0x28DA5Cu);
    ctx->pc = 0x28DA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA54u;
    // 0x28da58: 0x24a5a2e0  addiu       $a1, $a1, -0x5D20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DA54u, 0x28DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA5Cu;
label_28da5c:
    // 0x28da5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28da5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da60: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DA60u;
    {
        const bool branch_taken_0x28da60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA60u;
        // 0x28da64: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da60) {
            ctx->pc = 0x28DA74u;
            goto label_28da74;
        }
    }
    ctx->pc = 0x28DA68u;
    // 0x28da68: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28da6c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28da6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28da70: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28da70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_28da74:
    // 0x28da74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28da74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da78: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DA78u;
    SET_GPR_U32(ctx, 31, 0x28DA80u);
    ctx->pc = 0x28DA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA78u;
    // 0x28da7c: 0x24a5a2e8  addiu       $a1, $a1, -0x5D18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DA78u, 0x28DA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA80u;
label_28da80:
    // 0x28da80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28da80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da84: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DA84u;
    {
        const bool branch_taken_0x28da84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA84u;
        // 0x28da88: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da84) {
            ctx->pc = 0x28DA9Cu;
            goto label_28da9c;
        }
    }
    ctx->pc = 0x28DA8Cu;
    // 0x28da8c: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28da90: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28da90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28da94: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28da94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
    // 0x28da98: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28da98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_28da9c:
    // 0x28da9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28da9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28daa0: 0x2451a2f0  addiu       $s1, $v0, -0x5D10
    ctx->pc = 0x28daa0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943472));
    // 0x28daa4: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DAA4u;
    SET_GPR_U32(ctx, 31, 0x28DAACu);
    ctx->pc = 0x28DAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DAA4u;
    // 0x28daa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DAA4u, 0x28DAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DAACu;
label_28daac:
    // 0x28daac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28daacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dab0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DAB0u;
    {
        const bool branch_taken_0x28dab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DAB0u;
        // 0x28dab4: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dab0) {
            ctx->pc = 0x28DAC8u;
            goto label_28dac8;
        }
    }
    ctx->pc = 0x28DAB8u;
    // 0x28dab8: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28dabc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28dabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28dac0: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
    // 0x28dac4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_28dac8:
    // 0x28dac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28dac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dacc: 0x2452a2f8  addiu       $s2, $v0, -0x5D08
    ctx->pc = 0x28daccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943480));
    // 0x28dad0: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DAD0u;
    SET_GPR_U32(ctx, 31, 0x28DAD8u);
    ctx->pc = 0x28DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DAD0u;
    // 0x28dad4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DAD0u, 0x28DAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DAD8u;
label_28dad8:
    // 0x28dad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28dad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dadc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DADCu;
    {
        const bool branch_taken_0x28dadc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DADCu;
        // 0x28dae0: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dadc) {
            ctx->pc = 0x28DAF4u;
            goto label_28daf4;
        }
    }
    ctx->pc = 0x28DAE4u;
    // 0x28dae4: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28dae8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28dae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28daec: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28daecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
    // 0x28daf0: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_28daf4:
    // 0x28daf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28daf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28daf8: 0x2453a300  addiu       $s3, $v0, -0x5D00
    ctx->pc = 0x28daf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943488));
    // 0x28dafc: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DAFCu;
    SET_GPR_U32(ctx, 31, 0x28DB04u);
    ctx->pc = 0x28DB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DAFCu;
    // 0x28db00: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DAFCu, 0x28DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB04u;
label_28db04:
    // 0x28db04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28db04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DB08u;
    {
        const bool branch_taken_0x28db08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DB08u;
        // 0x28db0c: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28db08) {
            ctx->pc = 0x28DB20u;
            goto label_28db20;
        }
    }
    ctx->pc = 0x28DB10u;
    // 0x28db10: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28db10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28db14: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28db14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28db18: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28db18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
    // 0x28db1c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x28db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_28db20:
    // 0x28db20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28db20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db24: 0x2454a308  addiu       $s4, $v0, -0x5CF8
    ctx->pc = 0x28db24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943496));
    // 0x28db28: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DB28u;
    SET_GPR_U32(ctx, 31, 0x28DB30u);
    ctx->pc = 0x28DB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DB28u;
    // 0x28db2c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DB28u, 0x28DB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB30u;
label_28db30:
    // 0x28db30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28db30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db34: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DB34u;
    {
        const bool branch_taken_0x28db34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28db34) {
            ctx->pc = 0x28DB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DB34u;
            // 0x28db38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DB4Cu;
            goto label_28db4c;
        }
    }
    ctx->pc = 0x28DB3Cu;
    // 0x28db3c: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28db40: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28db40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28db44: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28db44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
    // 0x28db48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28db48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28db4c:
    // 0x28db4c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DB4Cu;
    SET_GPR_U32(ctx, 31, 0x28DB54u);
    ctx->pc = 0x28DB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DB4Cu;
    // 0x28db50: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DB4Cu, 0x28DB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB54u;
label_28db54:
    // 0x28db54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28db54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db58: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28DB58u;
    {
        const bool branch_taken_0x28db58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28db58) {
            ctx->pc = 0x28DB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DB58u;
            // 0x28db5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DB78u;
            goto label_28db78;
        }
    }
    ctx->pc = 0x28DB60u;
    // 0x28db60: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x28db60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28db64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28db64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28db68: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x28db68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x28db6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28db6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28db70: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x28db70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x28db74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28db74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28db78:
    // 0x28db78: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DB78u;
    SET_GPR_U32(ctx, 31, 0x28DB80u);
    ctx->pc = 0x28DB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DB78u;
    // 0x28db7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DB78u, 0x28DB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DB80u;
label_28db80:
    // 0x28db80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28db80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28db84: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28DB84u;
    {
        const bool branch_taken_0x28db84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28db84) {
            ctx->pc = 0x28DB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DB84u;
            // 0x28db88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DBA4u;
            goto label_28dba4;
        }
    }
    ctx->pc = 0x28DB8Cu;
    // 0x28db8c: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x28db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28db90: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28db90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28db94: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x28db94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x28db98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28db98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28db9c: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x28db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x28dba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28dba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28dba4:
    // 0x28dba4: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DBA4u;
    SET_GPR_U32(ctx, 31, 0x28DBACu);
    ctx->pc = 0x28DBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DBA4u;
    // 0x28dba8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DBA4u, 0x28DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DBACu;
label_28dbac:
    // 0x28dbac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28dbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbb0: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28DBB0u;
    {
        const bool branch_taken_0x28dbb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dbb0) {
            ctx->pc = 0x28DBB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DBB0u;
            // 0x28dbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DBD0u;
            goto label_28dbd0;
        }
    }
    ctx->pc = 0x28DBB8u;
    // 0x28dbb8: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x28dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28dbbc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28dbc0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x28dbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x28dbc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28dbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28dbc8: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x28dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x28dbcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28dbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28dbd0:
    // 0x28dbd0: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DBD0u;
    SET_GPR_U32(ctx, 31, 0x28DBD8u);
    ctx->pc = 0x28DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DBD0u;
    // 0x28dbd4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DBD0u, 0x28DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DBD8u;
label_28dbd8:
    // 0x28dbd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28dbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dbdc: 0x50800045  beql        $a0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x28DBDCu;
    {
        const bool branch_taken_0x28dbdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dbdc) {
            ctx->pc = 0x28DBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DBDCu;
            // 0x28dbe0: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DCF4u;
            goto label_28dcf4;
        }
    }
    ctx->pc = 0x28DBE4u;
    // 0x28dbe4: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x28dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28dbe8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28dbec: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x28dbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x28dbf0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28dbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28dbf4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x28DBF4u;
    {
        const bool branch_taken_0x28dbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DBF4u;
        // 0x28dbf8: 0xac830380  sw          $v1, 0x380($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dbf4) {
            ctx->pc = 0x28DCF0u;
            goto label_28dcf0;
        }
    }
    ctx->pc = 0x28DBFCu;
label_28dbfc:
    // 0x28dbfc: 0x8e041554  lw          $a0, 0x1554($s0)
    ctx->pc = 0x28dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5460)));
    // 0x28dc00: 0x508000e2  beql        $a0, $zero, . + 4 + (0xE2 << 2)
    ctx->pc = 0x28DC00u;
    {
        const bool branch_taken_0x28dc00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dc00) {
            ctx->pc = 0x28DC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DC00u;
            // 0x28dc04: 0x8e041564  lw          $a0, 0x1564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DF8Cu;
            goto label_28df8c;
        }
    }
    ctx->pc = 0x28DC08u;
    // 0x28dc08: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x28dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28dc0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28dc10: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x28dc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x28dc14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28dc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28dc18: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x28dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x28dc1c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x28DC1Cu;
    {
        const bool branch_taken_0x28dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC1Cu;
        // 0x28dc20: 0x8e041564  lw          $a0, 0x1564($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc1c) {
            ctx->pc = 0x28DF8Cu;
            goto label_28df8c;
        }
    }
    ctx->pc = 0x28DC24u;
label_28dc24:
    // 0x28dc24: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28dc24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x28dc28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28dc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc2c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DC2Cu;
    SET_GPR_U32(ctx, 31, 0x28DC34u);
    ctx->pc = 0x28DC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC2Cu;
    // 0x28dc30: 0x24a5a310  addiu       $a1, $a1, -0x5CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DC2Cu, 0x28DC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC34u;
label_28dc34:
    // 0x28dc34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28dc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc38: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DC38u;
    {
        const bool branch_taken_0x28dc38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC38u;
        // 0x28dc3c: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc38) {
            ctx->pc = 0x28DC4Cu;
            goto label_28dc4c;
        }
    }
    ctx->pc = 0x28DC40u;
    // 0x28dc40: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28dc44: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28dc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28dc48: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28dc48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_28dc4c:
    // 0x28dc4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28dc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc50: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DC50u;
    SET_GPR_U32(ctx, 31, 0x28DC58u);
    ctx->pc = 0x28DC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC50u;
    // 0x28dc54: 0x24a5a318  addiu       $a1, $a1, -0x5CE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DC50u, 0x28DC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC58u;
label_28dc58:
    // 0x28dc58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28dc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc5c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DC5Cu;
    {
        const bool branch_taken_0x28dc5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC5Cu;
        // 0x28dc60: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc5c) {
            ctx->pc = 0x28DC70u;
            goto label_28dc70;
        }
    }
    ctx->pc = 0x28DC64u;
    // 0x28dc64: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28dc68: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28dc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28dc6c: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28dc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_28dc70:
    // 0x28dc70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28dc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc74: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DC74u;
    SET_GPR_U32(ctx, 31, 0x28DC7Cu);
    ctx->pc = 0x28DC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DC74u;
    // 0x28dc78: 0x24a5a320  addiu       $a1, $a1, -0x5CE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DC74u, 0x28DC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC7Cu;
label_28dc7c:
    // 0x28dc7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28dc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc80: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DC80u;
    {
        const bool branch_taken_0x28dc80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC80u;
        // 0x28dc84: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc80) {
            ctx->pc = 0x28DC94u;
            goto label_28dc94;
        }
    }
    ctx->pc = 0x28DC88u;
    // 0x28dc88: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28dc8c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28dc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28dc90: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28dc90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_28dc94:
    // 0x28dc94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28dc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dc98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28DC98u;
    {
        const bool branch_taken_0x28dc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC98u;
        // 0x28dc9c: 0x24a5a328  addiu       $a1, $a1, -0x5CD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc98) {
            ctx->pc = 0x28DCD0u;
            goto label_28dcd0;
        }
    }
    ctx->pc = 0x28DCA0u;
label_28dca0:
    // 0x28dca0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28dca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x28dca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28dca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dca8: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DCA8u;
    SET_GPR_U32(ctx, 31, 0x28DCB0u);
    ctx->pc = 0x28DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DCA8u;
    // 0x28dcac: 0x24a58f50  addiu       $a1, $a1, -0x70B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DCA8u, 0x28DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCB0u;
label_28dcb0:
    // 0x28dcb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28dcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dcb4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DCB4u;
    {
        const bool branch_taken_0x28dcb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DCB4u;
        // 0x28dcb8: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dcb4) {
            ctx->pc = 0x28DCC8u;
            goto label_28dcc8;
        }
    }
    ctx->pc = 0x28DCBCu;
    // 0x28dcbc: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28dcc0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28dcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28dcc4: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28dcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_28dcc8:
    // 0x28dcc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28dcc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dccc: 0x24a58f70  addiu       $a1, $a1, -0x7090
    ctx->pc = 0x28dcccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938480));
label_28dcd0:
    // 0x28dcd0: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DCD0u;
    SET_GPR_U32(ctx, 31, 0x28DCD8u);
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DCD0u, 0x28DCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DCD8u;
label_28dcd8:
    // 0x28dcd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28dcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dcdc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DCDCu;
    {
        const bool branch_taken_0x28dcdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dcdc) {
            ctx->pc = 0x28DCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DCDCu;
            // 0x28dce0: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DCF4u;
            goto label_28dcf4;
        }
    }
    ctx->pc = 0x28DCE4u;
    // 0x28dce4: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x28dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28dce8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28dce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28dcec: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x28dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_28dcf0:
    // 0x28dcf0: 0x8e021534  lw          $v0, 0x1534($s0)
    ctx->pc = 0x28dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
label_28dcf4:
    // 0x28dcf4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28dcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28dcf8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DCF8u;
    {
        const bool branch_taken_0x28dcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dcf8) {
            ctx->pc = 0x28DCFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DCF8u;
            // 0x28dcfc: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DD10u;
            goto label_28dd10;
        }
    }
    ctx->pc = 0x28DD00u;
    // 0x28dd00: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x28dd00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x28dd04: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x28dd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x28dd08: 0xa60203ac  sh          $v0, 0x3AC($s0)
    ctx->pc = 0x28dd08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x28dd0c: 0x8e021534  lw          $v0, 0x1534($s0)
    ctx->pc = 0x28dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
label_28dd10:
    // 0x28dd10: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28dd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28dd14: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DD14u;
    {
        const bool branch_taken_0x28dd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dd14) {
            ctx->pc = 0x28DD18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DD14u;
            // 0x28dd18: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DD2Cu;
            goto label_28dd2c;
        }
    }
    ctx->pc = 0x28DD1Cu;
    // 0x28dd1c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x28dd1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x28dd20: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x28dd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x28dd24: 0xa60203ac  sh          $v0, 0x3AC($s0)
    ctx->pc = 0x28dd24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x28dd28: 0x8e021534  lw          $v0, 0x1534($s0)
    ctx->pc = 0x28dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
label_28dd2c:
    // 0x28dd2c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x28dd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x28dd30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DD30u;
    {
        const bool branch_taken_0x28dd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dd30) {
            ctx->pc = 0x28DD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DD30u;
            // 0x28dd34: 0x8e021534  lw          $v0, 0x1534($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DD48u;
            goto label_28dd48;
        }
    }
    ctx->pc = 0x28DD38u;
    // 0x28dd38: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x28dd38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x28dd3c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x28dd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x28dd40: 0xa60203ac  sh          $v0, 0x3AC($s0)
    ctx->pc = 0x28dd40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x28dd44: 0x8e021534  lw          $v0, 0x1534($s0)
    ctx->pc = 0x28dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5428)));
label_28dd48:
    // 0x28dd48: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x28dd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x28dd4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DD4Cu;
    {
        const bool branch_taken_0x28dd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dd4c) {
            ctx->pc = 0x28DD50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DD4Cu;
            // 0x28dd50: 0x96020434  lhu         $v0, 0x434($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DD64u;
            goto label_28dd64;
        }
    }
    ctx->pc = 0x28DD54u;
    // 0x28dd54: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x28dd54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x28dd58: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x28dd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x28dd5c: 0xa60203ac  sh          $v0, 0x3AC($s0)
    ctx->pc = 0x28dd5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 940), (uint16_t)GPR_U32(ctx, 2));
    // 0x28dd60: 0x96020434  lhu         $v0, 0x434($s0)
    ctx->pc = 0x28dd60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
label_28dd64:
    // 0x28dd64: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28dd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28dd68: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28DD68u;
    {
        const bool branch_taken_0x28dd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DD68u;
        // 0x28dd6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd68) {
            ctx->pc = 0x28DD94u;
            goto label_28dd94;
        }
    }
    ctx->pc = 0x28DD70u;
    // 0x28dd70: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x28dd70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x28dd74: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x28dd74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x28dd78: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x28dd78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28dd7c: 0xde0303a8  ld          $v1, 0x3A8($s0)
    ctx->pc = 0x28dd7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 936)));
    // 0x28dd80: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28dd80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28dd84: 0x30440080  andi        $a0, $v0, 0x80
    ctx->pc = 0x28dd84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x28dd88: 0x4380a  movz        $a3, $zero, $a0
    ctx->pc = 0x28dd88u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x28dd8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28DD8Cu;
    {
        const bool branch_taken_0x28dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DD8Cu;
        // 0x28dd90: 0x30428000  andi        $v0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dd8c) {
            ctx->pc = 0x28DDB4u;
            goto label_28ddb4;
        }
    }
    ctx->pc = 0x28DD94u;
label_28dd94:
    // 0x28dd94: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x28dd94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x28dd98: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x28dd98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x28dd9c: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x28dd9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x28dda0: 0xde0303a8  ld          $v1, 0x3A8($s0)
    ctx->pc = 0x28dda0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 936)));
    // 0x28dda4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28dda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28dda8: 0x30440040  andi        $a0, $v0, 0x40
    ctx->pc = 0x28dda8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x28ddac: 0x4380a  movz        $a3, $zero, $a0
    ctx->pc = 0x28ddacu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x28ddb0: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x28ddb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_28ddb4:
    // 0x28ddb4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x28ddb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ddb8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x28ddb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x28ddbc: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x28ddbcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x28ddc0: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x28ddc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x28ddc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28ddc8: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x28ddc8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x28ddcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ddd0: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28DDD0u;
    {
        const bool branch_taken_0x28ddd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x28ddd0) {
            ctx->pc = 0x28DDD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DDD0u;
            // 0x28ddd4: 0x8e051554  lw          $a1, 0x1554($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DDFCu;
            goto label_28ddfc;
        }
    }
    ctx->pc = 0x28DDD8u;
    // 0x28ddd8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DDD8u;
    {
        const bool branch_taken_0x28ddd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDD8u;
        // 0x28dddc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ddd8) {
            ctx->pc = 0x28DDF0u;
            goto label_28ddf0;
        }
    }
    ctx->pc = 0x28DDE0u;
    // 0x28dde0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DDE0u;
    {
        const bool branch_taken_0x28dde0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDE0u;
        // 0x28dde4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dde0) {
            ctx->pc = 0x28DDF8u;
            goto label_28ddf8;
        }
    }
    ctx->pc = 0x28DDE8u;
    // 0x28dde8: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DDE8u;
    {
        const bool branch_taken_0x28dde8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x28dde8) {
            ctx->pc = 0x28DDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DDE8u;
            // 0x28ddec: 0x8e05155c  lw          $a1, 0x155C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DDFCu;
            goto label_28ddfc;
        }
    }
    ctx->pc = 0x28DDF0u;
label_28ddf0:
    // 0x28ddf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28DDF0u;
    {
        const bool branch_taken_0x28ddf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DDF0u;
        // 0x28ddf4: 0x8e051550  lw          $a1, 0x1550($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ddf0) {
            ctx->pc = 0x28DDFCu;
            goto label_28ddfc;
        }
    }
    ctx->pc = 0x28DDF8u;
label_28ddf8:
    // 0x28ddf8: 0x8e051558  lw          $a1, 0x1558($s0)
    ctx->pc = 0x28ddf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5464)));
label_28ddfc:
    // 0x28ddfc: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28DDFCu;
    {
        const bool branch_taken_0x28ddfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ddfc) {
            ctx->pc = 0x28DE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DDFCu;
            // 0x28de00: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DE1Cu;
            goto label_28de1c;
        }
    }
    ctx->pc = 0x28DE04u;
    // 0x28de04: 0x8ca30380  lw          $v1, 0x380($a1)
    ctx->pc = 0x28de04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 896)));
    // 0x28de08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28de08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28de0c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x28de0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x28de10: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28de10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28de14: 0xaca30380  sw          $v1, 0x380($a1)
    ctx->pc = 0x28de14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 896), GPR_U32(ctx, 3));
    // 0x28de18: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x28de18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_28de1c:
    // 0x28de1c: 0x24020252  addiu       $v0, $zero, 0x252
    ctx->pc = 0x28de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
    // 0x28de20: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28DE20u;
    {
        const bool branch_taken_0x28de20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28de20) {
            ctx->pc = 0x28DE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DE20u;
            // 0x28de24: 0x96020434  lhu         $v0, 0x434($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DE88u;
            goto label_28de88;
        }
    }
    ctx->pc = 0x28DE28u;
    // 0x28de28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28de28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28de2c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28DE2Cu;
    {
        const bool branch_taken_0x28de2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE2Cu;
        // 0x28de30: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de2c) {
            ctx->pc = 0x28DE54u;
            goto label_28de54;
        }
    }
    ctx->pc = 0x28DE34u;
    // 0x28de34: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DE34u;
    {
        const bool branch_taken_0x28de34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE34u;
        // 0x28de38: 0x2c820004  sltiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de34) {
            ctx->pc = 0x28DE44u;
            goto label_28de44;
        }
    }
    ctx->pc = 0x28DE3Cu;
    // 0x28de3c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x28DE3Cu;
    {
        const bool branch_taken_0x28de3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28de3c) {
            ctx->pc = 0x28DE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DE3Cu;
            // 0x28de40: 0x96020434  lhu         $v0, 0x434($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DE88u;
            goto label_28de88;
        }
    }
    ctx->pc = 0x28DE44u;
label_28de44:
    // 0x28de44: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28de44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x28de48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28de48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28DE4Cu;
    {
        const bool branch_taken_0x28de4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE4Cu;
        // 0x28de50: 0x24a5a310  addiu       $a1, $a1, -0x5CF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de4c) {
            ctx->pc = 0x28DE5Cu;
            goto label_28de5c;
        }
    }
    ctx->pc = 0x28DE54u;
label_28de54:
    // 0x28de54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28de54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de58: 0x24a5a318  addiu       $a1, $a1, -0x5CE8
    ctx->pc = 0x28de58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943512));
label_28de5c:
    // 0x28de5c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DE5Cu;
    SET_GPR_U32(ctx, 31, 0x28DE64u);
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DE5Cu, 0x28DE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DE64u;
label_28de64:
    // 0x28de64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28de64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de68: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28DE68u;
    {
        const bool branch_taken_0x28de68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28de68) {
            ctx->pc = 0x28DE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DE68u;
            // 0x28de6c: 0x96020434  lhu         $v0, 0x434($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DE88u;
            goto label_28de88;
        }
    }
    ctx->pc = 0x28DE70u;
    // 0x28de70: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x28de70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28de74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28de74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28de78: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x28de78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x28de7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28de7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28de80: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x28de80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x28de84: 0x96020434  lhu         $v0, 0x434($s0)
    ctx->pc = 0x28de84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1076)));
label_28de88:
    // 0x28de88: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x28de88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x28de8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28DE8Cu;
    {
        const bool branch_taken_0x28de8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DE8Cu;
        // 0x28de90: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28de8c) {
            ctx->pc = 0x28DEB8u;
            goto label_28deb8;
        }
    }
    ctx->pc = 0x28DE94u;
    // 0x28de94: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x28de94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x28de98: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x28de98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x28de9c: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x28de9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x28dea0: 0xde0303a8  ld          $v1, 0x3A8($s0)
    ctx->pc = 0x28dea0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 936)));
    // 0x28dea4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28dea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28dea8: 0x30440040  andi        $a0, $v0, 0x40
    ctx->pc = 0x28dea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x28deac: 0x4380a  movz        $a3, $zero, $a0
    ctx->pc = 0x28deacu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x28deb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28DEB0u;
    {
        const bool branch_taken_0x28deb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DEB0u;
        // 0x28deb4: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28deb0) {
            ctx->pc = 0x28DED8u;
            goto label_28ded8;
        }
    }
    ctx->pc = 0x28DEB8u;
label_28deb8:
    // 0x28deb8: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x28deb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x28debc: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x28debcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x28dec0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x28dec0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x28dec4: 0xde0303a8  ld          $v1, 0x3A8($s0)
    ctx->pc = 0x28dec4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 936)));
    // 0x28dec8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28dec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28decc: 0x30440080  andi        $a0, $v0, 0x80
    ctx->pc = 0x28deccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x28ded0: 0x4380a  movz        $a3, $zero, $a0
    ctx->pc = 0x28ded0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x28ded4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x28ded4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_28ded8:
    // 0x28ded8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x28ded8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dedc: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x28dedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x28dee0: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x28dee0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x28dee4: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x28dee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x28dee8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28deec: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x28deecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x28def0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28def0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28def4: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28DEF4u;
    {
        const bool branch_taken_0x28def4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x28def4) {
            ctx->pc = 0x28DEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DEF4u;
            // 0x28def8: 0x8e051564  lw          $a1, 0x1564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DF20u;
            goto label_28df20;
        }
    }
    ctx->pc = 0x28DEFCu;
    // 0x28defc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DEFCu;
    {
        const bool branch_taken_0x28defc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DEFCu;
        // 0x28df00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28defc) {
            ctx->pc = 0x28DF14u;
            goto label_28df14;
        }
    }
    ctx->pc = 0x28DF04u;
    // 0x28df04: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28DF04u;
    {
        const bool branch_taken_0x28df04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF04u;
        // 0x28df08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df04) {
            ctx->pc = 0x28DF1Cu;
            goto label_28df1c;
        }
    }
    ctx->pc = 0x28DF0Cu;
    // 0x28df0c: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DF0Cu;
    {
        const bool branch_taken_0x28df0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x28df0c) {
            ctx->pc = 0x28DF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DF0Cu;
            // 0x28df10: 0x8e05156c  lw          $a1, 0x156C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DF20u;
            goto label_28df20;
        }
    }
    ctx->pc = 0x28DF14u;
label_28df14:
    // 0x28df14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28DF14u;
    {
        const bool branch_taken_0x28df14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF14u;
        // 0x28df18: 0x8e051560  lw          $a1, 0x1560($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df14) {
            ctx->pc = 0x28DF20u;
            goto label_28df20;
        }
    }
    ctx->pc = 0x28DF1Cu;
label_28df1c:
    // 0x28df1c: 0x8e051568  lw          $a1, 0x1568($s0)
    ctx->pc = 0x28df1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5480)));
label_28df20:
    // 0x28df20: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28DF20u;
    {
        const bool branch_taken_0x28df20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28df20) {
            ctx->pc = 0x28DF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DF20u;
            // 0x28df24: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DF40u;
            goto label_28df40;
        }
    }
    ctx->pc = 0x28DF28u;
    // 0x28df28: 0x8ca30380  lw          $v1, 0x380($a1)
    ctx->pc = 0x28df28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 896)));
    // 0x28df2c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28df30: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x28df30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x28df34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28df34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28df38: 0xaca30380  sw          $v1, 0x380($a1)
    ctx->pc = 0x28df38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 896), GPR_U32(ctx, 3));
    // 0x28df3c: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x28df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_28df40:
    // 0x28df40: 0x24020252  addiu       $v0, $zero, 0x252
    ctx->pc = 0x28df40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
    // 0x28df44: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28DF44u;
    {
        const bool branch_taken_0x28df44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28df44) {
            ctx->pc = 0x28DF48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DF44u;
            // 0x28df48: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DFACu;
            goto label_28dfac;
        }
    }
    ctx->pc = 0x28DF4Cu;
    // 0x28df4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28df50: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28DF50u;
    {
        const bool branch_taken_0x28df50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF50u;
        // 0x28df54: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df50) {
            ctx->pc = 0x28DF78u;
            goto label_28df78;
        }
    }
    ctx->pc = 0x28DF58u;
    // 0x28df58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DF58u;
    {
        const bool branch_taken_0x28df58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF58u;
        // 0x28df5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df58) {
            ctx->pc = 0x28DF68u;
            goto label_28df68;
        }
    }
    ctx->pc = 0x28DF60u;
    // 0x28df60: 0x50820012  beql        $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28DF60u;
    {
        const bool branch_taken_0x28df60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x28df60) {
            ctx->pc = 0x28DF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DF60u;
            // 0x28df64: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DFACu;
            goto label_28dfac;
        }
    }
    ctx->pc = 0x28DF68u;
label_28df68:
    // 0x28df68: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x28df68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x28df6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28df6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28DF70u;
    {
        const bool branch_taken_0x28df70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF70u;
        // 0x28df74: 0x24a5a320  addiu       $a1, $a1, -0x5CE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df70) {
            ctx->pc = 0x28DF80u;
            goto label_28df80;
        }
    }
    ctx->pc = 0x28DF78u;
label_28df78:
    // 0x28df78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28df78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df7c: 0x24a5a328  addiu       $a1, $a1, -0x5CD8
    ctx->pc = 0x28df7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943528));
label_28df80:
    // 0x28df80: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x28DF80u;
    SET_GPR_U32(ctx, 31, 0x28DF88u);
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x28DF80u, 0x28DF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DF88u;
label_28df88:
    // 0x28df88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28df88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28df8c:
    // 0x28df8c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28DF8Cu;
    {
        const bool branch_taken_0x28df8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DF8Cu;
        // 0x28df90: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df8c) {
            ctx->pc = 0x28DFACu;
            goto label_28dfac;
        }
    }
    ctx->pc = 0x28DF94u;
    // 0x28df94: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x28df94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x28df98: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x28df98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x28df9c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x28df9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x28dfa0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x28dfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28dfa4: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x28dfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_28dfa8:
    // 0x28dfa8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x28dfa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_28dfac:
    // 0x28dfac: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x28dfacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28dfb0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x28dfb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28dfb4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x28dfb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28dfb8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x28dfb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28dfbc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x28dfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28dfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x28DFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DFC0u;
        // 0x28dfc4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DFC8u;
}
