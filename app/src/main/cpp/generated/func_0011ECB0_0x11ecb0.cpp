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

// Function: func_0011ECB0
// Address: 0x11ecb0 - 0x11f0d0
void func_0011ECB0_0x11ecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0011ECB0_0x11ecb0");
#endif

    switch (ctx->pc) {
        case 0x11ed14u: goto label_11ed14;
        case 0x11ed20u: goto label_11ed20;
        case 0x11ed50u: goto label_11ed50;
        case 0x11ed58u: goto label_11ed58;
        case 0x11edd4u: goto label_11edd4;
        case 0x11ee3cu: goto label_11ee3c;
        case 0x11eeb4u: goto label_11eeb4;
        case 0x11ef00u: goto label_11ef00;
        case 0x11ef14u: goto label_11ef14;
        case 0x11ef38u: goto label_11ef38;
        case 0x11ef4cu: goto label_11ef4c;
        case 0x11ef54u: goto label_11ef54;
        case 0x11ef74u: goto label_11ef74;
        case 0x11efb4u: goto label_11efb4;
        case 0x11efc0u: goto label_11efc0;
        case 0x11f018u: goto label_11f018;
        case 0x11f024u: goto label_11f024;
        case 0x11f068u: goto label_11f068;
        case 0x11f084u: goto label_11f084;
        case 0x11f094u: goto label_11f094;
        case 0x11f0acu: goto label_11f0ac;
        default: break;
    }

    ctx->pc = 0x11ecb0u;

    // 0x11ecb0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x11ecb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x11ecb4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x11ecb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x11ecb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ecb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ecbc: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x11ecbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x11ecc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11ecc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ecc4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x11ecc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x11ecc8: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x11ecc8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x11eccc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x11ecccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x11ecd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ecd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ecd4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x11ecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x11ecd8: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x11ecd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x11ecdc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11ecdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11ece0: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x11ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x11ece4: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x11ece4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x11ece8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11ece8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ecec: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x11ececu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x11ecf0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11ecf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ecf4: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11ecf8: 0x8e2315f4  lw          $v1, 0x15F4($s1)
    ctx->pc = 0x11ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
    // 0x11ecfc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x11ecfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x11ed00: 0x8e330694  lw          $s3, 0x694($s1)
    ctx->pc = 0x11ed00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1684)));
    // 0x11ed04: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x11ed04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x11ed08: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x11ed08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x11ed0c: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x11ED0Cu;
    SET_GPR_U32(ctx, 31, 0x11ED14u);
    ctx->pc = 0x11ED10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ED0Cu;
    // 0x11ed10: 0xae2315f4  sw          $v1, 0x15F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x11ED0Cu, 0x11ED14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED14u;
label_11ed14:
    // 0x11ed14: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x11ed14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x11ed18: 0xc0a4c3c  jal         func_2930F0
    ctx->pc = 0x11ED18u;
    SET_GPR_U32(ctx, 31, 0x11ED20u);
    ctx->pc = 0x11ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ED18u;
    // 0x11ed1c: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x11ED18u, 0x11ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED20u;
label_11ed20:
    // 0x11ed20: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x11ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x11ed24: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x11ed24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11ed28: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x11ed28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x11ed2c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11ED2Cu;
    {
        const bool branch_taken_0x11ed2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED2Cu;
        // 0x11ed30: 0xae220250  sw          $v0, 0x250($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed2c) {
            ctx->pc = 0x11ED48u;
            goto label_11ed48;
        }
    }
    ctx->pc = 0x11ED34u;
    // 0x11ed34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ed38: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x11ED38u;
    {
        const bool branch_taken_0x11ed38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED38u;
        // 0x11ed3c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed38) {
            ctx->pc = 0x11EF44u;
            goto label_11ef44;
        }
    }
    ctx->pc = 0x11ED40u;
    // 0x11ed40: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x11ED40u;
    {
        const bool branch_taken_0x11ed40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED40u;
        // 0x11ed44: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed40) {
            ctx->pc = 0x11F0B4u;
            goto label_11f0b4;
        }
    }
    ctx->pc = 0x11ED48u;
label_11ed48:
    // 0x11ed48: 0xc04ab0a  jal         func_12AC28
    ctx->pc = 0x11ED48u;
    SET_GPR_U32(ctx, 31, 0x11ED50u);
    ctx->pc = 0x11ED4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ED48u;
    // 0x11ed4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12AC28u, 0x11ED48u, 0x11ED50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED50u;
label_11ed50:
    // 0x11ed50: 0xc04ae4a  jal         func_12B928
    ctx->pc = 0x11ED50u;
    SET_GPR_U32(ctx, 31, 0x11ED58u);
    ctx->pc = 0x11ED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ED50u;
    // 0x11ed54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B928u, 0x11ED50u, 0x11ED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ED58u;
label_11ed58:
    // 0x11ed58: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x11ed58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x11ed5c: 0x24030203  addiu       $v1, $zero, 0x203
    ctx->pc = 0x11ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x11ed60: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x11ed60u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x11ed64: 0x50830001  beql        $a0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x11ED64u;
    {
        const bool branch_taken_0x11ed64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x11ed64) {
            ctx->pc = 0x11ED68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11ED64u;
            // 0x11ed68: 0x13902b  sltu        $s2, $zero, $s3 (Delay Slot)
            SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11ED6Cu;
            goto label_11ed6c;
        }
    }
    ctx->pc = 0x11ED6Cu;
label_11ed6c:
    // 0x11ed6c: 0x24020403  addiu       $v0, $zero, 0x403
    ctx->pc = 0x11ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1027));
    // 0x11ed70: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11ED70u;
    {
        const bool branch_taken_0x11ed70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x11ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED70u;
        // 0x11ed74: 0x24020803  addiu       $v0, $zero, 0x803 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed70) {
            ctx->pc = 0x11ED84u;
            goto label_11ed84;
        }
    }
    ctx->pc = 0x11ED78u;
    // 0x11ed78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ed78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ed7c: 0x53900b  movn        $s2, $v0, $s3
    ctx->pc = 0x11ed7cu;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x11ed80: 0x24020803  addiu       $v0, $zero, 0x803
    ctx->pc = 0x11ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
label_11ed84:
    // 0x11ed84: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11ED84u;
    {
        const bool branch_taken_0x11ed84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x11ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED84u;
        // 0x11ed88: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed84) {
            ctx->pc = 0x11ED98u;
            goto label_11ed98;
        }
    }
    ctx->pc = 0x11ED8Cu;
    // 0x11ed8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ed8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ed90: 0x53900b  movn        $s2, $v0, $s3
    ctx->pc = 0x11ed90u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
    // 0x11ed94: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x11ed94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_11ed98:
    // 0x11ed98: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11ED98u;
    {
        const bool branch_taken_0x11ed98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x11ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED98u;
        // 0x11ed9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed98) {
            ctx->pc = 0x11EDA4u;
            goto label_11eda4;
        }
    }
    ctx->pc = 0x11EDA0u;
    // 0x11eda0: 0x53900b  movn        $s2, $v0, $s3
    ctx->pc = 0x11eda0u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_11eda4:
    // 0x11eda4: 0x52400045  beql        $s2, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x11EDA4u;
    {
        const bool branch_taken_0x11eda4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11eda4) {
            ctx->pc = 0x11EDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EDA4u;
            // 0x11eda8: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EEBCu;
            goto label_11eebc;
        }
    }
    ctx->pc = 0x11EDACu;
    // 0x11edac: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x11edacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x11edb0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x11edb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x11edb4: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x11edb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x11edb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11edb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11edbc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x11edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11edc0: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x11edc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11edc4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x11edc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11edc8: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x11edc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x11edcc: 0xc051e62  jal         func_147988
    ctx->pc = 0x11EDCCu;
    SET_GPR_U32(ctx, 31, 0x11EDD4u);
    ctx->pc = 0x11EDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EDCCu;
    // 0x11edd0: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x11EDCCu, 0x11EDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EDD4u;
label_11edd4:
    // 0x11edd4: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x11edd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x11edd8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x11edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11eddc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11EDDCu;
    {
        const bool branch_taken_0x11eddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EDDCu;
        // 0x11ede0: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eddc) {
            ctx->pc = 0x11EDF8u;
            goto label_11edf8;
        }
    }
    ctx->pc = 0x11EDE4u;
    // 0x11ede4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x11ede4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x11ede8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x11ede8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11edec: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x11edecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x11edf0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x11edf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11edf4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x11edf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_11edf8:
    // 0x11edf8: 0x3c013d90  lui         $at, 0x3D90
    ctx->pc = 0x11edf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15760 << 16));
    // 0x11edfc: 0x342196bc  ori         $at, $at, 0x96BC
    ctx->pc = 0x11edfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38588);
    // 0x11ee00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ee00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11ee04: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x11ee04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x11ee08: 0x3c01c07c  lui         $at, 0xC07C
    ctx->pc = 0x11ee08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49276 << 16));
    // 0x11ee0c: 0x34215d64  ori         $at, $at, 0x5D64
    ctx->pc = 0x11ee0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23908);
    // 0x11ee10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11ee10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11ee14: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x11ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11ee18: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x11ee18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11ee1c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x11ee1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x11ee20: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x11ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x11ee24: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x11ee24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ee28: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x11ee28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11ee2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ee2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee30: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11ee30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ee34: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x11EE34u;
    SET_GPR_U32(ctx, 31, 0x11EE3Cu);
    ctx->pc = 0x11EE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EE34u;
    // 0x11ee38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x11EE34u, 0x11EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EE3Cu;
label_11ee3c:
    // 0x11ee3c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x11ee3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11ee40: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x11ee40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11ee44: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x11ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x11ee48: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x11ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x11ee4c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x11ee4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11ee50: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x11ee50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11ee54: 0xdba40080  lqc2        $vf4, 0x80($sp)
    ctx->pc = 0x11ee54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11ee58: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x11ee58u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11ee5c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x11ee5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x11ee60: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x11ee60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11ee64: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x11ee64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11ee68: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x11ee68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x11ee6c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x11ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x11ee70: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x11ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x11ee74: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11EE74u;
    {
        const bool branch_taken_0x11ee74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11EE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EE74u;
        // 0x11ee78: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee74) {
            ctx->pc = 0x11EE90u;
            goto label_11ee90;
        }
    }
    ctx->pc = 0x11EE7Cu;
    // 0x11ee7c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x11ee7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x11ee80: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x11ee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11ee84: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x11ee84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x11ee88: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x11ee88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ee8c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x11ee8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_11ee90:
    // 0x11ee90: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x11ee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11ee94: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x11ee94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x11ee98: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11ee98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x11ee9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11ee9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11eea0: 0x0  nop
    ctx->pc = 0x11eea0u;
    // NOP
    // 0x11eea4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11eea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11eea8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x11eea8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x11eeac: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x11EEACu;
    SET_GPR_U32(ctx, 31, 0x11EEB4u);
    ctx->pc = 0x11EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EEACu;
    // 0x11eeb0: 0xe6600104  swc1        $f0, 0x104($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x11EEACu, 0x11EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EEB4u;
label_11eeb4:
    // 0x11eeb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11EEB4u;
    {
        const bool branch_taken_0x11eeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEB4u;
        // 0x11eeb8: 0xe6600104  swc1        $f0, 0x104($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eeb4) {
            ctx->pc = 0x11EF00u;
            goto label_11ef00;
        }
    }
    ctx->pc = 0x11EEBCu;
label_11eebc:
    // 0x11eebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11eebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eec0: 0x3c01bd90  lui         $at, 0xBD90
    ctx->pc = 0x11eec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48528 << 16));
    // 0x11eec4: 0x342196bc  ori         $at, $at, 0x96BC
    ctx->pc = 0x11eec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38588);
    // 0x11eec8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x11eec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11eecc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11eeccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eed0: 0x3c01407c  lui         $at, 0x407C
    ctx->pc = 0x11eed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16508 << 16));
    // 0x11eed4: 0x34215d64  ori         $at, $at, 0x5D64
    ctx->pc = 0x11eed4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23908);
    // 0x11eed8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11eed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11eedc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11eedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eee0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11eee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11eee4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11eee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11eee8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11eee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eeec: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x11eeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11eef0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x11eef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11eef4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x11eef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11eef8: 0xc04a67c  jal         func_1299F0
    ctx->pc = 0x11EEF8u;
    SET_GPR_U32(ctx, 31, 0x11EF00u);
    ctx->pc = 0x11EEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EEF8u;
    // 0x11eefc: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1299F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1299F0u, 0x11EEF8u, 0x11EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF00u;
label_11ef00:
    // 0x11ef00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x11ef00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11ef04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11ef04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef08: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x11ef08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x11ef0c: 0xc08e8c0  jal         func_23A300
    ctx->pc = 0x11EF0Cu;
    SET_GPR_U32(ctx, 31, 0x11EF14u);
    ctx->pc = 0x11EF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EF0Cu;
    // 0x11ef10: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A300u, 0x11EF0Cu, 0x11EF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF14u;
label_11ef14:
    // 0x11ef14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ef18: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x11ef18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x11ef1c: 0xae2015b4  sw          $zero, 0x15B4($s1)
    ctx->pc = 0x11ef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
    // 0x11ef20: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11ef20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11ef24: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x11ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
    // 0x11ef28: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x11ef28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x11ef2c: 0xa623056e  sh          $v1, 0x56E($s1)
    ctx->pc = 0x11ef2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1390), (uint16_t)GPR_U32(ctx, 3));
    // 0x11ef30: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11EF30u;
    SET_GPR_U32(ctx, 31, 0x11EF38u);
    ctx->pc = 0x11EF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EF30u;
    // 0x11ef34: 0x2405fec0  addiu       $a1, $zero, -0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11EF30u, 0x11EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF38u;
label_11ef38:
    // 0x11ef38: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x11ef38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x11ef3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11ef40: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11ef40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_11ef44:
    // 0x11ef44: 0xc0493b0  jal         func_124EC0
    ctx->pc = 0x11EF44u;
    SET_GPR_U32(ctx, 31, 0x11EF4Cu);
    ctx->pc = 0x11EF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EF44u;
    // 0x11ef48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x11EF44u, 0x11EF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF4Cu;
label_11ef4c:
    // 0x11ef4c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x11EF4Cu;
    SET_GPR_U32(ctx, 31, 0x11EF54u);
    ctx->pc = 0x11EF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EF4Cu;
    // 0x11ef50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x11EF4Cu, 0x11EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF54u;
label_11ef54:
    // 0x11ef54: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11EF54u;
    {
        const bool branch_taken_0x11ef54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ef54) {
            ctx->pc = 0x11EFA0u;
            goto label_11efa0;
        }
    }
    ctx->pc = 0x11EF5Cu;
    // 0x11ef5c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11ef5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11ef60: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11EF60u;
    {
        const bool branch_taken_0x11ef60 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF60u;
        // 0x11ef64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef60) {
            ctx->pc = 0x11EF90u;
            goto label_11ef90;
        }
    }
    ctx->pc = 0x11EF68u;
    // 0x11ef68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ef68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef6c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x11EF6Cu;
    SET_GPR_U32(ctx, 31, 0x11EF74u);
    ctx->pc = 0x11EF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EF6Cu;
    // 0x11ef70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x11EF6Cu, 0x11EF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EF74u;
label_11ef74:
    // 0x11ef74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ef78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x11ef78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11ef7c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x11ef7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x11ef80: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x11ef80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x11ef84: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x11ef84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x11ef88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11EF88u;
    {
        const bool branch_taken_0x11ef88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF88u;
        // 0x11ef8c: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef88) {
            ctx->pc = 0x11EFA0u;
            goto label_11efa0;
        }
    }
    ctx->pc = 0x11EF90u;
label_11ef90:
    // 0x11ef90: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x11ef90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x11ef94: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x11ef94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x11ef98: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11ef98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11ef9c: 0xac627a24  sw          $v0, 0x7A24($v1)
    ctx->pc = 0x11ef9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A24u, _value); } while (0);
label_11efa0:
    // 0x11efa0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11efa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11efa4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11efa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11efa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11efa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11efac: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x11EFACu;
    SET_GPR_U32(ctx, 31, 0x11EFB4u);
    ctx->pc = 0x11EFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EFACu;
    // 0x11efb0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x11EFACu, 0x11EFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EFB4u;
label_11efb4:
    // 0x11efb4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11efb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11efb8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x11EFB8u;
    SET_GPR_U32(ctx, 31, 0x11EFC0u);
    ctx->pc = 0x11EFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EFB8u;
    // 0x11efbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x11EFB8u, 0x11EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EFC0u;
label_11efc0:
    // 0x11efc0: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x11efc4: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11EFC4u;
    {
        const bool branch_taken_0x11efc4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x11EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFC4u;
        // 0x11efc8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11efc4) {
            ctx->pc = 0x11EFD0u;
            goto label_11efd0;
        }
    }
    ctx->pc = 0x11EFCCu;
    // 0x11efcc: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x11efccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
label_11efd0:
    // 0x11efd0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11efd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x11efd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11efd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11efd8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x11EFD8u;
    {
        const bool branch_taken_0x11efd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11efd8) {
            ctx->pc = 0x11EFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EFD8u;
            // 0x11efdc: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F028u;
            goto label_11f028;
        }
    }
    ctx->pc = 0x11EFE0u;
    // 0x11efe0: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x11efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x11efe4: 0x5c400010  bgtzl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11EFE4u;
    {
        const bool branch_taken_0x11efe4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x11efe4) {
            ctx->pc = 0x11EFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EFE4u;
            // 0x11efe8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F028u;
            goto label_11f028;
        }
    }
    ctx->pc = 0x11EFECu;
    // 0x11efec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x11efecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11eff0: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x11EFF0u;
    {
        const bool branch_taken_0x11eff0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFF0u;
        // 0x11eff4: 0xae2215b4  sw          $v0, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eff0) {
            ctx->pc = 0x11F018u;
            goto label_11f018;
        }
    }
    ctx->pc = 0x11EFF8u;
    // 0x11eff8: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x11eff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x11effc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11effcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f000: 0xc660076c  lwc1        $f0, 0x76C($s3)
    ctx->pc = 0x11f000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f004: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11f004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11f008: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11f008u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11f00c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11f00cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11f010: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11F010u;
    SET_GPR_U32(ctx, 31, 0x11F018u);
    ctx->pc = 0x11F014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F010u;
    // 0x11f014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11F010u, 0x11F018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F018u;
label_11f018:
    // 0x11f018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f01c: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11F01Cu;
    SET_GPR_U32(ctx, 31, 0x11F024u);
    ctx->pc = 0x11F020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F01Cu;
    // 0x11f020: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11F01Cu, 0x11F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F024u;
label_11f024:
    // 0x11f024: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x11f024u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_11f028:
    // 0x11f028: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x11f028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x11f02c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x11F02Cu;
    {
        const bool branch_taken_0x11f02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F02Cu;
        // 0x11f030: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f02c) {
            ctx->pc = 0x11F0B0u;
            goto label_11f0b0;
        }
    }
    ctx->pc = 0x11F034u;
    // 0x11f034: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x11f034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x11f038: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x11F038u;
    {
        const bool branch_taken_0x11f038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f038) {
            ctx->pc = 0x11F03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F038u;
            // 0x11f03c: 0x7bb100c0  lq          $s1, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F0B4u;
            goto label_11f0b4;
        }
    }
    ctx->pc = 0x11F040u;
    // 0x11f040: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F040u;
    {
        const bool branch_taken_0x11f040 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F040u;
        // 0x11f044: 0xae2015b0  sw          $zero, 0x15B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f040) {
            ctx->pc = 0x11F068u;
            goto label_11f068;
        }
    }
    ctx->pc = 0x11F048u;
    // 0x11f048: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x11f048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x11f04c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11f04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11f050: 0xc660076c  lwc1        $f0, 0x76C($s3)
    ctx->pc = 0x11f050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f054: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11f054u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x11f058: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x11f058u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x11f05c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11f05cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11f060: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x11F060u;
    SET_GPR_U32(ctx, 31, 0x11F068u);
    ctx->pc = 0x11F064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F060u;
    // 0x11f064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x11F060u, 0x11F068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F068u;
label_11f068:
    // 0x11f068: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x11f068u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x11f06c: 0x5c40000d  bgtzl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11F06Cu;
    {
        const bool branch_taken_0x11f06c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x11f06c) {
            ctx->pc = 0x11F070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F06Cu;
            // 0x11f070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F0A4u;
            goto label_11f0a4;
        }
    }
    ctx->pc = 0x11F074u;
    // 0x11f074: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x11f074u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
    // 0x11f078: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x11f078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x11f07c: 0xc0b29c6  jal         func_2CA718
    ctx->pc = 0x11F07Cu;
    SET_GPR_U32(ctx, 31, 0x11F084u);
    ctx->pc = 0x11F080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F07Cu;
    // 0x11f080: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA718u, 0x11F07Cu, 0x11F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F084u;
label_11f084:
    // 0x11f084: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x11f084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x11f088: 0x2405fc18  addiu       $a1, $zero, -0x3E8
    ctx->pc = 0x11f088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x11f08c: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x11F08Cu;
    SET_GPR_U32(ctx, 31, 0x11F094u);
    ctx->pc = 0x11F090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F08Cu;
    // 0x11f090: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x11F08Cu, 0x11F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F094u;
label_11f094:
    // 0x11f094: 0x96220434  lhu         $v0, 0x434($s1)
    ctx->pc = 0x11f094u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1076)));
    // 0x11f098: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x11f098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x11f09c: 0xa6220434  sh          $v0, 0x434($s1)
    ctx->pc = 0x11f09cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1076), (uint16_t)GPR_U32(ctx, 2));
    // 0x11f0a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11f0a4:
    // 0x11f0a4: 0xc04b0d2  jal         func_12C348
    ctx->pc = 0x11F0A4u;
    SET_GPR_U32(ctx, 31, 0x11F0ACu);
    ctx->pc = 0x11F0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F0A4u;
    // 0x11f0a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C348u, 0x11F0A4u, 0x11F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F0ACu;
label_11f0ac:
    // 0x11f0ac: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x11f0acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_11f0b0:
    // 0x11f0b0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x11f0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_11f0b4:
    // 0x11f0b4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x11f0b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11f0b8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x11f0b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11f0bc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11f0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11f0c0: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x11f0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11f0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x11F0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0C4u;
        // 0x11f0c8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F0CCu;
    // 0x11f0cc: 0x0  nop
    ctx->pc = 0x11f0ccu;
    // NOP
    ctx->pc = 0x11f0d0u;
}
