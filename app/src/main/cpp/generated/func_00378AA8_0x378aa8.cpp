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

// Function: func_00378AA8
// Address: 0x378aa8 - 0x378ae0
void func_00378AA8_0x378aa8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00378AA8_0x378aa8");
#endif

    if (__builtin_expect(ctx->pc != 0x378aa8u, 0)) {
        switch (ctx->pc) {
            case 0x378abcu: goto label_378abc;
            case 0x378ac4u: goto label_378ac4;
            case 0x378accu: goto label_378acc;
            default: break;
        }
    }


    // 0x378aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x378aac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x378aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x378ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x378ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x378ab4: 0xc0de2b8  jal         func_378AE0
    SET_GPR_U32(ctx, 31, 0x378ABCu);
    ctx->pc = 0x378AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378AB4u;
    // 0x378ab8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00378AE0_0x378ae0, 0x378ae0u, 0x378abcu)) {
        return;
    }
label_378abc:
    // 0x378abc: 0xc0dec38  jal         func_37B0E0
    SET_GPR_U32(ctx, 31, 0x378AC4u);
    ctx->pc = 0x378AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378ABCu;
    // 0x378ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0037B0E0_0x37b0e0, 0x37b0e0u, 0x378ac4u)) {
        return;
    }
label_378ac4:
    // 0x378ac4: 0xc0de346  jal         func_378D18
    SET_GPR_U32(ctx, 31, 0x378ACCu);
    ctx->pc = 0x378AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378AC4u;
    // 0x378ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00378D18_0x378d18, 0x378d18u, 0x378accu)) {
        return;
    }
label_378acc:
    // 0x378acc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x378accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378ad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x378AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378AD4u;
        // 0x378ad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x378adc: 0x0  nop
    // NOP
    ctx->pc = 0x378ae0u;
}