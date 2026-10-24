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

// Function: cGameObj_constructSubclassA
// Address: 0x1a5fd8 - 0x1a6038
void cGameObj_constructSubclassA_0x1a5fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_constructSubclassA_0x1a5fd8");
#endif

    switch (ctx->pc) {
        case 0x1a5fecu: goto label_1a5fec;
        case 0x1a6020u: goto label_1a6020;
        default: break;
    }

    ctx->pc = 0x1a5fd8u;

    // 0x1a5fd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5fdc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a5fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a5fe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5fe4: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1A5FE4u;
    SET_GPR_U32(ctx, 31, 0x1A5FECu);
    ctx->pc = 0x1A5FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5FE4u;
    // 0x1a5fe8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1A5FE4u, 0x1A5FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5FECu;
label_1a5fec:
    // 0x1a5fec: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1a5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1a5ff0: 0x24637400  addiu       $v1, $v1, 0x7400
    ctx->pc = 0x1a5ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29696));
    // 0x1a5ff4: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1a5ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1a5ff8: 0xfa000610  sqc2        $vf0, 0x610($s0)
    ctx->pc = 0x1a5ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1552), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a5ffc: 0xfa000620  sqc2        $vf0, 0x620($s0)
    ctx->pc = 0x1a5ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1568), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a6000: 0x26040630  addiu       $a0, $s0, 0x630
    ctx->pc = 0x1a6000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x1a6004: 0xfa000630  sqc2        $vf0, 0x630($s0)
    ctx->pc = 0x1a6004u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1584), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a6008: 0xfa000640  sqc2        $vf0, 0x640($s0)
    ctx->pc = 0x1a6008u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1600), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a600c: 0xfa000650  sqc2        $vf0, 0x650($s0)
    ctx->pc = 0x1a600cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1616), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a6010: 0xfa000660  sqc2        $vf0, 0x660($s0)
    ctx->pc = 0x1a6010u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1632), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a6014: 0xfa000670  sqc2        $vf0, 0x670($s0)
    ctx->pc = 0x1a6014u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1648), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1a6018: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1A6018u;
    SET_GPR_U32(ctx, 31, 0x1A6020u);
    ctx->pc = 0x1A601Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6018u;
    // 0x1a601c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1A6018u, 0x1A6020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6020u;
label_1a6020:
    // 0x1a6020: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a6020u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6028: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a6028u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a602c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A602Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A602Cu;
        // 0x1a6030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A602Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6034u;
    // 0x1a6034: 0x0  nop
    ctx->pc = 0x1a6034u;
    // NOP
    ctx->pc = 0x1a6038u;
}
