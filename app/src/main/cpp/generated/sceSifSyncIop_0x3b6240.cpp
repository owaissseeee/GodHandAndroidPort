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

// Function: sceSifSyncIop
// Address: 0x3b6240 - 0x3b6290
void sceSifSyncIop_0x3b6240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifSyncIop_0x3b6240");
#endif

    switch (ctx->pc) {
        case 0x3b6250u: goto label_3b6250;
        case 0x3b6268u: goto label_3b6268;
        case 0x3b6274u: goto label_3b6274;
        case 0x3b6280u: goto label_3b6280;
        default: break;
    }

    ctx->pc = 0x3b6240u;

    // 0x3b6240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b6240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b6244: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b6244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b6248: 0xc0ec02c  jal         func_3B00B0
    ctx->pc = 0x3B6248u;
    SET_GPR_U32(ctx, 31, 0x3B6250u);
    ctx->pc = 0x3B624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6248u;
    // 0x3b624c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B00B0u, 0x3B6248u, 0x3B6250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6250u;
label_3b6250:
    // 0x3b6250: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x3b6250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x3b6254: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3b6254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3b6258: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3B6258u;
    {
        const bool branch_taken_0x3b6258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6258u;
        // 0x3b625c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6258) {
            ctx->pc = 0x3B6284u;
            goto label_3b6284;
        }
    }
    ctx->pc = 0x3B6260u;
    // 0x3b6260: 0xc0ec048  jal         func_3B0120
    ctx->pc = 0x3B6260u;
    SET_GPR_U32(ctx, 31, 0x3B6268u);
    ctx->pc = 0x3B0120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0120u, 0x3B6260u, 0x3B6268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6268u;
label_3b6268:
    // 0x3b6268: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b6268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b626c: 0xc0ede70  jal         func_3B79C0
    ctx->pc = 0x3B626Cu;
    SET_GPR_U32(ctx, 31, 0x3B6274u);
    ctx->pc = 0x3B6270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B626Cu;
    // 0x3b6270: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B79C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B79C0u, 0x3B626Cu, 0x3B6274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6274u;
label_3b6274:
    // 0x3b6274: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b6274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b6278: 0xc0ede70  jal         func_3B79C0
    ctx->pc = 0x3B6278u;
    SET_GPR_U32(ctx, 31, 0x3B6280u);
    ctx->pc = 0x3B627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6278u;
    // 0x3b627c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B79C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B79C0u, 0x3B6278u, 0x3B6280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6280u;
label_3b6280:
    // 0x3b6280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b6280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b6284:
    // 0x3b6284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b6284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b6288: 0x3e00008  jr          $ra
    ctx->pc = 0x3B6288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6288u;
        // 0x3b628c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B6290u;
}
