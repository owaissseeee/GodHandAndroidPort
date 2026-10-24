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

// Function: func_0037DA28
// Address: 0x37da28 - 0x37dc88
void func_0037DA28_0x37da28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037DA28_0x37da28");
#endif

    switch (ctx->pc) {
        case 0x37da60u: goto label_37da60;
        case 0x37da74u: goto label_37da74;
        case 0x37dab0u: goto label_37dab0;
        case 0x37dae4u: goto label_37dae4;
        case 0x37db18u: goto label_37db18;
        case 0x37db44u: goto label_37db44;
        case 0x37db4cu: goto label_37db4c;
        case 0x37db68u: goto label_37db68;
        case 0x37db7cu: goto label_37db7c;
        case 0x37db8cu: goto label_37db8c;
        case 0x37db9cu: goto label_37db9c;
        case 0x37dbacu: goto label_37dbac;
        case 0x37dbd8u: goto label_37dbd8;
        case 0x37dc28u: goto label_37dc28;
        default: break;
    }

    ctx->pc = 0x37da28u;

    // 0x37da28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x37da28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x37da2c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x37da2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x37da30: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x37da30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x37da34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37da34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37da38: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x37da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x37da3c: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x37da3cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x37da40: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x37da40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x37da44: 0x2690b168  addiu       $s0, $s4, -0x4E98
    ctx->pc = 0x37da44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947176));
    // 0x37da48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37da48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37da4c: 0x26510014  addiu       $s1, $s2, 0x14
    ctx->pc = 0x37da4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x37da50: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x37da50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x37da54: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x37da54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x37da58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37da58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37da5c: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x37da5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37da60:
    // 0x37da60: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x37da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x37da64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37DA64u;
    {
        const bool branch_taken_0x37da64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37da64) {
            ctx->pc = 0x37DA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37DA64u;
            // 0x37da68: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37DA7Cu;
            goto label_37da7c;
        }
    }
    ctx->pc = 0x37DA6Cu;
    // 0x37da6c: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37DA6Cu;
    SET_GPR_U32(ctx, 31, 0x37DA74u);
    ctx->pc = 0x37DA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DA6Cu;
    // 0x37da70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37DA6Cu, 0x37DA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DA74u;
label_37da74:
    // 0x37da74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37DA74u;
    {
        const bool branch_taken_0x37da74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DA74u;
        // 0x37da78: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37da74) {
            ctx->pc = 0x37DA88u;
            goto label_37da88;
        }
    }
    ctx->pc = 0x37DA7Cu;
label_37da7c:
    // 0x37da7c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x37da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37da80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37da80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37da84: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x37da84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_37da88:
    // 0x37da88: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x37da88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x37da8c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x37da8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x37da90: 0x1675fff3  bne         $s3, $s5, . + 4 + (-0xD << 2)
    ctx->pc = 0x37DA90u;
    {
        const bool branch_taken_0x37da90 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 21));
        ctx->pc = 0x37DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DA90u;
        // 0x37da94: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37da90) {
            ctx->pc = 0x37DA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37da60;
        }
    }
    ctx->pc = 0x37DA98u;
    // 0x37da98: 0x2684b168  addiu       $a0, $s4, -0x4E98
    ctx->pc = 0x37da98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947176));
    // 0x37da9c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37daa0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37DAA0u;
    {
        const bool branch_taken_0x37daa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DAA0u;
        // 0x37daa4: 0x2650003c  addiu       $s0, $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37daa0) {
            ctx->pc = 0x37DAB8u;
            goto label_37dab8;
        }
    }
    ctx->pc = 0x37DAA8u;
    // 0x37daa8: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37DAA8u;
    SET_GPR_U32(ctx, 31, 0x37DAB0u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37DAA8u, 0x37DAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DAB0u;
label_37dab0:
    // 0x37dab0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37DAB0u;
    {
        const bool branch_taken_0x37dab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DAB0u;
        // 0x37dab4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dab0) {
            ctx->pc = 0x37DAC8u;
            goto label_37dac8;
        }
    }
    ctx->pc = 0x37DAB8u;
label_37dab8:
    // 0x37dab8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37dabc: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x37dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x37dac0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37dac4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37dac8:
    // 0x37dac8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x37dacc: 0x2684b168  addiu       $a0, $s4, -0x4E98
    ctx->pc = 0x37daccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947176));
    // 0x37dad0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37dad4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37DAD4u;
    {
        const bool branch_taken_0x37dad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DAD4u;
        // 0x37dad8: 0x26500040  addiu       $s0, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dad4) {
            ctx->pc = 0x37DAECu;
            goto label_37daec;
        }
    }
    ctx->pc = 0x37DADCu;
    // 0x37dadc: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37DADCu;
    SET_GPR_U32(ctx, 31, 0x37DAE4u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37DADCu, 0x37DAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DAE4u;
label_37dae4:
    // 0x37dae4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37DAE4u;
    {
        const bool branch_taken_0x37dae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DAE4u;
        // 0x37dae8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dae4) {
            ctx->pc = 0x37DAFCu;
            goto label_37dafc;
        }
    }
    ctx->pc = 0x37DAECu;
label_37daec:
    // 0x37daec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37daf0: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x37daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x37daf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37daf8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37dafc:
    // 0x37dafc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37dafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x37db00: 0x2684b168  addiu       $a0, $s4, -0x4E98
    ctx->pc = 0x37db00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947176));
    // 0x37db04: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37db04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37db08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37DB08u;
    {
        const bool branch_taken_0x37db08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DB08u;
        // 0x37db0c: 0x26500044  addiu       $s0, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37db08) {
            ctx->pc = 0x37DB20u;
            goto label_37db20;
        }
    }
    ctx->pc = 0x37DB10u;
    // 0x37db10: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37DB10u;
    SET_GPR_U32(ctx, 31, 0x37DB18u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37DB10u, 0x37DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DB18u;
label_37db18:
    // 0x37db18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37DB18u;
    {
        const bool branch_taken_0x37db18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DB18u;
        // 0x37db1c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37db18) {
            ctx->pc = 0x37DB30u;
            goto label_37db30;
        }
    }
    ctx->pc = 0x37DB20u;
label_37db20:
    // 0x37db20: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37db20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37db24: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x37db24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x37db28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37db28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37db2c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37db30:
    // 0x37db30: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37db30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x37db34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37db34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37db38: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x37db38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x37db3c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x37DB3Cu;
    SET_GPR_U32(ctx, 31, 0x37DB44u);
    ctx->pc = 0x37DB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DB3Cu;
    // 0x37db40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x37DB3Cu, 0x37DB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DB44u;
label_37db44:
    // 0x37db44: 0xc0c3d54  jal         func_30F550
    ctx->pc = 0x37DB44u;
    SET_GPR_U32(ctx, 31, 0x37DB4Cu);
    ctx->pc = 0x37DB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DB44u;
    // 0x37db48: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F550u, 0x37DB44u, 0x37DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DB4Cu;
label_37db4c:
    // 0x37db4c: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x37db4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x37db50: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x37db50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x37db54: 0x24e72878  addiu       $a3, $a3, 0x2878
    ctx->pc = 0x37db54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10360));
    // 0x37db58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37db58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37db5c: 0x24a5c130  addiu       $a1, $a1, -0x3ED0
    ctx->pc = 0x37db5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951216));
    // 0x37db60: 0xc0e169a  jal         func_385A68
    ctx->pc = 0x37DB60u;
    SET_GPR_U32(ctx, 31, 0x37DB68u);
    ctx->pc = 0x37DB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DB60u;
    // 0x37db64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385A68u, 0x37DB60u, 0x37DB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DB68u;
label_37db68:
    // 0x37db68: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x37db68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x37db6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37db6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37db70: 0x240602d0  addiu       $a2, $zero, 0x2D0
    ctx->pc = 0x37db70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 720));
    // 0x37db74: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x37DB74u;
    SET_GPR_U32(ctx, 31, 0x37DB7Cu);
    ctx->pc = 0x37DB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DB74u;
    // 0x37db78: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x37DB74u, 0x37DB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DB7Cu;
label_37db7c:
    // 0x37db7c: 0x26440318  addiu       $a0, $s2, 0x318
    ctx->pc = 0x37db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 792));
    // 0x37db80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37db80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37db84: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x37DB84u;
    SET_GPR_U32(ctx, 31, 0x37DB8Cu);
    ctx->pc = 0x37DB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DB84u;
    // 0x37db88: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x37DB84u, 0x37DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DB8Cu;
label_37db8c:
    // 0x37db8c: 0x26440370  addiu       $a0, $s2, 0x370
    ctx->pc = 0x37db8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 880));
    // 0x37db90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37db90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37db94: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x37DB94u;
    SET_GPR_U32(ctx, 31, 0x37DB9Cu);
    ctx->pc = 0x37DB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DB94u;
    // 0x37db98: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x37DB94u, 0x37DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DB9Cu;
label_37db9c:
    // 0x37db9c: 0x26440470  addiu       $a0, $s2, 0x470
    ctx->pc = 0x37db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1136));
    // 0x37dba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37dba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dba4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x37DBA4u;
    SET_GPR_U32(ctx, 31, 0x37DBACu);
    ctx->pc = 0x37DBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DBA4u;
    // 0x37dba8: 0x24060088  addiu       $a2, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x37DBA4u, 0x37DBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37DBACu;
label_37dbac:
    // 0x37dbac: 0x264d0326  addiu       $t5, $s2, 0x326
    ctx->pc = 0x37dbacu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 806));
    // 0x37dbb0: 0x264c0330  addiu       $t4, $s2, 0x330
    ctx->pc = 0x37dbb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x37dbb4: 0x264b033a  addiu       $t3, $s2, 0x33A
    ctx->pc = 0x37dbb4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 826));
    // 0x37dbb8: 0x264a0382  addiu       $t2, $s2, 0x382
    ctx->pc = 0x37dbb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 898));
    // 0x37dbbc: 0x2649038c  addiu       $t1, $s2, 0x38C
    ctx->pc = 0x37dbbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 908));
    // 0x37dbc0: 0x26470396  addiu       $a3, $s2, 0x396
    ctx->pc = 0x37dbc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 918));
    // 0x37dbc4: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x37dbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x37dbc8: 0x2404ff80  addiu       $a0, $zero, -0x80
    ctx->pc = 0x37dbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x37dbcc: 0x264502d0  addiu       $a1, $s2, 0x2D0
    ctx->pc = 0x37dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
    // 0x37dbd0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x37dbd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dbd4: 0xa466004e  sh          $a2, 0x4E($v1)
    ctx->pc = 0x37dbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 78), (uint16_t)GPR_U32(ctx, 6));
label_37dbd8:
    // 0x37dbd8: 0xa4640050  sh          $a0, 0x50($v1)
    ctx->pc = 0x37dbd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 80), (uint16_t)GPR_U32(ctx, 4));
    // 0x37dbdc: 0xa4640052  sh          $a0, 0x52($v1)
    ctx->pc = 0x37dbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 82), (uint16_t)GPR_U32(ctx, 4));
    // 0x37dbe0: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x37dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x37dbe4: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x37dbe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x37dbe8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x37DBE8u;
    {
        const bool branch_taken_0x37dbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37dbe8) {
            ctx->pc = 0x37DBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37DBE8u;
            // 0x37dbec: 0xa466004e  sh          $a2, 0x4E($v1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 3), 78), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37DBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37dbd8;
        }
    }
    ctx->pc = 0x37DBF0u;
    // 0x37dbf0: 0x2403ff80  addiu       $v1, $zero, -0x80
    ctx->pc = 0x37dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x37dbf4: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x37dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x37dbf8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x37dbf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dbfc: 0xa6420476  sh          $v0, 0x476($s2)
    ctx->pc = 0x37dbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1142), (uint16_t)GPR_U32(ctx, 2));
    // 0x37dc00: 0xa643047a  sh          $v1, 0x47A($s2)
    ctx->pc = 0x37dc00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1146), (uint16_t)GPR_U32(ctx, 3));
    // 0x37dc04: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x37dc04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dc08: 0xa6430478  sh          $v1, 0x478($s2)
    ctx->pc = 0x37dc08u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1144), (uint16_t)GPR_U32(ctx, 3));
    // 0x37dc0c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x37dc0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dc10: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x37dc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dc14: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x37dc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dc18: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x37dc18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dc1c: 0x240a007f  addiu       $t2, $zero, 0x7F
    ctx->pc = 0x37dc1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x37dc20: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x37dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x37dc24: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x37dc24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37dc28:
    // 0x37dc28: 0xa46a0000  sh          $t2, 0x0($v1)
    ctx->pc = 0x37dc28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x37dc2c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x37dc2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x37dc30: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x37dc30u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37dc34: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x37dc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x37dc38: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x37dc38u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37dc3c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x37dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x37dc40: 0xa4ca0000  sh          $t2, 0x0($a2)
    ctx->pc = 0x37dc40u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 10));
    // 0x37dc44: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x37dc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x37dc48: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x37dc48u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37dc4c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x37dc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x37dc50: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x37dc50u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37dc54: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x37dc54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x37dc58: 0x521fff3  bgez        $t1, . + 4 + (-0xD << 2)
    ctx->pc = 0x37DC58u;
    {
        const bool branch_taken_0x37dc58 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x37DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DC58u;
        // 0x37dc5c: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dc58) {
            ctx->pc = 0x37DC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37dc28;
        }
    }
    ctx->pc = 0x37DC60u;
    // 0x37dc60: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x37dc60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37dc64: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x37dc64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37dc68: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x37dc68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37dc6c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x37dc6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37dc70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37dc70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37dc74: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x37dc74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37dc78: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x37dc78u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37dc7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37dc7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37dc80: 0x3e00008  jr          $ra
    ctx->pc = 0x37DC80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DC80u;
        // 0x37dc84: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37DC80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37DC88u;
}
