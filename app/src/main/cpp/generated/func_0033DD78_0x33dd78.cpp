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

// Function: func_0033DD78
// Address: 0x33dd78 - 0x33dfa8
void func_0033DD78_0x33dd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033DD78_0x33dd78");
#endif

    switch (ctx->pc) {
        case 0x33ddd0u: goto label_33ddd0;
        case 0x33dde8u: goto label_33dde8;
        case 0x33de28u: goto label_33de28;
        case 0x33de40u: goto label_33de40;
        default: break;
    }

    ctx->pc = 0x33dd78u;

    // 0x33dd78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33dd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33dd7c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33dd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x33dd80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33dd80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dd84: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x33dd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x33dd88: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x33dd88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x33dd8c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x33dd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x33dd90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33dd90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dd94: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x33dd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x33dd98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x33dd98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dd9c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x33dd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x33dda0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x33dda0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33dda4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x33dda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x33dda8: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x33dda8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ddac: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x33ddacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x33ddb0: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x33ddb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ddb4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x33ddb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x33ddb8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x33ddb8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ddbc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x33ddbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x33ddc0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x33ddc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x33ddc4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x33ddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x33ddc8: 0xafab0004  sw          $t3, 0x4($sp)
    ctx->pc = 0x33ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 11));
    // 0x33ddcc: 0x0  nop
    ctx->pc = 0x33ddccu;
    // NOP
label_33ddd0:
    // 0x33ddd0: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x33ddd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x33ddd4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DDD4u;
    {
        const bool branch_taken_0x33ddd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDD4u;
        // 0x33ddd8: 0x8e25ada0  lw          $a1, -0x5260($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ddd4) {
            ctx->pc = 0x33DDF0u;
            goto label_33ddf0;
        }
    }
    ctx->pc = 0x33DDDCu;
    // 0x33dddc: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x33dddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x33dde0: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x33DDE0u;
    SET_GPR_U32(ctx, 31, 0x33DDE8u);
    ctx->pc = 0x33DDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DDE0u;
    // 0x33dde4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x33DDE0u, 0x33DDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DDE8u;
label_33dde8:
    // 0x33dde8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x33DDE8u;
    {
        const bool branch_taken_0x33dde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33dde8) {
            ctx->pc = 0x33DDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DDE8u;
            // 0x33ddec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33ddd0;
        }
    }
    ctx->pc = 0x33DDF0u;
label_33ddf0:
    // 0x33ddf0: 0x12120061  beq         $s0, $s2, . + 4 + (0x61 << 2)
    ctx->pc = 0x33DDF0u;
    {
        const bool branch_taken_0x33ddf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x33DDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DDF0u;
        // 0x33ddf4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ddf0) {
            ctx->pc = 0x33DF78u;
            goto label_33df78;
        }
    }
    ctx->pc = 0x33DDF8u;
    // 0x33ddf8: 0x32030003  andi        $v1, $s0, 0x3
    ctx->pc = 0x33ddf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x33ddfc: 0x5460005f  bnel        $v1, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x33DDFCu;
    {
        const bool branch_taken_0x33ddfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33ddfc) {
            ctx->pc = 0x33DE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DDFCu;
            // 0x33de00: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DF7Cu;
            goto label_33df7c;
        }
    }
    ctx->pc = 0x33DE04u;
    // 0x33de04: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x33de04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x33de08: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x33de08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x33de0c: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x33de0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33de10: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x33de10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x33de14: 0x50600059  beql        $v1, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x33DE14u;
    {
        const bool branch_taken_0x33de14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33de14) {
            ctx->pc = 0x33DE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DE14u;
            // 0x33de18: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DF7Cu;
            goto label_33df7c;
        }
    }
    ctx->pc = 0x33DE1Cu;
    // 0x33de1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33de1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33de20: 0x3c15003f  lui         $s5, 0x3F
    ctx->pc = 0x33de20u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
    // 0x33de24: 0x0  nop
    ctx->pc = 0x33de24u;
    // NOP
label_33de28:
    // 0x33de28: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x33de28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x33de2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DE2Cu;
    {
        const bool branch_taken_0x33de2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE2Cu;
        // 0x33de30: 0x8ea5ada4  lw          $a1, -0x525C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294946212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33de2c) {
            ctx->pc = 0x33DE48u;
            goto label_33de48;
        }
    }
    ctx->pc = 0x33DE34u;
    // 0x33de34: 0x2702021  addu        $a0, $s3, $s0
    ctx->pc = 0x33de34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x33de38: 0xc0e942d  jal         func_3A50B4
    ctx->pc = 0x33DE38u;
    SET_GPR_U32(ctx, 31, 0x33DE40u);
    ctx->pc = 0x33DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DE38u;
    // 0x33de3c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A50B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50B4u, 0x33DE38u, 0x33DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DE40u;
label_33de40:
    // 0x33de40: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x33DE40u;
    {
        const bool branch_taken_0x33de40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33de40) {
            ctx->pc = 0x33DE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DE40u;
            // 0x33de44: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33de28;
        }
    }
    ctx->pc = 0x33DE48u;
label_33de48:
    // 0x33de48: 0x1212004b  beq         $s0, $s2, . + 4 + (0x4B << 2)
    ctx->pc = 0x33DE48u;
    {
        const bool branch_taken_0x33de48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x33DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DE48u;
        // 0x33de4c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33de48) {
            ctx->pc = 0x33DF78u;
            goto label_33df78;
        }
    }
    ctx->pc = 0x33DE50u;
    // 0x33de50: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x33de50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x33de54: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x33de54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x33de58: 0xa7c20000  sh          $v0, 0x0($fp)
    ctx->pc = 0x33de58u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x33de5c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x33de5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33de60: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x33de60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x33de64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x33de64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33de68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x33de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33de6c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x33de6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33de70: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33de70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33de74: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x33de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x33de78: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x33de78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x33de7c: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x33de7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x33de80: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33de80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x33de84: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x33de84u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33de88: 0x9222000e  lbu         $v0, 0xE($s1)
    ctx->pc = 0x33de88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x33de8c: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x33de8cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33de90: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x33de90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x33de94: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x33de94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x33de98: 0xa2e30000  sb          $v1, 0x0($s7)
    ctx->pc = 0x33de98u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x33de9c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x33de9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x33dea0: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x33dea0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33dea4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33DEA4u;
    {
        const bool branch_taken_0x33dea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33dea4) {
            ctx->pc = 0x33DEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DEA4u;
            // 0x33dea8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DEACu;
            goto label_33deac;
        }
    }
    ctx->pc = 0x33DEACu;
label_33deac:
    // 0x33deac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x33deacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33deb0: 0x1812  mflo        $v1
    ctx->pc = 0x33deb0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x33deb4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33deb8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x33deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33debc: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x33debcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x33dec0: 0x82850000  lb          $a1, 0x0($s4)
    ctx->pc = 0x33dec0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x33dec4: 0x14a80004  bne         $a1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33DEC4u;
    {
        const bool branch_taken_0x33dec4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        ctx->pc = 0x33DEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DEC4u;
        // 0x33dec8: 0x92830000  lbu         $v1, 0x0($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dec4) {
            ctx->pc = 0x33DED8u;
            goto label_33ded8;
        }
    }
    ctx->pc = 0x33DECCu;
    // 0x33decc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x33deccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33ded0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x33DED0u;
    {
        const bool branch_taken_0x33ded0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DED0u;
        // 0x33ded4: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ded0) {
            ctx->pc = 0x33DF40u;
            goto label_33df40;
        }
    }
    ctx->pc = 0x33DED8u;
label_33ded8:
    // 0x33ded8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x33ded8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33dedc: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33DEDCu;
    {
        const bool branch_taken_0x33dedc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x33DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DEDCu;
        // 0x33dee0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dedc) {
            ctx->pc = 0x33DEF0u;
            goto label_33def0;
        }
    }
    ctx->pc = 0x33DEE4u;
    // 0x33dee4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x33dee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33dee8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x33DEE8u;
    {
        const bool branch_taken_0x33dee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DEE8u;
        // 0x33deec: 0xa4870000  sh          $a3, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33dee8) {
            ctx->pc = 0x33DF40u;
            goto label_33df40;
        }
    }
    ctx->pc = 0x33DEF0u;
label_33def0:
    // 0x33def0: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x33DEF0u;
    {
        const bool branch_taken_0x33def0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x33DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DEF0u;
        // 0x33def4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33def0) {
            ctx->pc = 0x33DF44u;
            goto label_33df44;
        }
    }
    ctx->pc = 0x33DEF8u;
    // 0x33def8: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x33def8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33defc: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x33defcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x33df00: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x33df00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x33df04: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x33df04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33df08: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x33df08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x33df0c: 0xa2e20000  sb          $v0, 0x0($s7)
    ctx->pc = 0x33df0cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x33df10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x33df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33df14: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x33df14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x33df18: 0x82c20000  lb          $v0, 0x0($s6)
    ctx->pc = 0x33df18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33df1c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x33df1cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33df20: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33DF20u;
    {
        const bool branch_taken_0x33df20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33df20) {
            ctx->pc = 0x33DF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33DF20u;
            // 0x33df24: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33DF28u;
            goto label_33df28;
        }
    }
    ctx->pc = 0x33DF28u;
label_33df28:
    // 0x33df28: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x33df28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33df2c: 0x1812  mflo        $v1
    ctx->pc = 0x33df2cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x33df30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x33df30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x33df34: 0xa2880000  sb          $t0, 0x0($s4)
    ctx->pc = 0x33df34u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x33df38: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x33df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33df3c: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x33df3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_33df40:
    // 0x33df40: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x33df40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_33df44:
    // 0x33df44: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x33DF44u;
    {
        const bool branch_taken_0x33df44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF44u;
        // 0x33df48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df44) {
            ctx->pc = 0x33DF78u;
            goto label_33df78;
        }
    }
    ctx->pc = 0x33DF4Cu;
    // 0x33df4c: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x33df4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x33df50: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x33DF50u;
    {
        const bool branch_taken_0x33df50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF50u;
        // 0x33df54: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df50) {
            ctx->pc = 0x33DF7Cu;
            goto label_33df7c;
        }
    }
    ctx->pc = 0x33DF58u;
    // 0x33df58: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x33df58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33df5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33df60: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x33df60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x33df64: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33DF64u;
    {
        const bool branch_taken_0x33df64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DF64u;
        // 0x33df68: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33df64) {
            ctx->pc = 0x33DF80u;
            goto label_33df80;
        }
    }
    ctx->pc = 0x33DF6Cu;
    // 0x33df6c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x33df6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x33df70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33df70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33df74: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x33df74u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_33df78:
    // 0x33df78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33df78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33df7c:
    // 0x33df7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x33df7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33df80:
    // 0x33df80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x33df80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33df84: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x33df84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33df88: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x33df88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33df8c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x33df8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x33df90: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x33df90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33df94: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x33df94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33df98: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x33df98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33df9c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x33df9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x33dfa0: 0x3e00008  jr          $ra
    ctx->pc = 0x33DFA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DFA0u;
        // 0x33dfa4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DFA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DFA8u;
}
