#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r805_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r805
{
// Function: getEmNum__5cR805
// Address: 0x799610 - 0x7996b8
void getEmNum__5cR805_0x799610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEmNum__5cR805_0x799610");
#endif

    switch (ctx->pc) {
        case 0x799638u: goto label_799638;
        case 0x799688u: goto label_799688;
        default: break;
    }

    ctx->pc = 0x799610u;

    // 0x799610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799614: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799618: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79961c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79961cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799620: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x799620u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5869F0u));
    // 0x799624: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x799624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799628: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x799628u;
    {
        const bool branch_taken_0x799628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799628u;
        // 0x79962c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799628) {
            ctx->pc = 0x7996A0u;
            goto label_7996a0;
        }
    }
    ctx->pc = 0x799630u;
    // 0x799630: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799634: 0x0  nop
    ctx->pc = 0x799634u;
    // NOP
label_799638:
    // 0x799638: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x799638u;
    {
        const bool branch_taken_0x799638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799638) {
            ctx->pc = 0x79963Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799638u;
            // 0x79963c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799698u;
            goto label_799698;
        }
    }
    ctx->pc = 0x799640u;
    // 0x799640: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x799640u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x799644: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x799644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x799648: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799648u;
    {
        const bool branch_taken_0x799648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799648u;
        // 0x79964c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799648) {
            ctx->pc = 0x799658u;
            goto label_799658;
        }
    }
    ctx->pc = 0x799650u;
    // 0x799650: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799654: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799658:
    // 0x799658: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x799658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79965c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79965Cu;
    {
        const bool branch_taken_0x79965c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79965Cu;
        // 0x799660: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79965c) {
            ctx->pc = 0x799694u;
            goto label_799694;
        }
    }
    ctx->pc = 0x799664u;
    // 0x799664: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799664u;
    {
        const bool branch_taken_0x799664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799664u;
        // 0x799668: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799664) {
            ctx->pc = 0x799674u;
            goto label_799674;
        }
    }
    ctx->pc = 0x79966Cu;
    // 0x79966c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79966cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799670: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799674:
    // 0x799674: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x799674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x799678: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x799678u;
    {
        const bool branch_taken_0x799678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799678) {
            ctx->pc = 0x79967Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799678u;
            // 0x79967c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799698u;
            goto label_799698;
        }
    }
    ctx->pc = 0x799680u;
    // 0x799680: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x799680u;
    SET_GPR_U32(ctx, 31, 0x799688u);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x799680u, 0x799688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799688u;
label_799688:
    // 0x799688: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79968c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x79968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799690: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x799690u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_799694:
    // 0x799694: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x799694u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_799698:
    // 0x799698: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x799698u;
    {
        const bool branch_taken_0x799698 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x799698) {
            ctx->pc = 0x79969Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799698u;
            // 0x79969c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799638;
        }
    }
    ctx->pc = 0x7996A0u;
label_7996a0:
    // 0x7996a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x7996a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7996a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7996a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7996a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7996ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7996acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7996b0: 0x3e00008  jr          $ra
    ctx->pc = 0x7996B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B0u;
        // 0x7996b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7996B8u;
}
} // namespace gh_r805
