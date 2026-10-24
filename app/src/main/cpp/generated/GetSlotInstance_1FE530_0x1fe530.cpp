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

// Function: GetSlotInstance_1FE530
// Address: 0x1fe530 - 0x1fe5a8
void GetSlotInstance_1FE530_0x1fe530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSlotInstance_1FE530_0x1fe530");
#endif

    switch (ctx->pc) {
        case 0x1fe578u: goto label_1fe578;
        case 0x1fe58cu: goto label_1fe58c;
        default: break;
    }

    ctx->pc = 0x1fe530u;

    // 0x1fe530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fe530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1fe534: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x1fe534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x1fe538: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fe538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fe53c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fe53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1fe540: 0x245161a8  addiu       $s1, $v0, 0x61A8
    ctx->pc = 0x1fe540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25000));
    // 0x1fe544: 0x8c4361a8  lw          $v1, 0x61A8($v0)
    ctx->pc = 0x1fe544u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7861A8u));
    // 0x1fe548: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fe548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe54c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fe54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1fe550: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1FE550u;
    {
        const bool branch_taken_0x1fe550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE550u;
        // 0x1fe554: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe550) {
            ctx->pc = 0x1FE58Cu;
            goto label_1fe58c;
        }
    }
    ctx->pc = 0x1FE558u;
    // 0x1fe558: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1fe558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1fe55c: 0x8c620d48  lw          $v0, 0xD48($v1)
    ctx->pc = 0x1fe55cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D48u));
    // 0x1fe560: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE560u;
    {
        const bool branch_taken_0x1fe560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE560u;
        // 0x1fe564: 0x24700d48  addiu       $s0, $v1, 0xD48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe560) {
            ctx->pc = 0x1FE578u;
            goto label_1fe578;
        }
    }
    ctx->pc = 0x1FE568u;
    // 0x1fe568: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1fe568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1fe56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe570: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x1FE570u;
    SET_GPR_U32(ctx, 31, 0x1FE578u);
    ctx->pc = 0x1FE574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE570u;
    // 0x1fe574: 0x24a5c4f8  addiu       $a1, $a1, -0x3B08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x1FE570u, 0x1FE578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE578u;
label_1fe578:
    // 0x1fe578: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1fe578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1fe57c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fe57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe580: 0x24a5c508  addiu       $a1, $a1, -0x3AF8
    ctx->pc = 0x1fe580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952200));
    // 0x1fe584: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1FE584u;
    SET_GPR_U32(ctx, 31, 0x1FE58Cu);
    ctx->pc = 0x1FE588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE584u;
    // 0x1fe588: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1FE584u, 0x1FE58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE58Cu;
label_1fe58c:
    // 0x1fe58c: 0x264261a8  addiu       $v0, $s2, 0x61A8
    ctx->pc = 0x1fe58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 25000));
    // 0x1fe590: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fe590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fe594: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fe594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe598: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fe598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5A0u;
        // 0x1fe5a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE5A8u;
}
