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

// Function: MoviePool_init
// Address: 0x2b4960 - 0x2b4a30
void MoviePool_init_0x2b4960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoviePool_init_0x2b4960");
#endif

    switch (ctx->pc) {
        case 0x2b49a8u: goto label_2b49a8;
        case 0x2b49d0u: goto label_2b49d0;
        case 0x2b49d8u: goto label_2b49d8;
        case 0x2b49f0u: goto label_2b49f0;
        case 0x2b49f8u: goto label_2b49f8;
        case 0x2b4a04u: goto label_2b4a04;
        default: break;
    }

    ctx->pc = 0x2b4960u;

    // 0x2b4960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b4960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b4964: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x2b4964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x2b4968: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b4968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2b496c: 0x24427e30  addiu       $v0, $v0, 0x7E30
    ctx->pc = 0x2b496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32304));
    // 0x2b4970: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b4970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b4974: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b4974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4978: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b4978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b497c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4980: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b4980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b4984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b4984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4988: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2b4988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2b498c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2b498cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b4990: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x2b4990u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4994: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x2b4994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b4998: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2b4998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2b499c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2b499cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b49a0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2B49A0u;
    SET_GPR_U32(ctx, 31, 0x2B49A8u);
    ctx->pc = 0x2B49A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B49A0u;
    // 0x2b49a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2B49A0u, 0x2B49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B49A8u;
label_2b49a8:
    // 0x2b49a8: 0x3c01426f  lui         $at, 0x426F
    ctx->pc = 0x2b49a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17007 << 16));
    // 0x2b49ac: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2b49acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2b49b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b49b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b49b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b49b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b49b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b49b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b49bc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2b49bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x2b49c0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2b49c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b49c4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2b49c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2b49c8: 0xc0d14b6  jal         func_3452D8
    ctx->pc = 0x2B49C8u;
    SET_GPR_U32(ctx, 31, 0x2B49D0u);
    ctx->pc = 0x2B49CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B49C8u;
    // 0x2b49cc: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3452D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452D8u, 0x2B49C8u, 0x2B49D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B49D0u;
label_2b49d0:
    // 0x2b49d0: 0xc0d1ade  jal         func_346B78
    ctx->pc = 0x2B49D0u;
    SET_GPR_U32(ctx, 31, 0x2B49D8u);
    ctx->pc = 0x2B49D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B49D0u;
    // 0x2b49d4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346B78u, 0x2B49D0u, 0x2B49D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B49D8u;
label_2b49d8:
    // 0x2b49d8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2b49d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x2b49dc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2b49dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x2b49e0: 0x248448a0  addiu       $a0, $a0, 0x48A0
    ctx->pc = 0x2b49e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18592));
    // 0x2b49e4: 0x24a548c8  addiu       $a1, $a1, 0x48C8
    ctx->pc = 0x2b49e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18632));
    // 0x2b49e8: 0xc0d1148  jal         func_344520
    ctx->pc = 0x2B49E8u;
    SET_GPR_U32(ctx, 31, 0x2B49F0u);
    ctx->pc = 0x2B49ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B49E8u;
    // 0x2b49ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344520u, 0x2B49E8u, 0x2B49F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B49F0u;
label_2b49f0:
    // 0x2b49f0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2b49f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b49f4: 0x0  nop
    ctx->pc = 0x2b49f4u;
    // NOP
label_2b49f8:
    // 0x2b49f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b49f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b49fc: 0xc0b4dc4  jal         func_2D3710
    ctx->pc = 0x2B49FCu;
    SET_GPR_U32(ctx, 31, 0x2B4A04u);
    ctx->pc = 0x2B4A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B49FCu;
    // 0x2b4a00: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3710u, 0x2B49FCu, 0x2B4A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4A04u;
label_2b4a04:
    // 0x2b4a04: 0x261000ac  addiu       $s0, $s0, 0xAC
    ctx->pc = 0x2b4a04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x2b4a08: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2b4a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2b4a0c: 0x641fffa  bgez        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B4A0Cu;
    {
        const bool branch_taken_0x2b4a0c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x2B4A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A0Cu;
        // 0x2b4a10: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4a0c) {
            ctx->pc = 0x2B49F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b49f8;
        }
    }
    ctx->pc = 0x2B4A14u;
    // 0x2b4a14: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b4a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b4a18: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b4a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4a1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b4a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4a20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b4a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4a24: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A24u;
        // 0x2b4a28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4A2Cu;
    // 0x2b4a2c: 0x0  nop
    ctx->pc = 0x2b4a2cu;
    // NOP
    ctx->pc = 0x2b4a30u;
}
