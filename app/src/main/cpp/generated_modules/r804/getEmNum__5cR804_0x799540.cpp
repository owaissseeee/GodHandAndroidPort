#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r804_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r804
{
// Function: getEmNum__5cR804
// Address: 0x799540 - 0x7995e8
void getEmNum__5cR804_0x799540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEmNum__5cR804_0x799540");
#endif

    switch (ctx->pc) {
        case 0x799568u: goto label_799568;
        case 0x7995b8u: goto label_7995b8;
        default: break;
    }

    ctx->pc = 0x799540u;

    // 0x799540: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799544: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799548: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79954c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799550: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x799550u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5869F0u));
    // 0x799554: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799558: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x799558u;
    {
        const bool branch_taken_0x799558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799558u;
        // 0x79955c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799558) {
            ctx->pc = 0x7995D0u;
            goto label_7995d0;
        }
    }
    ctx->pc = 0x799560u;
    // 0x799560: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x799560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799564: 0x0  nop
    ctx->pc = 0x799564u;
    // NOP
label_799568:
    // 0x799568: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x799568u;
    {
        const bool branch_taken_0x799568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799568) {
            ctx->pc = 0x79956Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799568u;
            // 0x79956c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995C8u;
            goto label_7995c8;
        }
    }
    ctx->pc = 0x799570u;
    // 0x799570: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x799570u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x799574: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x799574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x799578: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799578u;
    {
        const bool branch_taken_0x799578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799578u;
        // 0x79957c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799578) {
            ctx->pc = 0x799588u;
            goto label_799588;
        }
    }
    ctx->pc = 0x799580u;
    // 0x799580: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799584: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799588:
    // 0x799588: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x799588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79958c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79958Cu;
    {
        const bool branch_taken_0x79958c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79958Cu;
        // 0x799590: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79958c) {
            ctx->pc = 0x7995C4u;
            goto label_7995c4;
        }
    }
    ctx->pc = 0x799594u;
    // 0x799594: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799594u;
    {
        const bool branch_taken_0x799594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799594u;
        // 0x799598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799594) {
            ctx->pc = 0x7995A4u;
            goto label_7995a4;
        }
    }
    ctx->pc = 0x79959Cu;
    // 0x79959c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79959cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x7995a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7995a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7995a4:
    // 0x7995a4: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x7995a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x7995a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x7995A8u;
    {
        const bool branch_taken_0x7995a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7995a8) {
            ctx->pc = 0x7995ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995A8u;
            // 0x7995ac: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995C8u;
            goto label_7995c8;
        }
    }
    ctx->pc = 0x7995B0u;
    // 0x7995b0: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x7995B0u;
    SET_GPR_U32(ctx, 31, 0x7995B8u);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x7995B0u, 0x7995B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B8u;
label_7995b8:
    // 0x7995b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x7995b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x7995bc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x7995c0: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x7995c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_7995c4:
    // 0x7995c4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_7995c8:
    // 0x7995c8: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x7995C8u;
    {
        const bool branch_taken_0x7995c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x7995c8) {
            ctx->pc = 0x7995CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995C8u;
            // 0x7995cc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799568;
        }
    }
    ctx->pc = 0x7995D0u;
label_7995d0:
    // 0x7995d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x7995d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7995d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7995d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7995d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7995dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7995dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7995e0: 0x3e00008  jr          $ra
    ctx->pc = 0x7995E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995E0u;
        // 0x7995e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995E8u;
}
} // namespace gh_r804
