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

// Function: _sceFs_Poff_Intr
// Address: 0x3b3f08 - 0x3b3f50
void _sceFs_Poff_Intr_0x3b3f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceFs_Poff_Intr_0x3b3f08");
#endif

    switch (ctx->pc) {
        case 0x3b3f08u: goto label_3b3f08;
        case 0x3b3f0cu: goto label_3b3f0c;
        case 0x3b3f10u: goto label_3b3f10;
        case 0x3b3f14u: goto label_3b3f14;
        case 0x3b3f18u: goto label_3b3f18;
        case 0x3b3f1cu: goto label_3b3f1c;
        case 0x3b3f20u: goto label_3b3f20;
        case 0x3b3f24u: goto label_3b3f24;
        case 0x3b3f28u: goto label_3b3f28;
        case 0x3b3f2cu: goto label_3b3f2c;
        case 0x3b3f30u: goto label_3b3f30;
        case 0x3b3f34u: goto label_3b3f34;
        case 0x3b3f38u: goto label_3b3f38;
        case 0x3b3f3cu: goto label_3b3f3c;
        case 0x3b3f40u: goto label_3b3f40;
        case 0x3b3f44u: goto label_3b3f44;
        case 0x3b3f48u: goto label_3b3f48;
        case 0x3b3f4cu: goto label_3b3f4c;
        default: break;
    }

    ctx->pc = 0x3b3f08u;

label_3b3f08:
    // 0x3b3f08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b3f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3b3f0c:
    // 0x3b3f0c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3b3f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3b3f10:
    // 0x3b3f10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b3f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3b3f14:
    // 0x3b3f14: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_3b3f18:
    if (ctx->pc == 0x3B3F18u) {
        ctx->pc = 0x3B3F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F14u;
        // 0x3b3f18: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3F1Cu;
        goto label_3b3f1c;
    }
    ctx->pc = 0x3B3F14u;
    {
        const bool branch_taken_0x3b3f14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F14u;
        // 0x3b3f18: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3f14) {
            ctx->pc = 0x3B3F34u;
            goto label_3b3f34;
        }
    }
    ctx->pc = 0x3B3F1Cu;
label_3b3f1c:
    // 0x3b3f1c: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3b3f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
label_3b3f20:
    // 0x3b3f20: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x3b3f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3b3f24:
    // 0x3b3f24: 0x8c5c1780  lw          $gp, 0x1780($v0)
    ctx->pc = 0x3b3f24u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6016)));
label_3b3f28:
    // 0x3b3f28: 0x60f809  jalr        $v1
label_3b3f2c:
    if (ctx->pc == 0x3B3F2Cu) {
        ctx->pc = 0x3B3F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F28u;
        // 0x3b3f2c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3F30u;
        goto label_3b3f30;
    }
    ctx->pc = 0x3B3F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B3F30u);
        ctx->pc = 0x3B3F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F28u;
        // 0x3b3f2c: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3F28u, 0x3B3F30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3F30u;
label_3b3f30:
    // 0x3b3f30: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x3b3f30u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b3f34:
    // 0x3b3f34: 0xf  sync
    ctx->pc = 0x3b3f34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3b3f38:
    // 0x3b3f38: 0x42000038  ei
    ctx->pc = 0x3b3f38u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3b3f3c:
    // 0x3b3f3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b3f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b3f40:
    // 0x3b3f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b3f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b3f44:
    // 0x3b3f44: 0x3e00008  jr          $ra
label_3b3f48:
    if (ctx->pc == 0x3B3F48u) {
        ctx->pc = 0x3B3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F44u;
        // 0x3b3f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3F4Cu;
        goto label_3b3f4c;
    }
    ctx->pc = 0x3B3F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F44u;
        // 0x3b3f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3F4Cu;
label_3b3f4c:
    // 0x3b3f4c: 0x0  nop
    ctx->pc = 0x3b3f4cu;
    // NOP
    ctx->pc = 0x3b3f50u;
}
