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

// Function: InitSubsystemGroup_2CA518
// Address: 0x2ca518 - 0x2ca558
void InitSubsystemGroup_2CA518_0x2ca518(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSubsystemGroup_2CA518_0x2ca518");
#endif

    if (__builtin_expect(ctx->pc != 0x2ca518u, 0)) {
        switch (ctx->pc) {
            case 0x2ca52cu: goto label_2ca52c;
            case 0x2ca534u: goto label_2ca534;
            case 0x2ca53cu: goto label_2ca53c;
            case 0x2ca544u: goto label_2ca544;
            default: break;
        }
    }


    // 0x2ca518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ca51c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ca51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ca520: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ca520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ca524: 0xc0b3054  jal         func_2CC150
    SET_GPR_U32(ctx, 31, 0x2CA52Cu);
    ctx->pc = 0x2CA528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA524u;
    // 0x2ca528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_UpdateListener_0x2cc150, 0x2cc150u, 0x2ca52cu)) {
        return;
    }
label_2ca52c:
    // 0x2ca52c: 0xc0b48bc  jal         func_2D22F0
    SET_GPR_U32(ctx, 31, 0x2CA534u);
    ctx->pc = 0x2CA530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA52Cu;
    // 0x2ca530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002D22F0_0x2d22f0, 0x2d22f0u, 0x2ca534u)) {
        return;
    }
label_2ca534:
    // 0x2ca534: 0xc0b2c4a  jal         func_2CB128
    SET_GPR_U32(ctx, 31, 0x2CA53Cu);
    ctx->pc = 0x2CA538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA534u;
    // 0x2ca538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002CB128_0x2cb128, 0x2cb128u, 0x2ca53cu)) {
        return;
    }
label_2ca53c:
    // 0x2ca53c: 0xc0b2c80  jal         func_2CB200
    SET_GPR_U32(ctx, 31, 0x2CA544u);
    ctx->pc = 0x2CA540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CA53Cu;
    // 0x2ca540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002CB200_0x2cb200, 0x2cb200u, 0x2ca544u)) {
        return;
    }
label_2ca544:
    // 0x2ca544: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ca544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ca548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca54c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA54Cu;
        // 0x2ca550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2ca554: 0x0  nop
    // NOP
    ctx->pc = 0x2ca558u;
}