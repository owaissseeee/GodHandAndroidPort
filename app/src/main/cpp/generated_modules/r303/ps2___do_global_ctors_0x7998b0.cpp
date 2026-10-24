#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r303_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r303
{
// Function: __do_global_ctors
// Address: 0x7998b0 - 0x799960
void ps2___do_global_ctors_0x7998b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x7998b0");
#endif

    switch (ctx->pc) {
        case 0x7998b0u: goto label_7998b0;
        case 0x7998b4u: goto label_7998b4;
        case 0x7998b8u: goto label_7998b8;
        case 0x7998bcu: goto label_7998bc;
        case 0x7998c0u: goto label_7998c0;
        case 0x7998c4u: goto label_7998c4;
        case 0x7998c8u: goto label_7998c8;
        case 0x7998ccu: goto label_7998cc;
        case 0x7998d0u: goto label_7998d0;
        case 0x7998d4u: goto label_7998d4;
        case 0x7998d8u: goto label_7998d8;
        case 0x7998dcu: goto label_7998dc;
        case 0x7998e0u: goto label_7998e0;
        case 0x7998e4u: goto label_7998e4;
        case 0x7998e8u: goto label_7998e8;
        case 0x7998ecu: goto label_7998ec;
        case 0x7998f0u: goto label_7998f0;
        case 0x7998f4u: goto label_7998f4;
        case 0x7998f8u: goto label_7998f8;
        case 0x7998fcu: goto label_7998fc;
        case 0x799900u: goto label_799900;
        case 0x799904u: goto label_799904;
        case 0x799908u: goto label_799908;
        case 0x79990cu: goto label_79990c;
        case 0x799910u: goto label_799910;
        case 0x799914u: goto label_799914;
        case 0x799918u: goto label_799918;
        case 0x79991cu: goto label_79991c;
        case 0x799920u: goto label_799920;
        case 0x799924u: goto label_799924;
        case 0x799928u: goto label_799928;
        case 0x79992cu: goto label_79992c;
        case 0x799930u: goto label_799930;
        case 0x799934u: goto label_799934;
        case 0x799938u: goto label_799938;
        case 0x79993cu: goto label_79993c;
        case 0x799940u: goto label_799940;
        case 0x799944u: goto label_799944;
        case 0x799948u: goto label_799948;
        case 0x79994cu: goto label_79994c;
        case 0x799950u: goto label_799950;
        case 0x799954u: goto label_799954;
        case 0x799958u: goto label_799958;
        case 0x79995cu: goto label_79995c;
        default: break;
    }

    ctx->pc = 0x7998b0u;

label_7998b0:
    // 0x7998b0: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_7998b4:
    // 0x7998b4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7998b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_7998b8:
    // 0x7998b8: 0x8ce59a80  lw          $a1, -0x6580($a3)
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941312)));
label_7998bc:
    // 0x7998bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7998bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7998c0:
    // 0x7998c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7998c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_7998c4:
    // 0x7998c4: 0x24e39a80  addiu       $v1, $a3, -0x6580
    ctx->pc = 0x7998c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941312));
label_7998c8:
    // 0x7998c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7998c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_7998cc:
    // 0x7998cc: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_7998d0:
    if (ctx->pc == 0x7998D0u) {
        ctx->pc = 0x7998D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998CCu;
        // 0x7998d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998D4u;
        goto label_7998d4;
    }
    ctx->pc = 0x7998CCu;
    {
        const bool branch_taken_0x7998cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7998D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998CCu;
        // 0x7998d0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998cc) {
            ctx->pc = 0x799914u;
            goto label_799914;
        }
    }
    ctx->pc = 0x7998D4u;
label_7998d4:
    // 0x7998d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7998d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7998d8:
    // 0x7998d8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7998dc:
    if (ctx->pc == 0x7998DCu) {
        ctx->pc = 0x7998DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D8u;
        // 0x7998dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7998E0u;
        goto label_7998e0;
    }
    ctx->pc = 0x7998D8u;
    {
        const bool branch_taken_0x7998d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D8u;
        // 0x7998dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998d8) {
            ctx->pc = 0x799914u;
            goto label_799914;
        }
    }
    ctx->pc = 0x7998E0u;
label_7998e0:
    // 0x7998e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7998e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7998e4:
    // 0x7998e4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7998e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7998e8:
    // 0x7998e8: 0x24e49a80  addiu       $a0, $a3, -0x6580
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941312));
label_7998ec:
    // 0x7998ec: 0x0  nop
    ctx->pc = 0x7998ecu;
    // NOP
label_7998f0:
    // 0x7998f0: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x7998f0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_7998f4:
    // 0x7998f4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7998f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7998f8:
    // 0x7998f8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x7998f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_7998fc:
    // 0x7998fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x7998fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799900:
    // 0x799900: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_799904:
    // 0x799904: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799908:
    // 0x799908: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79990c:
    // 0x79990c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799910:
    if (ctx->pc == 0x799910u) {
        ctx->pc = 0x799910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79990Cu;
        // 0x799910: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799914u;
        goto label_799914;
    }
    ctx->pc = 0x79990Cu;
    {
        const bool branch_taken_0x79990c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79990c) {
            ctx->pc = 0x799910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79990Cu;
            // 0x799910: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7998F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7998f0;
        }
    }
    ctx->pc = 0x799914u;
label_799914:
    // 0x799914: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x799914u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799918:
    // 0x799918: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799918u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79991c:
    // 0x79991c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799920:
    if (ctx->pc == 0x799920u) {
        ctx->pc = 0x799920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79991Cu;
        // 0x799920: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799924u;
        goto label_799924;
    }
    ctx->pc = 0x79991Cu;
    {
        const bool branch_taken_0x79991c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79991Cu;
        // 0x799920: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79991c) {
            ctx->pc = 0x79994Cu;
            goto label_79994c;
        }
    }
    ctx->pc = 0x799924u;
label_799924:
    // 0x799924: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799928:
    // 0x799928: 0x24429a80  addiu       $v0, $v0, -0x6580
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941312));
label_79992c:
    // 0x79992c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799930:
    // 0x799930: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799934:
    // 0x799934: 0x0  nop
    ctx->pc = 0x799934u;
    // NOP
label_799938:
    // 0x799938: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79993c:
    // 0x79993c: 0x40f809  jalr        $v0
label_799940:
    if (ctx->pc == 0x799940u) {
        ctx->pc = 0x799940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79993Cu;
        // 0x799940: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799944u;
        goto label_799944;
    }
    ctx->pc = 0x79993Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799944u);
        ctx->pc = 0x799940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79993Cu;
        // 0x799940: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79993Cu, 0x799944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799944u;
label_799944:
    // 0x799944: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799948:
    if (ctx->pc == 0x799948u) {
        ctx->pc = 0x799948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799944u;
        // 0x799948: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79994Cu;
        goto label_79994c;
    }
    ctx->pc = 0x799944u;
    {
        const bool branch_taken_0x799944 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799944) {
            ctx->pc = 0x799948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799944u;
            // 0x799948: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799938;
        }
    }
    ctx->pc = 0x79994Cu;
label_79994c:
    // 0x79994c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79994cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799950:
    // 0x799950: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799950u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799954:
    // 0x799954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799958:
    // 0x799958: 0x3e00008  jr          $ra
label_79995c:
    if (ctx->pc == 0x79995Cu) {
        ctx->pc = 0x79995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799958u;
        // 0x79995c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799960u;
        goto label_fallthrough_0x799958;
    }
    ctx->pc = 0x799958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799958u;
        // 0x79995c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799958:
    ctx->pc = 0x799960u;
}
} // namespace gh_r303
