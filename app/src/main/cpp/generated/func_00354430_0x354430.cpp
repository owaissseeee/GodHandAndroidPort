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

// Function: func_00354430
// Address: 0x354430 - 0x354478
void func_00354430_0x354430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00354430_0x354430");
#endif

    switch (ctx->pc) {
        case 0x354458u: goto label_354458;
        default: break;
    }

    ctx->pc = 0x354430u;

    // 0x354430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x354430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x354434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x354434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x354438: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x354438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35443c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35443cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x354440: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x354440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x354444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x354448: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x354448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35444c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x35444cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x354450: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x354450u;
    SET_GPR_U32(ctx, 31, 0x354458u);
    ctx->pc = 0x354454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354450u;
    // 0x354454: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x354450u, 0x354458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354458u;
label_354458:
    // 0x354458: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x354458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35445c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35445cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354460: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x354460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x354464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x354464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354468: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x354468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35446c: 0x3e00008  jr          $ra
    ctx->pc = 0x35446Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35446Cu;
        // 0x354470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35446Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354474u;
    // 0x354474: 0x0  nop
    ctx->pc = 0x354474u;
    // NOP
    ctx->pc = 0x354478u;
}
