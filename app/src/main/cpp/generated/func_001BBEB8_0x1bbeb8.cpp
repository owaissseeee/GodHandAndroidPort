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

// Function: func_001BBEB8
// Address: 0x1bbeb8 - 0x1bbf00
void func_001BBEB8_0x1bbeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BBEB8_0x1bbeb8");
#endif

    switch (ctx->pc) {
        case 0x1bbeccu: goto label_1bbecc;
        default: break;
    }

    ctx->pc = 0x1bbeb8u;

    // 0x1bbeb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbebc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bbebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bbec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbec4: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1BBEC4u;
    SET_GPR_U32(ctx, 31, 0x1BBECCu);
    ctx->pc = 0x1BBEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBEC4u;
    // 0x1bbec8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1BBEC4u, 0x1BBECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBECCu;
label_1bbecc:
    // 0x1bbecc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1bbeccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1bbed0: 0x246392f0  addiu       $v1, $v1, -0x6D10
    ctx->pc = 0x1bbed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939376));
    // 0x1bbed4: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1bbed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1bbed8: 0xfa000610  sqc2        $vf0, 0x610($s0)
    ctx->pc = 0x1bbed8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1552), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1bbedc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bbedcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbee0: 0xae000620  sw          $zero, 0x620($s0)
    ctx->pc = 0x1bbee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 0));
    // 0x1bbee4: 0xae000634  sw          $zero, 0x634($s0)
    ctx->pc = 0x1bbee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1588), GPR_U32(ctx, 0));
    // 0x1bbee8: 0xa6000630  sh          $zero, 0x630($s0)
    ctx->pc = 0x1bbee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1584), (uint16_t)GPR_U32(ctx, 0));
    // 0x1bbeec: 0xae000644  sw          $zero, 0x644($s0)
    ctx->pc = 0x1bbeecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 0));
    // 0x1bbef0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bbef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBEF8u;
        // 0x1bbefc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBF00u;
}
