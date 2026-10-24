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

// Function: func_00359AF0
// Address: 0x359af0 - 0x359b60
void func_00359AF0_0x359af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359AF0_0x359af0");
#endif

    switch (ctx->pc) {
        case 0x359b0cu: goto label_359b0c;
        case 0x359b48u: goto label_359b48;
        default: break;
    }

    ctx->pc = 0x359af0u;

    // 0x359af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x359af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359af8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x359af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359afc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359b00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x359b04: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x359B04u;
    SET_GPR_U32(ctx, 31, 0x359B0Cu);
    ctx->pc = 0x359B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B04u;
    // 0x359b08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x359B04u, 0x359B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B0Cu;
label_359b0c:
    // 0x359b0c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x359b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x359b10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x359B10u;
    {
        const bool branch_taken_0x359b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359B10u;
        // 0x359b14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359b10) {
            ctx->pc = 0x359B30u;
            goto label_359b30;
        }
    }
    ctx->pc = 0x359B18u;
    // 0x359b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359b1c: 0x34a50159  ori         $a1, $a1, 0x159
    ctx->pc = 0x359b1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)345);
    // 0x359b20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359b24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359b28: 0x80d375c  j           func_34DD70
    ctx->pc = 0x359B28u;
    ctx->pc = 0x359B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B28u;
    // 0x359b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x359B28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x359B30u;
label_359b30:
    // 0x359b30: 0x8e0336b0  lw          $v1, 0x36B0($s0)
    ctx->pc = 0x359b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14000)));
    // 0x359b34: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x359B34u;
    {
        const bool branch_taken_0x359b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x359b34) {
            ctx->pc = 0x359B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359B34u;
            // 0x359b38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359B50u;
            goto label_359b50;
        }
    }
    ctx->pc = 0x359B3Cu;
    // 0x359b3c: 0xac710dc4  sw          $s1, 0xDC4($v1)
    ctx->pc = 0x359b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3524), GPR_U32(ctx, 17));
    // 0x359b40: 0xc0d677c  jal         func_359DF0
    ctx->pc = 0x359B40u;
    SET_GPR_U32(ctx, 31, 0x359B48u);
    ctx->pc = 0x359B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B40u;
    // 0x359b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359DF0u, 0x359B40u, 0x359B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B48u;
label_359b48:
    // 0x359b48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359b4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_359b50:
    // 0x359b50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359b54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359b58: 0x3e00008  jr          $ra
    ctx->pc = 0x359B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359B58u;
        // 0x359b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359B60u;
}
