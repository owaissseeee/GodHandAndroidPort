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

// Function: func_001B0240
// Address: 0x1b0240 - 0x1b0290
void func_001B0240_0x1b0240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B0240_0x1b0240");
#endif

    switch (ctx->pc) {
        case 0x1b0264u: goto label_1b0264;
        case 0x1b027cu: goto label_1b027c;
        default: break;
    }

    ctx->pc = 0x1b0240u;

    // 0x1b0240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b0240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b0244: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1b0244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1b0248: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b0248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b024c: 0x8c626038  lw          $v0, 0x6038($v1)
    ctx->pc = 0x1b024cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786038u));
    // 0x1b0250: 0x24706038  addiu       $s0, $v1, 0x6038
    ctx->pc = 0x1b0250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24632));
    // 0x1b0254: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B0254u;
    {
        const bool branch_taken_0x1b0254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0254u;
        // 0x1b0258: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0254) {
            ctx->pc = 0x1B027Cu;
            goto label_1b027c;
        }
    }
    ctx->pc = 0x1B025Cu;
    // 0x1b025c: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1B025Cu;
    SET_GPR_U32(ctx, 31, 0x1B0264u);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1B025Cu, 0x1B0264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0264u;
label_1b0264:
    // 0x1b0264: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b0264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b0268: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1b0268u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1b026c: 0x24a58140  addiu       $a1, $a1, -0x7EC0
    ctx->pc = 0x1b026cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934848));
    // 0x1b0270: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1b0270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1b0274: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1B0274u;
    SET_GPR_U32(ctx, 31, 0x1B027Cu);
    ctx->pc = 0x1B0278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0274u;
    // 0x1b0278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1B0274u, 0x1B027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B027Cu;
label_1b027c:
    // 0x1b027c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b027cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0280: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0284: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b0284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0288: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0288u;
        // 0x1b028c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0290u;
}
