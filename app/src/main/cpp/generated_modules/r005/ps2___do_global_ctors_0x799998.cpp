#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r005_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r005
{
// Function: __do_global_ctors
// Address: 0x799998 - 0x799a48
void ps2___do_global_ctors_0x799998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x799998");
#endif

    switch (ctx->pc) {
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
        case 0x7999e0u: goto label_7999e0;
        case 0x7999e4u: goto label_7999e4;
        case 0x7999e8u: goto label_7999e8;
        case 0x7999ecu: goto label_7999ec;
        case 0x7999f0u: goto label_7999f0;
        case 0x7999f4u: goto label_7999f4;
        case 0x7999f8u: goto label_7999f8;
        case 0x7999fcu: goto label_7999fc;
        case 0x799a00u: goto label_799a00;
        case 0x799a04u: goto label_799a04;
        case 0x799a08u: goto label_799a08;
        case 0x799a0cu: goto label_799a0c;
        case 0x799a10u: goto label_799a10;
        case 0x799a14u: goto label_799a14;
        case 0x799a18u: goto label_799a18;
        case 0x799a1cu: goto label_799a1c;
        case 0x799a20u: goto label_799a20;
        case 0x799a24u: goto label_799a24;
        case 0x799a28u: goto label_799a28;
        case 0x799a2cu: goto label_799a2c;
        case 0x799a30u: goto label_799a30;
        case 0x799a34u: goto label_799a34;
        case 0x799a38u: goto label_799a38;
        case 0x799a3cu: goto label_799a3c;
        case 0x799a40u: goto label_799a40;
        case 0x799a44u: goto label_799a44;
        default: break;
    }

    ctx->pc = 0x799998u;

label_799998:
    // 0x799998: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x799998u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79999c:
    // 0x79999c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79999cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_7999a0:
    // 0x7999a0: 0x8ce59e00  lw          $a1, -0x6200($a3)
    ctx->pc = 0x7999a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294942208)));
label_7999a4:
    // 0x7999a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7999a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7999a8:
    // 0x7999a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7999a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_7999ac:
    // 0x7999ac: 0x24e39e00  addiu       $v1, $a3, -0x6200
    ctx->pc = 0x7999acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942208));
label_7999b0:
    // 0x7999b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7999b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_7999b4:
    // 0x7999b4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_7999b8:
    if (ctx->pc == 0x7999B8u) {
        ctx->pc = 0x7999B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B4u;
        // 0x7999b8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999BCu;
        goto label_7999bc;
    }
    ctx->pc = 0x7999B4u;
    {
        const bool branch_taken_0x7999b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7999B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999B4u;
        // 0x7999b8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999b4) {
            ctx->pc = 0x7999FCu;
            goto label_7999fc;
        }
    }
    ctx->pc = 0x7999BCu;
label_7999bc:
    // 0x7999bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7999bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_7999c0:
    // 0x7999c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_7999c4:
    if (ctx->pc == 0x7999C4u) {
        ctx->pc = 0x7999C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999C0u;
        // 0x7999c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999C8u;
        goto label_7999c8;
    }
    ctx->pc = 0x7999C0u;
    {
        const bool branch_taken_0x7999c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999C0u;
        // 0x7999c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999c0) {
            ctx->pc = 0x7999FCu;
            goto label_7999fc;
        }
    }
    ctx->pc = 0x7999C8u;
label_7999c8:
    // 0x7999c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7999c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_7999cc:
    // 0x7999cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x7999ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_7999d0:
    // 0x7999d0: 0x24e49e00  addiu       $a0, $a3, -0x6200
    ctx->pc = 0x7999d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942208));
label_7999d4:
    // 0x7999d4: 0x0  nop
    ctx->pc = 0x7999d4u;
    // NOP
label_7999d8:
    // 0x7999d8: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x7999d8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_7999dc:
    // 0x7999dc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7999dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_7999e0:
    // 0x7999e0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x7999e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_7999e4:
    // 0x7999e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x7999e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_7999e8:
    // 0x7999e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7999e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_7999ec:
    // 0x7999ec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7999ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_7999f0:
    // 0x7999f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7999f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_7999f4:
    // 0x7999f4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_7999f8:
    if (ctx->pc == 0x7999F8u) {
        ctx->pc = 0x7999F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F4u;
        // 0x7999f8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999FCu;
        goto label_7999fc;
    }
    ctx->pc = 0x7999F4u;
    {
        const bool branch_taken_0x7999f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x7999f4) {
            ctx->pc = 0x7999F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999F4u;
            // 0x7999f8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7999D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7999d8;
        }
    }
    ctx->pc = 0x7999FCu;
label_7999fc:
    // 0x7999fc: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x7999fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799a00:
    // 0x799a00: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799a00u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_799a04:
    // 0x799a04: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799a08:
    if (ctx->pc == 0x799A08u) {
        ctx->pc = 0x799A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A04u;
        // 0x799a08: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A0Cu;
        goto label_799a0c;
    }
    ctx->pc = 0x799A04u;
    {
        const bool branch_taken_0x799a04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A04u;
        // 0x799a08: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a04) {
            ctx->pc = 0x799A34u;
            goto label_799a34;
        }
    }
    ctx->pc = 0x799A0Cu;
label_799a0c:
    // 0x799a0c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799a10:
    // 0x799a10: 0x24429e00  addiu       $v0, $v0, -0x6200
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942208));
label_799a14:
    // 0x799a14: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x799a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799a18:
    // 0x799a18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799a1c:
    // 0x799a1c: 0x0  nop
    ctx->pc = 0x799a1cu;
    // NOP
label_799a20:
    // 0x799a20: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_799a24:
    // 0x799a24: 0x40f809  jalr        $v0
label_799a28:
    if (ctx->pc == 0x799A28u) {
        ctx->pc = 0x799A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A24u;
        // 0x799a28: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A2Cu;
        goto label_799a2c;
    }
    ctx->pc = 0x799A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799A2Cu);
        ctx->pc = 0x799A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A24u;
        // 0x799a28: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A24u, 0x799A2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799A2Cu;
label_799a2c:
    // 0x799a2c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799a30:
    if (ctx->pc == 0x799A30u) {
        ctx->pc = 0x799A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A2Cu;
        // 0x799a30: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A34u;
        goto label_799a34;
    }
    ctx->pc = 0x799A2Cu;
    {
        const bool branch_taken_0x799a2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799a2c) {
            ctx->pc = 0x799A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A2Cu;
            // 0x799a30: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a20;
        }
    }
    ctx->pc = 0x799A34u;
label_799a34:
    // 0x799a34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799a38:
    // 0x799a38: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799a38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799a3c:
    // 0x799a3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799a40:
    // 0x799a40: 0x3e00008  jr          $ra
label_799a44:
    if (ctx->pc == 0x799A44u) {
        ctx->pc = 0x799A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A40u;
        // 0x799a44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A48u;
        goto label_fallthrough_0x799a40;
    }
    ctx->pc = 0x799A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A40u;
        // 0x799a44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799a40:
    ctx->pc = 0x799A48u;
}
} // namespace gh_r005
