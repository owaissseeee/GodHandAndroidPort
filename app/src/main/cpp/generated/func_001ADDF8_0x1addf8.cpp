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

// Function: func_001ADDF8
// Address: 0x1addf8 - 0x1ae5b0
void func_001ADDF8_0x1addf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001ADDF8_0x1addf8");
#endif

    switch (ctx->pc) {
        case 0x1ade20u: goto label_1ade20;
        case 0x1ade5cu: goto label_1ade5c;
        case 0x1ade70u: goto label_1ade70;
        case 0x1ade7cu: goto label_1ade7c;
        case 0x1ade94u: goto label_1ade94;
        case 0x1adea4u: goto label_1adea4;
        case 0x1adeccu: goto label_1adecc;
        case 0x1adf30u: goto label_1adf30;
        case 0x1adf3cu: goto label_1adf3c;
        case 0x1adfe4u: goto label_1adfe4;
        case 0x1adff0u: goto label_1adff0;
        case 0x1ae084u: goto label_1ae084;
        case 0x1ae090u: goto label_1ae090;
        case 0x1ae16cu: goto label_1ae16c;
        case 0x1ae188u: goto label_1ae188;
        case 0x1ae228u: goto label_1ae228;
        case 0x1ae280u: goto label_1ae280;
        case 0x1ae2c8u: goto label_1ae2c8;
        case 0x1ae2d4u: goto label_1ae2d4;
        case 0x1ae2e8u: goto label_1ae2e8;
        case 0x1ae2f4u: goto label_1ae2f4;
        case 0x1ae2fcu: goto label_1ae2fc;
        case 0x1ae318u: goto label_1ae318;
        case 0x1ae39cu: goto label_1ae39c;
        case 0x1ae518u: goto label_1ae518;
        default: break;
    }

    ctx->pc = 0x1addf8u;

    // 0x1addf8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1addf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1addfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1addfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ade00: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1ade00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1ade04: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x1ade04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ade08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade0c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1ade0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1ade10: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1ade10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1ade14: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ade14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ade18: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ade18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ade1c: 0x0  nop
    ctx->pc = 0x1ade1cu;
    // NOP
label_1ade20:
    // 0x1ade20: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1ade20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ade24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ade24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ade28: 0x0  nop
    ctx->pc = 0x1ade28u;
    // NOP
    // 0x1ade2c: 0x0  nop
    ctx->pc = 0x1ade2cu;
    // NOP
    // 0x1ade30: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ADE30u;
    {
        const bool branch_taken_0x1ade30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1ADE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE30u;
        // 0x1ade34: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade30) {
            ctx->pc = 0x1ADE20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ade20;
        }
    }
    ctx->pc = 0x1ADE38u;
    // 0x1ade38: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1ade38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ade3c: 0x8e220620  lw          $v0, 0x620($s1)
    ctx->pc = 0x1ade3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1ade40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ADE40u;
    {
        const bool branch_taken_0x1ade40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE40u;
        // 0x1ade44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade40) {
            ctx->pc = 0x1ADE74u;
            goto label_1ade74;
        }
    }
    ctx->pc = 0x1ADE48u;
    // 0x1ade48: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1ade48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1ade4c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ADE4Cu;
    {
        const bool branch_taken_0x1ade4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ADE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE4Cu;
        // 0x1ade50: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade4c) {
            ctx->pc = 0x1ADE64u;
            goto label_1ade64;
        }
    }
    ctx->pc = 0x1ADE54u;
    // 0x1ade54: 0xc06b98c  jal         func_1AE630
    ctx->pc = 0x1ADE54u;
    SET_GPR_U32(ctx, 31, 0x1ADE5Cu);
    ctx->pc = 0x1ADE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE54u;
    // 0x1ade58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE630u, 0x1ADE54u, 0x1ADE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE5Cu;
label_1ade5c:
    // 0x1ade5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ADE5Cu;
    {
        const bool branch_taken_0x1ade5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE5Cu;
        // 0x1ade60: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade5c) {
            ctx->pc = 0x1ADE74u;
            goto label_1ade74;
        }
    }
    ctx->pc = 0x1ADE64u;
label_1ade64:
    // 0x1ade64: 0x8e250620  lw          $a1, 0x620($s1)
    ctx->pc = 0x1ade64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1ade68: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1ADE68u;
    SET_GPR_U32(ctx, 31, 0x1ADE70u);
    ctx->pc = 0x1ADE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE68u;
    // 0x1ade6c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1ADE68u, 0x1ADE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE70u;
label_1ade70:
    // 0x1ade70: 0xae200620  sw          $zero, 0x620($s1)
    ctx->pc = 0x1ade70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1568), GPR_U32(ctx, 0));
label_1ade74:
    // 0x1ade74: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1ADE74u;
    SET_GPR_U32(ctx, 31, 0x1ADE7Cu);
    ctx->pc = 0x1ADE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE74u;
    // 0x1ade78: 0xa220060c  sb          $zero, 0x60C($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1548), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1ADE74u, 0x1ADE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE7Cu;
label_1ade7c:
    // 0x1ade7c: 0x8443054a  lh          $v1, 0x54A($v0)
    ctx->pc = 0x1ade7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1354)));
    // 0x1ade80: 0x186001c4  blez        $v1, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x1ADE80u;
    {
        const bool branch_taken_0x1ade80 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1ADE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADE80u;
        // 0x1ade84: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade80) {
            ctx->pc = 0x1AE594u;
            goto label_1ae594;
        }
    }
    ctx->pc = 0x1ADE88u;
    // 0x1ade88: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x1ade88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x1ade8c: 0xc0a4c48  jal         func_293120
    ctx->pc = 0x1ADE8Cu;
    SET_GPR_U32(ctx, 31, 0x1ADE94u);
    ctx->pc = 0x1ADE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE8Cu;
    // 0x1ade90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293120u, 0x1ADE8Cu, 0x1ADE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADE94u;
label_1ade94:
    // 0x1ade94: 0x544001c0  bnel        $v0, $zero, . + 4 + (0x1C0 << 2)
    ctx->pc = 0x1ADE94u;
    {
        const bool branch_taken_0x1ade94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ade94) {
            ctx->pc = 0x1ADE98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADE94u;
            // 0x1ade98: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE598u;
            goto label_1ae598;
        }
    }
    ctx->pc = 0x1ADE9Cu;
    // 0x1ade9c: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x1ADE9Cu;
    SET_GPR_U32(ctx, 31, 0x1ADEA4u);
    ctx->pc = 0x1ADEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADE9Cu;
    // 0x1adea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x1ADE9Cu, 0x1ADEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADEA4u;
label_1adea4:
    // 0x1adea4: 0x544001bc  bnel        $v0, $zero, . + 4 + (0x1BC << 2)
    ctx->pc = 0x1ADEA4u;
    {
        const bool branch_taken_0x1adea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adea4) {
            ctx->pc = 0x1ADEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADEA4u;
            // 0x1adea8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE598u;
            goto label_1ae598;
        }
    }
    ctx->pc = 0x1ADEACu;
    // 0x1adeac: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1adeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1adeb0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1adeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1adeb4: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x1adeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x1adeb8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1adeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1adebc: 0x546001b6  bnel        $v1, $zero, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x1ADEBCu;
    {
        const bool branch_taken_0x1adebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adebc) {
            ctx->pc = 0x1ADEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADEBCu;
            // 0x1adec0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE598u;
            goto label_1ae598;
        }
    }
    ctx->pc = 0x1ADEC4u;
    // 0x1adec4: 0xc06b98c  jal         func_1AE630
    ctx->pc = 0x1ADEC4u;
    SET_GPR_U32(ctx, 31, 0x1ADECCu);
    ctx->pc = 0x1ADEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADEC4u;
    // 0x1adec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE630u, 0x1ADEC4u, 0x1ADECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADECCu;
label_1adecc:
    // 0x1adecc: 0x544001b2  bnel        $v0, $zero, . + 4 + (0x1B2 << 2)
    ctx->pc = 0x1ADECCu;
    {
        const bool branch_taken_0x1adecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adecc) {
            ctx->pc = 0x1ADED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADECCu;
            // 0x1aded0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE598u;
            goto label_1ae598;
        }
    }
    ctx->pc = 0x1ADED4u;
    // 0x1aded4: 0x8e230600  lw          $v1, 0x600($s1)
    ctx->pc = 0x1aded4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1aded8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1aded8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1adedc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1adedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1adee0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1ADEE0u;
    {
        const bool branch_taken_0x1adee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adee0) {
            ctx->pc = 0x1ADEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADEE0u;
            // 0x1adee4: 0x922202f6  lbu         $v0, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ADF1Cu;
            goto label_1adf1c;
        }
    }
    ctx->pc = 0x1ADEE8u;
    // 0x1adee8: 0xc6210614  lwc1        $f1, 0x614($s1)
    ctx->pc = 0x1adee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1adeec: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1adeecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1adef0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1adef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1adef4: 0x0  nop
    ctx->pc = 0x1adef4u;
    // NOP
    // 0x1adef8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1adef8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1adefc: 0x0  nop
    ctx->pc = 0x1adefcu;
    // NOP
    // 0x1adf00: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1ADF00u;
    {
        const bool branch_taken_0x1adf00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ADF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF00u;
        // 0x1adf04: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf00) {
            ctx->pc = 0x1ADF18u;
            goto label_1adf18;
        }
    }
    ctx->pc = 0x1ADF08u;
    // 0x1adf08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1adf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1adf0c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADF0Cu;
    {
        const bool branch_taken_0x1adf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF0Cu;
        // 0x1adf10: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf0c) {
            ctx->pc = 0x1ADF18u;
            goto label_1adf18;
        }
    }
    ctx->pc = 0x1ADF14u;
    // 0x1adf14: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1adf14u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1adf18:
    // 0x1adf18: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1adf18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_1adf1c:
    // 0x1adf1c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1adf1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1adf20: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x1ADF20u;
    {
        const bool branch_taken_0x1adf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adf20) {
            ctx->pc = 0x1ADF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ADF20u;
            // 0x1adf24: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE0D4u;
            goto label_1ae0d4;
        }
    }
    ctx->pc = 0x1ADF28u;
    // 0x1adf28: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1ADF28u;
    SET_GPR_U32(ctx, 31, 0x1ADF30u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1ADF28u, 0x1ADF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF30u;
label_1adf30:
    // 0x1adf30: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x1adf30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1adf34: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x1ADF34u;
    SET_GPR_U32(ctx, 31, 0x1ADF3Cu);
    ctx->pc = 0x1ADF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADF34u;
    // 0x1adf38: 0x8e2500f0  lw          $a1, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x1ADF34u, 0x1ADF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADF3Cu;
label_1adf3c:
    // 0x1adf3c: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x1adf3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x1adf40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1adf40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1adf44: 0x0  nop
    ctx->pc = 0x1adf44u;
    // NOP
    // 0x1adf48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1adf48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1adf4c: 0x0  nop
    ctx->pc = 0x1adf4cu;
    // NOP
    // 0x1adf50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADF50u;
    {
        const bool branch_taken_0x1adf50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ADF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF50u;
        // 0x1adf54: 0xe6200614  swc1        $f0, 0x614($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf50) {
            ctx->pc = 0x1ADF60u;
            goto label_1adf60;
        }
    }
    ctx->pc = 0x1ADF58u;
    // 0x1adf58: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x1ADF58u;
    {
        const bool branch_taken_0x1adf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF58u;
        // 0x1adf5c: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf58) {
            ctx->pc = 0x1AE0D0u;
            goto label_1ae0d0;
        }
    }
    ctx->pc = 0x1ADF60u;
label_1adf60:
    // 0x1adf60: 0x8e240604  lw          $a0, 0x604($s1)
    ctx->pc = 0x1adf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1540)));
    // 0x1adf64: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1ADF64u;
    {
        const bool branch_taken_0x1adf64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1adf64) {
            ctx->pc = 0x1ADFF8u;
            goto label_1adff8;
        }
    }
    ctx->pc = 0x1ADF6Cu;
    // 0x1adf6c: 0x8c8209d0  lw          $v0, 0x9D0($a0)
    ctx->pc = 0x1adf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2512)));
    // 0x1adf70: 0x4400021  bltz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1ADF70u;
    {
        const bool branch_taken_0x1adf70 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1ADF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF70u;
        // 0x1adf74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf70) {
            ctx->pc = 0x1ADFF8u;
            goto label_1adff8;
        }
    }
    ctx->pc = 0x1ADF78u;
    // 0x1adf78: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x1adf78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1adf7c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1adf7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1adf80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADF80u;
    {
        const bool branch_taken_0x1adf80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF80u;
        // 0x1adf84: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf80) {
            ctx->pc = 0x1ADF94u;
            goto label_1adf94;
        }
    }
    ctx->pc = 0x1ADF88u;
    // 0x1adf88: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1adf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1adf8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1ADF8Cu;
    {
        const bool branch_taken_0x1adf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADF8Cu;
        // 0x1adf90: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf8c) {
            ctx->pc = 0x1ADF98u;
            goto label_1adf98;
        }
    }
    ctx->pc = 0x1ADF94u;
label_1adf94:
    // 0x1adf94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1adf94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1adf98:
    // 0x1adf98: 0xc46300b8  lwc1        $f3, 0xB8($v1)
    ctx->pc = 0x1adf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1adf9c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1adf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1adfa0: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1adfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1adfa4: 0xc46100b4  lwc1        $f1, 0xB4($v1)
    ctx->pc = 0x1adfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1adfa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1adfa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1adfac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1adfacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1adfb0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1adfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1adfb4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1adfb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1adfb8: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x1adfb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1adfbc: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ADFBCu;
    {
        const bool branch_taken_0x1adfbc = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ADFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFBCu;
        // 0x1adfc0: 0xe442000c  swc1        $f2, 0xC($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfbc) {
            ctx->pc = 0x1ADFDCu;
            goto label_1adfdc;
        }
    }
    ctx->pc = 0x1ADFC4u;
    // 0x1adfc4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1adfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1adfc8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1adfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1adfcc: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1adfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1adfd0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1adfd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1adfd4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1adfd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1adfd8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1adfd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1adfdc:
    // 0x1adfdc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1ADFDCu;
    SET_GPR_U32(ctx, 31, 0x1ADFE4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1ADFDCu, 0x1ADFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFE4u;
label_1adfe4:
    // 0x1adfe4: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x1adfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1adfe8: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x1ADFE8u;
    SET_GPR_U32(ctx, 31, 0x1ADFF0u);
    ctx->pc = 0x1ADFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADFE8u;
    // 0x1adfec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x1ADFE8u, 0x1ADFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADFF0u;
label_1adff0:
    // 0x1adff0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ADFF0u;
    {
        const bool branch_taken_0x1adff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADFF0u;
        // 0x1adff4: 0xe6200618  swc1        $f0, 0x618($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adff0) {
            ctx->pc = 0x1AE00Cu;
            goto label_1ae00c;
        }
    }
    ctx->pc = 0x1ADFF8u;
label_1adff8:
    // 0x1adff8: 0x3c01459c  lui         $at, 0x459C
    ctx->pc = 0x1adff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17820 << 16));
    // 0x1adffc: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1adffcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1ae000: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ae000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae004: 0x0  nop
    ctx->pc = 0x1ae004u;
    // NOP
    // 0x1ae008: 0xe6200618  swc1        $f0, 0x618($s1)
    ctx->pc = 0x1ae008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1560), bits); }
label_1ae00c:
    // 0x1ae00c: 0x8e240608  lw          $a0, 0x608($s1)
    ctx->pc = 0x1ae00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1544)));
    // 0x1ae010: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1AE010u;
    {
        const bool branch_taken_0x1ae010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae010) {
            ctx->pc = 0x1AE098u;
            goto label_1ae098;
        }
    }
    ctx->pc = 0x1AE018u;
    // 0x1ae018: 0x8c8209d0  lw          $v0, 0x9D0($a0)
    ctx->pc = 0x1ae018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2512)));
    // 0x1ae01c: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AE01Cu;
    {
        const bool branch_taken_0x1ae01c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1AE020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE01Cu;
        // 0x1ae020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae01c) {
            ctx->pc = 0x1AE098u;
            goto label_1ae098;
        }
    }
    ctx->pc = 0x1AE024u;
    // 0x1ae024: 0x908302b4  lbu         $v1, 0x2B4($a0)
    ctx->pc = 0x1ae024u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 692)));
    // 0x1ae028: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1ae028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ae02c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE02Cu;
    {
        const bool branch_taken_0x1ae02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE02Cu;
        // 0x1ae030: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae02c) {
            ctx->pc = 0x1AE040u;
            goto label_1ae040;
        }
    }
    ctx->pc = 0x1AE034u;
    // 0x1ae034: 0x8c820278  lw          $v0, 0x278($a0)
    ctx->pc = 0x1ae034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
    // 0x1ae038: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE038u;
    {
        const bool branch_taken_0x1ae038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE038u;
        // 0x1ae03c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae038) {
            ctx->pc = 0x1AE044u;
            goto label_1ae044;
        }
    }
    ctx->pc = 0x1AE040u;
label_1ae040:
    // 0x1ae040: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ae040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ae044:
    // 0x1ae044: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x1ae044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae048: 0xc44200b8  lwc1        $f2, 0xB8($v0)
    ctx->pc = 0x1ae048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ae04c: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x1ae04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae050: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1ae050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ae054: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1ae054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ae058: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1ae058u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ae05c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1ae05cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1ae060: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1ae060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ae064: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x1ae064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ae068: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ae068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ae06c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ae06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae070: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1ae070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1ae074: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ae074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1ae078: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1ae078u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1ae07c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1AE07Cu;
    SET_GPR_U32(ctx, 31, 0x1AE084u);
    ctx->pc = 0x1AE080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE07Cu;
    // 0x1ae080: 0xe7a30018  swc1        $f3, 0x18($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1AE07Cu, 0x1AE084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE084u;
label_1ae084:
    // 0x1ae084: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x1ae084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ae088: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x1AE088u;
    SET_GPR_U32(ctx, 31, 0x1AE090u);
    ctx->pc = 0x1AE08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE088u;
    // 0x1ae08c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x1AE088u, 0x1AE090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE090u;
label_1ae090:
    // 0x1ae090: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE090u;
    {
        const bool branch_taken_0x1ae090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE090u;
        // 0x1ae094: 0xe620061c  swc1        $f0, 0x61C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae090) {
            ctx->pc = 0x1AE0ACu;
            goto label_1ae0ac;
        }
    }
    ctx->pc = 0x1AE098u;
label_1ae098:
    // 0x1ae098: 0x3c01459c  lui         $at, 0x459C
    ctx->pc = 0x1ae098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17820 << 16));
    // 0x1ae09c: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1ae09cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1ae0a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ae0a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae0a4: 0x0  nop
    ctx->pc = 0x1ae0a4u;
    // NOP
    // 0x1ae0a8: 0xe620061c  swc1        $f0, 0x61C($s1)
    ctx->pc = 0x1ae0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1564), bits); }
label_1ae0ac:
    // 0x1ae0ac: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x1ae0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae0b0: 0xc620061c  lwc1        $f0, 0x61C($s1)
    ctx->pc = 0x1ae0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae0b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ae0b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ae0b8: 0x0  nop
    ctx->pc = 0x1ae0b8u;
    // NOP
    // 0x1ae0bc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE0BCu;
    {
        const bool branch_taken_0x1ae0bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0BCu;
        // 0x1ae0c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0bc) {
            ctx->pc = 0x1AE0CCu;
            goto label_1ae0cc;
        }
    }
    ctx->pc = 0x1AE0C4u;
    // 0x1ae0c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE0C4u;
    {
        const bool branch_taken_0x1ae0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0C4u;
        // 0x1ae0c8: 0xae200610  sw          $zero, 0x610($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0c4) {
            ctx->pc = 0x1AE0D0u;
            goto label_1ae0d0;
        }
    }
    ctx->pc = 0x1AE0CCu;
label_1ae0cc:
    // 0x1ae0cc: 0xae220610  sw          $v0, 0x610($s1)
    ctx->pc = 0x1ae0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1552), GPR_U32(ctx, 2));
label_1ae0d0:
    // 0x1ae0d0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1ae0d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_1ae0d4:
    // 0x1ae0d4: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1ae0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ae0d8: 0x1040012e  beqz        $v0, . + 4 + (0x12E << 2)
    ctx->pc = 0x1AE0D8u;
    {
        const bool branch_taken_0x1ae0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE0D8u;
        // 0x1ae0dc: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0d8) {
            ctx->pc = 0x1AE594u;
            goto label_1ae594;
        }
    }
    ctx->pc = 0x1AE0E0u;
    // 0x1ae0e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ae0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ae0e4: 0x24427f30  addiu       $v0, $v0, 0x7F30
    ctx->pc = 0x1ae0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
    // 0x1ae0e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae0ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ae0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae0f0: 0x800008  jr          $a0
    ctx->pc = 0x1AE0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE0F8u: goto label_1ae0f8;
            case 0x1AE128u: goto label_1ae128;
            case 0x1AE24Cu: goto label_1ae24c;
            case 0x1AE3B8u: goto label_1ae3b8;
            case 0x1AE504u: goto label_1ae504;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE0F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AE0F8u;
label_1ae0f8:
    // 0x1ae0f8: 0xc6210614  lwc1        $f1, 0x614($s1)
    ctx->pc = 0x1ae0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae0fc: 0x3c0143fa  lui         $at, 0x43FA
    ctx->pc = 0x1ae0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17402 << 16));
    // 0x1ae100: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ae100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae104: 0x0  nop
    ctx->pc = 0x1ae104u;
    // NOP
    // 0x1ae108: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ae108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ae10c: 0x0  nop
    ctx->pc = 0x1ae10cu;
    // NOP
    // 0x1ae110: 0x45000121  bc1f        . + 4 + (0x121 << 2)
    ctx->pc = 0x1AE110u;
    {
        const bool branch_taken_0x1ae110 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AE114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE110u;
        // 0x1ae114: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae110) {
            ctx->pc = 0x1AE598u;
            goto label_1ae598;
        }
    }
    ctx->pc = 0x1AE118u;
    // 0x1ae118: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1ae118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1ae11c: 0xae200610  sw          $zero, 0x610($s1)
    ctx->pc = 0x1ae11cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1552), GPR_U32(ctx, 0));
    // 0x1ae120: 0x1000011b  b           . + 4 + (0x11B << 2)
    ctx->pc = 0x1AE120u;
    {
        const bool branch_taken_0x1ae120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE120u;
        // 0x1ae124: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae120) {
            ctx->pc = 0x1AE590u;
            goto label_1ae590;
        }
    }
    ctx->pc = 0x1AE128u;
label_1ae128:
    // 0x1ae128: 0x8e220610  lw          $v0, 0x610($s1)
    ctx->pc = 0x1ae128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x1ae12c: 0x26300604  addiu       $s0, $s1, 0x604
    ctx->pc = 0x1ae12cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1540));
    // 0x1ae130: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1ae130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ae134: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae138: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1ae138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ae13c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ae13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae140: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x1ae140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1ae144: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE144u;
    {
        const bool branch_taken_0x1ae144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ae144) {
            ctx->pc = 0x1AE164u;
            goto label_1ae164;
        }
    }
    ctx->pc = 0x1AE14Cu;
    // 0x1ae14c: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x1ae14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae150: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ae150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ae154: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1ae154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae158: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1ae158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ae15c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1ae15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae160: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1ae160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1ae164:
    // 0x1ae164: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1AE164u;
    SET_GPR_U32(ctx, 31, 0x1AE16Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1AE164u, 0x1AE16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE16Cu;
label_1ae16c:
    // 0x1ae16c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1ae16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ae170: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1ae170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ae174: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1ae174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1ae178: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1ae178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1ae17c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ae17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ae180: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x1AE180u;
    SET_GPR_U32(ctx, 31, 0x1AE188u);
    ctx->pc = 0x1AE184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE180u;
    // 0x1ae184: 0xc7ac0024  lwc1        $f12, 0x24($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x1AE180u, 0x1AE188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE188u;
label_1ae188:
    // 0x1ae188: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ae188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae18c: 0x0  nop
    ctx->pc = 0x1ae18cu;
    // NOP
    // 0x1ae190: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ae190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ae194: 0x0  nop
    ctx->pc = 0x1ae194u;
    // NOP
    // 0x1ae198: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE198u;
    {
        const bool branch_taken_0x1ae198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AE19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE198u;
        // 0x1ae19c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae198) {
            ctx->pc = 0x1AE1A4u;
            goto label_1ae1a4;
        }
    }
    ctx->pc = 0x1AE1A0u;
    // 0x1ae1a0: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x1ae1a0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_1ae1a4:
    // 0x1ae1a4: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x1ae1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x1ae1a8: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1ae1a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1ae1ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ae1acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae1b0: 0x0  nop
    ctx->pc = 0x1ae1b0u;
    // NOP
    // 0x1ae1b4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1ae1b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ae1b8: 0x0  nop
    ctx->pc = 0x1ae1b8u;
    // NOP
    // 0x1ae1bc: 0x450100f4  bc1t        . + 4 + (0xF4 << 2)
    ctx->pc = 0x1AE1BCu;
    {
        const bool branch_taken_0x1ae1bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AE1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1BCu;
        // 0x1ae1c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1bc) {
            ctx->pc = 0x1AE590u;
            goto label_1ae590;
        }
    }
    ctx->pc = 0x1AE1C4u;
    // 0x1ae1c4: 0x8e220610  lw          $v0, 0x610($s1)
    ctx->pc = 0x1ae1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x1ae1c8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1ae1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ae1cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ae1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ae1d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae1d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1ae1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1ae1d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ae1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae1dc: 0xdc8202f0  ld          $v0, 0x2F0($a0)
    ctx->pc = 0x1ae1dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x1ae1e0: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x1ae1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ae1e4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE1E4u;
    {
        const bool branch_taken_0x1ae1e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1E4u;
        // 0x1ae1e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1e4) {
            ctx->pc = 0x1AE1F8u;
            goto label_1ae1f8;
        }
    }
    ctx->pc = 0x1AE1ECu;
    // 0x1ae1ec: 0x8c8209d4  lw          $v0, 0x9D4($a0)
    ctx->pc = 0x1ae1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2516)));
    // 0x1ae1f0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae1f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1ae1f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae1f8:
    // 0x1ae1f8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1ae1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ae1fc: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x1AE1FCu;
    {
        const bool branch_taken_0x1ae1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE1FCu;
        // 0x1ae200: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1fc) {
            ctx->pc = 0x1AE590u;
            goto label_1ae590;
        }
    }
    ctx->pc = 0x1AE204u;
    // 0x1ae204: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE204u;
    {
        const bool branch_taken_0x1ae204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE204u;
        // 0x1ae208: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae204) {
            ctx->pc = 0x1AE214u;
            goto label_1ae214;
        }
    }
    ctx->pc = 0x1AE20Cu;
    // 0x1ae20c: 0x8c8209d4  lw          $v0, 0x9D4($a0)
    ctx->pc = 0x1ae20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2516)));
    // 0x1ae210: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ae214:
    // 0x1ae214: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ae214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ae218: 0x504000df  beql        $v0, $zero, . + 4 + (0xDF << 2)
    ctx->pc = 0x1AE218u;
    {
        const bool branch_taken_0x1ae218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae218) {
            ctx->pc = 0x1AE21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE218u;
            // 0x1ae21c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE598u;
            goto label_1ae598;
        }
    }
    ctx->pc = 0x1AE220u;
    // 0x1ae220: 0xc06b9c0  jal         func_1AE700
    ctx->pc = 0x1AE220u;
    SET_GPR_U32(ctx, 31, 0x1AE228u);
    ctx->pc = 0x1AE224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE220u;
    // 0x1ae224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE700u, 0x1AE220u, 0x1AE228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE228u;
label_1ae228:
    // 0x1ae228: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ae228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae22c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ae22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae230: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ae230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae234: 0xa06202f7  sb          $v0, 0x2F7($v1)
    ctx->pc = 0x1ae234u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae238: 0xa06402f5  sb          $a0, 0x2F5($v1)
    ctx->pc = 0x1ae238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ae23c: 0xa06002f4  sb          $zero, 0x2F4($v1)
    ctx->pc = 0x1ae23cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae240: 0xa06002f6  sb          $zero, 0x2F6($v1)
    ctx->pc = 0x1ae240u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae244: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x1AE244u;
    {
        const bool branch_taken_0x1ae244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE244u;
        // 0x1ae248: 0xa22502f6  sb          $a1, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae244) {
            ctx->pc = 0x1AE594u;
            goto label_1ae594;
        }
    }
    ctx->pc = 0x1AE24Cu;
label_1ae24c:
    // 0x1ae24c: 0x8e220620  lw          $v0, 0x620($s1)
    ctx->pc = 0x1ae24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x1ae250: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1AE250u;
    {
        const bool branch_taken_0x1ae250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae250) {
            ctx->pc = 0x1AE254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE250u;
            // 0x1ae254: 0x8e220610  lw          $v0, 0x610($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE288u;
            goto label_1ae288;
        }
    }
    ctx->pc = 0x1AE258u;
    // 0x1ae258: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1ae258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1ae25c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ae25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ae260: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ae260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ae264: 0x2406007d  addiu       $a2, $zero, 0x7D
    ctx->pc = 0x1ae264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x1ae268: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ae268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae26c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ae26cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae270: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ae270u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae274: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ae274u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae278: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1AE278u;
    SET_GPR_U32(ctx, 31, 0x1AE280u);
    ctx->pc = 0x1AE27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE278u;
    // 0x1ae27c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1AE278u, 0x1AE280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE280u;
label_1ae280:
    // 0x1ae280: 0xae220620  sw          $v0, 0x620($s1)
    ctx->pc = 0x1ae280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1568), GPR_U32(ctx, 2));
    // 0x1ae284: 0x8e220610  lw          $v0, 0x610($s1)
    ctx->pc = 0x1ae284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
label_1ae288:
    // 0x1ae288: 0x26320604  addiu       $s2, $s1, 0x604
    ctx->pc = 0x1ae288u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1540));
    // 0x1ae28c: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1ae28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ae290: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae290u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae294: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1ae294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ae298: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ae298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae29c: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x1ae29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1ae2a0: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE2A0u;
    {
        const bool branch_taken_0x1ae2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ae2a0) {
            ctx->pc = 0x1AE2C0u;
            goto label_1ae2c0;
        }
    }
    ctx->pc = 0x1AE2A8u;
    // 0x1ae2a8: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x1ae2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae2ac: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ae2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ae2b0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1ae2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ae2b4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1ae2b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ae2b8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1ae2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae2bc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1ae2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1ae2c0:
    // 0x1ae2c0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1AE2C0u;
    SET_GPR_U32(ctx, 31, 0x1AE2C8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1AE2C0u, 0x1AE2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE2C8u;
label_1ae2c8:
    // 0x1ae2c8: 0x8c5000f0  lw          $s0, 0xF0($v0)
    ctx->pc = 0x1ae2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ae2cc: 0xc06b9a8  jal         func_1AE6A0
    ctx->pc = 0x1AE2CCu;
    SET_GPR_U32(ctx, 31, 0x1AE2D4u);
    ctx->pc = 0x1AE2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE2CCu;
    // 0x1ae2d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE6A0u, 0x1AE2CCu, 0x1AE2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE2D4u;
label_1ae2d4:
    // 0x1ae2d4: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x1ae2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ae2d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ae2d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae2dc: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1ae2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ae2e0: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x1AE2E0u;
    SET_GPR_U32(ctx, 31, 0x1AE2E8u);
    ctx->pc = 0x1AE2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE2E0u;
    // 0x1ae2e4: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x1AE2E0u, 0x1AE2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE2E8u;
label_1ae2e8:
    // 0x1ae2e8: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x1ae2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ae2ec: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1AE2ECu;
    SET_GPR_U32(ctx, 31, 0x1AE2F4u);
    ctx->pc = 0x1AE2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE2ECu;
    // 0x1ae2f0: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1AE2ECu, 0x1AE2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE2F4u;
label_1ae2f4:
    // 0x1ae2f4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1AE2F4u;
    SET_GPR_U32(ctx, 31, 0x1AE2FCu);
    ctx->pc = 0x1AE2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE2F4u;
    // 0x1ae2f8: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1AE2F4u, 0x1AE2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE2FCu;
label_1ae2fc:
    // 0x1ae2fc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x1ae2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1ae300: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x1ae300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x1ae304: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1ae304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1ae308: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1ae308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1ae30c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ae30cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ae310: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x1AE310u;
    SET_GPR_U32(ctx, 31, 0x1AE318u);
    ctx->pc = 0x1AE314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE310u;
    // 0x1ae314: 0xc7ac0024  lwc1        $f12, 0x24($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x1AE310u, 0x1AE318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE318u;
label_1ae318:
    // 0x1ae318: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ae318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ae31c: 0x0  nop
    ctx->pc = 0x1ae31cu;
    // NOP
    // 0x1ae320: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ae320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ae324: 0x0  nop
    ctx->pc = 0x1ae324u;
    // NOP
    // 0x1ae328: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AE328u;
    {
        const bool branch_taken_0x1ae328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AE32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE328u;
        // 0x1ae32c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae328) {
            ctx->pc = 0x1AE334u;
            goto label_1ae334;
        }
    }
    ctx->pc = 0x1AE330u;
    // 0x1ae330: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x1ae330u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_1ae334:
    // 0x1ae334: 0x3c013db2  lui         $at, 0x3DB2
    ctx->pc = 0x1ae334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15794 << 16));
    // 0x1ae338: 0x3421b8c2  ori         $at, $at, 0xB8C2
    ctx->pc = 0x1ae338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47298);
    // 0x1ae33c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ae33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ae340: 0x0  nop
    ctx->pc = 0x1ae340u;
    // NOP
    // 0x1ae344: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1ae344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ae348: 0x0  nop
    ctx->pc = 0x1ae348u;
    // NOP
    // 0x1ae34c: 0x45000092  bc1f        . + 4 + (0x92 << 2)
    ctx->pc = 0x1AE34Cu;
    {
        const bool branch_taken_0x1ae34c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AE350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE34Cu;
        // 0x1ae350: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae34c) {
            ctx->pc = 0x1AE598u;
            goto label_1ae598;
        }
    }
    ctx->pc = 0x1AE354u;
    // 0x1ae354: 0x8e220610  lw          $v0, 0x610($s1)
    ctx->pc = 0x1ae354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x1ae358: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1ae358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ae35c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ae35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ae360: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae364: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1ae364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1ae368: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ae368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae36c: 0xdc8202f0  ld          $v0, 0x2F0($a0)
    ctx->pc = 0x1ae36cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x1ae370: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ae370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ae374: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE374u;
    {
        const bool branch_taken_0x1ae374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE374u;
        // 0x1ae378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae374) {
            ctx->pc = 0x1AE388u;
            goto label_1ae388;
        }
    }
    ctx->pc = 0x1AE37Cu;
    // 0x1ae37c: 0x8c8209d4  lw          $v0, 0x9D4($a0)
    ctx->pc = 0x1ae37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2516)));
    // 0x1ae380: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae380u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1ae384: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ae384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae388:
    // 0x1ae388: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1ae388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ae38c: 0x50400082  beql        $v0, $zero, . + 4 + (0x82 << 2)
    ctx->pc = 0x1AE38Cu;
    {
        const bool branch_taken_0x1ae38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae38c) {
            ctx->pc = 0x1AE390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE38Cu;
            // 0x1ae390: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE598u;
            goto label_1ae598;
        }
    }
    ctx->pc = 0x1AE394u;
    // 0x1ae394: 0xc06b9c0  jal         func_1AE700
    ctx->pc = 0x1AE394u;
    SET_GPR_U32(ctx, 31, 0x1AE39Cu);
    ctx->pc = 0x1AE398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE394u;
    // 0x1ae398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE700u, 0x1AE394u, 0x1AE39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE39Cu;
label_1ae39c:
    // 0x1ae39c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ae39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ae3a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ae3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae3a4: 0xa06202f7  sb          $v0, 0x2F7($v1)
    ctx->pc = 0x1ae3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae3a8: 0xa06402f5  sb          $a0, 0x2F5($v1)
    ctx->pc = 0x1ae3a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ae3ac: 0xa06002f4  sb          $zero, 0x2F4($v1)
    ctx->pc = 0x1ae3acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae3b0: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1AE3B0u;
    {
        const bool branch_taken_0x1ae3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3B0u;
        // 0x1ae3b4: 0xa06002f6  sb          $zero, 0x2F6($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae3b0) {
            ctx->pc = 0x1AE594u;
            goto label_1ae594;
        }
    }
    ctx->pc = 0x1AE3B8u;
label_1ae3b8:
    // 0x1ae3b8: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ae3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ae3bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ae3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ae3c0: 0x8e260610  lw          $a2, 0x610($s1)
    ctx->pc = 0x1ae3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x1ae3c4: 0x26230604  addiu       $v1, $s1, 0x604
    ctx->pc = 0x1ae3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1540));
    // 0x1ae3c8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1ae3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ae3cc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1ae3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae3d0: 0x38c20001  xori        $v0, $a2, 0x1
    ctx->pc = 0x1ae3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x1ae3d4: 0xae240600  sw          $a0, 0x600($s1)
    ctx->pc = 0x1ae3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 4));
    // 0x1ae3d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae3dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae3e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ae3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae3e4: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1AE3E4u;
    {
        const bool branch_taken_0x1ae3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae3e4) {
            ctx->pc = 0x1AE3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE3E4u;
            // 0x1ae3e8: 0x8e220610  lw          $v0, 0x610($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE478u;
            goto label_1ae478;
        }
    }
    ctx->pc = 0x1AE3ECu;
    // 0x1ae3ec: 0x8c6209d0  lw          $v0, 0x9D0($v1)
    ctx->pc = 0x1ae3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2512)));
    // 0x1ae3f0: 0x4400020  bltz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AE3F0u;
    {
        const bool branch_taken_0x1ae3f0 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1AE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE3F0u;
        // 0x1ae3f4: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae3f0) {
            ctx->pc = 0x1AE474u;
            goto label_1ae474;
        }
    }
    ctx->pc = 0x1AE3F8u;
    // 0x1ae3f8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ae3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ae3fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ae3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae400: 0x908302f4  lbu         $v1, 0x2F4($a0)
    ctx->pc = 0x1ae400u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 756)));
    // 0x1ae404: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1AE404u;
    {
        const bool branch_taken_0x1ae404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae404) {
            ctx->pc = 0x1AE408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE404u;
            // 0x1ae408: 0x8e220610  lw          $v0, 0x610($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE430u;
            goto label_1ae430;
        }
    }
    ctx->pc = 0x1AE40Cu;
    // 0x1ae40c: 0x908202f5  lbu         $v0, 0x2F5($a0)
    ctx->pc = 0x1ae40cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 757)));
    // 0x1ae410: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE410u;
    {
        const bool branch_taken_0x1ae410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE410u;
        // 0x1ae414: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae410) {
            ctx->pc = 0x1AE42Cu;
            goto label_1ae42c;
        }
    }
    ctx->pc = 0x1AE418u;
    // 0x1ae418: 0x908302f7  lbu         $v1, 0x2F7($a0)
    ctx->pc = 0x1ae418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 759)));
    // 0x1ae41c: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x1ae41cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae420: 0xa08302f7  sb          $v1, 0x2F7($a0)
    ctx->pc = 0x1ae420u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ae424: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x1ae424u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae428: 0xa08002f6  sb          $zero, 0x2F6($a0)
    ctx->pc = 0x1ae428u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
label_1ae42c:
    // 0x1ae42c: 0x8e220610  lw          $v0, 0x610($s1)
    ctx->pc = 0x1ae42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
label_1ae430:
    // 0x1ae430: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ae430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae434: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ae434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ae438: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae43c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ae43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ae440: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1ae440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae444: 0xa06402f5  sb          $a0, 0x2F5($v1)
    ctx->pc = 0x1ae444u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ae448: 0xa06002f7  sb          $zero, 0x2F7($v1)
    ctx->pc = 0x1ae448u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae44c: 0xa06002f4  sb          $zero, 0x2F4($v1)
    ctx->pc = 0x1ae44cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae450: 0xa06002f6  sb          $zero, 0x2F6($v1)
    ctx->pc = 0x1ae450u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae454: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1ae454u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae458: 0x8e220610  lw          $v0, 0x610($s1)
    ctx->pc = 0x1ae458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x1ae45c: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x1ae45cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1ae460: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ae460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ae464: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ae464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ae468: 0xae220610  sw          $v0, 0x610($s1)
    ctx->pc = 0x1ae468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1552), GPR_U32(ctx, 2));
    // 0x1ae46c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1AE46Cu;
    {
        const bool branch_taken_0x1ae46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE46Cu;
        // 0x1ae470: 0xa22302f6  sb          $v1, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae46c) {
            ctx->pc = 0x1AE594u;
            goto label_1ae594;
        }
    }
    ctx->pc = 0x1AE474u;
label_1ae474:
    // 0x1ae474: 0x8e220610  lw          $v0, 0x610($s1)
    ctx->pc = 0x1ae474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
label_1ae478:
    // 0x1ae478: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1ae478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ae47c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1ae47cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1ae480: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae484: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ae484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ae488: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ae488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae48c: 0xdca302f0  ld          $v1, 0x2F0($a1)
    ctx->pc = 0x1ae48cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 752)));
    // 0x1ae490: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1ae490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1ae494: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE494u;
    {
        const bool branch_taken_0x1ae494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE494u;
        // 0x1ae498: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae494) {
            ctx->pc = 0x1AE4A8u;
            goto label_1ae4a8;
        }
    }
    ctx->pc = 0x1AE49Cu;
    // 0x1ae49c: 0x8ca209d4  lw          $v0, 0x9D4($a1)
    ctx->pc = 0x1ae49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2516)));
    // 0x1ae4a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae4a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1ae4a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ae4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ae4a8:
    // 0x1ae4a8: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x1ae4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1ae4ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE4ACu;
    {
        const bool branch_taken_0x1ae4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4ACu;
        // 0x1ae4b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4ac) {
            ctx->pc = 0x1AE4D4u;
            goto label_1ae4d4;
        }
    }
    ctx->pc = 0x1AE4B4u;
    // 0x1ae4b4: 0xa0a002f7  sb          $zero, 0x2F7($a1)
    ctx->pc = 0x1ae4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae4b8: 0xa0a202f5  sb          $v0, 0x2F5($a1)
    ctx->pc = 0x1ae4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae4bc: 0xa0a002f4  sb          $zero, 0x2F4($a1)
    ctx->pc = 0x1ae4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae4c0: 0xa0a002f6  sb          $zero, 0x2F6($a1)
    ctx->pc = 0x1ae4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae4c4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1ae4c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae4c8: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x1ae4c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x1ae4cc: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1AE4CCu;
    {
        const bool branch_taken_0x1ae4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4CCu;
        // 0x1ae4d0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4cc) {
            ctx->pc = 0x1AE590u;
            goto label_1ae590;
        }
    }
    ctx->pc = 0x1AE4D4u;
label_1ae4d4:
    // 0x1ae4d4: 0x90a202f4  lbu         $v0, 0x2F4($a1)
    ctx->pc = 0x1ae4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 756)));
    // 0x1ae4d8: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1AE4D8u;
    {
        const bool branch_taken_0x1ae4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4D8u;
        // 0x1ae4dc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4d8) {
            ctx->pc = 0x1AE598u;
            goto label_1ae598;
        }
    }
    ctx->pc = 0x1AE4E0u;
    // 0x1ae4e0: 0x90a202f5  lbu         $v0, 0x2F5($a1)
    ctx->pc = 0x1ae4e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 757)));
    // 0x1ae4e4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1AE4E4u;
    {
        const bool branch_taken_0x1ae4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4E4u;
        // 0x1ae4e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4e4) {
            ctx->pc = 0x1AE598u;
            goto label_1ae598;
        }
    }
    ctx->pc = 0x1AE4ECu;
    // 0x1ae4ec: 0x90a302f7  lbu         $v1, 0x2F7($a1)
    ctx->pc = 0x1ae4ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 759)));
    // 0x1ae4f0: 0xa0a202f5  sb          $v0, 0x2F5($a1)
    ctx->pc = 0x1ae4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae4f4: 0xa0a302f7  sb          $v1, 0x2F7($a1)
    ctx->pc = 0x1ae4f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ae4f8: 0xa0a002f4  sb          $zero, 0x2F4($a1)
    ctx->pc = 0x1ae4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae4fc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1AE4FCu;
    {
        const bool branch_taken_0x1ae4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4FCu;
        // 0x1ae500: 0xa0a002f6  sb          $zero, 0x2F6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4fc) {
            ctx->pc = 0x1AE598u;
            goto label_1ae598;
        }
    }
    ctx->pc = 0x1AE504u;
label_1ae504:
    // 0x1ae504: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1ae504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1ae508: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x1ae508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ae50c: 0xc44c8018  lwc1        $f12, -0x7FE8($v0)
    ctx->pc = 0x1ae50cu;
    { uint32_t bits = FAST_READ32(0x428018u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ae510: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1AE510u;
    SET_GPR_U32(ctx, 31, 0x1AE518u);
    ctx->pc = 0x1AE514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE510u;
    // 0x1ae514: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1AE510u, 0x1AE518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE518u;
label_1ae518:
    // 0x1ae518: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x1ae518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x1ae51c: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x1ae51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x1ae520: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ae520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ae524: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1ae524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ae528: 0x2c42003d  sltiu       $v0, $v0, 0x3D
    ctx->pc = 0x1ae528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
    // 0x1ae52c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1AE52Cu;
    {
        const bool branch_taken_0x1ae52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE52Cu;
        // 0x1ae530: 0xa22302f7  sb          $v1, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae52c) {
            ctx->pc = 0x1AE594u;
            goto label_1ae594;
        }
    }
    ctx->pc = 0x1AE534u;
    // 0x1ae534: 0x8e240600  lw          $a0, 0x600($s1)
    ctx->pc = 0x1ae534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1ae538: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1ae538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1ae53c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1ae53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1ae540: 0x8e230610  lw          $v1, 0x610($s1)
    ctx->pc = 0x1ae540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1552)));
    // 0x1ae544: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1ae544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1ae548: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1ae548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ae54c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1ae54cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1ae550: 0xae240600  sw          $a0, 0x600($s1)
    ctx->pc = 0x1ae550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 4));
    // 0x1ae554: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ae554u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ae558: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1ae558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1ae55c: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x1ae55cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x1ae560: 0x426b8  dsll        $a0, $a0, 26
    ctx->pc = 0x1ae560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 26);
    // 0x1ae564: 0x8c630604  lw          $v1, 0x604($v1)
    ctx->pc = 0x1ae564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1540)));
    // 0x1ae568: 0xdc6202f0  ld          $v0, 0x2F0($v1)
    ctx->pc = 0x1ae568u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 752)));
    // 0x1ae56c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1ae56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1ae570: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE570u;
    {
        const bool branch_taken_0x1ae570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AE574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE570u;
        // 0x1ae574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae570) {
            ctx->pc = 0x1AE590u;
            goto label_1ae590;
        }
    }
    ctx->pc = 0x1AE578u;
    // 0x1ae578: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae57c: 0xa06002f7  sb          $zero, 0x2F7($v1)
    ctx->pc = 0x1ae57cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae580: 0xa06202f6  sb          $v0, 0x2F6($v1)
    ctx->pc = 0x1ae580u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae584: 0xa06002f4  sb          $zero, 0x2F4($v1)
    ctx->pc = 0x1ae584u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ae588: 0xa06202f5  sb          $v0, 0x2F5($v1)
    ctx->pc = 0x1ae588u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ae58c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae590:
    // 0x1ae590: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1ae590u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_1ae594:
    // 0x1ae594: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1ae594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1ae598:
    // 0x1ae598: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1ae598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ae59c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1ae59cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae5a0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ae5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE5A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE5A4u;
        // 0x1ae5a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE5A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE5ACu;
    // 0x1ae5ac: 0x0  nop
    ctx->pc = 0x1ae5acu;
    // NOP
    ctx->pc = 0x1ae5b0u;
}
