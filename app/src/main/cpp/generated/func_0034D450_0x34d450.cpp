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

// Function: func_0034D450
// Address: 0x34d450 - 0x34d4a0
void func_0034D450_0x34d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034D450_0x34d450");
#endif

    switch (ctx->pc) {
        case 0x34d474u: goto label_34d474;
        default: break;
    }

    ctx->pc = 0x34d450u;

    // 0x34d450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34d450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34d454: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34d454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34d458: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34d458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d45c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34d45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34d460: 0x8e0336b0  lw          $v1, 0x36B0($s0)
    ctx->pc = 0x34d460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x34d464: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x34D464u;
    {
        const bool branch_taken_0x34d464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D464u;
        // 0x34d468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d464) {
            ctx->pc = 0x34D48Cu;
            goto label_34d48c;
        }
    }
    ctx->pc = 0x34D46Cu;
    // 0x34d46c: 0xc0d404e  jal         func_350138
    ctx->pc = 0x34D46Cu;
    SET_GPR_U32(ctx, 31, 0x34D474u);
    ctx->pc = 0x350138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350138u, 0x34D46Cu, 0x34D474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D474u;
label_34d474:
    // 0x34d474: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34D474u;
    {
        const bool branch_taken_0x34d474 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x34d474) {
            ctx->pc = 0x34D478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34D474u;
            // 0x34d478: 0x8e0236b0  lw          $v0, 0x36B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34D488u;
            goto label_34d488;
        }
    }
    ctx->pc = 0x34D47Cu;
    // 0x34d47c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x34D47Cu;
    {
        const bool branch_taken_0x34d47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D47Cu;
        // 0x34d480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d47c) {
            ctx->pc = 0x34D48Cu;
            goto label_34d48c;
        }
    }
    ctx->pc = 0x34D484u;
    // 0x34d484: 0x0  nop
    ctx->pc = 0x34d484u;
    // NOP
label_34d488:
    // 0x34d488: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x34d488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_34d48c:
    // 0x34d48c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34d48cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d490: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34d490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34d494: 0x3e00008  jr          $ra
    ctx->pc = 0x34D494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D494u;
        // 0x34d498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D49Cu;
    // 0x34d49c: 0x0  nop
    ctx->pc = 0x34d49cu;
    // NOP
    ctx->pc = 0x34d4a0u;
}
