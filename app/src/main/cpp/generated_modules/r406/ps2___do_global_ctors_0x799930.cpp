#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r406_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r406
{
// Function: __do_global_ctors
// Address: 0x799930 - 0x7999e0
void ps2___do_global_ctors_0x799930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799930");
#endif

    switch (ctx->pc) {
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
        case 0x799960u: goto label_799960;
        case 0x799964u: goto label_799964;
        case 0x799968u: goto label_799968;
        case 0x79996cu: goto label_79996c;
        case 0x799970u: goto label_799970;
        case 0x799974u: goto label_799974;
        case 0x799978u: goto label_799978;
        case 0x79997cu: goto label_79997c;
        case 0x799980u: goto label_799980;
        case 0x799984u: goto label_799984;
        case 0x799988u: goto label_799988;
        case 0x79998cu: goto label_79998c;
        case 0x799990u: goto label_799990;
        case 0x799994u: goto label_799994;
        case 0x799998u: goto label_799998;
        case 0x79999cu: goto label_79999c;
        case 0x7999a0u: goto label_7999a0;
        case 0x7999a4u: goto label_7999a4;
        case 0x7999a8u: goto label_7999a8;
        case 0x7999acu: goto label_7999ac;
        case 0x7999b0u: goto label_7999b0;
        case 0x7999b4u: goto label_7999b4;
        case 0x7999b8u: goto label_7999b8;
        case 0x7999bcu: goto label_7999bc;
        case 0x7999c0u: goto label_7999c0;
        case 0x7999c4u: goto label_7999c4;
        case 0x7999c8u: goto label_7999c8;
        case 0x7999ccu: goto label_7999cc;
        case 0x7999d0u: goto label_7999d0;
        case 0x7999d4u: goto label_7999d4;
        case 0x7999d8u: goto label_7999d8;
        case 0x7999dcu: goto label_7999dc;
        default: break;
    }

    ctx->pc = 0x799930u;

label_799930:
    // 0x799930: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799930u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_799934:
    // 0x799934: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_799938:
    // 0x799938: 0x8ce59c00  lw          $a1, -0x6400($a3)
    ctx->pc = 0x799938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941696)));
label_79993c:
    // 0x79993c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79993cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_799940:
    // 0x799940: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_799944:
    // 0x799944: 0x24e39c00  addiu       $v1, $a3, -0x6400
    ctx->pc = 0x799944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941696));
label_799948:
    // 0x799948: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x799948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79994c:
    // 0x79994c: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_799950:
    if (ctx->pc == 0x799950u) {
        ctx->pc = 0x799950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79994Cu;
        // 0x799950: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799954u;
        goto label_799954;
    }
    ctx->pc = 0x79994Cu;
    {
        const bool branch_taken_0x79994c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x799950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79994Cu;
        // 0x799950: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79994c) {
            ctx->pc = 0x799994u;
            goto label_799994;
        }
    }
    ctx->pc = 0x799954u;
label_799954:
    // 0x799954: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799958:
    // 0x799958: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79995c:
    if (ctx->pc == 0x79995Cu) {
        ctx->pc = 0x79995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799958u;
        // 0x79995c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799960u;
        goto label_799960;
    }
    ctx->pc = 0x799958u;
    {
        const bool branch_taken_0x799958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799958u;
        // 0x79995c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799958) {
            ctx->pc = 0x799994u;
            goto label_799994;
        }
    }
    ctx->pc = 0x799960u;
label_799960:
    // 0x799960: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799964:
    // 0x799964: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x799964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_799968:
    // 0x799968: 0x24e49c00  addiu       $a0, $a3, -0x6400
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941696));
label_79996c:
    // 0x79996c: 0x0  nop
    ctx->pc = 0x79996cu;
    // NOP
label_799970:
    // 0x799970: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x799970u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_799974:
    // 0x799974: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799978:
    // 0x799978: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x799978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79997c:
    // 0x79997c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79997cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799980:
    // 0x799980: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_799984:
    // 0x799984: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x799984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799988:
    // 0x799988: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79998c:
    // 0x79998c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799990:
    if (ctx->pc == 0x799990u) {
        ctx->pc = 0x799990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79998Cu;
        // 0x799990: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799994u;
        goto label_799994;
    }
    ctx->pc = 0x79998Cu;
    {
        const bool branch_taken_0x79998c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79998c) {
            ctx->pc = 0x799990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79998Cu;
            // 0x799990: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799970;
        }
    }
    ctx->pc = 0x799994u;
label_799994:
    // 0x799994: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x799994u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799998:
    // 0x799998: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799998u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79999c:
    // 0x79999c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_7999a0:
    if (ctx->pc == 0x7999A0u) {
        ctx->pc = 0x7999A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79999Cu;
        // 0x7999a0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999A4u;
        goto label_7999a4;
    }
    ctx->pc = 0x79999Cu;
    {
        const bool branch_taken_0x79999c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79999Cu;
        // 0x7999a0: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79999c) {
            ctx->pc = 0x7999CCu;
            goto label_7999cc;
        }
    }
    ctx->pc = 0x7999A4u;
label_7999a4:
    // 0x7999a4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x7999a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_7999a8:
    // 0x7999a8: 0x24429c00  addiu       $v0, $v0, -0x6400
    ctx->pc = 0x7999a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
label_7999ac:
    // 0x7999ac: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x7999acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_7999b0:
    // 0x7999b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7999b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7999b4:
    // 0x7999b4: 0x0  nop
    ctx->pc = 0x7999b4u;
    // NOP
label_7999b8:
    // 0x7999b8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x7999b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_7999bc:
    // 0x7999bc: 0x40f809  jalr        $v0
label_7999c0:
    if (ctx->pc == 0x7999C0u) {
        ctx->pc = 0x7999C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999BCu;
        // 0x7999c0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999C4u;
        goto label_7999c4;
    }
    ctx->pc = 0x7999BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x7999C4u);
        ctx->pc = 0x7999C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999BCu;
        // 0x7999c0: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999BCu, 0x7999C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x7999C4u;
label_7999c4:
    // 0x7999c4: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_7999c8:
    if (ctx->pc == 0x7999C8u) {
        ctx->pc = 0x7999C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999C4u;
        // 0x7999c8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999CCu;
        goto label_7999cc;
    }
    ctx->pc = 0x7999C4u;
    {
        const bool branch_taken_0x7999c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x7999c4) {
            ctx->pc = 0x7999C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999C4u;
            // 0x7999c8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999b8;
        }
    }
    ctx->pc = 0x7999CCu;
label_7999cc:
    // 0x7999cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7999ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_7999d0:
    // 0x7999d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7999d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_7999d4:
    // 0x7999d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7999d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7999d8:
    // 0x7999d8: 0x3e00008  jr          $ra
label_7999dc:
    if (ctx->pc == 0x7999DCu) {
        ctx->pc = 0x7999DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D8u;
        // 0x7999dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999E0u;
        goto label_fallthrough_0x7999d8;
    }
    ctx->pc = 0x7999D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7999DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999D8u;
        // 0x7999dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7999D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x7999d8:
    ctx->pc = 0x7999E0u;
}
} // namespace gh_r406
