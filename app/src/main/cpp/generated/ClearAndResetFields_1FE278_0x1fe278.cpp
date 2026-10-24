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

// Function: ClearAndResetFields_1FE278
// Address: 0x1fe278 - 0x1fe2b8
void ClearAndResetFields_1FE278_0x1fe278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearAndResetFields_1FE278_0x1fe278");
#endif

    switch (ctx->pc) {
        case 0x1fe294u: goto label_1fe294;
        case 0x1fe29cu: goto label_1fe29c;
        default: break;
    }

    ctx->pc = 0x1fe278u;

    // 0x1fe278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fe27c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fe27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fe280: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fe280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe284: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE284u;
    {
        const bool branch_taken_0x1fe284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE284u;
        // 0x1fe288: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe284) {
            ctx->pc = 0x1FE2A4u;
            goto label_1fe2a4;
        }
    }
    ctx->pc = 0x1FE28Cu;
    // 0x1fe28c: 0xc07f560  jal         func_1FD580
    ctx->pc = 0x1FE28Cu;
    SET_GPR_U32(ctx, 31, 0x1FE294u);
    ctx->pc = 0x1FE290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE28Cu;
    // 0x1fe290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD580u, 0x1FE28Cu, 0x1FE294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE294u;
label_1fe294:
    // 0x1fe294: 0xc07f37a  jal         func_1FCDE8
    ctx->pc = 0x1FE294u;
    SET_GPR_U32(ctx, 31, 0x1FE29Cu);
    ctx->pc = 0x1FE298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE294u;
    // 0x1fe298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCDE8u, 0x1FE294u, 0x1FE29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE29Cu;
label_1fe29c:
    // 0x1fe29c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FE29Cu;
    {
        const bool branch_taken_0x1fe29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE29Cu;
        // 0x1fe2a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe29c) {
            ctx->pc = 0x1FE2A8u;
            goto label_1fe2a8;
        }
    }
    ctx->pc = 0x1FE2A4u;
label_1fe2a4:
    // 0x1fe2a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fe2a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fe2a8:
    // 0x1fe2a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fe2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe2ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2B0u;
        // 0x1fe2b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE2B8u;
}
