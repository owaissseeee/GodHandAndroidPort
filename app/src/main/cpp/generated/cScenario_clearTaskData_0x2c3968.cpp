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

// Function: cScenario_clearTaskData
// Address: 0x2c3968 - 0x2c39b0
void cScenario_clearTaskData_0x2c3968(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_clearTaskData_0x2c3968");
#endif

    if (__builtin_expect(ctx->pc != 0x2c3968u, 0)) {
        switch (ctx->pc) {
            case 0x2c3990u: goto label_2c3990;
            default: break;
        }
    }


    // 0x2c3968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c396c: 0x80102d  daddu       $v0, $a0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3970: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C3970u;
    {
        const bool branch_taken_0x2c3970 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2C3974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3970u;
        // 0x2c3974: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3970) {
            ctx->pc = 0x2C3990u;
            goto label_2c3990;
        }
    }
    // 0x2c3978: 0x520c0  sll         $a0, $a1, 3
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2c397c: 0x24060008  addiu       $a2, $zero, 0x8
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c3980: 0x24840054  addiu       $a0, $a0, 0x54
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x2c3984: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3988: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x2C3990u);
    ctx->pc = 0x2C398Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3988u;
    // 0x2c398c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x2c3990u)) {
        return;
    }
label_2c3990:
    // 0x2c3990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c3990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c3994: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3994u;
        // 0x2c3998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2c399c: 0x0  nop
    // NOP
    // 0x2c39a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c39a4: 0x0  nop
    // NOP
    // 0x2c39a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c39ac: 0x0  nop
    // NOP
    ctx->pc = 0x2c39b0u;
}