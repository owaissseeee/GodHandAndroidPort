#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __do_global_ctors
// Address: 0x31daa0 - 0x31db50
void ps2___do_global_ctors_0x31daa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_ctors_0x31daa0");
#endif

    switch (ctx->pc) {
        case 0x31daa0u: goto label_31daa0;
        case 0x31daa4u: goto label_31daa4;
        case 0x31daa8u: goto label_31daa8;
        case 0x31daacu: goto label_31daac;
        case 0x31dab0u: goto label_31dab0;
        case 0x31dab4u: goto label_31dab4;
        case 0x31dab8u: goto label_31dab8;
        case 0x31dabcu: goto label_31dabc;
        case 0x31dac0u: goto label_31dac0;
        case 0x31dac4u: goto label_31dac4;
        case 0x31dac8u: goto label_31dac8;
        case 0x31daccu: goto label_31dacc;
        case 0x31dad0u: goto label_31dad0;
        case 0x31dad4u: goto label_31dad4;
        case 0x31dad8u: goto label_31dad8;
        case 0x31dadcu: goto label_31dadc;
        case 0x31dae0u: goto label_31dae0;
        case 0x31dae4u: goto label_31dae4;
        case 0x31dae8u: goto label_31dae8;
        case 0x31daecu: goto label_31daec;
        case 0x31daf0u: goto label_31daf0;
        case 0x31daf4u: goto label_31daf4;
        case 0x31daf8u: goto label_31daf8;
        case 0x31dafcu: goto label_31dafc;
        case 0x31db00u: goto label_31db00;
        case 0x31db04u: goto label_31db04;
        case 0x31db08u: goto label_31db08;
        case 0x31db0cu: goto label_31db0c;
        case 0x31db10u: goto label_31db10;
        case 0x31db14u: goto label_31db14;
        case 0x31db18u: goto label_31db18;
        case 0x31db1cu: goto label_31db1c;
        case 0x31db20u: goto label_31db20;
        case 0x31db24u: goto label_31db24;
        case 0x31db28u: goto label_31db28;
        case 0x31db2cu: goto label_31db2c;
        case 0x31db30u: goto label_31db30;
        case 0x31db34u: goto label_31db34;
        case 0x31db38u: goto label_31db38;
        case 0x31db3cu: goto label_31db3c;
        case 0x31db40u: goto label_31db40;
        case 0x31db44u: goto label_31db44;
        case 0x31db48u: goto label_31db48;
        case 0x31db4cu: goto label_31db4c;
        default: break;
    }

    ctx->pc = 0x31daa0u;

label_31daa0:
    // 0x31daa0: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x31daa0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
label_31daa4:
    // 0x31daa4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31daa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_31daa8:
    // 0x31daa8: 0x8ce5c880  lw          $a1, -0x3780($a3)
    ctx->pc = 0x31daa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294953088)));
label_31daac:
    // 0x31daac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31daacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31dab0:
    // 0x31dab0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31dab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31dab4:
    // 0x31dab4: 0x24e3c880  addiu       $v1, $a3, -0x3780
    ctx->pc = 0x31dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953088));
label_31dab8:
    // 0x31dab8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x31dab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_31dabc:
    // 0x31dabc: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
label_31dac0:
    if (ctx->pc == 0x31DAC0u) {
        ctx->pc = 0x31DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DABCu;
        // 0x31dac0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DAC4u;
        goto label_31dac4;
    }
    ctx->pc = 0x31DABCu;
    {
        const bool branch_taken_0x31dabc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x31DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DABCu;
        // 0x31dac0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dabc) {
            ctx->pc = 0x31DB04u;
            goto label_31db04;
        }
    }
    ctx->pc = 0x31DAC4u;
label_31dac4:
    // 0x31dac4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x31dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_31dac8:
    // 0x31dac8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_31dacc:
    if (ctx->pc == 0x31DACCu) {
        ctx->pc = 0x31DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAC8u;
        // 0x31dacc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DAD0u;
        goto label_31dad0;
    }
    ctx->pc = 0x31DAC8u;
    {
        const bool branch_taken_0x31dac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAC8u;
        // 0x31dacc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dac8) {
            ctx->pc = 0x31DB04u;
            goto label_31db04;
        }
    }
    ctx->pc = 0x31DAD0u;
label_31dad0:
    // 0x31dad0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31dad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31dad4:
    // 0x31dad4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x31dad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31dad8:
    // 0x31dad8: 0x24e4c880  addiu       $a0, $a3, -0x3780
    ctx->pc = 0x31dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953088));
label_31dadc:
    // 0x31dadc: 0x0  nop
    ctx->pc = 0x31dadcu;
    // NOP
label_31dae0:
    // 0x31dae0: 0x64a30001  daddiu      $v1, $a1, 0x1
    ctx->pc = 0x31dae0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
label_31dae4:
    // 0x31dae4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x31dae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31dae8:
    // 0x31dae8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x31dae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_31daec:
    // 0x31daec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31daecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_31daf0:
    // 0x31daf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x31daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_31daf4:
    // 0x31daf4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x31daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_31daf8:
    // 0x31daf8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31daf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31dafc:
    // 0x31dafc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_31db00:
    if (ctx->pc == 0x31DB00u) {
        ctx->pc = 0x31DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAFCu;
        // 0x31db00: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB04u;
        goto label_31db04;
    }
    ctx->pc = 0x31DAFCu;
    {
        const bool branch_taken_0x31dafc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31dafc) {
            ctx->pc = 0x31DB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DAFCu;
            // 0x31db00: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DAE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dae0;
        }
    }
    ctx->pc = 0x31DB04u;
label_31db04:
    // 0x31db04: 0x5883c  dsll32      $s1, $a1, 0
    ctx->pc = 0x31db04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) << (32 + 0));
label_31db08:
    // 0x31db08: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x31db08u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_31db0c:
    // 0x31db0c: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_31db10:
    if (ctx->pc == 0x31DB10u) {
        ctx->pc = 0x31DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB0Cu;
        // 0x31db10: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB14u;
        goto label_31db14;
    }
    ctx->pc = 0x31DB0Cu;
    {
        const bool branch_taken_0x31db0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB0Cu;
        // 0x31db10: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31db0c) {
            ctx->pc = 0x31DB3Cu;
            goto label_31db3c;
        }
    }
    ctx->pc = 0x31DB14u;
label_31db14:
    // 0x31db14: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x31db14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_31db18:
    // 0x31db18: 0x2442c880  addiu       $v0, $v0, -0x3780
    ctx->pc = 0x31db18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953088));
label_31db1c:
    // 0x31db1c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x31db1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31db20:
    // 0x31db20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31db20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31db24:
    // 0x31db24: 0x0  nop
    ctx->pc = 0x31db24u;
    // NOP
label_31db28:
    // 0x31db28: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x31db28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_31db2c:
    // 0x31db2c: 0x40f809  jalr        $v0
label_31db30:
    if (ctx->pc == 0x31DB30u) {
        ctx->pc = 0x31DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB2Cu;
        // 0x31db30: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB34u;
        goto label_31db34;
    }
    ctx->pc = 0x31DB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31DB34u);
        ctx->pc = 0x31DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB2Cu;
        // 0x31db30: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DB2Cu, 0x31DB34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31DB34u;
label_31db34:
    // 0x31db34: 0x5620fffc  bnel        $s1, $zero, . + 4 + (-0x4 << 2)
label_31db38:
    if (ctx->pc == 0x31DB38u) {
        ctx->pc = 0x31DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB34u;
        // 0x31db38: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB3Cu;
        goto label_31db3c;
    }
    ctx->pc = 0x31DB34u;
    {
        const bool branch_taken_0x31db34 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x31db34) {
            ctx->pc = 0x31DB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DB34u;
            // 0x31db38: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31db28;
        }
    }
    ctx->pc = 0x31DB3Cu;
label_31db3c:
    // 0x31db3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31db3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31db40:
    // 0x31db40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x31db40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31db44:
    // 0x31db44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31db44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31db48:
    // 0x31db48: 0x3e00008  jr          $ra
label_31db4c:
    if (ctx->pc == 0x31DB4Cu) {
        ctx->pc = 0x31DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB48u;
        // 0x31db4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DB50u;
        goto label_fallthrough_0x31db48;
    }
    ctx->pc = 0x31DB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DB48u;
        // 0x31db4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31db48:
    ctx->pc = 0x31DB50u;
}
