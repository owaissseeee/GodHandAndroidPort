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

// Function: func_002E2558
// Address: 0x2e2558 - 0x2e25b0
void func_002E2558_0x2e2558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E2558_0x2e2558");
#endif

    switch (ctx->pc) {
        case 0x2e257cu: goto label_2e257c;
        case 0x2e2594u: goto label_2e2594;
        default: break;
    }

    ctx->pc = 0x2e2558u;

    // 0x2e2558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e255c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2e255cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2e2560: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e2560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e2564: 0x8c6263b8  lw          $v0, 0x63B8($v1)
    ctx->pc = 0x2e2564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7863B8u));
    // 0x2e2568: 0x247063b8  addiu       $s0, $v1, 0x63B8
    ctx->pc = 0x2e2568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25528));
    // 0x2e256c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E256Cu;
    {
        const bool branch_taken_0x2e256c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E256Cu;
        // 0x2e2570: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e256c) {
            ctx->pc = 0x2E2594u;
            goto label_2e2594;
        }
    }
    ctx->pc = 0x2E2574u;
    // 0x2e2574: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2E2574u;
    SET_GPR_U32(ctx, 31, 0x2E257Cu);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2E2574u, 0x2E257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E257Cu;
label_2e257c:
    // 0x2e257c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2e257cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2e2580: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2e2580u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2e2584: 0x24a5e120  addiu       $a1, $a1, -0x1EE0
    ctx->pc = 0x2e2584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959392));
    // 0x2e2588: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2e2588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2e258c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2E258Cu;
    SET_GPR_U32(ctx, 31, 0x2E2594u);
    ctx->pc = 0x2E2590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E258Cu;
    // 0x2e2590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2E258Cu, 0x2E2594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2594u;
label_2e2594:
    // 0x2e2594: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e2594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e2598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e259c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e259cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e25a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E25A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E25A0u;
        // 0x2e25a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E25A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E25A8u;
    // 0x2e25a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e25a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e25ac: 0x0  nop
    ctx->pc = 0x2e25acu;
    // NOP
    ctx->pc = 0x2e25b0u;
}
