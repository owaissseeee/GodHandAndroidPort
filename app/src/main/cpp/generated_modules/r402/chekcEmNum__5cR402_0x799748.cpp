#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r402_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r402
{
// Function: chekcEmNum__5cR402
// Address: 0x799748 - 0x7997f0
void chekcEmNum__5cR402_0x799748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("chekcEmNum__5cR402_0x799748");
#endif

    switch (ctx->pc) {
        case 0x799770u: goto label_799770;
        case 0x7997c0u: goto label_7997c0;
        default: break;
    }

    ctx->pc = 0x799748u;

    // 0x799748: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79974c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799750: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799754: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799758: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x799758u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79975c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79975cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799760: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x799760u;
    {
        const bool branch_taken_0x799760 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799760u;
        // 0x799764: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799760) {
            ctx->pc = 0x7997D8u;
            goto label_7997d8;
        }
    }
    ctx->pc = 0x799768u;
    // 0x799768: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x79976c: 0x0  nop
    ctx->pc = 0x79976cu;
    // NOP
label_799770:
    // 0x799770: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x799770u;
    {
        const bool branch_taken_0x799770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799770) {
            ctx->pc = 0x799774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799770u;
            // 0x799774: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997D0u;
            goto label_7997d0;
        }
    }
    ctx->pc = 0x799778u;
    // 0x799778: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x799778u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79977c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79977cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x799780: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799780u;
    {
        const bool branch_taken_0x799780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799780u;
        // 0x799784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799780) {
            ctx->pc = 0x799790u;
            goto label_799790;
        }
    }
    ctx->pc = 0x799788u;
    // 0x799788: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79978c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79978cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799790:
    // 0x799790: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x799790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x799794: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799794u;
    {
        const bool branch_taken_0x799794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799794u;
        // 0x799798: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799794) {
            ctx->pc = 0x7997CCu;
            goto label_7997cc;
        }
    }
    ctx->pc = 0x79979Cu;
    // 0x79979c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79979Cu;
    {
        const bool branch_taken_0x79979c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7997A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79979Cu;
        // 0x7997a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79979c) {
            ctx->pc = 0x7997ACu;
            goto label_7997ac;
        }
    }
    ctx->pc = 0x7997A4u;
    // 0x7997a4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x7997a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x7997a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7997a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7997ac:
    // 0x7997ac: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x7997acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x7997b0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x7997B0u;
    {
        const bool branch_taken_0x7997b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7997b0) {
            ctx->pc = 0x7997B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7997B0u;
            // 0x7997b4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997D0u;
            goto label_7997d0;
        }
    }
    ctx->pc = 0x7997B8u;
    // 0x7997b8: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x7997B8u;
    SET_GPR_U32(ctx, 31, 0x7997C0u);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x7997B8u, 0x7997C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997C0u;
label_7997c0:
    // 0x7997c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x7997c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x7997c4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x7997c8: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x7997c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_7997cc:
    // 0x7997cc: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x7997ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_7997d0:
    // 0x7997d0: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x7997D0u;
    {
        const bool branch_taken_0x7997d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x7997d0) {
            ctx->pc = 0x7997D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7997D0u;
            // 0x7997d4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799770;
        }
    }
    ctx->pc = 0x7997D8u;
label_7997d8:
    // 0x7997d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x7997d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7997dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7997e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7997e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7997e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7997e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7997e8: 0x3e00008  jr          $ra
    ctx->pc = 0x7997E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7997ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E8u;
        // 0x7997ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7997F0u;
}
} // namespace gh_r402
