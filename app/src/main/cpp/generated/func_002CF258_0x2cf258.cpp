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

// Function: func_002CF258
// Address: 0x2cf258 - 0x2cf298
void func_002CF258_0x2cf258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CF258_0x2cf258");
#endif

    switch (ctx->pc) {
        case 0x2cf26cu: goto label_2cf26c;
        default: break;
    }

    ctx->pc = 0x2cf258u;

    // 0x2cf258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf25c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cf25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cf260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf264: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x2CF264u;
    SET_GPR_U32(ctx, 31, 0x2CF26Cu);
    ctx->pc = 0x2CF268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF264u;
    // 0x2cf268: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x2CF264u, 0x2CF26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF26Cu;
label_2cf26c:
    // 0x2cf26c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2cf26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cf270: 0x50430002  beql        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CF270u;
    {
        const bool branch_taken_0x2cf270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cf270) {
            ctx->pc = 0x2CF274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF270u;
            // 0x2cf274: 0x86020012  lh          $v0, 0x12($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF27Cu;
            goto label_2cf27c;
        }
    }
    ctx->pc = 0x2CF278u;
    // 0x2cf278: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x2cf278u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_2cf27c:
    // 0x2cf27c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cf27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf284: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF284u;
        // 0x2cf288: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF28Cu;
    // 0x2cf28c: 0x0  nop
    ctx->pc = 0x2cf28cu;
    // NOP
    // 0x2cf290: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cf290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cf294: 0x0  nop
    ctx->pc = 0x2cf294u;
    // NOP
    ctx->pc = 0x2cf298u;
}
