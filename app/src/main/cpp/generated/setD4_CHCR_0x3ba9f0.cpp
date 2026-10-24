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

// Function: setD4_CHCR
// Address: 0x3ba9f0 - 0x3baa68
void setD4_CHCR_0x3ba9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setD4_CHCR_0x3ba9f0");
#endif

    switch (ctx->pc) {
        case 0x3baa04u: goto label_3baa04;
        default: break;
    }

    ctx->pc = 0x3ba9f0u;

    // 0x3ba9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ba9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ba9f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ba9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ba9f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ba9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ba9fc: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3BA9FCu;
    SET_GPR_U32(ctx, 31, 0x3BAA04u);
    ctx->pc = 0x3BAA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA9FCu;
    // 0x3baa00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3BA9FCu, 0x3BAA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BAA04u;
label_3baa04:
    // 0x3baa04: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3baa04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3baa08: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x3baa08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x3baa0c: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x3baa0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x3baa10: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x3baa10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x3baa14: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3baa14u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x3baa18: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x3baa18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x3baa1c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3baa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3baa20: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x3baa20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x3baa24: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x3baa24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x3baa28: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x3baa28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x3baa2c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3baa2cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3));
    // 0x3baa30: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3baa30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3baa34: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x3baa34u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 16));
    // 0x3baa38: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3baa38u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u));
    // 0x3baa3c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3baa3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3baa40: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3baa40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x3baa44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BAA44u;
    {
        const bool branch_taken_0x3baa44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAA44u;
        // 0x3baa48: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baa44) {
            ctx->pc = 0x3BAA58u;
            goto label_3baa58;
        }
    }
    ctx->pc = 0x3BAA4Cu;
    // 0x3baa4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3baa4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3baa50: 0x80ed8fc  j           func_3B63F0
    ctx->pc = 0x3BAA50u;
    ctx->pc = 0x3BAA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAA50u;
    // 0x3baa54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3BAA50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BAA58u;
label_3baa58:
    // 0x3baa58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3baa58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3baa5c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BAA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAA5Cu;
        // 0x3baa60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BAA64u;
    // 0x3baa64: 0x0  nop
    ctx->pc = 0x3baa64u;
    // NOP
    ctx->pc = 0x3baa68u;
}
