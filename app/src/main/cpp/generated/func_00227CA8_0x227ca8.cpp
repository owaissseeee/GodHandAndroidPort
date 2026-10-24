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

// Function: func_00227CA8
// Address: 0x227ca8 - 0x227fe8
void func_00227CA8_0x227ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00227CA8_0x227ca8");
#endif

    switch (ctx->pc) {
        case 0x227d04u: goto label_227d04;
        case 0x227d3cu: goto label_227d3c;
        case 0x227d90u: goto label_227d90;
        case 0x227dd8u: goto label_227dd8;
        case 0x227e1cu: goto label_227e1c;
        case 0x227e60u: goto label_227e60;
        case 0x227e80u: goto label_227e80;
        case 0x227ebcu: goto label_227ebc;
        case 0x227edcu: goto label_227edc;
        case 0x227ee4u: goto label_227ee4;
        case 0x227f28u: goto label_227f28;
        case 0x227f3cu: goto label_227f3c;
        case 0x227f48u: goto label_227f48;
        case 0x227fa0u: goto label_227fa0;
        case 0x227fc4u: goto label_227fc4;
        default: break;
    }

    ctx->pc = 0x227ca8u;

    // 0x227ca8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x227ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x227cac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x227cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x227cb0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x227cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x227cb4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x227cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x227cb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227cbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x227cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x227cc0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x227cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x227cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227cc8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x227cc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x227ccc: 0xa203186a  sb          $v1, 0x186A($s0)
    ctx->pc = 0x227cccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x227cd0: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x227cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x227cd4: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x227cd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x227cd8: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x227cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x227cdc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x227CDCu;
    {
        const bool branch_taken_0x227cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CDCu;
        // 0x227ce0: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cdc) {
            ctx->pc = 0x227CF8u;
            goto label_227cf8;
        }
    }
    ctx->pc = 0x227CE4u;
    // 0x227ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227ce8: 0x5082006a  beql        $a0, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x227CE8u;
    {
        const bool branch_taken_0x227ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x227ce8) {
            ctx->pc = 0x227CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227CE8u;
            // 0x227cec: 0xc6010600  lwc1        $f1, 0x600($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x227E94u;
            goto label_227e94;
        }
    }
    ctx->pc = 0x227CF0u;
    // 0x227cf0: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x227CF0u;
    {
        const bool branch_taken_0x227cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227CF0u;
        // 0x227cf4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227cf0) {
            ctx->pc = 0x227FC8u;
            goto label_227fc8;
        }
    }
    ctx->pc = 0x227CF8u;
label_227cf8:
    // 0x227cf8: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x227cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x227cfc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x227CFCu;
    SET_GPR_U32(ctx, 31, 0x227D04u);
    ctx->pc = 0x227D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227CFCu;
    // 0x227d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x227CFCu, 0x227D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D04u;
label_227d04:
    // 0x227d04: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x227d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227d08: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x227d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x227d0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227d10: 0x0  nop
    ctx->pc = 0x227d10u;
    // NOP
    // 0x227d14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x227d14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227d18: 0x0  nop
    ctx->pc = 0x227d18u;
    // NOP
    // 0x227d1c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x227D1Cu;
    {
        const bool branch_taken_0x227d1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x227D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D1Cu;
        // 0x227d20: 0x3053ffff  andi        $s3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d1c) {
            ctx->pc = 0x227D2Cu;
            goto label_227d2c;
        }
    }
    ctx->pc = 0x227D24u;
    // 0x227d24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x227D24u;
    {
        const bool branch_taken_0x227d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D24u;
        // 0x227d28: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d24) {
            ctx->pc = 0x227D34u;
            goto label_227d34;
        }
    }
    ctx->pc = 0x227D2Cu;
label_227d2c:
    // 0x227d2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227d30: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x227d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
label_227d34:
    // 0x227d34: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x227D34u;
    SET_GPR_U32(ctx, 31, 0x227D3Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x227D34u, 0x227D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D3Cu;
label_227d3c:
    // 0x227d3c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x227d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x227d40: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x227D40u;
    {
        const bool branch_taken_0x227d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227d40) {
            ctx->pc = 0x227D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227D40u;
            // 0x227d44: 0x920302f7  lbu         $v1, 0x2F7($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227D54u;
            goto label_227d54;
        }
    }
    ctx->pc = 0x227D48u;
    // 0x227d48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x227d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x227d4c: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x227d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x227d50: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x227d50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
label_227d54:
    // 0x227d54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227d58: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x227D58u;
    {
        const bool branch_taken_0x227d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D58u;
        // 0x227d5c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d58) {
            ctx->pc = 0x227DB8u;
            goto label_227db8;
        }
    }
    ctx->pc = 0x227D60u;
    // 0x227d60: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x227D60u;
    {
        const bool branch_taken_0x227d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227d60) {
            ctx->pc = 0x227D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227D60u;
            // 0x227d64: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227D74u;
            goto label_227d74;
        }
    }
    ctx->pc = 0x227D68u;
    // 0x227d68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x227d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x227d6c: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x227D6Cu;
    {
        const bool branch_taken_0x227d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D6Cu;
        // 0x227d70: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d6c) {
            ctx->pc = 0x227E00u;
            goto label_227e00;
        }
    }
    ctx->pc = 0x227D74u;
label_227d74:
    // 0x227d74: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x227d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x227d78: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x227d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x227d7c: 0x8c43300c  lw          $v1, 0x300C($v0)
    ctx->pc = 0x227d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12300)));
    // 0x227d80: 0x8c453010  lw          $a1, 0x3010($v0)
    ctx->pc = 0x227d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12304)));
    // 0x227d84: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x227d84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227d88: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x227D88u;
    SET_GPR_U32(ctx, 31, 0x227D90u);
    ctx->pc = 0x227D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227D88u;
    // 0x227d8c: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x227D88u, 0x227D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D90u;
label_227d90:
    // 0x227d90: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x227d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x227d94: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x227D94u;
    {
        const bool branch_taken_0x227d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x227d94) {
            ctx->pc = 0x227DA8u;
            goto label_227da8;
        }
    }
    ctx->pc = 0x227D9Cu;
    // 0x227d9c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x227d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x227da0: 0x8c623014  lw          $v0, 0x3014($v1)
    ctx->pc = 0x227da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12308)));
    // 0x227da4: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x227da4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_227da8:
    // 0x227da8: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x227da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x227dac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227db0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x227DB0u;
    {
        const bool branch_taken_0x227db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DB0u;
        // 0x227db4: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x227db0) {
            ctx->pc = 0x227E44u;
            goto label_227e44;
        }
    }
    ctx->pc = 0x227DB8u;
label_227db8:
    // 0x227db8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x227db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x227dbc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x227dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x227dc0: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x227dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x227dc4: 0x8c433018  lw          $v1, 0x3018($v0)
    ctx->pc = 0x227dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12312)));
    // 0x227dc8: 0x8c45301c  lw          $a1, 0x301C($v0)
    ctx->pc = 0x227dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12316)));
    // 0x227dcc: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x227dccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227dd0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x227DD0u;
    SET_GPR_U32(ctx, 31, 0x227DD8u);
    ctx->pc = 0x227DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227DD0u;
    // 0x227dd4: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x227DD0u, 0x227DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227DD8u;
label_227dd8:
    // 0x227dd8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x227dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x227ddc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x227DDCu;
    {
        const bool branch_taken_0x227ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x227ddc) {
            ctx->pc = 0x227DF0u;
            goto label_227df0;
        }
    }
    ctx->pc = 0x227DE4u;
    // 0x227de4: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x227de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x227de8: 0x8c623020  lw          $v0, 0x3020($v1)
    ctx->pc = 0x227de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12320)));
    // 0x227dec: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x227decu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_227df0:
    // 0x227df0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x227df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x227df4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227df8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x227DF8u;
    {
        const bool branch_taken_0x227df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DF8u;
        // 0x227dfc: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x227df8) {
            ctx->pc = 0x227E44u;
            goto label_227e44;
        }
    }
    ctx->pc = 0x227E00u;
label_227e00:
    // 0x227e00: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x227e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x227e04: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x227e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x227e08: 0x8c433024  lw          $v1, 0x3024($v0)
    ctx->pc = 0x227e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12324)));
    // 0x227e0c: 0x8c453028  lw          $a1, 0x3028($v0)
    ctx->pc = 0x227e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12328)));
    // 0x227e10: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x227e10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227e14: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x227E14u;
    SET_GPR_U32(ctx, 31, 0x227E1Cu);
    ctx->pc = 0x227E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E14u;
    // 0x227e18: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x227E14u, 0x227E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E1Cu;
label_227e1c:
    // 0x227e1c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x227e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x227e20: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x227E20u;
    {
        const bool branch_taken_0x227e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x227e20) {
            ctx->pc = 0x227E34u;
            goto label_227e34;
        }
    }
    ctx->pc = 0x227E28u;
    // 0x227e28: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x227e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x227e2c: 0x8c62302c  lw          $v0, 0x302C($v1)
    ctx->pc = 0x227e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12332)));
    // 0x227e30: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x227e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_227e34:
    // 0x227e34: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x227e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x227e38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227e3c: 0x0  nop
    ctx->pc = 0x227e3cu;
    // NOP
    // 0x227e40: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x227e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_227e44:
    // 0x227e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e48: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x227e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x227e4c: 0x2406001b  addiu       $a2, $zero, 0x1B
    ctx->pc = 0x227e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x227e50: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x227e50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x227e54: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x227e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x227e58: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x227E58u;
    SET_GPR_U32(ctx, 31, 0x227E60u);
    ctx->pc = 0x227E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E58u;
    // 0x227e5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x227E58u, 0x227E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E60u;
label_227e60:
    // 0x227e60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x227e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227e64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x227e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x227e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e6c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x227e6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e74: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x227e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x227e78: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x227E78u;
    SET_GPR_U32(ctx, 31, 0x227E80u);
    ctx->pc = 0x227E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E78u;
    // 0x227e7c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x227E78u, 0x227E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E80u;
label_227e80:
    // 0x227e80: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x227e80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x227e84: 0xae0005f4  sw          $zero, 0x5F4($s0)
    ctx->pc = 0x227e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
    // 0x227e88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x227e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x227e8c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x227e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x227e90: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x227e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_227e94:
    // 0x227e94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x227e94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227e98: 0x0  nop
    ctx->pc = 0x227e98u;
    // NOP
    // 0x227e9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x227e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227ea0: 0x0  nop
    ctx->pc = 0x227ea0u;
    // NOP
    // 0x227ea4: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x227EA4u;
    {
        const bool branch_taken_0x227ea4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x227ea4) {
            ctx->pc = 0x227EDCu;
            goto label_227edc;
        }
    }
    ctx->pc = 0x227EACu;
    // 0x227eac: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x227eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227eb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x227eb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x227eb4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x227EB4u;
    SET_GPR_U32(ctx, 31, 0x227EBCu);
    ctx->pc = 0x227EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227EB4u;
    // 0x227eb8: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x227EB4u, 0x227EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EBCu;
label_227ebc:
    // 0x227ebc: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x227ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227ec4: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x227ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x227ec8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x227ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x227ecc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x227eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x227ed0: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x227ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x227ed4: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x227ED4u;
    SET_GPR_U32(ctx, 31, 0x227EDCu);
    ctx->pc = 0x227ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227ED4u;
    // 0x227ed8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x227ED4u, 0x227EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EDCu;
label_227edc:
    // 0x227edc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x227EDCu;
    SET_GPR_U32(ctx, 31, 0x227EE4u);
    ctx->pc = 0x227EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227EDCu;
    // 0x227ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x227EDCu, 0x227EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227EE4u;
label_227ee4:
    // 0x227ee4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x227EE4u;
    {
        const bool branch_taken_0x227ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227ee4) {
            ctx->pc = 0x227F28u;
            goto label_227f28;
        }
    }
    ctx->pc = 0x227EECu;
    // 0x227eec: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x227eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227ef0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x227ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x227ef4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x227ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x227ef8: 0x0  nop
    ctx->pc = 0x227ef8u;
    // NOP
    // 0x227efc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x227efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x227f00: 0x0  nop
    ctx->pc = 0x227f00u;
    // NOP
    // 0x227f04: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x227F04u;
    {
        const bool branch_taken_0x227f04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x227F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F04u;
        // 0x227f08: 0x2402006c  addiu       $v0, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f04) {
            ctx->pc = 0x227F20u;
            goto label_227f20;
        }
    }
    ctx->pc = 0x227F0Cu;
    // 0x227f0c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x227f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x227f10: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x227f10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x227f14: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x227f14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x227f18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x227F18u;
    {
        const bool branch_taken_0x227f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F18u;
        // 0x227f1c: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f18) {
            ctx->pc = 0x227F28u;
            goto label_227f28;
        }
    }
    ctx->pc = 0x227F20u;
label_227f20:
    // 0x227f20: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x227F20u;
    SET_GPR_U32(ctx, 31, 0x227F28u);
    ctx->pc = 0x227F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F20u;
    // 0x227f24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x227F20u, 0x227F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F28u;
label_227f28:
    // 0x227f28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x227f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x227f2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x227f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x227f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f34: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x227F34u;
    SET_GPR_U32(ctx, 31, 0x227F3Cu);
    ctx->pc = 0x227F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F34u;
    // 0x227f38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x227F34u, 0x227F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F3Cu;
label_227f3c:
    // 0x227f3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x227f3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x227f40: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x227F40u;
    SET_GPR_U32(ctx, 31, 0x227F48u);
    ctx->pc = 0x227F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F40u;
    // 0x227f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x227F40u, 0x227F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227F48u;
label_227f48:
    // 0x227f48: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x227f48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x227f4c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x227f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x227f50: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x227F50u;
    {
        const bool branch_taken_0x227f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F50u;
        // 0x227f54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f50) {
            ctx->pc = 0x227FA8u;
            goto label_227fa8;
        }
    }
    ctx->pc = 0x227F58u;
    // 0x227f58: 0x8e0205f4  lw          $v0, 0x5F4($s0)
    ctx->pc = 0x227f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1524)));
    // 0x227f5c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x227F5Cu;
    {
        const bool branch_taken_0x227f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F5Cu;
        // 0x227f60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f5c) {
            ctx->pc = 0x227FACu;
            goto label_227fac;
        }
    }
    ctx->pc = 0x227F64u;
    // 0x227f64: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x227f64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x227f68: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x227F68u;
    {
        const bool branch_taken_0x227f68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F68u;
        // 0x227f6c: 0xae0005f4  sw          $zero, 0x5F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f68) {
            ctx->pc = 0x227F90u;
            goto label_227f90;
        }
    }
    ctx->pc = 0x227F70u;
    // 0x227f70: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x227f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x227f74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227F74u;
    {
        const bool branch_taken_0x227f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F74u;
        // 0x227f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f74) {
            ctx->pc = 0x227F88u;
            goto label_227f88;
        }
    }
    ctx->pc = 0x227F7Cu;
    // 0x227f7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x227f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x227f80: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227F80u;
    {
        const bool branch_taken_0x227f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x227F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F80u;
        // 0x227f84: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f80) {
            ctx->pc = 0x227F98u;
            goto label_227f98;
        }
    }
    ctx->pc = 0x227F88u;
label_227f88:
    // 0x227f88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x227F88u;
    {
        const bool branch_taken_0x227f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227F88u;
        // 0x227f8c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227f88) {
            ctx->pc = 0x227F98u;
            goto label_227f98;
        }
    }
    ctx->pc = 0x227F90u;
label_227f90:
    // 0x227f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x227f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227f94: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x227f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_227f98:
    // 0x227f98: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x227F98u;
    SET_GPR_U32(ctx, 31, 0x227FA0u);
    ctx->pc = 0x227F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227F98u;
    // 0x227f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x227F98u, 0x227FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FA0u;
label_227fa0:
    // 0x227fa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x227FA0u;
    {
        const bool branch_taken_0x227fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FA0u;
        // 0x227fa4: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227fa0) {
            ctx->pc = 0x227FB0u;
            goto label_227fb0;
        }
    }
    ctx->pc = 0x227FA8u;
label_227fa8:
    // 0x227fa8: 0xae0205f4  sw          $v0, 0x5F4($s0)
    ctx->pc = 0x227fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1524), GPR_U32(ctx, 2));
label_227fac:
    // 0x227fac: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x227facu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_227fb0:
    // 0x227fb0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x227fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x227fb4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x227FB4u;
    {
        const bool branch_taken_0x227fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x227fb4) {
            ctx->pc = 0x227FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x227FB4u;
            // 0x227fb8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x227FC8u;
            goto label_227fc8;
        }
    }
    ctx->pc = 0x227FBCu;
    // 0x227fbc: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x227FBCu;
    SET_GPR_U32(ctx, 31, 0x227FC4u);
    ctx->pc = 0x227FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227FBCu;
    // 0x227fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x227FBCu, 0x227FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227FC4u;
label_227fc4:
    // 0x227fc4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x227fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_227fc8:
    // 0x227fc8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x227fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x227fcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x227fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227fd0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x227fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227fd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227fd8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x227fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x227fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x227FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227FDCu;
        // 0x227fe0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227FE4u;
    // 0x227fe4: 0x0  nop
    ctx->pc = 0x227fe4u;
    // NOP
    ctx->pc = 0x227fe8u;
}
