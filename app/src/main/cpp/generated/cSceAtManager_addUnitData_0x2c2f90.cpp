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

// Function: cSceAtManager_addUnitData
// Address: 0x2c2f90 - 0x2c2fd8
void cSceAtManager_addUnitData_0x2c2f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtManager_addUnitData_0x2c2f90");
#endif

    switch (ctx->pc) {
        case 0x2c2fccu: goto label_2c2fcc;
        default: break;
    }

    ctx->pc = 0x2c2f90u;

    // 0x2c2f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c2f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c2f94: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2c2f94u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2c2f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c2f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c2f9c: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x2c2f9cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x2c2fa0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2c2fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2fa4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C2FA4u;
    {
        const bool branch_taken_0x2c2fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2FA4u;
        // 0x2c2fa8: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2fa4) {
            ctx->pc = 0x2C2FCCu;
            goto label_2c2fcc;
        }
    }
    ctx->pc = 0x2C2FACu;
    // 0x2c2fac: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x2c2facu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c2fb0: 0xac470048  sw          $a3, 0x48($v0)
    ctx->pc = 0x2c2fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 7));
    // 0x2c2fb4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2c2fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2c2fb8: 0xa448004c  sh          $t0, 0x4C($v0)
    ctx->pc = 0x2c2fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 76), (uint16_t)GPR_U32(ctx, 8));
    // 0x2c2fbc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2c2fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c2fc0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c2fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2fc4: 0xc0b0c10  jal         func_2C3040
    ctx->pc = 0x2C2FC4u;
    SET_GPR_U32(ctx, 31, 0x2C2FCCu);
    ctx->pc = 0x2C2FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2FC4u;
    // 0x2c2fc8: 0xa0430039  sb          $v1, 0x39($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 57), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3040u, 0x2C2FC4u, 0x2C2FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2FCCu;
label_2c2fcc:
    // 0x2c2fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c2fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2FD0u;
        // 0x2c2fd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2FD8u;
}
