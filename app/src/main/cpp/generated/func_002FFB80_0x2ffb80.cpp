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

// Function: func_002FFB80
// Address: 0x2ffb80 - 0x2ffbd0
void func_002FFB80_0x2ffb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FFB80_0x2ffb80");
#endif

    switch (ctx->pc) {
        case 0x2ffb9cu: goto label_2ffb9c;
        default: break;
    }

    ctx->pc = 0x2ffb80u;

    // 0x2ffb80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ffb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ffb84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ffb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ffb88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ffb88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffb8c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FFB8Cu;
    {
        const bool branch_taken_0x2ffb8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFB8Cu;
        // 0x2ffb90: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffb8c) {
            ctx->pc = 0x2FFBBCu;
            goto label_2ffbbc;
        }
    }
    ctx->pc = 0x2FFB94u;
    // 0x2ffb94: 0xc0bef32  jal         func_2FBCC8
    ctx->pc = 0x2FFB94u;
    SET_GPR_U32(ctx, 31, 0x2FFB9Cu);
    ctx->pc = 0x2FBCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBCC8u, 0x2FFB94u, 0x2FFB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFB9Cu;
label_2ffb9c:
    // 0x2ffb9c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2ffb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2ffba0: 0x2463e640  addiu       $v1, $v1, -0x19C0
    ctx->pc = 0x2ffba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960704));
    // 0x2ffba4: 0xae0300f0  sw          $v1, 0xF0($s0)
    ctx->pc = 0x2ffba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 3));
    // 0x2ffba8: 0xfa0002f0  sqc2        $vf0, 0x2F0($s0)
    ctx->pc = 0x2ffba8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ffbac: 0xfa000300  sqc2        $vf0, 0x300($s0)
    ctx->pc = 0x2ffbacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 768), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ffbb0: 0xfa000370  sqc2        $vf0, 0x370($s0)
    ctx->pc = 0x2ffbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 880), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ffbb4: 0xfa000380  sqc2        $vf0, 0x380($s0)
    ctx->pc = 0x2ffbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 896), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ffbb8: 0xfa000390  sqc2        $vf0, 0x390($s0)
    ctx->pc = 0x2ffbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 912), _mm_castps_si128(ctx->vu0_vf[0]));
label_2ffbbc:
    // 0x2ffbbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ffbbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffbc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ffbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ffbc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ffbc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFBC8u;
        // 0x2ffbcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFBD0u;
}
