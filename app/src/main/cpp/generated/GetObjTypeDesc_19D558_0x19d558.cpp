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

// Function: GetObjTypeDesc_19D558
// Address: 0x19d558 - 0x19d5a8
void GetObjTypeDesc_19D558_0x19d558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetObjTypeDesc_19D558_0x19d558");
#endif

    switch (ctx->pc) {
        case 0x19d57cu: goto label_19d57c;
        case 0x19d594u: goto label_19d594;
        default: break;
    }

    ctx->pc = 0x19d558u;

    // 0x19d558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19d558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19d55c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x19d55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x19d560: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19d560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19d564: 0x8c625df8  lw          $v0, 0x5DF8($v1)
    ctx->pc = 0x19d564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785DF8u));
    // 0x19d568: 0x24705df8  addiu       $s0, $v1, 0x5DF8
    ctx->pc = 0x19d568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24056));
    // 0x19d56c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19D56Cu;
    {
        const bool branch_taken_0x19d56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D56Cu;
        // 0x19d570: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d56c) {
            ctx->pc = 0x19D594u;
            goto label_19d594;
        }
    }
    ctx->pc = 0x19D574u;
    // 0x19d574: 0xc06f54a  jal         func_1BD528
    ctx->pc = 0x19D574u;
    SET_GPR_U32(ctx, 31, 0x19D57Cu);
    ctx->pc = 0x1BD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD528u, 0x19D574u, 0x19D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D57Cu;
label_19d57c:
    // 0x19d57c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x19d57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x19d580: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x19d580u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x19d584: 0x24a55df8  addiu       $a1, $a1, 0x5DF8
    ctx->pc = 0x19d584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24056));
    // 0x19d588: 0x24c659b8  addiu       $a2, $a2, 0x59B8
    ctx->pc = 0x19d588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22968));
    // 0x19d58c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x19D58Cu;
    SET_GPR_U32(ctx, 31, 0x19D594u);
    ctx->pc = 0x19D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D58Cu;
    // 0x19d590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x19D58Cu, 0x19D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D594u;
label_19d594:
    // 0x19d594: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19d594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d59c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19d59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19D5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D5A0u;
        // 0x19d5a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D5A8u;
}
