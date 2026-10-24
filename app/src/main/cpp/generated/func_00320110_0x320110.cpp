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

// Function: func_00320110
// Address: 0x320110 - 0x320160
void func_00320110_0x320110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00320110_0x320110");
#endif

    switch (ctx->pc) {
        case 0x320134u: goto label_320134;
        case 0x32014cu: goto label_32014c;
        default: break;
    }

    ctx->pc = 0x320110u;

    // 0x320110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x320110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x320114: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x320114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x320118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x320118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32011c: 0x8c6266c8  lw          $v0, 0x66C8($v1)
    ctx->pc = 0x32011cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7866C8u));
    // 0x320120: 0x247066c8  addiu       $s0, $v1, 0x66C8
    ctx->pc = 0x320120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26312));
    // 0x320124: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x320124u;
    {
        const bool branch_taken_0x320124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320124u;
        // 0x320128: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320124) {
            ctx->pc = 0x32014Cu;
            goto label_32014c;
        }
    }
    ctx->pc = 0x32012Cu;
    // 0x32012c: 0xc0c7d28  jal         func_31F4A0
    ctx->pc = 0x32012Cu;
    SET_GPR_U32(ctx, 31, 0x320134u);
    ctx->pc = 0x31F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F4A0u, 0x32012Cu, 0x320134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320134u;
label_320134:
    // 0x320134: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x320134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x320138: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x320138u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x32013c: 0x24a51228  addiu       $a1, $a1, 0x1228
    ctx->pc = 0x32013cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4648));
    // 0x320140: 0x24c60da0  addiu       $a2, $a2, 0xDA0
    ctx->pc = 0x320140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3488));
    // 0x320144: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x320144u;
    SET_GPR_U32(ctx, 31, 0x32014Cu);
    ctx->pc = 0x320148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320144u;
    // 0x320148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x320144u, 0x32014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32014Cu;
label_32014c:
    // 0x32014c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32014cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x320150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x320154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320158: 0x3e00008  jr          $ra
    ctx->pc = 0x320158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320158u;
        // 0x32015c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320160u;
}
