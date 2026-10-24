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

// Function: func_0034C990
// Address: 0x34c990 - 0x34ca00
void func_0034C990_0x34c990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034C990_0x34c990");
#endif

    switch (ctx->pc) {
        case 0x34c9e0u: goto label_34c9e0;
        default: break;
    }

    ctx->pc = 0x34c990u;

    // 0x34c990: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x34c990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34c994: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34c994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34c998: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x34c998u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c99c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34c99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34c9a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c9a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34c9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c9a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c9ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34c9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c9b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c9b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34c9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34c9b8: 0x26091310  addiu       $t1, $s0, 0x1310
    ctx->pc = 0x34c9b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4880));
    // 0x34c9bc: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x34c9bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c9c0: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x34c9c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x34c9c4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x34c9c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c9c8: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x34c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x34c9cc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x34c9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34c9d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34C9D0u;
    {
        const bool branch_taken_0x34c9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C9D0u;
        // 0x34c9d4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c9d0) {
            ctx->pc = 0x34C9E4u;
            goto label_34c9e4;
        }
    }
    ctx->pc = 0x34C9D8u;
    // 0x34c9d8: 0xc0d70b4  jal         func_35C2D0
    ctx->pc = 0x34C9D8u;
    SET_GPR_U32(ctx, 31, 0x34C9E0u);
    ctx->pc = 0x34C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C9D8u;
    // 0x34c9dc: 0x8d25004c  lw          $a1, 0x4C($t1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C2D0u, 0x34C9D8u, 0x34C9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C9E0u;
label_34c9e0:
    // 0x34c9e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x34c9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34c9e4:
    // 0x34c9e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c9e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34c9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34c9ec: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x34c9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x34c9f0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x34c9f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c9f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34c9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x34C9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C9F8u;
        // 0x34c9fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CA00u;
}
