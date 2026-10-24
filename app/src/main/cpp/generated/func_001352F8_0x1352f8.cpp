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

// Function: func_001352F8
// Address: 0x1352f8 - 0x135328
void func_001352F8_0x1352f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001352F8_0x1352f8");
#endif

    switch (ctx->pc) {
        case 0x13531cu: goto label_13531c;
        default: break;
    }

    ctx->pc = 0x1352f8u;

    // 0x1352f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1352f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1352fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1352fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x135300: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x135300u;
    {
        const bool branch_taken_0x135300 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x135304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135300u;
        // 0x135304: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135300) {
            ctx->pc = 0x13531Cu;
            goto label_13531c;
        }
    }
    ctx->pc = 0x135308u;
    // 0x135308: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x135308u;
    {
        const bool branch_taken_0x135308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135308u;
        // 0x13530c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135308) {
            ctx->pc = 0x135320u;
            goto label_135320;
        }
    }
    ctx->pc = 0x135310u;
    // 0x135310: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x135310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x135314: 0xc04d194  jal         func_134650
    ctx->pc = 0x135314u;
    SET_GPR_U32(ctx, 31, 0x13531Cu);
    ctx->pc = 0x135318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135314u;
    // 0x135318: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134650u, 0x135314u, 0x13531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13531Cu;
label_13531c:
    // 0x13531c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13531cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135320:
    // 0x135320: 0x3e00008  jr          $ra
    ctx->pc = 0x135320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135320u;
        // 0x135324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135328u;
}
