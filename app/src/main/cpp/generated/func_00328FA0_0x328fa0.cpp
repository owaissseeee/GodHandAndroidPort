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

// Function: func_00328FA0
// Address: 0x328fa0 - 0x329028
void func_00328FA0_0x328fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00328FA0_0x328fa0");
#endif

    switch (ctx->pc) {
        case 0x328fe8u: goto label_328fe8;
        case 0x328ff0u: goto label_328ff0;
        case 0x329000u: goto label_329000;
        default: break;
    }

    ctx->pc = 0x328fa0u;

    // 0x328fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x328fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x328fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x328fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x328fa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328fac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x328facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x328fb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x328fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x328fb4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x328fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x328fb8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x328fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x328fbc: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x328FBCu;
    {
        const bool branch_taken_0x328fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x328fbc) {
            ctx->pc = 0x328FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328FBCu;
            // 0x328fc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329014u;
            goto label_329014;
        }
    }
    ctx->pc = 0x328FC4u;
    // 0x328fc4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x328fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x328fc8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x328FC8u;
    {
        const bool branch_taken_0x328fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328fc8) {
            ctx->pc = 0x328FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328FC8u;
            // 0x328fcc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329014u;
            goto label_329014;
        }
    }
    ctx->pc = 0x328FD0u;
    // 0x328fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x328fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328fd4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x328fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x328fd8: 0xa2020045  sb          $v0, 0x45($s0)
    ctx->pc = 0x328fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 2));
    // 0x328fdc: 0x247104c4  addiu       $s1, $v1, 0x4C4
    ctx->pc = 0x328fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1220));
    // 0x328fe0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x328fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328fe4: 0x0  nop
    ctx->pc = 0x328fe4u;
    // NOP
label_328fe8:
    // 0x328fe8: 0xc0ca416  jal         func_329058
    ctx->pc = 0x328FE8u;
    SET_GPR_U32(ctx, 31, 0x328FF0u);
    ctx->pc = 0x328FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328FE8u;
    // 0x328fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329058u, 0x328FE8u, 0x328FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328FF0u;
label_328ff0:
    // 0x328ff0: 0x14520004  bne         $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x328FF0u;
    {
        const bool branch_taken_0x328ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x328FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328FF0u;
        // 0x328ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328ff0) {
            ctx->pc = 0x329004u;
            goto label_329004;
        }
    }
    ctx->pc = 0x328FF8u;
    // 0x328ff8: 0xc0ca238  jal         func_3288E0
    ctx->pc = 0x328FF8u;
    SET_GPR_U32(ctx, 31, 0x329000u);
    ctx->pc = 0x3288E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3288E0u, 0x328FF8u, 0x329000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329000u;
label_329000:
    // 0x329000: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x329000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_329004:
    // 0x329004: 0x82020045  lb          $v0, 0x45($s0)
    ctx->pc = 0x329004u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x329008: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x329008u;
    {
        const bool branch_taken_0x329008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x329008) {
            ctx->pc = 0x328FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328fe8;
        }
    }
    ctx->pc = 0x329010u;
    // 0x329010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x329010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_329014:
    // 0x329014: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x329014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x329018: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x329018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32901c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32901cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x329020: 0x3e00008  jr          $ra
    ctx->pc = 0x329020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329020u;
        // 0x329024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329028u;
}
