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

// Function: func_00359C58
// Address: 0x359c58 - 0x359cb8
void func_00359C58_0x359c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359C58_0x359c58");
#endif

    switch (ctx->pc) {
        case 0x359c74u: goto label_359c74;
        default: break;
    }

    ctx->pc = 0x359c58u;

    // 0x359c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359c60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359c64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359c68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x359c6c: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x359C6Cu;
    SET_GPR_U32(ctx, 31, 0x359C74u);
    ctx->pc = 0x359C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359C6Cu;
    // 0x359c70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x359C6Cu, 0x359C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359C74u;
label_359c74:
    // 0x359c74: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x359c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x359c78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x359C78u;
    {
        const bool branch_taken_0x359c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359C78u;
        // 0x359c7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359c78) {
            ctx->pc = 0x359C98u;
            goto label_359c98;
        }
    }
    ctx->pc = 0x359C80u;
    // 0x359c80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359c84: 0x34a5015c  ori         $a1, $a1, 0x15C
    ctx->pc = 0x359c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)348);
    // 0x359c88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359c8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359c90: 0x80d375c  j           func_34DD70
    ctx->pc = 0x359C90u;
    ctx->pc = 0x359C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359C90u;
    // 0x359c94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x359C90u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359C98u;
label_359c98:
    // 0x359c98: 0x8e0436b0  lw          $a0, 0x36B0($s0)
    ctx->pc = 0x359c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x359c9c: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x359C9Cu;
    {
        const bool branch_taken_0x359c9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x359c9c) {
            ctx->pc = 0x359CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359C9Cu;
            // 0x359ca0: 0xac910dd4  sw          $s1, 0xDD4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 3540), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359CA4u;
            goto label_359ca4;
        }
    }
    ctx->pc = 0x359CA4u;
label_359ca4:
    // 0x359ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359ca8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359cac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x359CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359CB0u;
        // 0x359cb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359CB8u;
}
