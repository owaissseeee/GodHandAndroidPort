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

// Function: LineObj_checkWaterHit
// Address: 0x1d0b38 - 0x1d0c10
void LineObj_checkWaterHit_0x1d0b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LineObj_checkWaterHit_0x1d0b38");
#endif

    switch (ctx->pc) {
        case 0x1d0ba0u: goto label_1d0ba0;
        case 0x1d0bd4u: goto label_1d0bd4;
        case 0x1d0bf4u: goto label_1d0bf4;
        default: break;
    }

    ctx->pc = 0x1d0b38u;

    // 0x1d0b38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d0b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d0b3c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1d0b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1d0b40: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1d0b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1d0b44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b48: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1d0b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1d0b4c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d0b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d0b50: 0x92020688  lbu         $v0, 0x688($s0)
    ctx->pc = 0x1d0b50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1672)));
    // 0x1d0b54: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D0B54u;
    {
        const bool branch_taken_0x1d0b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0b54) {
            ctx->pc = 0x1D0B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0B54u;
            // 0x1d0b58: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0BFCu;
            goto label_1d0bfc;
        }
    }
    ctx->pc = 0x1D0B5Cu;
    // 0x1d0b5c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1d0b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d0b60: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1d0b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1d0b64: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x1d0b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1d0b68: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1d0b68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0b6c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1d0b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1d0b70: 0x26040490  addiu       $a0, $s0, 0x490
    ctx->pc = 0x1d0b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x1d0b74: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1d0b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1d0b78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d0b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b7c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1d0b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1d0b80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b84: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1d0b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1d0b88: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1d0b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d0b8c: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x1d0b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x1d0b90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d0b90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0b94: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x1d0b94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d0b98: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1D0B98u;
    SET_GPR_U32(ctx, 31, 0x1D0BA0u);
    ctx->pc = 0x1D0B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B98u;
    // 0x1d0b9c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1D0B98u, 0x1D0BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BA0u;
label_1d0ba0:
    // 0x1d0ba0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D0BA0u;
    {
        const bool branch_taken_0x1d0ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BA0u;
        // 0x1d0ba4: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ba0) {
            ctx->pc = 0x1D0BF8u;
            goto label_1d0bf8;
        }
    }
    ctx->pc = 0x1D0BA8u;
    // 0x1d0ba8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1d0ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d0bac: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1d0bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1d0bb0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D0BB0u;
    {
        const bool branch_taken_0x1d0bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BB0u;
        // 0x1d0bb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0bb0) {
            ctx->pc = 0x1D0BF8u;
            goto label_1d0bf8;
        }
    }
    ctx->pc = 0x1D0BB8u;
    // 0x1d0bb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d0bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d0bbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1d0bbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d0bc0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1d0bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0bc4: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x1d0bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x1d0bc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d0bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0bcc: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1D0BCCu;
    SET_GPR_U32(ctx, 31, 0x1D0BD4u);
    ctx->pc = 0x1D0BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0BCCu;
    // 0x1d0bd0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1D0BCCu, 0x1D0BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BD4u;
label_1d0bd4:
    // 0x1d0bd4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d0bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d0bd8: 0x8e0700f0  lw          $a3, 0xF0($s0)
    ctx->pc = 0x1d0bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1d0bdc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d0bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d0be0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d0be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0be4: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1d0be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1d0be8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0be8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0bec: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1D0BECu;
    SET_GPR_U32(ctx, 31, 0x1D0BF4u);
    ctx->pc = 0x1D0BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0BECu;
    // 0x1d0bf0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1D0BECu, 0x1D0BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BF4u;
label_1d0bf4:
    // 0x1d0bf4: 0xa2120688  sb          $s2, 0x688($s0)
    ctx->pc = 0x1d0bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1672), (uint8_t)GPR_U32(ctx, 18));
label_1d0bf8:
    // 0x1d0bf8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1d0bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d0bfc:
    // 0x1d0bfc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1d0bfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d0c00: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1d0c00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d0c04: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d0c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d0c08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C08u;
        // 0x1d0c0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0C10u;
}
