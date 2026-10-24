#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r206_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r206
{
// Function: func_0079A548
// Address: 0x79a548 - 0x79a5f0
void func_0079A548_0x79a548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A548_0x79a548");
#endif

    switch (ctx->pc) {
        case 0x79a570u: goto label_79a570;
        case 0x79a5c0u: goto label_79a5c0;
        default: break;
    }

    ctx->pc = 0x79a548u;

    // 0x79a548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79a54c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a550: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79a550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79a554: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79a554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79a558: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x79a558u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79a55c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a55cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a560: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x79A560u;
    {
        const bool branch_taken_0x79a560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A560u;
        // 0x79a564: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a560) {
            ctx->pc = 0x79A5D8u;
            goto label_79a5d8;
        }
    }
    ctx->pc = 0x79A568u;
    // 0x79a568: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x79a568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x79a56c: 0x0  nop
    ctx->pc = 0x79a56cu;
    // NOP
label_79a570:
    // 0x79a570: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x79A570u;
    {
        const bool branch_taken_0x79a570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a570) {
            ctx->pc = 0x79A574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A570u;
            // 0x79a574: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A5D0u;
            goto label_79a5d0;
        }
    }
    ctx->pc = 0x79A578u;
    // 0x79a578: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x79a578u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79a57c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79a57cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79a580: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A580u;
    {
        const bool branch_taken_0x79a580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A580u;
        // 0x79a584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a580) {
            ctx->pc = 0x79A590u;
            goto label_79a590;
        }
    }
    ctx->pc = 0x79A588u;
    // 0x79a588: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a58c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a58cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a590:
    // 0x79a590: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79a590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79a594: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A594u;
    {
        const bool branch_taken_0x79a594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A594u;
        // 0x79a598: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a594) {
            ctx->pc = 0x79A5CCu;
            goto label_79a5cc;
        }
    }
    ctx->pc = 0x79A59Cu;
    // 0x79a59c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A59Cu;
    {
        const bool branch_taken_0x79a59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A59Cu;
        // 0x79a5a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a59c) {
            ctx->pc = 0x79A5ACu;
            goto label_79a5ac;
        }
    }
    ctx->pc = 0x79A5A4u;
    // 0x79a5a4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a5a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a5ac:
    // 0x79a5ac: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79a5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79a5b0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A5B0u;
    {
        const bool branch_taken_0x79a5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a5b0) {
            ctx->pc = 0x79A5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A5B0u;
            // 0x79a5b4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A5D0u;
            goto label_79a5d0;
        }
    }
    ctx->pc = 0x79A5B8u;
    // 0x79a5b8: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79A5B8u;
    SET_GPR_U32(ctx, 31, 0x79A5C0u);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79A5B8u, 0x79A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A5C0u;
label_79a5c0:
    // 0x79a5c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79a5c4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x79a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79a5c8: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x79a5c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_79a5cc:
    // 0x79a5cc: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x79a5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_79a5d0:
    // 0x79a5d0: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x79A5D0u;
    {
        const bool branch_taken_0x79a5d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a5d0) {
            ctx->pc = 0x79A5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A5D0u;
            // 0x79a5d4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a570;
        }
    }
    ctx->pc = 0x79A5D8u;
label_79a5d8:
    // 0x79a5d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x79a5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a5dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79a5dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a5e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79a5e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a5e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A5E8u;
        // 0x79a5ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A5F0u;
}
} // namespace gh_r206
