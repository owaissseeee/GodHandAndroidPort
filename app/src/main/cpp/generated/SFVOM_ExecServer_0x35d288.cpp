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

// Function: SFVOM_ExecServer
// Address: 0x35d288 - 0x35d2e0
void SFVOM_ExecServer_0x35d288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFVOM_ExecServer_0x35d288");
#endif

    switch (ctx->pc) {
        case 0x35d2a4u: goto label_35d2a4;
        case 0x35d2b4u: goto label_35d2b4;
        case 0x35d2bcu: goto label_35d2bc;
        case 0x35d2c8u: goto label_35d2c8;
        default: break;
    }

    ctx->pc = 0x35d288u;

    // 0x35d288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d28c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35d28cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35d290: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d29c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x35D29Cu;
    SET_GPR_U32(ctx, 31, 0x35D2A4u);
    ctx->pc = 0x35D2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D29Cu;
    // 0x35d2a0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x35D29Cu, 0x35D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2A4u;
label_35d2a4:
    // 0x35d2a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35D2A4u;
    {
        const bool branch_taken_0x35d2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D2A4u;
        // 0x35d2a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d2a4) {
            ctx->pc = 0x35D2CCu;
            goto label_35d2cc;
        }
    }
    ctx->pc = 0x35D2ACu;
    // 0x35d2ac: 0xc0d74b8  jal         func_35D2E0
    ctx->pc = 0x35D2ACu;
    SET_GPR_U32(ctx, 31, 0x35D2B4u);
    ctx->pc = 0x35D2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2E0u, 0x35D2ACu, 0x35D2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2B4u;
label_35d2b4:
    // 0x35d2b4: 0xc0d750c  jal         func_35D430
    ctx->pc = 0x35D2B4u;
    SET_GPR_U32(ctx, 31, 0x35D2BCu);
    ctx->pc = 0x35D2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2B4u;
    // 0x35d2b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D430u, 0x35D2B4u, 0x35D2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2BCu;
label_35d2bc:
    // 0x35d2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d2c0: 0xc0d74ea  jal         func_35D3A8
    ctx->pc = 0x35D2C0u;
    SET_GPR_U32(ctx, 31, 0x35D2C8u);
    ctx->pc = 0x35D2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D2C0u;
    // 0x35d2c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D3A8u, 0x35D2C0u, 0x35D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D2C8u;
label_35d2c8:
    // 0x35d2c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35d2c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35d2cc:
    // 0x35d2cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d2ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d2d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d2d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d2d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x35D2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D2D8u;
        // 0x35d2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D2E0u;
}
