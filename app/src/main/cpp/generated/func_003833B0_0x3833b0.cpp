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

// Function: func_003833B0
// Address: 0x3833b0 - 0x3833f8
void func_003833B0_0x3833b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003833B0_0x3833b0");
#endif

    switch (ctx->pc) {
        case 0x3833dcu: goto label_3833dc;
        default: break;
    }

    ctx->pc = 0x3833b0u;

    // 0x3833b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3833b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3833b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3833b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3833b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3833b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3833bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3833bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3833c0: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x3833c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3833c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3833c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3833c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3833c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3833cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3833CCu;
    {
        const bool branch_taken_0x3833cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3833D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3833CCu;
        // 0x3833d0: 0x26050034  addiu       $a1, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3833cc) {
            ctx->pc = 0x3833E4u;
            goto label_3833e4;
        }
    }
    ctx->pc = 0x3833D4u;
    // 0x3833d4: 0xc0e03e0  jal         func_380F80
    ctx->pc = 0x3833D4u;
    SET_GPR_U32(ctx, 31, 0x3833DCu);
    ctx->pc = 0x3833D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3833D4u;
    // 0x3833d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380F80u, 0x3833D4u, 0x3833DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3833DCu;
label_3833dc:
    // 0x3833dc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3833DCu;
    {
        const bool branch_taken_0x3833dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3833dc) {
            ctx->pc = 0x3833E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3833DCu;
            // 0x3833e0: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3833E4u;
            goto label_3833e4;
        }
    }
    ctx->pc = 0x3833E4u;
label_3833e4:
    // 0x3833e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3833e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3833e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3833e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3833ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3833ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3833F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3833ECu;
        // 0x3833f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3833ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3833F4u;
    // 0x3833f4: 0x0  nop
    ctx->pc = 0x3833f4u;
    // NOP
    ctx->pc = 0x3833f8u;
}
