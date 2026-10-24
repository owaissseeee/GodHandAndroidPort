#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: waitEmDead__FP7cEmWrapi
// Address: 0x799650 - 0x799700
void waitEmDead__FP7cEmWrapi_0x799650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("waitEmDead__FP7cEmWrapi_0x799650");
#endif

    switch (ctx->pc) {
        case 0x799680u: goto label_799680;
        case 0x799690u: goto label_799690;
        case 0x79969cu: goto label_79969c;
        case 0x7996c0u: goto label_7996c0;
        case 0x7996d4u: goto label_7996d4;
        default: break;
    }

    ctx->pc = 0x799650u;

    // 0x799650: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799654: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x799654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x799658: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x799658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79965c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x79965cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799660: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x799660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x799664: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x799664u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799668: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x799668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79966c: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x799670: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x799674: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x799674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x799678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79967c: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x79967cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_799680:
    // 0x799680: 0x1a60000d  blez        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x799680u;
    {
        const bool branch_taken_0x799680 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x799684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799680u;
        // 0x799684: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799680) {
            ctx->pc = 0x7996B8u;
            goto label_7996b8;
        }
    }
    ctx->pc = 0x799688u;
    // 0x799688: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x799688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79968c: 0x0  nop
    ctx->pc = 0x79968cu;
    // NOP
label_799690:
    // 0x799690: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799694: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799694u;
    SET_GPR_U32(ctx, 31, 0x79969Cu);
    ctx->pc = 0x799698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799694u;
    // 0x799698: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799694u, 0x79969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79969Cu;
label_79969c:
    // 0x79969c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x79969cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x7996a0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x7996a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x7996a4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7996A4u;
    {
        const bool branch_taken_0x7996a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A4u;
        // 0x7996a8: 0x62880b  movn        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996a4) {
            ctx->pc = 0x799690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799690;
        }
    }
    ctx->pc = 0x7996ACu;
    // 0x7996ac: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x7996acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x7996b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7996B0u;
    {
        const bool branch_taken_0x7996b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B0u;
        // 0x7996b4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996b0) {
            ctx->pc = 0x7996C8u;
            goto label_7996c8;
        }
    }
    ctx->pc = 0x7996B8u;
label_7996b8:
    // 0x7996b8: 0xc1e6640  jal         func_799900
    ctx->pc = 0x7996B8u;
    SET_GPR_U32(ctx, 31, 0x7996C0u);
    ctx->pc = 0x799900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799900u, 0x7996B8u, 0x7996C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C0u;
label_7996c0:
    // 0x7996c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7996C0u;
    {
        const bool branch_taken_0x7996c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C0u;
        // 0x7996c4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996c0) {
            ctx->pc = 0x7996DCu;
            goto label_7996dc;
        }
    }
    ctx->pc = 0x7996C8u;
label_7996c8:
    // 0x7996c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7996cc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7996CCu;
    SET_GPR_U32(ctx, 31, 0x7996D4u);
    ctx->pc = 0x7996D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996CCu;
    // 0x7996d0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7996CCu, 0x7996D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996D4u;
label_7996d4:
    // 0x7996d4: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x7996D4u;
    {
        const bool branch_taken_0x7996d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996D4u;
        // 0x7996d8: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996d4) {
            ctx->pc = 0x799680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799680;
        }
    }
    ctx->pc = 0x7996DCu;
label_7996dc:
    // 0x7996dc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7996dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7996e0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7996e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7996e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7996e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7996e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7996e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7996ec: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7996ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7996f0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7996f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7996f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7996f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7996f8: 0x3e00008  jr          $ra
    ctx->pc = 0x7996F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996F8u;
        // 0x7996fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799700u;
}
} // namespace gh_r605
