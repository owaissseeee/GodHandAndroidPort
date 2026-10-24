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

// Function: func_0035B500
// Address: 0x35b500 - 0x35b568
void func_0035B500_0x35b500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035B500_0x35b500");
#endif

    switch (ctx->pc) {
        case 0x35b524u: goto label_35b524;
        case 0x35b530u: goto label_35b530;
        case 0x35b550u: goto label_35b550;
        default: break;
    }

    ctx->pc = 0x35b500u;

    // 0x35b500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35b500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35b504: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x35b504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x35b508: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35b508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35b50c: 0x24900d30  addiu       $s0, $a0, 0xD30
    ctx->pc = 0x35b50cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3376));
    // 0x35b510: 0x8c44e278  lw          $a0, -0x1D88($v0)
    ctx->pc = 0x35b510u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EE278u));
    // 0x35b514: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35b518: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35b518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35b51c: 0xc0db248  jal         func_36C920
    ctx->pc = 0x35B51Cu;
    SET_GPR_U32(ctx, 31, 0x35B524u);
    ctx->pc = 0x36C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C920u, 0x35B51Cu, 0x35B524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B524u;
label_35b524:
    // 0x35b524: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35b524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b528: 0xc0d37da  jal         func_34DF68
    ctx->pc = 0x35B528u;
    SET_GPR_U32(ctx, 31, 0x35B530u);
    ctx->pc = 0x35B52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B528u;
    // 0x35b52c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF68u, 0x35B528u, 0x35B530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B530u;
label_35b530:
    // 0x35b530: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x35b530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x35b534: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35b534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b538: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x35b538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x35b53c: 0xae0302a8  sw          $v1, 0x2A8($s0)
    ctx->pc = 0x35b53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 3));
    // 0x35b540: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x35b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x35b544: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35b544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35b548: 0xc0d37e0  jal         func_34DF80
    ctx->pc = 0x35B548u;
    SET_GPR_U32(ctx, 31, 0x35B550u);
    ctx->pc = 0x35B54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B548u;
    // 0x35b54c: 0xae0202cc  sw          $v0, 0x2CC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF80u, 0x35B548u, 0x35B550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B550u;
label_35b550:
    // 0x35b550: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35b550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b554: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35b554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b558: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35b558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b55c: 0x3e00008  jr          $ra
    ctx->pc = 0x35B55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B55Cu;
        // 0x35b560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B564u;
    // 0x35b564: 0x0  nop
    ctx->pc = 0x35b564u;
    // NOP
    ctx->pc = 0x35b568u;
}
