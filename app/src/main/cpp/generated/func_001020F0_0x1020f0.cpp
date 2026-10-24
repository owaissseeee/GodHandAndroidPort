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

// Function: func_001020F0
// Address: 0x1020f0 - 0x102128
void func_001020F0_0x1020f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001020F0_0x1020f0");
#endif

    switch (ctx->pc) {
        case 0x10210cu: goto label_10210c;
        default: break;
    }

    ctx->pc = 0x1020f0u;

    // 0x1020f0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1020f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1020f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1020f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1020f8: 0x8c627a80  lw          $v0, 0x7A80($v1)
    ctx->pc = 0x1020f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x1020fc: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1020FCu;
    {
        const bool branch_taken_0x1020fc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x102100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020FCu;
        // 0x102100: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020fc) {
            ctx->pc = 0x102114u;
            goto label_102114;
        }
    }
    ctx->pc = 0x102104u;
    // 0x102104: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x102104u;
    SET_GPR_U32(ctx, 31, 0x10210Cu);
    ctx->pc = 0x14B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B470u, 0x102104u, 0x10210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10210Cu;
label_10210c:
    // 0x10210c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10210Cu;
    {
        const bool branch_taken_0x10210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10210Cu;
        // 0x102110: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10210c) {
            ctx->pc = 0x102118u;
            goto label_102118;
        }
    }
    ctx->pc = 0x102114u;
label_102114:
    // 0x102114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102118:
    // 0x102118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10211c: 0x3e00008  jr          $ra
    ctx->pc = 0x10211Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10211Cu;
        // 0x102120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10211Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102124u;
    // 0x102124: 0x0  nop
    ctx->pc = 0x102124u;
    // NOP
    ctx->pc = 0x102128u;
}
