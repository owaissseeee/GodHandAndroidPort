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

// Function: func_0031FF50
// Address: 0x31ff50 - 0x31ffa0
void func_0031FF50_0x31ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031FF50_0x31ff50");
#endif

    switch (ctx->pc) {
        case 0x31ff74u: goto label_31ff74;
        case 0x31ff8cu: goto label_31ff8c;
        default: break;
    }

    ctx->pc = 0x31ff50u;

    // 0x31ff50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ff54: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x31ff54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x31ff58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31ff5c: 0x8c626688  lw          $v0, 0x6688($v1)
    ctx->pc = 0x31ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786688u));
    // 0x31ff60: 0x24706688  addiu       $s0, $v1, 0x6688
    ctx->pc = 0x31ff60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 26248));
    // 0x31ff64: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31FF64u;
    {
        const bool branch_taken_0x31ff64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF64u;
        // 0x31ff68: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff64) {
            ctx->pc = 0x31FF8Cu;
            goto label_31ff8c;
        }
    }
    ctx->pc = 0x31FF6Cu;
    // 0x31ff6c: 0xc0c7d28  jal         func_31F4A0
    ctx->pc = 0x31FF6Cu;
    SET_GPR_U32(ctx, 31, 0x31FF74u);
    ctx->pc = 0x31F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31F4A0u, 0x31FF6Cu, 0x31FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FF74u;
label_31ff74:
    // 0x31ff74: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x31ff74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x31ff78: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x31ff78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x31ff7c: 0x24a511c8  addiu       $a1, $a1, 0x11C8
    ctx->pc = 0x31ff7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4552));
    // 0x31ff80: 0x24c60da0  addiu       $a2, $a2, 0xDA0
    ctx->pc = 0x31ff80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3488));
    // 0x31ff84: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x31FF84u;
    SET_GPR_U32(ctx, 31, 0x31FF8Cu);
    ctx->pc = 0x31FF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FF84u;
    // 0x31ff88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x31FF84u, 0x31FF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FF8Cu;
label_31ff8c:
    // 0x31ff8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31ff8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ff90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31ff90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ff94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31ff94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ff98: 0x3e00008  jr          $ra
    ctx->pc = 0x31FF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF98u;
        // 0x31ff9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FFA0u;
}
