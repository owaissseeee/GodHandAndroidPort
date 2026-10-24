#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: Disp__12PetitDevilIdQ212PetitDevilId4eId1b
// Address: 0x7995e8 - 0x7996b0
void Disp__12PetitDevilIdQ212PetitDevilId4eId1b_0x7995e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Disp__12PetitDevilIdQ212PetitDevilId4eId1b_0x7995e8");
#endif

    switch (ctx->pc) {
        case 0x799618u: goto label_799618;
        case 0x799624u: goto label_799624;
        case 0x79964cu: goto label_79964c;
        case 0x799668u: goto label_799668;
        case 0x799674u: goto label_799674;
        case 0x79969cu: goto label_79969c;
        default: break;
    }

    ctx->pc = 0x7995e8u;

    // 0x7995e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7995ec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x7995ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7995f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7995f4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x7995f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7995f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7995fc: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x7995FCu;
    {
        const bool branch_taken_0x7995fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x799600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995FCu;
        // 0x799600: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995fc) {
            ctx->pc = 0x799654u;
            goto label_799654;
        }
    }
    ctx->pc = 0x799604u;
    // 0x799604: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x799608: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799608u;
    {
        const bool branch_taken_0x799608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799608u;
        // 0x79960c: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799608) {
            ctx->pc = 0x799638u;
            goto label_799638;
        }
    }
    ctx->pc = 0x799610u;
    // 0x799610: 0x24f00060  addiu       $s0, $a3, 0x60
    ctx->pc = 0x799610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x799614: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_799618:
    // 0x799618: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79961c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79961Cu;
    SET_GPR_U32(ctx, 31, 0x799624u);
    ctx->pc = 0x799620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79961Cu;
    // 0x799620: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79961Cu, 0x799624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799624u;
label_799624:
    // 0x799624: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x799628: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799628u;
    {
        const bool branch_taken_0x799628 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x79962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799628u;
        // 0x79962c: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799628) {
            ctx->pc = 0x799618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799618;
        }
    }
    ctx->pc = 0x799630u;
    // 0x799630: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x799630u;
    {
        const bool branch_taken_0x799630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799630u;
        // 0x799634: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799630) {
            ctx->pc = 0x7996A0u;
            goto label_7996a0;
        }
    }
    ctx->pc = 0x799638u;
label_799638:
    // 0x799638: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79963c: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x79963cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x799640: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x799644: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x799644u;
    SET_GPR_U32(ctx, 31, 0x79964Cu);
    ctx->pc = 0x799648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799644u;
    // 0x799648: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x799644u, 0x79964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79964Cu;
label_79964c:
    // 0x79964c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x79964Cu;
    {
        const bool branch_taken_0x79964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79964Cu;
        // 0x799650: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79964c) {
            ctx->pc = 0x7996A0u;
            goto label_7996a0;
        }
    }
    ctx->pc = 0x799654u;
label_799654:
    // 0x799654: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x799658: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799658u;
    {
        const bool branch_taken_0x799658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x79965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799658u;
        // 0x79965c: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799658) {
            ctx->pc = 0x799688u;
            goto label_799688;
        }
    }
    ctx->pc = 0x799660u;
    // 0x799660: 0x24f00060  addiu       $s0, $a3, 0x60
    ctx->pc = 0x799660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x799664: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_799668:
    // 0x799668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79966c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x79966Cu;
    SET_GPR_U32(ctx, 31, 0x799674u);
    ctx->pc = 0x799670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79966Cu;
    // 0x799670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x79966Cu, 0x799674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799674u;
label_799674:
    // 0x799674: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x799678: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799678u;
    {
        const bool branch_taken_0x799678 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x79967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799678u;
        // 0x79967c: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799678) {
            ctx->pc = 0x799668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799668;
        }
    }
    ctx->pc = 0x799680u;
    // 0x799680: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x799680u;
    {
        const bool branch_taken_0x799680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799680u;
        // 0x799684: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799680) {
            ctx->pc = 0x7996A0u;
            goto label_7996a0;
        }
    }
    ctx->pc = 0x799688u;
label_799688:
    // 0x799688: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79968c: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x79968cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x799690: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x799694: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x799694u;
    SET_GPR_U32(ctx, 31, 0x79969Cu);
    ctx->pc = 0x799698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799694u;
    // 0x799698: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x799694u, 0x79969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79969Cu;
label_79969c:
    // 0x79969c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79969cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7996a0:
    // 0x7996a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7996a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7996a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7996a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7996a8: 0x3e00008  jr          $ra
    ctx->pc = 0x7996A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7996ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A8u;
        // 0x7996ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7996A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7996B0u;
}
} // namespace gh_r040
