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

// Function: func_0026F120
// Address: 0x26f120 - 0x26f1d8
void func_0026F120_0x26f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026F120_0x26f120");
#endif

    switch (ctx->pc) {
        case 0x26f178u: goto label_26f178;
        case 0x26f1b0u: goto label_26f1b0;
        default: break;
    }

    ctx->pc = 0x26f120u;

    // 0x26f120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26f120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26f124: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26f124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26f128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f12c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26f12cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f130: 0x8e0205b4  lw          $v0, 0x5B4($s0)
    ctx->pc = 0x26f130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1460)));
    // 0x26f134: 0x284200c8  slti        $v0, $v0, 0xC8
    ctx->pc = 0x26f134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x26f138: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26F138u;
    {
        const bool branch_taken_0x26f138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F138u;
        // 0x26f13c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f138) {
            ctx->pc = 0x26F1C4u;
            goto label_26f1c4;
        }
    }
    ctx->pc = 0x26F140u;
    // 0x26f140: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x26f140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
    // 0x26f144: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f148: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x26f148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x26f14c: 0xae0005b4  sw          $zero, 0x5B4($s0)
    ctx->pc = 0x26f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1460), GPR_U32(ctx, 0));
    // 0x26f150: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x26f150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x26f154: 0xe60017cc  swc1        $f0, 0x17CC($s0)
    ctx->pc = 0x26f154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6092), bits); }
    // 0x26f158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26f158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f15c: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x26f15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x26f160: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x26f160u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f164: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26f164u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f168: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26f168u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f16c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26f16cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f170: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x26F170u;
    SET_GPR_U32(ctx, 31, 0x26F178u);
    ctx->pc = 0x26F174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F170u;
    // 0x26f174: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x26F170u, 0x26F178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F178u;
label_26f178:
    // 0x26f178: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x26f178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x26f17c: 0x2463fdd9  addiu       $v1, $v1, -0x227
    ctx->pc = 0x26f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966745));
    // 0x26f180: 0x2c620025  sltiu       $v0, $v1, 0x25
    ctx->pc = 0x26f180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x26f184: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26F184u;
    {
        const bool branch_taken_0x26f184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F184u;
        // 0x26f188: 0xa2000621  sb          $zero, 0x621($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1569), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f184) {
            ctx->pc = 0x26F1C0u;
            goto label_26f1c0;
        }
    }
    ctx->pc = 0x26F18Cu;
    // 0x26f18c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x26f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x26f190: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26f190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x26f194: 0x24425c70  addiu       $v0, $v0, 0x5C70
    ctx->pc = 0x26f194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23664));
    // 0x26f198: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26f198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26f19c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26f19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26f1a0: 0x800008  jr          $a0
    ctx->pc = 0x26F1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26F1A8u: goto label_26f1a8;
            case 0x26F1C0u: goto label_26f1c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F1A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x26F1A8u;
label_26f1a8:
    // 0x26f1a8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x26F1A8u;
    SET_GPR_U32(ctx, 31, 0x26F1B0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x26F1A8u, 0x26F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F1B0u;
label_26f1b0:
    // 0x26f1b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26f1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26f1b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26F1B4u;
    {
        const bool branch_taken_0x26f1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1B4u;
        // 0x26f1b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1b4) {
            ctx->pc = 0x26F1C0u;
            goto label_26f1c0;
        }
    }
    ctx->pc = 0x26F1BCu;
    // 0x26f1bc: 0xa2020621  sb          $v0, 0x621($s0)
    ctx->pc = 0x26f1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1569), (uint8_t)GPR_U32(ctx, 2));
label_26f1c0:
    // 0x26f1c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26f1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f1c4:
    // 0x26f1c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26f1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f1c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x26F1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1CCu;
        // 0x26f1d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F1D4u;
    // 0x26f1d4: 0x0  nop
    ctx->pc = 0x26f1d4u;
    // NOP
    ctx->pc = 0x26f1d8u;
}
