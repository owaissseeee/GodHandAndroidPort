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

// Function: func_001C8E50
// Address: 0x1c8e50 - 0x1c8f30
void func_001C8E50_0x1c8e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C8E50_0x1c8e50");
#endif

    switch (ctx->pc) {
        case 0x1c8eb8u: goto label_1c8eb8;
        case 0x1c8eecu: goto label_1c8eec;
        case 0x1c8f0cu: goto label_1c8f0c;
        default: break;
    }

    ctx->pc = 0x1c8e50u;

    // 0x1c8e50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c8e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c8e54: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1c8e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1c8e58: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1c8e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1c8e5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e60: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1c8e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1c8e64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c8e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c8e68: 0x92020640  lbu         $v0, 0x640($s0)
    ctx->pc = 0x1c8e68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x1c8e6c: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C8E6Cu;
    {
        const bool branch_taken_0x1c8e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c8e6c) {
            ctx->pc = 0x1C8E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8E6Cu;
            // 0x1c8e70: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8F14u;
            goto label_1c8f14;
        }
    }
    ctx->pc = 0x1C8E74u;
    // 0x1c8e74: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1c8e74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c8e78: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1c8e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c8e7c: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x1c8e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c8e80: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1c8e80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8e84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1c8e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1c8e88: 0x26040490  addiu       $a0, $s0, 0x490
    ctx->pc = 0x1c8e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x1c8e8c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1c8e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1c8e90: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c8e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e94: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x1c8e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x1c8e98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e9c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1c8e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1c8ea0: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x1c8ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c8ea4: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x1c8ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
    // 0x1c8ea8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c8ea8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8eac: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x1c8eacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c8eb0: 0xc04c784  jal         func_131E10
    ctx->pc = 0x1C8EB0u;
    SET_GPR_U32(ctx, 31, 0x1C8EB8u);
    ctx->pc = 0x1C8EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EB0u;
    // 0x1c8eb4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x1C8EB0u, 0x1C8EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EB8u;
label_1c8eb8:
    // 0x1c8eb8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C8EB8u;
    {
        const bool branch_taken_0x1c8eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EB8u;
        // 0x1c8ebc: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8eb8) {
            ctx->pc = 0x1C8F10u;
            goto label_1c8f10;
        }
    }
    ctx->pc = 0x1C8EC0u;
    // 0x1c8ec0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c8ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1c8ec4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1c8ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1c8ec8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C8EC8u;
    {
        const bool branch_taken_0x1c8ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8EC8u;
        // 0x1c8ecc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8ec8) {
            ctx->pc = 0x1C8F10u;
            goto label_1c8f10;
        }
    }
    ctx->pc = 0x1C8ED0u;
    // 0x1c8ed0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c8ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8ed4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c8ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8ed8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c8ed8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8edc: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x1c8edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x1c8ee0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c8ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ee4: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x1C8EE4u;
    SET_GPR_U32(ctx, 31, 0x1C8EECu);
    ctx->pc = 0x1C8EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EE4u;
    // 0x1c8ee8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1C8EE4u, 0x1C8EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8EECu;
label_1c8eec:
    // 0x1c8eec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c8eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1c8ef0: 0x8e0700f0  lw          $a3, 0xF0($s0)
    ctx->pc = 0x1c8ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1c8ef4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1c8ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1c8ef8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c8ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8efc: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1c8efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1c8f00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f04: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1C8F04u;
    SET_GPR_U32(ctx, 31, 0x1C8F0Cu);
    ctx->pc = 0x1C8F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F04u;
    // 0x1c8f08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1C8F04u, 0x1C8F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F0Cu;
label_1c8f0c:
    // 0x1c8f0c: 0xa2120640  sb          $s2, 0x640($s0)
    ctx->pc = 0x1c8f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1600), (uint8_t)GPR_U32(ctx, 18));
label_1c8f10:
    // 0x1c8f10: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1c8f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c8f14:
    // 0x1c8f14: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1c8f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c8f18: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1c8f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c8f1c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c8f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8f20: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F20u;
        // 0x1c8f24: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F28u;
    // 0x1c8f28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1c8f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c8f2c: 0x0  nop
    ctx->pc = 0x1c8f2cu;
    // NOP
    ctx->pc = 0x1c8f30u;
}
