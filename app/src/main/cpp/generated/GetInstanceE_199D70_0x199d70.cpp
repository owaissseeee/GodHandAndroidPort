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

// Function: GetInstanceE_199D70
// Address: 0x199d70 - 0x199dc0
void GetInstanceE_199D70_0x199d70(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetInstanceE_199D70_0x199d70");
#endif

    if (__builtin_expect(ctx->pc != 0x199d70u, 0)) {
        switch (ctx->pc) {
            case 0x199d94u: goto label_199d94;
            case 0x199dacu: goto label_199dac;
            default: break;
        }
    }


    // 0x199d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199d74: 0x3c030078  lui         $v1, 0x78
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x199d78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x199d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x199d7c: 0x8c625d18  lw          $v0, 0x5D18($v1)
    ctx->pc = 0x199d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785D18u));
    // 0x199d80: 0x24705d18  addiu       $s0, $v1, 0x5D18
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23832));
    // 0x199d84: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x199D84u;
    {
        const bool branch_taken_0x199d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D84u;
        // 0x199d88: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d84) {
            ctx->pc = 0x199DACu;
            goto label_199dac;
        }
    }
    // 0x199d8c: 0xc0723cc  jal         func_1C8F30
    ctx->pc = 0x199D8Cu;
    SET_GPR_U32(ctx, 31, 0x199D94u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_001C8F30_0x1c8f30, 0x1c8f30u, 0x199d94u)) {
        return;
    }
label_199d94:
    // 0x199d94: 0x3c050042  lui         $a1, 0x42
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x199d98: 0x3c060078  lui         $a2, 0x78
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x199d9c: 0x24a551a8  addiu       $a1, $a1, 0x51A8
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20904));
    // 0x199da0: 0x24c658b8  addiu       $a2, $a2, 0x58B8
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22712));
    // 0x199da4: 0xc0c7baa  jal         func_31EEA8
    SET_GPR_U32(ctx, 31, 0x199DACu);
    ctx->pc = 0x199DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199DA4u;
    // 0x199da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetField_0_4_8_31EEA8_0x31eea8, 0x31eea8u, 0x199dacu)) {
        return;
    }
label_199dac:
    // 0x199dac: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199db0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199db4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x199db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199db8: 0x3e00008  jr          $ra
    ctx->pc = 0x199DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DB8u;
        // 0x199dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199DC0u;
}