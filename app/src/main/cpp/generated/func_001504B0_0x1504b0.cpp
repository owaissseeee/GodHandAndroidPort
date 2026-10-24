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

// Function: func_001504B0
// Address: 0x1504b0 - 0x150538
void func_001504B0_0x1504b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001504B0_0x1504b0");
#endif

    switch (ctx->pc) {
        case 0x1504d0u: goto label_1504d0;
        case 0x1504e0u: goto label_1504e0;
        case 0x1504f8u: goto label_1504f8;
        case 0x150510u: goto label_150510;
        default: break;
    }

    ctx->pc = 0x1504b0u;

    // 0x1504b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1504b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1504b4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1504b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1504b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1504b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1504bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1504c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1504c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1504c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1504c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1504c8: 0xc054106  jal         func_150418
    ctx->pc = 0x1504C8u;
    SET_GPR_U32(ctx, 31, 0x1504D0u);
    ctx->pc = 0x1504CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504C8u;
    // 0x1504cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150418u, 0x1504C8u, 0x1504D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504D0u;
label_1504d0:
    // 0x1504d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1504d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504d4: 0x24040220  addiu       $a0, $zero, 0x220
    ctx->pc = 0x1504d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x1504d8: 0xc0aa5b0  jal         func_2A96C0
    ctx->pc = 0x1504D8u;
    SET_GPR_U32(ctx, 31, 0x1504E0u);
    ctx->pc = 0x1504DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504D8u;
    // 0x1504dc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A96C0u, 0x1504D8u, 0x1504E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504E0u;
label_1504e0:
    // 0x1504e0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1504e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1504e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1504e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504e8: 0x8c663cf0  lw          $a2, 0x3CF0($v1)
    ctx->pc = 0x1504e8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CF0u));
    // 0x1504ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1504ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504f0: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x1504F0u;
    SET_GPR_U32(ctx, 31, 0x1504F8u);
    ctx->pc = 0x1504F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1504F0u;
    // 0x1504f4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x1504F0u, 0x1504F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1504F8u;
label_1504f8:
    // 0x1504f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1504f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1504fc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1504fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150500: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x150500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150504: 0x24060220  addiu       $a2, $zero, 0x220
    ctx->pc = 0x150504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x150508: 0xc0aa5b6  jal         func_2A96D8
    ctx->pc = 0x150508u;
    SET_GPR_U32(ctx, 31, 0x150510u);
    ctx->pc = 0x15050Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150508u;
    // 0x15050c: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A96D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A96D8u, 0x150508u, 0x150510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150510u;
label_150510:
    // 0x150510: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x150510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x150514: 0xae110024  sw          $s1, 0x24($s0)
    ctx->pc = 0x150514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
    // 0x150518: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x150518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x15051c: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x15051cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x150520: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x150520u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150524: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x150524u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150528: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x150528u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15052c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15052cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150530: 0x3e00008  jr          $ra
    ctx->pc = 0x150530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150530u;
        // 0x150534: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150538u;
}
