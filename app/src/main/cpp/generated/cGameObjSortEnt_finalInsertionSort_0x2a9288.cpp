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

// Function: cGameObjSortEnt_finalInsertionSort
// Address: 0x2a9288 - 0x2a9300
void cGameObjSortEnt_finalInsertionSort_0x2a9288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObjSortEnt_finalInsertionSort_0x2a9288");
#endif

    switch (ctx->pc) {
        case 0x2a92c0u: goto label_2a92c0;
        case 0x2a92d4u: goto label_2a92d4;
        case 0x2a92e8u: goto label_2a92e8;
        default: break;
    }

    ctx->pc = 0x2a9288u;

    // 0x2a9288: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a9288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a928c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a928cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a9290: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a9290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9294: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2a9294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2a9298: 0x2241023  subu        $v0, $s1, $a0
    ctx->pc = 0x2a9298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2a929c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2a929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2a92a0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2a92a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2a92a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a92a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a92a8: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x2a92a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x2a92ac: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2A92ACu;
    {
        const bool branch_taken_0x2a92ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A92B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92ACu;
        // 0x2a92b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a92ac) {
            ctx->pc = 0x2A92DCu;
            goto label_2a92dc;
        }
    }
    ctx->pc = 0x2A92B4u;
    // 0x2a92b4: 0x24900080  addiu       $s0, $a0, 0x80
    ctx->pc = 0x2a92b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2a92b8: 0xc0aa440  jal         func_2A9100
    ctx->pc = 0x2A92B8u;
    SET_GPR_U32(ctx, 31, 0x2A92C0u);
    ctx->pc = 0x2A92BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A92B8u;
    // 0x2a92bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9100u, 0x2A92B8u, 0x2A92C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A92C0u;
label_2a92c0:
    // 0x2a92c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a92c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a92c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a92c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a92c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2a92c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a92cc: 0xc0aa484  jal         func_2A9210
    ctx->pc = 0x2A92CCu;
    SET_GPR_U32(ctx, 31, 0x2A92D4u);
    ctx->pc = 0x2A92D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A92CCu;
    // 0x2a92d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9210u, 0x2A92CCu, 0x2A92D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A92D4u;
label_2a92d4:
    // 0x2a92d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A92D4u;
    {
        const bool branch_taken_0x2a92d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A92D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92D4u;
        // 0x2a92d8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a92d4) {
            ctx->pc = 0x2A92ECu;
            goto label_2a92ec;
        }
    }
    ctx->pc = 0x2A92DCu;
label_2a92dc:
    // 0x2a92dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a92dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a92e0: 0xc0aa440  jal         func_2A9100
    ctx->pc = 0x2A92E0u;
    SET_GPR_U32(ctx, 31, 0x2A92E8u);
    ctx->pc = 0x2A92E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A92E0u;
    // 0x2a92e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9100u, 0x2A92E0u, 0x2A92E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A92E8u;
label_2a92e8:
    // 0x2a92e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2a92e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a92ec:
    // 0x2a92ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a92ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a92f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2a92f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a92f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a92f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a92f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A92F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A92FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92F8u;
        // 0x2a92fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A92F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9300u;
}
