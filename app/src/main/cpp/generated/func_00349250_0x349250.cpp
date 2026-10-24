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

// Function: func_00349250
// Address: 0x349250 - 0x3492a0
void func_00349250_0x349250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349250_0x349250");
#endif

    switch (ctx->pc) {
        case 0x349264u: goto label_349264;
        case 0x34926cu: goto label_34926c;
        case 0x349284u: goto label_349284;
        default: break;
    }

    ctx->pc = 0x349250u;

    // 0x349250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x349254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x349258: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x349258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34925c: 0xc0d2610  jal         func_349840
    ctx->pc = 0x34925Cu;
    SET_GPR_U32(ctx, 31, 0x349264u);
    ctx->pc = 0x349260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34925Cu;
    // 0x349260: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349840u, 0x34925Cu, 0x349264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349264u;
label_349264:
    // 0x349264: 0xc0d24ba  jal         func_3492E8
    ctx->pc = 0x349264u;
    SET_GPR_U32(ctx, 31, 0x34926Cu);
    ctx->pc = 0x3492E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3492E8u, 0x349264u, 0x34926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34926Cu;
label_34926c:
    // 0x34926c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34926cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349270: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349274: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x349274u;
    {
        const bool branch_taken_0x349274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x349278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349274u;
        // 0x349278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349274) {
            ctx->pc = 0x349288u;
            goto label_349288;
        }
    }
    ctx->pc = 0x34927Cu;
    // 0x34927c: 0xc0d251a  jal         func_349468
    ctx->pc = 0x34927Cu;
    SET_GPR_U32(ctx, 31, 0x349284u);
    ctx->pc = 0x349468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349468u, 0x34927Cu, 0x349284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349284u;
label_349284:
    // 0x349284: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x349284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_349288:
    // 0x349288: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349288u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34928c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x34928cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349290: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x349290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x349294: 0x3e00008  jr          $ra
    ctx->pc = 0x349294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349294u;
        // 0x349298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34929Cu;
    // 0x34929c: 0x0  nop
    ctx->pc = 0x34929cu;
    // NOP
    ctx->pc = 0x3492a0u;
}
