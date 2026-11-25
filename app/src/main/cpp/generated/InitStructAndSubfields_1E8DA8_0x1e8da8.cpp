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

// Function: InitStructAndSubfields_1E8DA8
// Address: 0x1e8da8 - 0x1e8df0
void InitStructAndSubfields_1E8DA8_0x1e8da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitStructAndSubfields_1E8DA8_0x1e8da8");
#endif

    if (__builtin_expect(ctx->pc != 0x1e8da8u, 0)) {
        switch (ctx->pc) {
            case 0x1e8dc4u: goto label_1e8dc4;
            case 0x1e8dccu: goto label_1e8dcc;
            case 0x1e8dd4u: goto label_1e8dd4;
            default: break;
        }
    }


    // 0x1e8da8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e8dac: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8db0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e8db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e8db4: 0x24060054  addiu       $a2, $zero, 0x54
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1e8db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e8db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8dbc: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x1E8DC4u);
    ctx->pc = 0x1E8DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8DBCu;
    // 0x1e8dc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x1e8dc4u)) {
        return;
    }
    ctx->pc = 0x1E8DC4u;
label_1e8dc4:
    // 0x1e8dc4: 0xc07a3a2  jal         func_1E8E88
    SET_GPR_U32(ctx, 31, 0x1E8DCCu);
    ctx->pc = 0x1E8DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8DC4u;
    // 0x1e8dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001E8E88_0x1e8e88, 0x1e8e88u, 0x1e8dccu)) {
        return;
    }
    ctx->pc = 0x1E8DCCu;
label_1e8dcc:
    // 0x1e8dcc: 0xc07a3ae  jal         func_1E8EB8
    SET_GPR_U32(ctx, 31, 0x1E8DD4u);
    ctx->pc = 0x1E8DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8DCCu;
    // 0x1e8dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001E8EB8_0x1e8eb8, 0x1e8eb8u, 0x1e8dd4u)) {
        return;
    }
    ctx->pc = 0x1E8DD4u;
label_1e8dd4:
    // 0x1e8dd4: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8ddc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e8ddcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8de0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8DE0u;
        // 0x1e8de4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x1e8de8: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e8dec: 0x0  nop
    // NOP
    ctx->pc = 0x1e8df0u;
}