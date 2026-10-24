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

// Function: func_00368DF0
// Address: 0x368df0 - 0x368e68
void func_00368DF0_0x368df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00368DF0_0x368df0");
#endif

    switch (ctx->pc) {
        case 0x368e28u: goto label_368e28;
        case 0x368e3cu: goto label_368e3c;
        case 0x368e50u: goto label_368e50;
        default: break;
    }

    ctx->pc = 0x368df0u;

    // 0x368df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x368df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x368df4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x368df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x368df8: 0x8c431a98  lw          $v1, 0x1A98($v0)
    ctx->pc = 0x368df8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F1A98u));
    // 0x368dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368e00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x368e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x368e04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x368e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x368e08: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x368e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x368e0c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x368e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x368e10: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x368E10u;
    {
        const bool branch_taken_0x368e10 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x368E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E10u;
        // 0x368e14: 0x24640010  addiu       $a0, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e10) {
            ctx->pc = 0x368E48u;
            goto label_368e48;
        }
    }
    ctx->pc = 0x368E18u;
    // 0x368e18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x368e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368e1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x368e1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368e20: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x368e20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368e24: 0x0  nop
    ctx->pc = 0x368e24u;
    // NOP
label_368e28:
    // 0x368e28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x368e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x368e2c: 0x50520004  beql        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x368E2Cu;
    {
        const bool branch_taken_0x368e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x368e2c) {
            ctx->pc = 0x368E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368E2Cu;
            // 0x368e30: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368E40u;
            goto label_368e40;
        }
    }
    ctx->pc = 0x368E34u;
    // 0x368e34: 0xc0da462  jal         func_369188
    ctx->pc = 0x368E34u;
    SET_GPR_U32(ctx, 31, 0x368E3Cu);
    ctx->pc = 0x368E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368E34u;
    // 0x368e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369188u, 0x368E34u, 0x368E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E3Cu;
label_368e3c:
    // 0x368e3c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x368e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_368e40:
    // 0x368e40: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x368E40u;
    {
        const bool branch_taken_0x368e40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x368E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368E40u;
        // 0x368e44: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368e40) {
            ctx->pc = 0x368E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368e28;
        }
    }
    ctx->pc = 0x368E48u;
label_368e48:
    // 0x368e48: 0xc0d9b48  jal         func_366D20
    ctx->pc = 0x368E48u;
    SET_GPR_U32(ctx, 31, 0x368E50u);
    ctx->pc = 0x366D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366D20u, 0x368E48u, 0x368E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368E50u;
label_368e50:
    // 0x368e50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368e54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x368e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x368e58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x368e58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368e5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x368e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368e60: 0x80da2aa  j           func_368AA8
    ctx->pc = 0x368E60u;
    ctx->pc = 0x368E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368E60u;
    // 0x368e64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368AA8u, 0x368E60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x368E68u;
}
