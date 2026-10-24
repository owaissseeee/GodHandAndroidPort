#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: __do_global_ctors
// Address: 0x79dac8 - 0x79db78
void ps2___do_global_ctors_0x79dac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x79dac8");
#endif

    switch (ctx->pc) {
        case 0x79dac8u: goto label_79dac8;
        case 0x79daccu: goto label_79dacc;
        case 0x79dad0u: goto label_79dad0;
        case 0x79dad4u: goto label_79dad4;
        case 0x79dad8u: goto label_79dad8;
        case 0x79dadcu: goto label_79dadc;
        case 0x79dae0u: goto label_79dae0;
        case 0x79dae4u: goto label_79dae4;
        case 0x79dae8u: goto label_79dae8;
        case 0x79daecu: goto label_79daec;
        case 0x79daf0u: goto label_79daf0;
        case 0x79daf4u: goto label_79daf4;
        case 0x79daf8u: goto label_79daf8;
        case 0x79dafcu: goto label_79dafc;
        case 0x79db00u: goto label_79db00;
        case 0x79db04u: goto label_79db04;
        case 0x79db08u: goto label_79db08;
        case 0x79db0cu: goto label_79db0c;
        case 0x79db10u: goto label_79db10;
        case 0x79db14u: goto label_79db14;
        case 0x79db18u: goto label_79db18;
        case 0x79db1cu: goto label_79db1c;
        case 0x79db20u: goto label_79db20;
        case 0x79db24u: goto label_79db24;
        case 0x79db28u: goto label_79db28;
        case 0x79db2cu: goto label_79db2c;
        case 0x79db30u: goto label_79db30;
        case 0x79db34u: goto label_79db34;
        case 0x79db38u: goto label_79db38;
        case 0x79db3cu: goto label_79db3c;
        case 0x79db40u: goto label_79db40;
        case 0x79db44u: goto label_79db44;
        case 0x79db48u: goto label_79db48;
        case 0x79db4cu: goto label_79db4c;
        case 0x79db50u: goto label_79db50;
        case 0x79db54u: goto label_79db54;
        case 0x79db58u: goto label_79db58;
        case 0x79db5cu: goto label_79db5c;
        case 0x79db60u: goto label_79db60;
        case 0x79db64u: goto label_79db64;
        case 0x79db68u: goto label_79db68;
        case 0x79db6cu: goto label_79db6c;
        case 0x79db70u: goto label_79db70;
        case 0x79db74u: goto label_79db74;
        default: break;
    }

    ctx->pc = 0x79dac8u;

label_79dac8:
    // 0x79dac8: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x79dac8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
label_79dacc:
    // 0x79dacc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79daccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_79dad0:
    // 0x79dad0: 0x8ce5dcac  lw          $a1, -0x2354($a3)
    ctx->pc = 0x79dad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294958252)));
label_79dad4:
    // 0x79dad4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79dad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79dad8:
    // 0x79dad8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79dad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_79dadc:
    // 0x79dadc: 0x24e3dcac  addiu       $v1, $a3, -0x2354
    ctx->pc = 0x79dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958252));
label_79dae0:
    // 0x79dae0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x79dae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_79dae4:
    // 0x79dae4: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_79dae8:
    if (ctx->pc == 0x79DAE8u) {
        ctx->pc = 0x79DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DAE4u;
        // 0x79dae8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79DAECu;
        goto label_79daec;
    }
    ctx->pc = 0x79DAE4u;
    {
        const bool branch_taken_0x79dae4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x79DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DAE4u;
        // 0x79dae8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79dae4) {
            ctx->pc = 0x79DB2Cu;
            goto label_79db2c;
        }
    }
    ctx->pc = 0x79DAECu;
label_79daec:
    // 0x79daec: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x79daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_79daf0:
    // 0x79daf0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_79daf4:
    if (ctx->pc == 0x79DAF4u) {
        ctx->pc = 0x79DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DAF0u;
        // 0x79daf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79DAF8u;
        goto label_79daf8;
    }
    ctx->pc = 0x79DAF0u;
    {
        const bool branch_taken_0x79daf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DAF0u;
        // 0x79daf4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79daf0) {
            ctx->pc = 0x79DB2Cu;
            goto label_79db2c;
        }
    }
    ctx->pc = 0x79DAF8u;
label_79daf8:
    // 0x79daf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79daf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79dafc:
    // 0x79dafc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x79dafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_79db00:
    // 0x79db00: 0x24e4dcac  addiu       $a0, $a3, -0x2354
    ctx->pc = 0x79db00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958252));
label_79db04:
    // 0x79db04: 0x0  nop
    ctx->pc = 0x79db04u;
    // NOP
label_79db08:
    // 0x79db08: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x79db08u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_79db0c:
    // 0x79db0c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79db0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_79db10:
    // 0x79db10: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x79db10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_79db14:
    // 0x79db14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79db14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79db18:
    // 0x79db18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x79db18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_79db1c:
    // 0x79db1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x79db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_79db20:
    // 0x79db20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79db20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_79db24:
    // 0x79db24: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_79db28:
    if (ctx->pc == 0x79DB28u) {
        ctx->pc = 0x79DB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DB24u;
        // 0x79db28: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79DB2Cu;
        goto label_79db2c;
    }
    ctx->pc = 0x79DB24u;
    {
        const bool branch_taken_0x79db24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79db24) {
            ctx->pc = 0x79DB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79DB24u;
            // 0x79db28: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79DB08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79db08;
        }
    }
    ctx->pc = 0x79DB2Cu;
label_79db2c:
    // 0x79db2c: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x79db2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_79db30:
    // 0x79db30: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x79db30u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_79db34:
    // 0x79db34: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_79db38:
    if (ctx->pc == 0x79DB38u) {
        ctx->pc = 0x79DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DB34u;
        // 0x79db38: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79DB3Cu;
        goto label_79db3c;
    }
    ctx->pc = 0x79DB34u;
    {
        const bool branch_taken_0x79db34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DB34u;
        // 0x79db38: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79db34) {
            ctx->pc = 0x79DB64u;
            goto label_79db64;
        }
    }
    ctx->pc = 0x79DB3Cu;
label_79db3c:
    // 0x79db3c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_79db40:
    // 0x79db40: 0x2442dcac  addiu       $v0, $v0, -0x2354
    ctx->pc = 0x79db40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958252));
label_79db44:
    // 0x79db44: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x79db44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_79db48:
    // 0x79db48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79db48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_79db4c:
    // 0x79db4c: 0x0  nop
    ctx->pc = 0x79db4cu;
    // NOP
label_79db50:
    // 0x79db50: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x79db50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_79db54:
    // 0x79db54: 0x40f809  jalr        $v0
label_79db58:
    if (ctx->pc == 0x79DB58u) {
        ctx->pc = 0x79DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DB54u;
        // 0x79db58: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79DB5Cu;
        goto label_79db5c;
    }
    ctx->pc = 0x79DB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x79DB5Cu);
        ctx->pc = 0x79DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DB54u;
        // 0x79db58: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79DB54u, 0x79DB5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79DB5Cu;
label_79db5c:
    // 0x79db5c: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_79db60:
    if (ctx->pc == 0x79DB60u) {
        ctx->pc = 0x79DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DB5Cu;
        // 0x79db60: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79DB64u;
        goto label_79db64;
    }
    ctx->pc = 0x79DB5Cu;
    {
        const bool branch_taken_0x79db5c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79db5c) {
            ctx->pc = 0x79DB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79DB5Cu;
            // 0x79db60: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79DB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79db50;
        }
    }
    ctx->pc = 0x79DB64u;
label_79db64:
    // 0x79db64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79db64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79db68:
    // 0x79db68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x79db68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_79db6c:
    // 0x79db6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x79db6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79db70:
    // 0x79db70: 0x3e00008  jr          $ra
label_79db74:
    if (ctx->pc == 0x79DB74u) {
        ctx->pc = 0x79DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DB70u;
        // 0x79db74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79DB78u;
        goto label_fallthrough_0x79db70;
    }
    ctx->pc = 0x79DB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79DB70u;
        // 0x79db74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79DB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x79db70:
    ctx->pc = 0x79DB78u;
}
} // namespace gh_r301
