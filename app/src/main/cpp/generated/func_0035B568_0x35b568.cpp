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

// Function: func_0035B568
// Address: 0x35b568 - 0x35b5b8
void func_0035B568_0x35b568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035B568_0x35b568");
#endif

    switch (ctx->pc) {
        case 0x35b584u: goto label_35b584;
        case 0x35b590u: goto label_35b590;
        case 0x35b5a4u: goto label_35b5a4;
        default: break;
    }

    ctx->pc = 0x35b568u;

    // 0x35b568: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35b568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35b56c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35b56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35b570: 0x24900d30  addiu       $s0, $a0, 0xD30
    ctx->pc = 0x35b570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3376));
    // 0x35b574: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35b574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35b578: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35b578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35b57c: 0xc0db248  jal         func_36C920
    ctx->pc = 0x35B57Cu;
    SET_GPR_U32(ctx, 31, 0x35B584u);
    ctx->pc = 0x35B580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B57Cu;
    // 0x35b580: 0x8e0402e0  lw          $a0, 0x2E0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C920u, 0x35B57Cu, 0x35B584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B584u;
label_35b584:
    // 0x35b584: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35b584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b588: 0xc0d37da  jal         func_34DF68
    ctx->pc = 0x35B588u;
    SET_GPR_U32(ctx, 31, 0x35B590u);
    ctx->pc = 0x35B58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B588u;
    // 0x35b58c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF68u, 0x35B588u, 0x35B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B590u;
label_35b590:
    // 0x35b590: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x35b590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x35b594: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35b594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b598: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35b598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x35b59c: 0xc0d37e0  jal         func_34DF80
    ctx->pc = 0x35B59Cu;
    SET_GPR_U32(ctx, 31, 0x35B5A4u);
    ctx->pc = 0x35B5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B59Cu;
    // 0x35b5a0: 0xae0202dc  sw          $v0, 0x2DC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DF80u, 0x35B59Cu, 0x35B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B5A4u;
label_35b5a4:
    // 0x35b5a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35b5a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b5a8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35b5a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35b5ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35b5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x35B5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B5B0u;
        // 0x35b5b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B5B8u;
}
