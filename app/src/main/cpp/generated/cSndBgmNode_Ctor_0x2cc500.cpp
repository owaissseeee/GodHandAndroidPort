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

// Function: cSndBgmNode_Ctor
// Address: 0x2cc500 - 0x2cc540
void cSndBgmNode_Ctor_0x2cc500(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_Ctor_0x2cc500");
#endif

    if (__builtin_expect(ctx->pc != 0x2cc500u, 0)) {
        switch (ctx->pc) {
            case 0x2cc514u: goto label_2cc514;
            case 0x2cc528u: goto label_2cc528;
            default: break;
        }
    }


    // 0x2cc500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc504: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cc504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cc508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cc508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cc50c: 0xc0dcb1a  jal         func_372C68
    SET_GPR_U32(ctx, 31, 0x2CC514u);
    ctx->pc = 0x2CC510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC50Cu;
    // 0x2cc510: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj0000_Set_Field_80_372C68_0x372c68, 0x372c68u, 0x2cc514u)) {
        return;
    }
label_2cc514:
    // 0x2cc514: 0x3c030045  lui         $v1, 0x45
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2cc518: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc51c: 0x2463cee8  addiu       $v1, $v1, -0x3118
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954728));
    // 0x2cc520: 0xc0b315e  jal         func_2CC578
    SET_GPR_U32(ctx, 31, 0x2CC528u);
    ctx->pc = 0x2CC524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC520u;
    // 0x2cc524: 0xae030080  sw          $v1, 0x80($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cSndBgmNode_Init_0x2cc578, 0x2cc578u, 0x2cc528u)) {
        return;
    }
label_2cc528:
    // 0x2cc528: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc52c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cc52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc530: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cc530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc534: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC534u;
        // 0x2cc538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x2cc53c: 0x0  nop
    // NOP
    ctx->pc = 0x2cc540u;
}