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

// Function: func_00356C68
// Address: 0x356c68 - 0x356e80
void func_00356C68_0x356c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00356C68_0x356c68");
#endif

    switch (ctx->pc) {
        case 0x356cf8u: goto label_356cf8;
        case 0x356d60u: goto label_356d60;
        case 0x356dc8u: goto label_356dc8;
        case 0x356dd0u: goto label_356dd0;
        case 0x356e14u: goto label_356e14;
        case 0x356e34u: goto label_356e34;
        case 0x356e44u: goto label_356e44;
        case 0x356e58u: goto label_356e58;
        default: break;
    }

    ctx->pc = 0x356c68u;

    // 0x356c68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x356c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x356c6c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x356c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x356c70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x356c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x356c74: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x356c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356c78: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x356c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x356c7c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x356c7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356c80: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x356c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x356c84: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x356c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356c88: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x356c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x356c8c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x356c8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356c90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x356c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x356c94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x356c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356c98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x356c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x356c9c: 0x8e831fc0  lw          $v1, 0x1FC0($s4)
    ctx->pc = 0x356c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8128)));
    // 0x356ca0: 0x24711128  addiu       $s1, $v1, 0x1128
    ctx->pc = 0x356ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4392));
    // 0x356ca4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x356ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x356ca8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x356ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x356cac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x356cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x356cb0: 0x92250010  lbu         $a1, 0x10($s1)
    ctx->pc = 0x356cb0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x356cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356cb8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x356cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x356cbc: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x356cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x356cc0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x356cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x356cc4: 0xa3a50000  sb          $a1, 0x0($sp)
    ctx->pc = 0x356cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x356cc8: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x356cc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x356ccc: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x356cccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x356cd0: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x356cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x356cd4: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x356cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x356cd8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x356cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x356cdc: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x356cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x356ce0: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x356ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x356ce4: 0xa3a30004  sb          $v1, 0x4($sp)
    ctx->pc = 0x356ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x356ce8: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x356ce8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x356cec: 0xa3a20005  sb          $v0, 0x5($sp)
    ctx->pc = 0x356cecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x356cf0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x356CF0u;
    {
        const bool branch_taken_0x356cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356CF0u;
        // 0x356cf4: 0x2a470004  slti        $a3, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x356cf0) {
            ctx->pc = 0x356D4Cu;
            goto label_356d4c;
        }
    }
    ctx->pc = 0x356CF8u;
label_356cf8:
    // 0x356cf8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x356cf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356cfc: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x356CFCu;
    {
        const bool branch_taken_0x356cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x356D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356CFCu;
        // 0x356d00: 0x24c50001  addiu       $a1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356cfc) {
            ctx->pc = 0x356D48u;
            goto label_356d48;
        }
    }
    ctx->pc = 0x356D04u;
    // 0x356d04: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x356d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x356d08: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x356d08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356d0c: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x356D0Cu;
    {
        const bool branch_taken_0x356d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356d0c) {
            ctx->pc = 0x356D10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356D0Cu;
            // 0x356d10: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356D4Cu;
            goto label_356d4c;
        }
    }
    ctx->pc = 0x356D14u;
    // 0x356d14: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x356d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x356d18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x356d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356d1c: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x356d1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x356d20: 0x5464000a  bnel        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x356D20u;
    {
        const bool branch_taken_0x356d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x356d20) {
            ctx->pc = 0x356D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356D20u;
            // 0x356d24: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356D4Cu;
            goto label_356d4c;
        }
    }
    ctx->pc = 0x356D28u;
    // 0x356d28: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x356d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x356d2c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x356D2Cu;
    {
        const bool branch_taken_0x356d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x356D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D2Cu;
        // 0x356d30: 0x240200b7  addiu       $v0, $zero, 0xB7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356d2c) {
            ctx->pc = 0x356D98u;
            goto label_356d98;
        }
    }
    ctx->pc = 0x356D34u;
    // 0x356d34: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x356D34u;
    {
        const bool branch_taken_0x356d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x356d34) {
            ctx->pc = 0x356D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356D34u;
            // 0x356d38: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356D4Cu;
            goto label_356d4c;
        }
    }
    ctx->pc = 0x356D3Cu;
    // 0x356d3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x356D3Cu;
    {
        const bool branch_taken_0x356d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D3Cu;
        // 0x356d40: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356d3c) {
            ctx->pc = 0x356D60u;
            goto label_356d60;
        }
    }
    ctx->pc = 0x356D44u;
    // 0x356d44: 0x0  nop
    ctx->pc = 0x356d44u;
    // NOP
label_356d48:
    // 0x356d48: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x356d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_356d4c:
    // 0x356d4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x356d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x356d50: 0x247100b  movn        $v0, $s2, $a3
    ctx->pc = 0x356d50u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
    // 0x356d54: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x356d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x356d58: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x356D58u;
    {
        const bool branch_taken_0x356d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D58u;
        // 0x356d5c: 0x3a61021  addu        $v0, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356d58) {
            ctx->pc = 0x356CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356cf8;
        }
    }
    ctx->pc = 0x356D60u;
label_356d60:
    // 0x356d60: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x356d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x356d64: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x356D64u;
    {
        const bool branch_taken_0x356d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D64u;
        // 0x356d68: 0x2722021  addu        $a0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356d64) {
            ctx->pc = 0x356DA8u;
            goto label_356da8;
        }
    }
    ctx->pc = 0x356D6Cu;
    // 0x356d6c: 0x3b21021  addu        $v0, $sp, $s2
    ctx->pc = 0x356d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x356d70: 0x25d2021  addu        $a0, $s2, $sp
    ctx->pc = 0x356d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x356d74: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x356d74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356d78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x356d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356d7c: 0xa2230010  sb          $v1, 0x10($s1)
    ctx->pc = 0x356d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x356d80: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x356d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x356d84: 0xa2220011  sb          $v0, 0x11($s1)
    ctx->pc = 0x356d84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 2));
    // 0x356d88: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x356d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x356d8c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x356D8Cu;
    {
        const bool branch_taken_0x356d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D8Cu;
        // 0x356d90: 0xa2230012  sb          $v1, 0x12($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356d8c) {
            ctx->pc = 0x356DFCu;
            goto label_356dfc;
        }
    }
    ctx->pc = 0x356D94u;
    // 0x356d94: 0x0  nop
    ctx->pc = 0x356d94u;
    // NOP
label_356d98:
    // 0x356d98: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x356d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x356d9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x356d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x356da0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x356DA0u;
    {
        const bool branch_taken_0x356da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DA0u;
        // 0x356da4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356da0) {
            ctx->pc = 0x356D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356d60;
        }
    }
    ctx->pc = 0x356DA8u;
label_356da8:
    // 0x356da8: 0x9082fffd  lbu         $v0, -0x3($a0)
    ctx->pc = 0x356da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967293)));
    // 0x356dac: 0xa2220010  sb          $v0, 0x10($s1)
    ctx->pc = 0x356dacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x356db0: 0x9083fffe  lbu         $v1, -0x2($a0)
    ctx->pc = 0x356db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967294)));
    // 0x356db4: 0xa2230011  sb          $v1, 0x11($s1)
    ctx->pc = 0x356db4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x356db8: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x356db8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x356dbc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x356DBCu;
    {
        const bool branch_taken_0x356dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DBCu;
        // 0x356dc0: 0xa2220012  sb          $v0, 0x12($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 18), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356dbc) {
            ctx->pc = 0x356DFCu;
            goto label_356dfc;
        }
    }
    ctx->pc = 0x356DC4u;
    // 0x356dc4: 0x0  nop
    ctx->pc = 0x356dc4u;
    // NOP
label_356dc8:
    // 0x356dc8: 0xc0da476  jal         func_3691D8
    ctx->pc = 0x356DC8u;
    SET_GPR_U32(ctx, 31, 0x356DD0u);
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x356DC8u, 0x356DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356DD0u;
label_356dd0:
    // 0x356dd0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x356dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x356dd4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x356DD4u;
    {
        const bool branch_taken_0x356dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356dd4) {
            ctx->pc = 0x356DD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356DD4u;
            // 0x356dd8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356DE8u;
            goto label_356de8;
        }
    }
    ctx->pc = 0x356DDCu;
    // 0x356ddc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x356ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x356de0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x356de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x356de4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x356de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_356de8:
    // 0x356de8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x356de8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x356dec: 0x2131023  subu        $v0, $s0, $s3
    ctx->pc = 0x356decu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x356df0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x356df0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356df4: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x356df4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x356df8: 0x2a470004  slti        $a3, $s2, 0x4
    ctx->pc = 0x356df8u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_356dfc:
    // 0x356dfc: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x356DFCu;
    {
        const bool branch_taken_0x356dfc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x356E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DFCu;
        // 0x356e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356dfc) {
            ctx->pc = 0x356E24u;
            goto label_356e24;
        }
    }
    ctx->pc = 0x356E04u;
    // 0x356e04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x356e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x356e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e0c: 0xc0da4dc  jal         func_369370
    ctx->pc = 0x356E0Cu;
    SET_GPR_U32(ctx, 31, 0x356E14u);
    ctx->pc = 0x356E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356E0Cu;
    // 0x356e10: 0x24060084  addiu       $a2, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369370u, 0x356E0Cu, 0x356E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356E14u;
label_356e14:
    // 0x356e14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x356e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e18: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x356E18u;
    {
        const bool branch_taken_0x356e18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x356E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E18u;
        // 0x356e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356e18) {
            ctx->pc = 0x356DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356dc8;
        }
    }
    ctx->pc = 0x356E20u;
    // 0x356e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_356e24:
    // 0x356e24: 0x56a2000d  bnel        $s5, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x356E24u;
    {
        const bool branch_taken_0x356e24 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x356e24) {
            ctx->pc = 0x356E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356E24u;
            // 0x356e28: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356E5Cu;
            goto label_356e5c;
        }
    }
    ctx->pc = 0x356E2Cu;
    // 0x356e2c: 0xc0d3352  jal         func_34CD48
    ctx->pc = 0x356E2Cu;
    SET_GPR_U32(ctx, 31, 0x356E34u);
    ctx->pc = 0x356E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356E2Cu;
    // 0x356e30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CD48u, 0x356E2Cu, 0x356E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356E34u;
label_356e34:
    // 0x356e34: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x356E34u;
    {
        const bool branch_taken_0x356e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x356e34) {
            ctx->pc = 0x356E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356E34u;
            // 0x356e38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356E5Cu;
            goto label_356e5c;
        }
    }
    ctx->pc = 0x356E3Cu;
    // 0x356e3c: 0xc0d336c  jal         func_34CDB0
    ctx->pc = 0x356E3Cu;
    SET_GPR_U32(ctx, 31, 0x356E44u);
    ctx->pc = 0x356E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356E3Cu;
    // 0x356e40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CDB0u, 0x356E3Cu, 0x356E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356E44u;
label_356e44:
    // 0x356e44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x356E44u;
    {
        const bool branch_taken_0x356e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E44u;
        // 0x356e48: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356e44) {
            ctx->pc = 0x356E5Cu;
            goto label_356e5c;
        }
    }
    ctx->pc = 0x356E4Cu;
    // 0x356e4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x356e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356e50: 0xc0d5a62  jal         func_356988
    ctx->pc = 0x356E50u;
    SET_GPR_U32(ctx, 31, 0x356E58u);
    ctx->pc = 0x356E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356E50u;
    // 0x356e54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356988u, 0x356E50u, 0x356E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356E58u;
label_356e58:
    // 0x356e58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x356e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_356e5c:
    // 0x356e5c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x356e5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x356e60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x356e60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356e64: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x356e64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356e68: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x356e68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x356e6c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x356e6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x356e70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x356e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x356e74: 0x3e00008  jr          $ra
    ctx->pc = 0x356E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356E74u;
        // 0x356e78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356E7Cu;
    // 0x356e7c: 0x0  nop
    ctx->pc = 0x356e7cu;
    // NOP
    ctx->pc = 0x356e80u;
}
