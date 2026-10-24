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

// Function: func_00359F78
// Address: 0x359f78 - 0x35a000
void func_00359F78_0x359f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00359F78_0x359f78");
#endif

    switch (ctx->pc) {
        case 0x359fb0u: goto label_359fb0;
        case 0x359fbcu: goto label_359fbc;
        case 0x359fd4u: goto label_359fd4;
        default: break;
    }

    ctx->pc = 0x359f78u;

    // 0x359f78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359f7c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x359f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x359f80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x359f84: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x359f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x359f88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x359f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x359f8c: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x359f8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x359f90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x359f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x359f94: 0x2452e2c4  addiu       $s2, $v0, -0x1D3C
    ctx->pc = 0x359f94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959812));
    // 0x359f98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x359f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x359f9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x359f9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fa0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x359fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x359fa4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x359fa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fa8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x359fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3EE2C4u));
    // 0x359fac: 0x0  nop
    ctx->pc = 0x359facu;
    // NOP
label_359fb0:
    // 0x359fb0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x359fb0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x359fb4: 0xc0d37b2  jal         func_34DEC8
    ctx->pc = 0x359FB4u;
    SET_GPR_U32(ctx, 31, 0x359FBCu);
    ctx->pc = 0x359FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359FB4u;
    // 0x359fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DEC8u, 0x359FB4u, 0x359FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359FBCu;
label_359fbc:
    // 0x359fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fc0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x359fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359fc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x359FC4u;
    {
        const bool branch_taken_0x359fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359FC4u;
        // 0x359fc8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359fc4) {
            ctx->pc = 0x359FD4u;
            goto label_359fd4;
        }
    }
    ctx->pc = 0x359FCCu;
    // 0x359fcc: 0xc0d6800  jal         func_35A000
    ctx->pc = 0x359FCCu;
    SET_GPR_U32(ctx, 31, 0x359FD4u);
    ctx->pc = 0x35A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A000u, 0x359FCCu, 0x359FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359FD4u;
label_359fd4:
    // 0x359fd4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x359fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x359fd8: 0x623fff5  bgezl       $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x359FD8u;
    {
        const bool branch_taken_0x359fd8 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x359fd8) {
            ctx->pc = 0x359FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359FD8u;
            // 0x359fdc: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359fb0;
        }
    }
    ctx->pc = 0x359FE0u;
    // 0x359fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x359fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x359fe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x359fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359fec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x359fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359ff0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x359ff0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359ff4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x359ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x359ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x359FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359FF8u;
        // 0x359ffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A000u;
}
