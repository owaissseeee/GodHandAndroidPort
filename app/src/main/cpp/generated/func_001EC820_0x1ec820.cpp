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

// Function: func_001EC820
// Address: 0x1ec820 - 0x1ec8a8
void func_001EC820_0x1ec820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EC820_0x1ec820");
#endif

    switch (ctx->pc) {
        case 0x1ec84cu: goto label_1ec84c;
        case 0x1ec888u: goto label_1ec888;
        default: break;
    }

    ctx->pc = 0x1ec820u;

    // 0x1ec820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ec824: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ec824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ec828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ec82c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec830: 0x9e020054  lwu         $v0, 0x54($s0)
    ctx->pc = 0x1ec830u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1ec834: 0x212fb  dsra        $v0, $v0, 11
    ctx->pc = 0x1ec834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 11);
    // 0x1ec838: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ec83c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1EC83Cu;
    {
        const bool branch_taken_0x1ec83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec83c) {
            ctx->pc = 0x1EC840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC83Cu;
            // 0x1ec840: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC89Cu;
            goto label_1ec89c;
        }
    }
    ctx->pc = 0x1EC844u;
    // 0x1ec844: 0xc07b0e2  jal         func_1EC388
    ctx->pc = 0x1EC844u;
    SET_GPR_U32(ctx, 31, 0x1EC84Cu);
    ctx->pc = 0x1EC848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC844u;
    // 0x1ec848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC388u, 0x1EC844u, 0x1EC84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC84Cu;
label_1ec84c:
    // 0x1ec84c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EC84Cu;
    {
        const bool branch_taken_0x1ec84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec84c) {
            ctx->pc = 0x1EC850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC84Cu;
            // 0x1ec850: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC89Cu;
            goto label_1ec89c;
        }
    }
    ctx->pc = 0x1EC854u;
    // 0x1ec854: 0x9c420030  lwu         $v0, 0x30($v0)
    ctx->pc = 0x1ec854u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ec858: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x1ec858u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
    // 0x1ec85c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ec860: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EC860u;
    {
        const bool branch_taken_0x1ec860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC860u;
        // 0x1ec864: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec860) {
            ctx->pc = 0x1EC898u;
            goto label_1ec898;
        }
    }
    ctx->pc = 0x1EC868u;
    // 0x1ec868: 0x8e070200  lw          $a3, 0x200($s0)
    ctx->pc = 0x1ec868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1ec86c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1ec86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1ec870: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ec870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ec874: 0x24e70210  addiu       $a3, $a3, 0x210
    ctx->pc = 0x1ec874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 528));
    // 0x1ec878: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1ec878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ec87c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec87cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec880: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1EC880u;
    SET_GPR_U32(ctx, 31, 0x1EC888u);
    ctx->pc = 0x1EC884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC880u;
    // 0x1ec884: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1EC880u, 0x1EC888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC888u;
label_1ec888:
    // 0x1ec888: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1ec888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1ec88c: 0xae022a08  sw          $v0, 0x2A08($s0)
    ctx->pc = 0x1ec88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10760), GPR_U32(ctx, 2));
    // 0x1ec890: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1ec890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x1ec894: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1ec894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_1ec898:
    // 0x1ec898: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ec898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec89c:
    // 0x1ec89c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC8A0u;
        // 0x1ec8a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC8A8u;
}
