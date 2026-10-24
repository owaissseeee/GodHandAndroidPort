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

// Function: InitAndClearVuFieldsB
// Address: 0x1b87a8 - 0x1b87f0
void InitAndClearVuFieldsB_0x1b87a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitAndClearVuFieldsB_0x1b87a8");
#endif

    switch (ctx->pc) {
        case 0x1b87bcu: goto label_1b87bc;
        default: break;
    }

    ctx->pc = 0x1b87a8u;

    // 0x1b87a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b87a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b87ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b87acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b87b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b87b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b87b4: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1B87B4u;
    SET_GPR_U32(ctx, 31, 0x1B87BCu);
    ctx->pc = 0x1B87B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B87B4u;
    // 0x1b87b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1B87B4u, 0x1B87BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B87BCu;
label_1b87bc:
    // 0x1b87bc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1b87bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1b87c0: 0x24638c20  addiu       $v1, $v1, -0x73E0
    ctx->pc = 0x1b87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937632));
    // 0x1b87c4: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1b87c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1b87c8: 0xfa000600  sqc2        $vf0, 0x600($s0)
    ctx->pc = 0x1b87c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1536), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b87cc: 0xfa000610  sqc2        $vf0, 0x610($s0)
    ctx->pc = 0x1b87ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1552), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1b87d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b87d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87d4: 0xa2000630  sb          $zero, 0x630($s0)
    ctx->pc = 0x1b87d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1584), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b87d8: 0xae000620  sw          $zero, 0x620($s0)
    ctx->pc = 0x1b87d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 0));
    // 0x1b87dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b87dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b87e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b87e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b87e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B87E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B87E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B87E4u;
        // 0x1b87e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B87E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B87ECu;
    // 0x1b87ec: 0x0  nop
    ctx->pc = 0x1b87ecu;
    // NOP
    ctx->pc = 0x1b87f0u;
}
