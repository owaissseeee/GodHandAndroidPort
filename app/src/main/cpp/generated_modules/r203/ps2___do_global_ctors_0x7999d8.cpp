#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r203_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r203
{
// Function: __do_global_ctors
// Address: 0x7999d8 - 0x799a88
void ps2___do_global_ctors_0x7999d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x7999d8");
#endif

    switch (ctx->pc) {
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
        case 0x799a48u: goto label_799a48;
        case 0x799a4cu: goto label_799a4c;
        case 0x799a50u: goto label_799a50;
        case 0x799a54u: goto label_799a54;
        case 0x799a58u: goto label_799a58;
        case 0x799a5cu: goto label_799a5c;
        case 0x799a60u: goto label_799a60;
        case 0x799a64u: goto label_799a64;
        case 0x799a68u: goto label_799a68;
        case 0x799a6cu: goto label_799a6c;
        case 0x799a70u: goto label_799a70;
        case 0x799a74u: goto label_799a74;
        case 0x799a78u: goto label_799a78;
        case 0x799a7cu: goto label_799a7c;
        case 0x799a80u: goto label_799a80;
        case 0x799a84u: goto label_799a84;
        default: break;
    }

    ctx->pc = 0x7999d8u;

label_7999d8:
    // 0x7999d8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7999d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_7999dc:
    // 0x7999dc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7999dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_7999e0:
    // 0x7999e0: 0x8ce59c80  lw          $a1, -0x6380($a3)
    ctx->pc = 0x7999e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294941824)));
label_7999e4:
    // 0x7999e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7999e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_7999e8:
    // 0x7999e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7999e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_7999ec:
    // 0x7999ec: 0x24e39c80  addiu       $v1, $a3, -0x6380
    ctx->pc = 0x7999ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941824));
label_7999f0:
    // 0x7999f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7999f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_7999f4:
    // 0x7999f4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_7999f8:
    if (ctx->pc == 0x7999F8u) {
        ctx->pc = 0x7999F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F4u;
        // 0x7999f8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x7999FCu;
        goto label_7999fc;
    }
    ctx->pc = 0x7999F4u;
    {
        const bool branch_taken_0x7999f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x7999F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F4u;
        // 0x7999f8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999f4) {
            ctx->pc = 0x799A3Cu;
            goto label_799a3c;
        }
    }
    ctx->pc = 0x7999FCu;
label_7999fc:
    // 0x7999fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7999fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_799a00:
    // 0x799a00: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_799a04:
    if (ctx->pc == 0x799A04u) {
        ctx->pc = 0x799A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A00u;
        // 0x799a04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A08u;
        goto label_799a08;
    }
    ctx->pc = 0x799A00u;
    {
        const bool branch_taken_0x799a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A00u;
        // 0x799a04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a00) {
            ctx->pc = 0x799A3Cu;
            goto label_799a3c;
        }
    }
    ctx->pc = 0x799A08u;
label_799a08:
    // 0x799a08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_799a0c:
    // 0x799a0c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x799a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_799a10:
    // 0x799a10: 0x24e49c80  addiu       $a0, $a3, -0x6380
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941824));
label_799a14:
    // 0x799a14: 0x0  nop
    ctx->pc = 0x799a14u;
    // NOP
label_799a18:
    // 0x799a18: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x799a18u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_799a1c:
    // 0x799a1c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x799a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_799a20:
    // 0x799a20: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x799a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_799a24:
    // 0x799a24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x799a24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_799a28:
    // 0x799a28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x799a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_799a2c:
    // 0x799a2c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_799a30:
    // 0x799a30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_799a34:
    // 0x799a34: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_799a38:
    if (ctx->pc == 0x799A38u) {
        ctx->pc = 0x799A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A34u;
        // 0x799a38: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A3Cu;
        goto label_799a3c;
    }
    ctx->pc = 0x799A34u;
    {
        const bool branch_taken_0x799a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799a34) {
            ctx->pc = 0x799A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A34u;
            // 0x799a38: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a18;
        }
    }
    ctx->pc = 0x799A3Cu;
label_799a3c:
    // 0x799a3c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x799a3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_799a40:
    // 0x799a40: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x799a40u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_799a44:
    // 0x799a44: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_799a48:
    if (ctx->pc == 0x799A48u) {
        ctx->pc = 0x799A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A44u;
        // 0x799a48: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A4Cu;
        goto label_799a4c;
    }
    ctx->pc = 0x799A44u;
    {
        const bool branch_taken_0x799a44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A44u;
        // 0x799a48: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799a44) {
            ctx->pc = 0x799A74u;
            goto label_799a74;
        }
    }
    ctx->pc = 0x799A4Cu;
label_799a4c:
    // 0x799a4c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_799a50:
    // 0x799a50: 0x24429c80  addiu       $v0, $v0, -0x6380
    ctx->pc = 0x799a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941824));
label_799a54:
    // 0x799a54: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x799a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_799a58:
    // 0x799a58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x799a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_799a5c:
    // 0x799a5c: 0x0  nop
    ctx->pc = 0x799a5cu;
    // NOP
label_799a60:
    // 0x799a60: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x799a60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_799a64:
    // 0x799a64: 0x40f809  jalr        $v0
label_799a68:
    if (ctx->pc == 0x799A68u) {
        ctx->pc = 0x799A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A64u;
        // 0x799a68: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A6Cu;
        goto label_799a6c;
    }
    ctx->pc = 0x799A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x799A6Cu);
        ctx->pc = 0x799A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A64u;
        // 0x799a68: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A64u, 0x799A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799A6Cu;
label_799a6c:
    // 0x799a6c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_799a70:
    if (ctx->pc == 0x799A70u) {
        ctx->pc = 0x799A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A6Cu;
        // 0x799a70: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A74u;
        goto label_799a74;
    }
    ctx->pc = 0x799A6Cu;
    {
        const bool branch_taken_0x799a6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799a6c) {
            ctx->pc = 0x799A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A6Cu;
            // 0x799a70: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a60;
        }
    }
    ctx->pc = 0x799A74u;
label_799a74:
    // 0x799a74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_799a78:
    // 0x799a78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x799a78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_799a7c:
    // 0x799a7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x799a7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799a80:
    // 0x799a80: 0x3e00008  jr          $ra
label_799a84:
    if (ctx->pc == 0x799A84u) {
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799A88u;
        goto label_fallthrough_0x799a80;
    }
    ctx->pc = 0x799A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A80u;
        // 0x799a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x799a80:
    ctx->pc = 0x799A88u;
}
} // namespace gh_r203
