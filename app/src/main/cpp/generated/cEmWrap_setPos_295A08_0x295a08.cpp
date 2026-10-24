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

// Function: cEmWrap_setPos_295A08
// Address: 0x295a08 - 0x295ab8
void cEmWrap_setPos_295A08_0x295a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_setPos_295A08_0x295a08");
#endif

    switch (ctx->pc) {
        case 0x295a08u: goto label_295a08;
        case 0x295a0cu: goto label_295a0c;
        case 0x295a10u: goto label_295a10;
        case 0x295a14u: goto label_295a14;
        case 0x295a18u: goto label_295a18;
        case 0x295a1cu: goto label_295a1c;
        case 0x295a20u: goto label_295a20;
        case 0x295a24u: goto label_295a24;
        case 0x295a28u: goto label_295a28;
        case 0x295a2cu: goto label_295a2c;
        case 0x295a30u: goto label_295a30;
        case 0x295a34u: goto label_295a34;
        case 0x295a38u: goto label_295a38;
        case 0x295a3cu: goto label_295a3c;
        case 0x295a40u: goto label_295a40;
        case 0x295a44u: goto label_295a44;
        case 0x295a48u: goto label_295a48;
        case 0x295a4cu: goto label_295a4c;
        case 0x295a50u: goto label_295a50;
        case 0x295a54u: goto label_295a54;
        case 0x295a58u: goto label_295a58;
        case 0x295a5cu: goto label_295a5c;
        case 0x295a60u: goto label_295a60;
        case 0x295a64u: goto label_295a64;
        case 0x295a68u: goto label_295a68;
        case 0x295a6cu: goto label_295a6c;
        case 0x295a70u: goto label_295a70;
        case 0x295a74u: goto label_295a74;
        case 0x295a78u: goto label_295a78;
        case 0x295a7cu: goto label_295a7c;
        case 0x295a80u: goto label_295a80;
        case 0x295a84u: goto label_295a84;
        case 0x295a88u: goto label_295a88;
        case 0x295a8cu: goto label_295a8c;
        case 0x295a90u: goto label_295a90;
        case 0x295a94u: goto label_295a94;
        case 0x295a98u: goto label_295a98;
        case 0x295a9cu: goto label_295a9c;
        case 0x295aa0u: goto label_295aa0;
        case 0x295aa4u: goto label_295aa4;
        case 0x295aa8u: goto label_295aa8;
        case 0x295aacu: goto label_295aac;
        case 0x295ab0u: goto label_295ab0;
        case 0x295ab4u: goto label_295ab4;
        default: break;
    }

    ctx->pc = 0x295a08u;

label_295a08:
    // 0x295a08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x295a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_295a0c:
    // 0x295a0c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x295a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_295a10:
    // 0x295a10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x295a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_295a14:
    // 0x295a14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x295a14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_295a18:
    // 0x295a18: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x295a18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_295a1c:
    // 0x295a1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x295a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_295a20:
    // 0x295a20: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x295a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_295a24:
    // 0x295a24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x295a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_295a28:
    // 0x295a28: 0xc0a565e  jal         func_295978
label_295a2c:
    if (ctx->pc == 0x295A2Cu) {
        ctx->pc = 0x295A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A28u;
        // 0x295a2c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x295A30u;
        goto label_295a30;
    }
    ctx->pc = 0x295A28u;
    SET_GPR_U32(ctx, 31, 0x295A30u);
    ctx->pc = 0x295A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295A28u;
    // 0x295a2c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295A28u, 0x295A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A30u;
label_295a30:
    // 0x295a30: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_295a34:
    if (ctx->pc == 0x295A34u) {
        ctx->pc = 0x295A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A30u;
        // 0x295a34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295A38u;
        goto label_295a38;
    }
    ctx->pc = 0x295A30u;
    {
        const bool branch_taken_0x295a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A30u;
        // 0x295a34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295a30) {
            ctx->pc = 0x295A88u;
            goto label_295a88;
        }
    }
    ctx->pc = 0x295A38u;
label_295a38:
    // 0x295a38: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x295a38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_295a3c:
    // 0x295a3c: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x295a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_295a40:
    // 0x295a40: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x295a40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_295a44:
    // 0x295a44: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x295a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_295a48:
    // 0x295a48: 0x60f809  jalr        $v1
label_295a4c:
    if (ctx->pc == 0x295A4Cu) {
        ctx->pc = 0x295A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A48u;
        // 0x295a4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295A50u;
        goto label_295a50;
    }
    ctx->pc = 0x295A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295A50u);
        ctx->pc = 0x295A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A48u;
        // 0x295a4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295A48u, 0x295A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x295A50u;
label_295a50:
    // 0x295a50: 0x8e060214  lw          $a2, 0x214($s0)
    ctx->pc = 0x295a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_295a54:
    // 0x295a54: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x295a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_295a58:
    // 0x295a58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x295a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_295a5c:
    // 0x295a5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x295a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_295a60:
    // 0x295a60: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x295a60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_295a64:
    // 0x295a64: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x295a64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_295a68:
    // 0x295a68: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x295a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_295a6c:
    // 0x295a6c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x295a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_295a70:
    // 0x295a70: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x295a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_295a74:
    // 0x295a74: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x295a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_295a78:
    // 0x295a78: 0x40f809  jalr        $v0
label_295a7c:
    if (ctx->pc == 0x295A7Cu) {
        ctx->pc = 0x295A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A78u;
        // 0x295a7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295A80u;
        goto label_295a80;
    }
    ctx->pc = 0x295A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x295A80u);
        ctx->pc = 0x295A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A78u;
        // 0x295a7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295A78u, 0x295A80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x295A80u;
label_295a80:
    // 0x295a80: 0xc0527ae  jal         func_149EB8
label_295a84:
    if (ctx->pc == 0x295A84u) {
        ctx->pc = 0x295A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A80u;
        // 0x295a84: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295A88u;
        goto label_295a88;
    }
    ctx->pc = 0x295A80u;
    SET_GPR_U32(ctx, 31, 0x295A88u);
    ctx->pc = 0x295A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295A80u;
    // 0x295a84: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x295A80u, 0x295A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295A88u;
label_295a88:
    // 0x295a88: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x295a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_295a8c:
    // 0x295a8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x295a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_295a90:
    // 0x295a90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x295a90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_295a94:
    // 0x295a94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x295a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_295a98:
    // 0x295a98: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x295a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_295a9c:
    // 0x295a9c: 0x3e00008  jr          $ra
label_295aa0:
    if (ctx->pc == 0x295AA0u) {
        ctx->pc = 0x295AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A9Cu;
        // 0x295aa0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295AA4u;
        goto label_295aa4;
    }
    ctx->pc = 0x295A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295A9Cu;
        // 0x295aa0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295AA4u;
label_295aa4:
    // 0x295aa4: 0x0  nop
    ctx->pc = 0x295aa4u;
    // NOP
label_295aa8:
    // 0x295aa8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x295aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_295aac:
    // 0x295aac: 0x0  nop
    ctx->pc = 0x295aacu;
    // NOP
label_295ab0:
    // 0x295ab0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x295ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_295ab4:
    // 0x295ab4: 0x0  nop
    ctx->pc = 0x295ab4u;
    // NOP
    ctx->pc = 0x295ab8u;
}
