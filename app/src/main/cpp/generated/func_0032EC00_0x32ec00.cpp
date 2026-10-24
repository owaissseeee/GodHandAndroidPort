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

// Function: func_0032EC00
// Address: 0x32ec00 - 0x32ec78
void func_0032EC00_0x32ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032EC00_0x32ec00");
#endif

    switch (ctx->pc) {
        case 0x32ec28u: goto label_32ec28;
        case 0x32ec3cu: goto label_32ec3c;
        default: break;
    }

    ctx->pc = 0x32ec00u;

    // 0x32ec00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32ec04: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x32ec08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32ec08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32ec0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32ec10: 0x24501488  addiu       $s0, $v0, 0x1488
    ctx->pc = 0x32ec10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5256));
    // 0x32ec14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32ec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32ec18: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x32ec18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32ec1c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32ec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32ec20: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x32ec20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ec24: 0x0  nop
    ctx->pc = 0x32ec24u;
    // NOP
label_32ec28:
    // 0x32ec28: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x32ec28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32ec2c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x32EC2Cu;
    {
        const bool branch_taken_0x32ec2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x32ec2c) {
            ctx->pc = 0x32EC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32EC2Cu;
            // 0x32ec30: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32EC40u;
            goto label_32ec40;
        }
    }
    ctx->pc = 0x32EC34u;
    // 0x32ec34: 0xc0cb9c8  jal         func_32E720
    ctx->pc = 0x32EC34u;
    SET_GPR_U32(ctx, 31, 0x32EC3Cu);
    ctx->pc = 0x32EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EC34u;
    // 0x32ec38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E720u, 0x32EC34u, 0x32EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EC3Cu;
label_32ec3c:
    // 0x32ec3c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x32ec3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_32ec40:
    // 0x32ec40: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x32EC40u;
    {
        const bool branch_taken_0x32ec40 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x32EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC40u;
        // 0x32ec44: 0x26100278  addiu       $s0, $s0, 0x278 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ec40) {
            ctx->pc = 0x32EC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ec28;
        }
    }
    ctx->pc = 0x32EC48u;
    // 0x32ec48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ec48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ec4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32ec4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32ec50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32ec50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ec54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32ec54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32ec58: 0x3e00008  jr          $ra
    ctx->pc = 0x32EC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EC58u;
        // 0x32ec5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EC60u;
    // 0x32ec60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32ec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32ec64: 0x0  nop
    ctx->pc = 0x32ec64u;
    // NOP
    // 0x32ec68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32ec68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32ec6c: 0x0  nop
    ctx->pc = 0x32ec6cu;
    // NOP
    // 0x32ec70: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32ec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32ec74: 0x0  nop
    ctx->pc = 0x32ec74u;
    // NOP
    ctx->pc = 0x32ec78u;
}
