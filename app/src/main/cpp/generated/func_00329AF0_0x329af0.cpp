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

// Function: func_00329AF0
// Address: 0x329af0 - 0x329b60
void func_00329AF0_0x329af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00329AF0_0x329af0");
#endif

    switch (ctx->pc) {
        case 0x329b18u: goto label_329b18;
        case 0x329b2cu: goto label_329b2c;
        default: break;
    }

    ctx->pc = 0x329af0u;

    // 0x329af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x329af4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x329af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x329af8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x329af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x329afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x329afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x329b00: 0x24507420  addiu       $s0, $v0, 0x7420
    ctx->pc = 0x329b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29728));
    // 0x329b04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x329b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x329b08: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x329b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x329b0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x329b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x329b10: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x329b10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329b14: 0x0  nop
    ctx->pc = 0x329b14u;
    // NOP
label_329b18:
    // 0x329b18: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x329b18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x329b1c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x329B1Cu;
    {
        const bool branch_taken_0x329b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x329b1c) {
            ctx->pc = 0x329B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329B1Cu;
            // 0x329b20: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329B30u;
            goto label_329b30;
        }
    }
    ctx->pc = 0x329B24u;
    // 0x329b24: 0xc0ca63c  jal         func_3298F0
    ctx->pc = 0x329B24u;
    SET_GPR_U32(ctx, 31, 0x329B2Cu);
    ctx->pc = 0x329B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329B24u;
    // 0x329b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3298F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298F0u, 0x329B24u, 0x329B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329B2Cu;
label_329b2c:
    // 0x329b2c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x329b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_329b30:
    // 0x329b30: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x329B30u;
    {
        const bool branch_taken_0x329b30 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x329B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B30u;
        // 0x329b34: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329b30) {
            ctx->pc = 0x329B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329b18;
        }
    }
    ctx->pc = 0x329B38u;
    // 0x329b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x329b3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329b3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329b40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x329b40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329b44: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x329b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x329b48: 0x3e00008  jr          $ra
    ctx->pc = 0x329B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329B48u;
        // 0x329b4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329B50u;
    // 0x329b50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x329b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x329b54: 0x0  nop
    ctx->pc = 0x329b54u;
    // NOP
    // 0x329b58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x329b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x329b5c: 0x0  nop
    ctx->pc = 0x329b5cu;
    // NOP
    ctx->pc = 0x329b60u;
}
