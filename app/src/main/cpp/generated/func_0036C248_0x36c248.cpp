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

// Function: func_0036C248
// Address: 0x36c248 - 0x36c2a0
void func_0036C248_0x36c248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036C248_0x36c248");
#endif

    switch (ctx->pc) {
        case 0x36c25cu: goto label_36c25c;
        case 0x36c274u: goto label_36c274;
        case 0x36c27cu: goto label_36c27c;
        case 0x36c288u: goto label_36c288;
        default: break;
    }

    ctx->pc = 0x36c248u;

    // 0x36c248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36c248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36c24c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c250: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36c250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36c254: 0xc0db0a8  jal         func_36C2A0
    ctx->pc = 0x36C254u;
    SET_GPR_U32(ctx, 31, 0x36C25Cu);
    ctx->pc = 0x36C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C2A0u, 0x36C254u, 0x36C25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C25Cu;
label_36c25c:
    // 0x36c25c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36c25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c260: 0x2405040c  addiu       $a1, $zero, 0x40C
    ctx->pc = 0x36c260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
    // 0x36c264: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x36C264u;
    {
        const bool branch_taken_0x36c264 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C264u;
        // 0x36c268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c264) {
            ctx->pc = 0x36C290u;
            goto label_36c290;
        }
    }
    ctx->pc = 0x36C26Cu;
    // 0x36c26c: 0xc0db10e  jal         func_36C438
    ctx->pc = 0x36C26Cu;
    SET_GPR_U32(ctx, 31, 0x36C274u);
    ctx->pc = 0x36C438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C438u, 0x36C26Cu, 0x36C274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C274u;
label_36c274:
    // 0x36c274: 0xc0db0bc  jal         func_36C2F0
    ctx->pc = 0x36C274u;
    SET_GPR_U32(ctx, 31, 0x36C27Cu);
    ctx->pc = 0x36C278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C274u;
    // 0x36c278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C2F0u, 0x36C274u, 0x36C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C27Cu;
label_36c27c:
    // 0x36c27c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x36c27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c280: 0xc0db19c  jal         func_36C670
    ctx->pc = 0x36C280u;
    SET_GPR_U32(ctx, 31, 0x36C288u);
    ctx->pc = 0x36C284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C280u;
    // 0x36c284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C670u, 0x36C280u, 0x36C288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C288u;
label_36c288:
    // 0x36c288: 0xae0203b4  sw          $v0, 0x3B4($s0)
    ctx->pc = 0x36c288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 948), GPR_U32(ctx, 2));
    // 0x36c28c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36c28cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36c290:
    // 0x36c290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c294: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36c294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c298: 0x3e00008  jr          $ra
    ctx->pc = 0x36C298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C298u;
        // 0x36c29c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C2A0u;
}
