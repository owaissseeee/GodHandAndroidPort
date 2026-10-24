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

// Function: InitObjectSetVtable_4EB70_2FFD08
// Address: 0x2ffd08 - 0x2ffd48
void InitObjectSetVtable_4EB70_2FFD08_0x2ffd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjectSetVtable_4EB70_2FFD08_0x2ffd08");
#endif

    switch (ctx->pc) {
        case 0x2ffd24u: goto label_2ffd24;
        default: break;
    }

    ctx->pc = 0x2ffd08u;

    // 0x2ffd08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ffd0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ffd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ffd10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ffd10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd14: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFD14u;
    {
        const bool branch_taken_0x2ffd14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD14u;
        // 0x2ffd18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffd14) {
            ctx->pc = 0x2FFD30u;
            goto label_2ffd30;
        }
    }
    ctx->pc = 0x2FFD1Cu;
    // 0x2ffd1c: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2FFD1Cu;
    SET_GPR_U32(ctx, 31, 0x2FFD24u);
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2FFD1Cu, 0x2FFD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFD24u;
label_2ffd24:
    // 0x2ffd24: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ffd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2ffd28: 0x2463eb70  addiu       $v1, $v1, -0x1490
    ctx->pc = 0x2ffd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962032));
    // 0x2ffd2c: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2ffd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
label_2ffd30:
    // 0x2ffd30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ffd30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffd38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ffd38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFD3Cu;
        // 0x2ffd40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFD44u;
    // 0x2ffd44: 0x0  nop
    ctx->pc = 0x2ffd44u;
    // NOP
    ctx->pc = 0x2ffd48u;
}
