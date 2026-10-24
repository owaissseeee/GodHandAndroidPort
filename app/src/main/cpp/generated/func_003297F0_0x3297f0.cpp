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

// Function: func_003297F0
// Address: 0x3297f0 - 0x329848
void func_003297F0_0x3297f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003297F0_0x3297f0");
#endif

    switch (ctx->pc) {
        case 0x329814u: goto label_329814;
        case 0x32982cu: goto label_32982c;
        default: break;
    }

    ctx->pc = 0x3297f0u;

    // 0x3297f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3297f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3297f4: 0x24a6fc00  addiu       $a2, $a1, -0x400
    ctx->pc = 0x3297f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966272));
    // 0x3297f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3297f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3297fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3297fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329800: 0x26050400  addiu       $a1, $s0, 0x400
    ctx->pc = 0x329800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x329804: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x329804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x329808: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32980c: 0xc0ca524  jal         func_329490
    ctx->pc = 0x32980Cu;
    SET_GPR_U32(ctx, 31, 0x329814u);
    ctx->pc = 0x329810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32980Cu;
    // 0x329810: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329490u, 0x32980Cu, 0x329814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329814u;
label_329814:
    // 0x329814: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x329814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329818: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x329818u;
    {
        const bool branch_taken_0x329818 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x32981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329818u;
        // 0x32981c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329818) {
            ctx->pc = 0x329830u;
            goto label_329830;
        }
    }
    ctx->pc = 0x329820u;
    // 0x329820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329824: 0xc0cdaea  jal         func_336BA8
    ctx->pc = 0x329824u;
    SET_GPR_U32(ctx, 31, 0x32982Cu);
    ctx->pc = 0x329828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329824u;
    // 0x329828: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336BA8u, 0x329824u, 0x32982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32982Cu;
label_32982c:
    // 0x32982c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32982cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_329830:
    // 0x329830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329834: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329834u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32983c: 0x3e00008  jr          $ra
    ctx->pc = 0x32983Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32983Cu;
        // 0x329840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32983Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329844u;
    // 0x329844: 0x0  nop
    ctx->pc = 0x329844u;
    // NOP
    ctx->pc = 0x329848u;
}
