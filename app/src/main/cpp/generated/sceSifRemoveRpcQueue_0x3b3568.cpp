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

// Function: sceSifRemoveRpcQueue
// Address: 0x3b3568 - 0x3b35f8
void sceSifRemoveRpcQueue_0x3b3568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifRemoveRpcQueue_0x3b3568");
#endif

    switch (ctx->pc) {
        case 0x3b3580u: goto label_3b3580;
        case 0x3b35b8u: goto label_3b35b8;
        case 0x3b35e0u: goto label_3b35e0;
        default: break;
    }

    ctx->pc = 0x3b3568u;

    // 0x3b3568: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b3568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b356c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b356cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b3570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b3570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3574: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b3574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b3578: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B3578u;
    SET_GPR_U32(ctx, 31, 0x3B3580u);
    ctx->pc = 0x3B357Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3578u;
    // 0x3b357c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B3578u, 0x3B3580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3580u;
label_3b3580:
    // 0x3b3580: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3b3580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3b3584: 0x2463ff40  addiu       $v1, $v1, -0xC0
    ctx->pc = 0x3b3584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967104));
    // 0x3b3588: 0x8c700028  lw          $s0, 0x28($v1)
    ctx->pc = 0x3b3588u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x77FF68u));
    // 0x3b358c: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B358Cu;
    {
        const bool branch_taken_0x3b358c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x3b358c) {
            ctx->pc = 0x3B35A0u;
            goto label_3b35a0;
        }
    }
    ctx->pc = 0x3B3594u;
    // 0x3b3594: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3b3594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3b3598: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B3598u;
    {
        const bool branch_taken_0x3b3598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3598u;
        // 0x3b359c: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3598) {
            ctx->pc = 0x3B35D8u;
            goto label_3b35d8;
        }
    }
    ctx->pc = 0x3B35A0u;
label_3b35a0:
    // 0x3b35a0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B35A0u;
    {
        const bool branch_taken_0x3b35a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b35a0) {
            ctx->pc = 0x3B35D8u;
            goto label_3b35d8;
        }
    }
    ctx->pc = 0x3B35A8u;
    // 0x3b35a8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3b35a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3b35ac: 0x50710009  beql        $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B35ACu;
    {
        const bool branch_taken_0x3b35ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x3b35ac) {
            ctx->pc = 0x3B35B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B35ACu;
            // 0x3b35b0: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B35D4u;
            goto label_3b35d4;
        }
    }
    ctx->pc = 0x3B35B4u;
    // 0x3b35b4: 0x0  nop
    ctx->pc = 0x3b35b4u;
    // NOP
label_3b35b8:
    // 0x3b35b8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3b35b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b35bc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B35BCu;
    {
        const bool branch_taken_0x3b35bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b35bc) {
            ctx->pc = 0x3B35D8u;
            goto label_3b35d8;
        }
    }
    ctx->pc = 0x3B35C4u;
    // 0x3b35c4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3b35c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3b35c8: 0x1451fffb  bne         $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3B35C8u;
    {
        const bool branch_taken_0x3b35c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35C8u;
        // 0x3b35cc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b35c8) {
            ctx->pc = 0x3B35B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b35b8;
        }
    }
    ctx->pc = 0x3B35D0u;
    // 0x3b35d0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x3b35d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b35d4:
    // 0x3b35d4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3b35d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_3b35d8:
    // 0x3b35d8: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B35D8u;
    SET_GPR_U32(ctx, 31, 0x3B35E0u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B35D8u, 0x3B35E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B35E0u;
label_3b35e0:
    // 0x3b35e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b35e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b35e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b35e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b35e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b35e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b35ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b35ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b35f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3B35F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B35F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B35F0u;
        // 0x3b35f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B35F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B35F8u;
}
