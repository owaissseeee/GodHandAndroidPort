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

// Function: func_001DFDE0
// Address: 0x1dfde0 - 0x1e0210
void func_001DFDE0_0x1dfde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DFDE0_0x1dfde0");
#endif

    switch (ctx->pc) {
        case 0x1dfe34u: goto label_1dfe34;
        case 0x1dfe68u: goto label_1dfe68;
        case 0x1dfe88u: goto label_1dfe88;
        case 0x1dfe98u: goto label_1dfe98;
        case 0x1dfea4u: goto label_1dfea4;
        case 0x1dfeccu: goto label_1dfecc;
        case 0x1dff0cu: goto label_1dff0c;
        case 0x1dff20u: goto label_1dff20;
        case 0x1dff34u: goto label_1dff34;
        case 0x1dff44u: goto label_1dff44;
        case 0x1dff54u: goto label_1dff54;
        case 0x1dff64u: goto label_1dff64;
        case 0x1dff74u: goto label_1dff74;
        case 0x1dff80u: goto label_1dff80;
        case 0x1dff88u: goto label_1dff88;
        case 0x1dff94u: goto label_1dff94;
        case 0x1dff9cu: goto label_1dff9c;
        case 0x1dffa4u: goto label_1dffa4;
        case 0x1dffb0u: goto label_1dffb0;
        case 0x1e0014u: goto label_1e0014;
        case 0x1e0034u: goto label_1e0034;
        case 0x1e0040u: goto label_1e0040;
        case 0x1e0048u: goto label_1e0048;
        case 0x1e0050u: goto label_1e0050;
        case 0x1e0060u: goto label_1e0060;
        case 0x1e0080u: goto label_1e0080;
        case 0x1e0088u: goto label_1e0088;
        case 0x1e0090u: goto label_1e0090;
        case 0x1e00a0u: goto label_1e00a0;
        case 0x1e00d0u: goto label_1e00d0;
        case 0x1e00f0u: goto label_1e00f0;
        case 0x1e0110u: goto label_1e0110;
        case 0x1e0118u: goto label_1e0118;
        case 0x1e0120u: goto label_1e0120;
        case 0x1e0130u: goto label_1e0130;
        case 0x1e0160u: goto label_1e0160;
        case 0x1e0168u: goto label_1e0168;
        case 0x1e0170u: goto label_1e0170;
        case 0x1e017cu: goto label_1e017c;
        case 0x1e0184u: goto label_1e0184;
        case 0x1e01a4u: goto label_1e01a4;
        case 0x1e01b4u: goto label_1e01b4;
        case 0x1e01bcu: goto label_1e01bc;
        case 0x1e01ccu: goto label_1e01cc;
        case 0x1e01d4u: goto label_1e01d4;
        case 0x1e01e0u: goto label_1e01e0;
        default: break;
    }

    ctx->pc = 0x1dfde0u;

    // 0x1dfde0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1dfde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1dfde4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1dfde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1dfde8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1dfde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1dfdec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dfdecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfdf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dfdf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfdf4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1dfdf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1dfdf8: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x1dfdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x1dfdfc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1dfdfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe00: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1dfe00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1dfe04: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1dfe04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1dfe08: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1dfe08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1dfe0c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1dfe0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1dfe10: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1dfe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1dfe14: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1dfe14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1dfe18: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1dfe18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe1c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1dfe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1dfe20: 0x3c170074  lui         $s7, 0x74
    ctx->pc = 0x1dfe20u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)116 << 16));
    // 0x1dfe24: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1dfe24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1dfe28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1dfe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1dfe2c: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x1DFE2Cu;
    SET_GPR_U32(ctx, 31, 0x1DFE34u);
    ctx->pc = 0x1DFE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE2Cu;
    // 0x1dfe30: 0x3c1e0057  lui         $fp, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x1DFE2Cu, 0x1DFE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE34u;
label_1dfe34:
    // 0x1dfe34: 0x3c060074  lui         $a2, 0x74
    ctx->pc = 0x1dfe34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x1dfe38: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x1dfe38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x1dfe3c: 0x8cc37a78  lw          $v1, 0x7A78($a2)
    ctx->pc = 0x1dfe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A78u));
    // 0x1dfe40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1dfe40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1dfe44: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x1dfe44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x1dfe48: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x1dfe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1dfe4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1dfe4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1dfe50: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1dfe50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1dfe54: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1dfe54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dfe58: 0x24b07470  addiu       $s0, $a1, 0x7470
    ctx->pc = 0x1dfe58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 29808));
    // 0x1dfe5c: 0xacc37a78  sw          $v1, 0x7A78($a2)
    ctx->pc = 0x1dfe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 31352), GPR_U32(ctx, 3));
    // 0x1dfe60: 0xc0b4526  jal         func_2D1498
    ctx->pc = 0x1DFE60u;
    SET_GPR_U32(ctx, 31, 0x1DFE68u);
    ctx->pc = 0x1DFE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE60u;
    // 0x1dfe64: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1498u, 0x1DFE60u, 0x1DFE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE68u;
label_1dfe68:
    // 0x1dfe68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfe68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dfe6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe70: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1dfe70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1dfe74: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dfe74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dfe78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfe7c: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1dfe7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x1dfe80: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1DFE80u;
    SET_GPR_U32(ctx, 31, 0x1DFE88u);
    ctx->pc = 0x1DFE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE80u;
    // 0x1dfe84: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1DFE80u, 0x1DFE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFE88u;
label_1dfe88:
    // 0x1dfe88: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x1dfe88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1dfe8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFE8Cu;
    {
        const bool branch_taken_0x1dfe8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFE8Cu;
        // 0x1dfe90: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfe8c) {
            ctx->pc = 0x1DFEA8u;
            goto label_1dfea8;
        }
    }
    ctx->pc = 0x1DFE94u;
    // 0x1dfe94: 0x0  nop
    ctx->pc = 0x1dfe94u;
    // NOP
label_1dfe98:
    // 0x1dfe98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dfe98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfe9c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1DFE9Cu;
    SET_GPR_U32(ctx, 31, 0x1DFEA4u);
    ctx->pc = 0x1DFEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFE9Cu;
    // 0x1dfea0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1DFE9Cu, 0x1DFEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFEA4u;
label_1dfea4:
    // 0x1dfea4: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x1dfea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_1dfea8:
    // 0x1dfea8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1dfea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1dfeac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1dfeacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1dfeb0: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DFEB0u;
    {
        const bool branch_taken_0x1dfeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFEB0u;
        // 0x1dfeb4: 0x8e822f84  lw          $v0, 0x2F84($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfeb0) {
            ctx->pc = 0x1DFE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfe98;
        }
    }
    ctx->pc = 0x1DFEB8u;
    // 0x1dfeb8: 0x26c4ee00  addiu       $a0, $s6, -0x1200
    ctx->pc = 0x1dfeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    // 0x1dfebc: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x1dfebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1dfec0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dfec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfec4: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x1DFEC4u;
    SET_GPR_U32(ctx, 31, 0x1DFECCu);
    ctx->pc = 0x1DFEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFEC4u;
    // 0x1dfec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x1DFEC4u, 0x1DFECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFECCu;
label_1dfecc:
    // 0x1dfecc: 0x263004d0  addiu       $s0, $s1, 0x4D0
    ctx->pc = 0x1dfeccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1232));
    // 0x1dfed0: 0x26e374a0  addiu       $v1, $s7, 0x74A0
    ctx->pc = 0x1dfed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
    // 0x1dfed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfed8: 0xa0620569  sb          $v0, 0x569($v1)
    ctx->pc = 0x1dfed8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1385), (uint8_t)GPR_U32(ctx, 2));
    // 0x1dfedc: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x1dfedcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1dfee0: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x1dfee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x1dfee4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dfee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfee8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1dfee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1dfeec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dfeecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfef0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1dfef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1dfef4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dfef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfef8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1dfef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1dfefc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dfefcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff00: 0xa620048e  sh          $zero, 0x48E($s1)
    ctx->pc = 0x1dff00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1166), (uint16_t)GPR_U32(ctx, 0));
    // 0x1dff04: 0xc078dd6  jal         func_1E3758
    ctx->pc = 0x1DFF04u;
    SET_GPR_U32(ctx, 31, 0x1DFF0Cu);
    ctx->pc = 0x1DFF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF04u;
    // 0x1dff08: 0xae280490  sw          $t0, 0x490($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1168), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3758u, 0x1DFF04u, 0x1DFF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF0Cu;
label_1dff0c:
    // 0x1dff0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dff0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dff14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dff14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff18: 0xc078dd6  jal         func_1E3758
    ctx->pc = 0x1DFF18u;
    SET_GPR_U32(ctx, 31, 0x1DFF20u);
    ctx->pc = 0x1DFF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF18u;
    // 0x1dff1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3758u, 0x1DFF18u, 0x1DFF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF20u;
label_1dff20:
    // 0x1dff20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dff20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dff24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dff28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dff2c: 0xc078dd6  jal         func_1E3758
    ctx->pc = 0x1DFF2Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF34u);
    ctx->pc = 0x1DFF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF2Cu;
    // 0x1dff30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3758u, 0x1DFF2Cu, 0x1DFF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF34u;
label_1dff34:
    // 0x1dff34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dff34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dff38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff3c: 0xc078e4a  jal         func_1E3928
    ctx->pc = 0x1DFF3Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF44u);
    ctx->pc = 0x1DFF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF3Cu;
    // 0x1dff40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3928u, 0x1DFF3Cu, 0x1DFF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF44u;
label_1dff44:
    // 0x1dff44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dff44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dff48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff4c: 0xc078ea6  jal         func_1E3A98
    ctx->pc = 0x1DFF4Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF54u);
    ctx->pc = 0x1DFF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF4Cu;
    // 0x1dff50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3A98u, 0x1DFF4Cu, 0x1DFF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF54u;
label_1dff54:
    // 0x1dff54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dff54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dff58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff5c: 0xc078f02  jal         func_1E3C08
    ctx->pc = 0x1DFF5Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF64u);
    ctx->pc = 0x1DFF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF5Cu;
    // 0x1dff60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3C08u, 0x1DFF5Cu, 0x1DFF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF64u;
label_1dff64:
    // 0x1dff64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dff64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dff68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff6c: 0xc078f5e  jal         func_1E3D78
    ctx->pc = 0x1DFF6Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF74u);
    ctx->pc = 0x1DFF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF6Cu;
    // 0x1dff70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3D78u, 0x1DFF6Cu, 0x1DFF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF74u;
label_1dff74:
    // 0x1dff74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dff74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff78: 0xc079c6e  jal         func_1E71B8
    ctx->pc = 0x1DFF78u;
    SET_GPR_U32(ctx, 31, 0x1DFF80u);
    ctx->pc = 0x1DFF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF78u;
    // 0x1dff7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E71B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E71B8u, 0x1DFF78u, 0x1DFF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF80u;
label_1dff80:
    // 0x1dff80: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1DFF80u;
    SET_GPR_U32(ctx, 31, 0x1DFF88u);
    ctx->pc = 0x1DFF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF80u;
    // 0x1dff84: 0x27c49b70  addiu       $a0, $fp, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1DFF80u, 0x1DFF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF88u;
label_1dff88:
    // 0x1dff88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dff88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dff8c: 0xc0b5952  jal         func_2D6548
    ctx->pc = 0x1DFF8Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF94u);
    ctx->pc = 0x1DFF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF8Cu;
    // 0x1dff90: 0x26240520  addiu       $a0, $s1, 0x520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6548u, 0x1DFF8Cu, 0x1DFF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF94u;
label_1dff94:
    // 0x1dff94: 0xc079cf0  jal         func_1E73C0
    ctx->pc = 0x1DFF94u;
    SET_GPR_U32(ctx, 31, 0x1DFF9Cu);
    ctx->pc = 0x1DFF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF94u;
    // 0x1dff98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73C0u, 0x1DFF94u, 0x1DFF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF9Cu;
label_1dff9c:
    // 0x1dff9c: 0xc079d10  jal         func_1E7440
    ctx->pc = 0x1DFF9Cu;
    SET_GPR_U32(ctx, 31, 0x1DFFA4u);
    ctx->pc = 0x1DFFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF9Cu;
    // 0x1dffa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7440u, 0x1DFF9Cu, 0x1DFFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFFA4u;
label_1dffa4:
    // 0x1dffa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dffa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dffa8: 0xc078c90  jal         func_1E3240
    ctx->pc = 0x1DFFA8u;
    SET_GPR_U32(ctx, 31, 0x1DFFB0u);
    ctx->pc = 0x1DFFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFFA8u;
    // 0x1dffac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3240u, 0x1DFFA8u, 0x1DFFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFFB0u;
label_1dffb0:
    // 0x1dffb0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1dffb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1dffb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dffb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dffb8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1dffb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dffbc: 0x3c014305  lui         $at, 0x4305
    ctx->pc = 0x1dffbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17157 << 16));
    // 0x1dffc0: 0x34216e1b  ori         $at, $at, 0x6E1B
    ctx->pc = 0x1dffc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28187);
    // 0x1dffc4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1dffc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dffc8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1dffc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dffcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dffccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dffd0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1dffd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1dffd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dffd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dffd8: 0x3c0143fc  lui         $at, 0x43FC
    ctx->pc = 0x1dffd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17404 << 16));
    // 0x1dffdc: 0x3421cfa8  ori         $at, $at, 0xCFA8
    ctx->pc = 0x1dffdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53160);
    // 0x1dffe0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dffe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dffe4: 0x3c0142b5  lui         $at, 0x42B5
    ctx->pc = 0x1dffe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17077 << 16));
    // 0x1dffe8: 0x34219e1b  ori         $at, $at, 0x9E1B
    ctx->pc = 0x1dffe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)40475);
    // 0x1dffec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1dffecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dfff0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1dfff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1dfff4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1dfff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1dfff8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1dfff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1dfffc: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1dfffcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e0000: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x1e0000u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1e0004: 0xe6430004  swc1        $f3, 0x4($s2)
    ctx->pc = 0x1e0004u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1e0008: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x1e0008u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1e000c: 0xc078cba  jal         func_1E32E8
    ctx->pc = 0x1E000Cu;
    SET_GPR_U32(ctx, 31, 0x1E0014u);
    ctx->pc = 0x1E0010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E000Cu;
    // 0x1e0010: 0xe644000c  swc1        $f4, 0xC($s2) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E32E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E32E8u, 0x1E000Cu, 0x1E0014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0014u;
label_1e0014:
    // 0x1e0014: 0x26a47470  addiu       $a0, $s5, 0x7470
    ctx->pc = 0x1e0014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 29808));
    // 0x1e0018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e001c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1e001cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e0020: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e0020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0024: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1e0024u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x1e0028: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e0028u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e002c: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1E002Cu;
    SET_GPR_U32(ctx, 31, 0x1E0034u);
    ctx->pc = 0x1E0030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E002Cu;
    // 0x1e0030: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1E002Cu, 0x1E0034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0034u;
label_1e0034:
    // 0x1e0034: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E0034u;
    {
        const bool branch_taken_0x1e0034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0034u;
        // 0x1e0038: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0034) {
            ctx->pc = 0x1E0060u;
            goto label_1e0060;
        }
    }
    ctx->pc = 0x1E003Cu;
    // 0x1e003c: 0x0  nop
    ctx->pc = 0x1e003cu;
    // NOP
label_1e0040:
    // 0x1e0040: 0xc079cf0  jal         func_1E73C0
    ctx->pc = 0x1E0040u;
    SET_GPR_U32(ctx, 31, 0x1E0048u);
    ctx->pc = 0x1E0044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0040u;
    // 0x1e0044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73C0u, 0x1E0040u, 0x1E0048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0048u;
label_1e0048:
    // 0x1e0048: 0xc079d10  jal         func_1E7440
    ctx->pc = 0x1E0048u;
    SET_GPR_U32(ctx, 31, 0x1E0050u);
    ctx->pc = 0x1E004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0048u;
    // 0x1e004c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7440u, 0x1E0048u, 0x1E0050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0050u;
label_1e0050:
    // 0x1e0050: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x1e0050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x1e0054: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e0054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0058: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1E0058u;
    SET_GPR_U32(ctx, 31, 0x1E0060u);
    ctx->pc = 0x1E005Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0058u;
    // 0x1e005c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1E0058u, 0x1E0060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0060u;
label_1e0060:
    // 0x1e0060: 0x26a47470  addiu       $a0, $s5, 0x7470
    ctx->pc = 0x1e0060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 29808));
    // 0x1e0064: 0x9082001c  lbu         $v0, 0x1C($a0)
    ctx->pc = 0x1e0064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1e0068: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1e0068u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1e006c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e006cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e0070: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1E0070u;
    {
        const bool branch_taken_0x1e0070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0070) {
            ctx->pc = 0x1E0040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0040;
        }
    }
    ctx->pc = 0x1E0078u;
    // 0x1e0078: 0xc0c1db8  jal         func_3076E0
    ctx->pc = 0x1E0078u;
    SET_GPR_U32(ctx, 31, 0x1E0080u);
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x1E0078u, 0x1E0080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0080u;
label_1e0080:
    // 0x1e0080: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0080u;
    {
        const bool branch_taken_0x1e0080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0080u;
        // 0x1e0084: 0x9e220054  lwu         $v0, 0x54($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0080) {
            ctx->pc = 0x1E00A4u;
            goto label_1e00a4;
        }
    }
    ctx->pc = 0x1E0088u;
label_1e0088:
    // 0x1e0088: 0xc078084  jal         func_1E0210
    ctx->pc = 0x1E0088u;
    SET_GPR_U32(ctx, 31, 0x1E0090u);
    ctx->pc = 0x1E008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0088u;
    // 0x1e008c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0210u, 0x1E0088u, 0x1E0090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0090u;
label_1e0090:
    // 0x1e0090: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x1e0090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x1e0094: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e0094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0098: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1E0098u;
    SET_GPR_U32(ctx, 31, 0x1E00A0u);
    ctx->pc = 0x1E009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0098u;
    // 0x1e009c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1E0098u, 0x1E00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00A0u;
label_1e00a0:
    // 0x1e00a0: 0x9e220054  lwu         $v0, 0x54($s1)
    ctx->pc = 0x1e00a0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_1e00a4:
    // 0x1e00a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e00a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e00a8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E00A8u;
    {
        const bool branch_taken_0x1e00a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E00ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00A8u;
        // 0x1e00ac: 0x26c4ee00  addiu       $a0, $s6, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00a8) {
            ctx->pc = 0x1E0088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0088;
        }
    }
    ctx->pc = 0x1E00B0u;
    // 0x1e00b0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1e00b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1e00b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e00b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e00b8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1e00b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e00bc: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x1e00bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1e00c0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1e00c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1e00c4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1e00c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1e00c8: 0xc0b45da  jal         func_2D1768
    ctx->pc = 0x1E00C8u;
    SET_GPR_U32(ctx, 31, 0x1E00D0u);
    ctx->pc = 0x1E00CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00C8u;
    // 0x1e00cc: 0x26b07470  addiu       $s0, $s5, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1768u, 0x1E00C8u, 0x1E00D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00D0u;
label_1e00d0:
    // 0x1e00d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e00d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e00d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00d8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1e00d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e00dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e00dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e00e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e00e4: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x1e00e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x1e00e8: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1E00E8u;
    SET_GPR_U32(ctx, 31, 0x1E00F0u);
    ctx->pc = 0x1E00ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E00E8u;
    // 0x1e00ec: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1E00E8u, 0x1E00F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E00F0u;
label_1e00f0:
    // 0x1e00f0: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x1e00f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e00f4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1e00f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1e00f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e00f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e00fc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E00FCu;
    {
        const bool branch_taken_0x1e00fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E00FCu;
        // 0x1e0100: 0x26e374a0  addiu       $v1, $s7, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e00fc) {
            ctx->pc = 0x1E0144u;
            goto label_1e0144;
        }
    }
    ctx->pc = 0x1E0104u;
    // 0x1e0104: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1e0104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0108: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1e0108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e010c: 0x0  nop
    ctx->pc = 0x1e010cu;
    // NOP
label_1e0110:
    // 0x1e0110: 0xc079cf0  jal         func_1E73C0
    ctx->pc = 0x1E0110u;
    SET_GPR_U32(ctx, 31, 0x1E0118u);
    ctx->pc = 0x1E0114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0110u;
    // 0x1e0114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E73C0u, 0x1E0110u, 0x1E0118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0118u;
label_1e0118:
    // 0x1e0118: 0xc079d10  jal         func_1E7440
    ctx->pc = 0x1E0118u;
    SET_GPR_U32(ctx, 31, 0x1E0120u);
    ctx->pc = 0x1E011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0118u;
    // 0x1e011c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7440u, 0x1E0118u, 0x1E0120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0120u;
label_1e0120:
    // 0x1e0120: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x1e0120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x1e0124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e0124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0128: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1E0128u;
    SET_GPR_U32(ctx, 31, 0x1E0130u);
    ctx->pc = 0x1E012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0128u;
    // 0x1e012c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1E0128u, 0x1E0130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0130u;
label_1e0130:
    // 0x1e0130: 0x9262001c  lbu         $v0, 0x1C($s3)
    ctx->pc = 0x1e0130u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1e0134: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1e0134u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1e0138: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e0138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e013c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E013Cu;
    {
        const bool branch_taken_0x1e013c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E013Cu;
        // 0x1e0140: 0x26e374a0  addiu       $v1, $s7, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e013c) {
            ctx->pc = 0x1E0110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0110;
        }
    }
    ctx->pc = 0x1E0144u;
label_1e0144:
    // 0x1e0144: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1e0144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1e0148: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e0148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e014c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e0150: 0x26c4ee00  addiu       $a0, $s6, -0x1200
    ctx->pc = 0x1e0150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
    // 0x1e0154: 0xa0620569  sb          $v0, 0x569($v1)
    ctx->pc = 0x1e0154u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1385), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e0158: 0xc0b453e  jal         func_2D14F8
    ctx->pc = 0x1E0158u;
    SET_GPR_U32(ctx, 31, 0x1E0160u);
    ctx->pc = 0x1E015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0158u;
    // 0x1e015c: 0x26b07470  addiu       $s0, $s5, 0x7470 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 29808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D14F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D14F8u, 0x1E0158u, 0x1E0160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0160u;
label_1e0160:
    // 0x1e0160: 0xc079cda  jal         func_1E7368
    ctx->pc = 0x1E0160u;
    SET_GPR_U32(ctx, 31, 0x1E0168u);
    ctx->pc = 0x1E0164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0160u;
    // 0x1e0164: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7368u, 0x1E0160u, 0x1E0168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0168u;
label_1e0168:
    // 0x1e0168: 0xc07ea08  jal         func_1FA820
    ctx->pc = 0x1E0168u;
    SET_GPR_U32(ctx, 31, 0x1E0170u);
    ctx->pc = 0x1E016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0168u;
    // 0x1e016c: 0x27c49b70  addiu       $a0, $fp, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA820u, 0x1E0168u, 0x1E0170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0170u;
label_1e0170:
    // 0x1e0170: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e0170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0174: 0xc078c90  jal         func_1E3240
    ctx->pc = 0x1E0174u;
    SET_GPR_U32(ctx, 31, 0x1E017Cu);
    ctx->pc = 0x1E0178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0174u;
    // 0x1e0178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3240u, 0x1E0174u, 0x1E017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E017Cu;
label_1e017c:
    // 0x1e017c: 0xc078ce2  jal         func_1E3388
    ctx->pc = 0x1E017Cu;
    SET_GPR_U32(ctx, 31, 0x1E0184u);
    ctx->pc = 0x1E0180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E017Cu;
    // 0x1e0180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3388u, 0x1E017Cu, 0x1E0184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0184u;
label_1e0184:
    // 0x1e0184: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1e0184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e0188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e0188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e018c: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x1e018cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x1e0190: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e0190u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0194: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1e0194u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e0198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e0198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e019c: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x1E019Cu;
    SET_GPR_U32(ctx, 31, 0x1E01A4u);
    ctx->pc = 0x1E01A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E019Cu;
    // 0x1e01a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x1E019Cu, 0x1E01A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01A4u;
label_1e01a4:
    // 0x1e01a4: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x1e01a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x1e01a8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e01a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e01ac: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x1E01ACu;
    SET_GPR_U32(ctx, 31, 0x1E01B4u);
    ctx->pc = 0x1E01B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01ACu;
    // 0x1e01b0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x1E01ACu, 0x1E01B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01B4u;
label_1e01b4:
    // 0x1e01b4: 0xc0c1db8  jal         func_3076E0
    ctx->pc = 0x1E01B4u;
    SET_GPR_U32(ctx, 31, 0x1E01BCu);
    ctx->pc = 0x1E01B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01B4u;
    // 0x1e01b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3076E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3076E0u, 0x1E01B4u, 0x1E01BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01BCu;
label_1e01bc:
    // 0x1e01bc: 0x9625048c  lhu         $a1, 0x48C($s1)
    ctx->pc = 0x1e01bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1164)));
    // 0x1e01c0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e01c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e01c4: 0xc0b0a54  jal         func_2C2950
    ctx->pc = 0x1E01C4u;
    SET_GPR_U32(ctx, 31, 0x1E01CCu);
    ctx->pc = 0x1E01C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01C4u;
    // 0x1e01c8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2950u, 0x1E01C4u, 0x1E01CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01CCu;
label_1e01cc:
    // 0x1e01cc: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x1E01CCu;
    SET_GPR_U32(ctx, 31, 0x1E01D4u);
    ctx->pc = 0x1E01D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01CCu;
    // 0x1e01d0: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x1E01CCu, 0x1E01D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01D4u;
label_1e01d4:
    // 0x1e01d4: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x1e01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x1e01d8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x1E01D8u;
    SET_GPR_U32(ctx, 31, 0x1E01E0u);
    ctx->pc = 0x1E01DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E01D8u;
    // 0x1e01dc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x1E01D8u, 0x1E01E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E01E0u;
label_1e01e0:
    // 0x1e01e0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1e01e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e01e4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1e01e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e01e8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1e01e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e01ec: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1e01ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e01f0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1e01f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e01f4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1e01f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e01f8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1e01f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e01fc: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1e01fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e0200: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1e0200u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0204: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e0204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e0208: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0208u;
        // 0x1e020c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0210u;
}
