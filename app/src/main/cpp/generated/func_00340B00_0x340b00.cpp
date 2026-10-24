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

// Function: func_00340B00
// Address: 0x340b00 - 0x340e90
void func_00340B00_0x340b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00340B00_0x340b00");
#endif

    switch (ctx->pc) {
        case 0x340c30u: goto label_340c30;
        default: break;
    }

    ctx->pc = 0x340b00u;

    // 0x340b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x340b04: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x340b04u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x340b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x340b0c: 0x3c104d52  lui         $s0, 0x4D52
    ctx->pc = 0x340b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19794 << 16));
    // 0x340b10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x340b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x340b14: 0x3c1100ff  lui         $s1, 0xFF
    ctx->pc = 0x340b14u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)255 << 16));
    // 0x340b18: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x340b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x340b1c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x340b1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b20: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x340b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x340b24: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x340b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x340b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x340b2c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x340b2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b30: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x340b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x340b34: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x340b34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340b38: 0x36104f46  ori         $s0, $s0, 0x4F46
    ctx->pc = 0x340b38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)20294);
    // 0x340b3c: 0x930f0000  lbu         $t7, 0x0($t8)
    ctx->pc = 0x340b3cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x340b40: 0x930e0003  lbu         $t6, 0x3($t8)
    ctx->pc = 0x340b40u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x340b44: 0x930c0002  lbu         $t4, 0x2($t8)
    ctx->pc = 0x340b44u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x340b48: 0x930d0001  lbu         $t5, 0x1($t8)
    ctx->pc = 0x340b48u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x340b4c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x340b4cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x340b50: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x340b50u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x340b54: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x340b54u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x340b58: 0x93030002  lbu         $v1, 0x2($t8)
    ctx->pc = 0x340b58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x340b5c: 0xd6a00  sll         $t5, $t5, 8
    ctx->pc = 0x340b5cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x340b60: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x340b60u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x340b64: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x340b64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x340b68: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x340b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x340b6c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x340b6cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x340b70: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x340b70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x340b74: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x340b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x340b78: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x340b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x340b7c: 0x93050002  lbu         $a1, 0x2($t8)
    ctx->pc = 0x340b7cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x340b80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x340b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x340b84: 0x930b0003  lbu         $t3, 0x3($t8)
    ctx->pc = 0x340b84u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x340b88: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x340b88u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340b8c: 0x930a0001  lbu         $t2, 0x1($t8)
    ctx->pc = 0x340b8cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x340b90: 0x191a03  sra         $v1, $t9, 8
    ctx->pc = 0x340b90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 25), 8));
    // 0x340b94: 0x192602  srl         $a0, $t9, 24
    ctx->pc = 0x340b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), 24));
    // 0x340b98: 0x191200  sll         $v0, $t9, 8
    ctx->pc = 0x340b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x340b9c: 0x93090000  lbu         $t1, 0x0($t8)
    ctx->pc = 0x340b9cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x340ba0: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x340ba0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x340ba4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x340ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x340ba8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x340ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x340bac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x340bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340bb0: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x340bb0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x340bb4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x340bb4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340bb8: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x340bb8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x340bbc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x340bbcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340bc0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x340bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x340bc4: 0xb5e00  sll         $t3, $t3, 24
    ctx->pc = 0x340bc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x340bc8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x340bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x340bcc: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x340bccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x340bd0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x340bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x340bd4: 0x191600  sll         $v0, $t9, 24
    ctx->pc = 0x340bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 24));
    // 0x340bd8: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x340bd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x340bdc: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x340bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x340be0: 0x1ec7825  or          $t7, $t7, $t4
    ctx->pc = 0x340be0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x340be4: 0x82c825  or          $t9, $a0, $v0
    ctx->pc = 0x340be4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x340be8: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x340be8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x340bec: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x340becu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x340bf0: 0x15f0009e  bne         $t7, $s0, . + 4 + (0x9E << 2)
    ctx->pc = 0x340BF0u;
    {
        const bool branch_taken_0x340bf0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        ctx->pc = 0x340BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340BF0u;
        // 0x340bf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340bf0) {
            ctx->pc = 0x340E6Cu;
            goto label_340e6c;
        }
    }
    ctx->pc = 0x340BF8u;
    // 0x340bf8: 0x3c024646  lui         $v0, 0x4646
    ctx->pc = 0x340bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17990 << 16));
    // 0x340bfc: 0x34424941  ori         $v0, $v0, 0x4941
    ctx->pc = 0x340bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18753);
    // 0x340c00: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x340C00u;
    {
        const bool branch_taken_0x340c00 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x340c00) {
            ctx->pc = 0x340C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340C00u;
            // 0x340c04: 0x3191021  addu        $v0, $t8, $t9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340C10u;
            goto label_340c10;
        }
    }
    ctx->pc = 0x340C08u;
    // 0x340c08: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x340C08u;
    {
        const bool branch_taken_0x340c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C08u;
        // 0x340c0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340c08) {
            ctx->pc = 0x340E6Cu;
            goto label_340e6c;
        }
    }
    ctx->pc = 0x340C10u;
label_340c10:
    // 0x340c10: 0x244bfffc  addiu       $t3, $v0, -0x4
    ctx->pc = 0x340c10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x340c14: 0x30b182b  sltu        $v1, $t8, $t3
    ctx->pc = 0x340c14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x340c18: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x340C18u;
    {
        const bool branch_taken_0x340c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x340C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340C18u;
        // 0x340c1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340c18) {
            ctx->pc = 0x340E6Cu;
            goto label_340e6c;
        }
    }
    ctx->pc = 0x340C20u;
    // 0x340c20: 0x3c0c00ff  lui         $t4, 0xFF
    ctx->pc = 0x340c20u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)255 << 16));
    // 0x340c24: 0x2410ff00  addiu       $s0, $zero, -0x100
    ctx->pc = 0x340c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x340c28: 0x93090000  lbu         $t1, 0x0($t8)
    ctx->pc = 0x340c28u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x340c2c: 0x0  nop
    ctx->pc = 0x340c2cu;
    // NOP
label_340c30:
    // 0x340c30: 0x3c0a444e  lui         $t2, 0x444E
    ctx->pc = 0x340c30u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17486 << 16));
    // 0x340c34: 0x93080003  lbu         $t0, 0x3($t8)
    ctx->pc = 0x340c34u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x340c38: 0x354a5353  ori         $t2, $t2, 0x5353
    ctx->pc = 0x340c38u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)21331);
    // 0x340c3c: 0x93060002  lbu         $a2, 0x2($t8)
    ctx->pc = 0x340c3cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x340c40: 0x93070001  lbu         $a3, 0x1($t8)
    ctx->pc = 0x340c40u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x340c44: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x340c44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x340c48: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x340c48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x340c4c: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x340c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x340c50: 0x93030002  lbu         $v1, 0x2($t8)
    ctx->pc = 0x340c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x340c54: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x340c54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x340c58: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x340c58u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x340c5c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x340c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x340c60: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x340c60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x340c64: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x340c64u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x340c68: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x340c68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x340c6c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x340c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x340c70: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x340c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x340c74: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x340c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x340c78: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x340c78u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340c7c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x340c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x340c80: 0x191a03  sra         $v1, $t9, 8
    ctx->pc = 0x340c80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 25), 8));
    // 0x340c84: 0x192602  srl         $a0, $t9, 24
    ctx->pc = 0x340c84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), 24));
    // 0x340c88: 0x191200  sll         $v0, $t9, 8
    ctx->pc = 0x340c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x340c8c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x340c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x340c90: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x340c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x340c94: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x340c94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x340c98: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x340c98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x340c9c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x340c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x340ca0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x340ca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x340ca4: 0x191600  sll         $v0, $t9, 24
    ctx->pc = 0x340ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 24));
    // 0x340ca8: 0x1267825  or          $t7, $t1, $a2
    ctx->pc = 0x340ca8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x340cac: 0x11ea004c  beq         $t7, $t2, . + 4 + (0x4C << 2)
    ctx->pc = 0x340CACu;
    {
        const bool branch_taken_0x340cac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 10));
        ctx->pc = 0x340CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CACu;
        // 0x340cb0: 0x82c825  or          $t9, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340cac) {
            ctx->pc = 0x340DE0u;
            goto label_340de0;
        }
    }
    ctx->pc = 0x340CB4u;
    // 0x340cb4: 0x3c024d4d  lui         $v0, 0x4D4D
    ctx->pc = 0x340cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19789 << 16));
    // 0x340cb8: 0x34424f43  ori         $v0, $v0, 0x4F43
    ctx->pc = 0x340cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20291);
    // 0x340cbc: 0x15e20064  bne         $t7, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x340CBCu;
    {
        const bool branch_taken_0x340cbc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        ctx->pc = 0x340CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CBCu;
        // 0x340cc0: 0x27220001  addiu       $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340cbc) {
            ctx->pc = 0x340E50u;
            goto label_340e50;
        }
    }
    ctx->pc = 0x340CC4u;
    // 0x340cc4: 0x15a00066  bnez        $t5, . + 4 + (0x66 << 2)
    ctx->pc = 0x340CC4u;
    {
        const bool branch_taken_0x340cc4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x340CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CC4u;
        // 0x340cc8: 0x30b102b  sltu        $v0, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340cc4) {
            ctx->pc = 0x340E60u;
            goto label_340e60;
        }
    }
    ctx->pc = 0x340CCCu;
    // 0x340ccc: 0x2b220012  slti        $v0, $t9, 0x12
    ctx->pc = 0x340cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x340cd0: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x340CD0u;
    {
        const bool branch_taken_0x340cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x340CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CD0u;
        // 0x340cd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340cd0) {
            ctx->pc = 0x340E6Cu;
            goto label_340e6c;
        }
    }
    ctx->pc = 0x340CD8u;
    // 0x340cd8: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x340cd8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x340cdc: 0x2406400e  addiu       $a2, $zero, 0x400E
    ctx->pc = 0x340cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16398));
    // 0x340ce0: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x340ce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x340ce4: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x340ce4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x340ce8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x340ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x340cec: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x340cecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340cf0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x340cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x340cf4: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x340cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x340cf8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x340cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x340cfc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x340cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x340d00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x340d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340d04: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x340d04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x340d08: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x340d08u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x340d0c: 0x93020002  lbu         $v0, 0x2($t8)
    ctx->pc = 0x340d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x340d10: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x340d10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x340d14: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x340d14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x340d18: 0x93030000  lbu         $v1, 0x0($t8)
    ctx->pc = 0x340d18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x340d1c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x340d1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x340d20: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x340d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x340d24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x340d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x340d28: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x340d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x340d2c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x340d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x340d30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x340d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x340d34: 0x32a03  sra         $a1, $v1, 8
    ctx->pc = 0x340d34u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 8));
    // 0x340d38: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x340d38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x340d3c: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x340d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x340d40: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x340d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x340d44: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x340d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x340d48: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x340d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x340d4c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x340d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x340d50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x340d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340d54: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x340d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x340d58: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x340d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x340d5c: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x340d5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x340d60: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x340d60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x340d64: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x340d64u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x340d68: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x340d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x340d6c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x340d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x340d70: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x340d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x340d74: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x340d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x340d78: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x340d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x340d7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x340d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340d80: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x340d80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x340d84: 0x93050000  lbu         $a1, 0x0($t8)
    ctx->pc = 0x340d84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x340d88: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x340d88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x340d8c: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x340d8cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x340d90: 0x93030001  lbu         $v1, 0x1($t8)
    ctx->pc = 0x340d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x340d94: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x340d94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x340d98: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x340d98u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x340d9c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x340d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x340da0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x340da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x340da4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x340da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340da8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x340da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x340dac: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x340dacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x340db0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x340db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x340db4: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x340db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x340db8: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x340db8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x340dbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x340dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x340dc0: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x340dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x340dc4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x340dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x340dc8: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x340dc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x340dcc: 0x11c00023  beqz        $t6, . + 4 + (0x23 << 2)
    ctx->pc = 0x340DCCu;
    {
        const bool branch_taken_0x340dcc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x340DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DCCu;
        // 0x340dd0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340dcc) {
            ctx->pc = 0x340E5Cu;
            goto label_340e5c;
        }
    }
    ctx->pc = 0x340DD4u;
    // 0x340dd4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x340DD4u;
    {
        const bool branch_taken_0x340dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DD4u;
        // 0x340dd8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340dd4) {
            ctx->pc = 0x340E6Cu;
            goto label_340e6c;
        }
    }
    ctx->pc = 0x340DDCu;
    // 0x340ddc: 0x0  nop
    ctx->pc = 0x340ddcu;
    // NOP
label_340de0:
    // 0x340de0: 0x15c0001f  bnez        $t6, . + 4 + (0x1F << 2)
    ctx->pc = 0x340DE0u;
    {
        const bool branch_taken_0x340de0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x340DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340DE0u;
        // 0x340de4: 0x30b102b  sltu        $v0, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x340de0) {
            ctx->pc = 0x340E60u;
            goto label_340e60;
        }
    }
    ctx->pc = 0x340DE8u;
    // 0x340de8: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x340de8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x340dec: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x340decu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340df0: 0x93020002  lbu         $v0, 0x2($t8)
    ctx->pc = 0x340df0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x340df4: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x340df4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x340df8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x340df8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x340dfc: 0x93030000  lbu         $v1, 0x0($t8)
    ctx->pc = 0x340dfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x340e00: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x340e00u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x340e04: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x340e04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x340e08: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x340e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x340e0c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x340e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x340e10: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x340e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x340e14: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x340e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x340e18: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x340e18u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x340e1c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x340e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x340e20: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x340e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x340e24: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x340e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x340e28: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x340e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x340e2c: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x340e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x340e30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x340e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x340e34: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x340e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x340e38: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x340e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x340e3c: 0x11a00007  beqz        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x340E3Cu;
    {
        const bool branch_taken_0x340e3c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x340E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E3Cu;
        // 0x340e40: 0x3028821  addu        $s1, $t8, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340e3c) {
            ctx->pc = 0x340E5Cu;
            goto label_340e5c;
        }
    }
    ctx->pc = 0x340E44u;
    // 0x340e44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x340E44u;
    {
        const bool branch_taken_0x340e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E44u;
        // 0x340e48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340e44) {
            ctx->pc = 0x340E6Cu;
            goto label_340e6c;
        }
    }
    ctx->pc = 0x340E4Cu;
    // 0x340e4c: 0x0  nop
    ctx->pc = 0x340e4cu;
    // NOP
label_340e50:
    // 0x340e50: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x340e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x340e54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x340e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x340e58: 0x302c021  addu        $t8, $t8, $v0
    ctx->pc = 0x340e58u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
label_340e5c:
    // 0x340e5c: 0x30b102b  sltu        $v0, $t8, $t3
    ctx->pc = 0x340e5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_340e60:
    // 0x340e60: 0x5440ff73  bnel        $v0, $zero, . + 4 + (-0x8D << 2)
    ctx->pc = 0x340E60u;
    {
        const bool branch_taken_0x340e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x340e60) {
            ctx->pc = 0x340E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340E60u;
            // 0x340e64: 0x93090000  lbu         $t1, 0x0($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x340C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340c30;
        }
    }
    ctx->pc = 0x340E68u;
    // 0x340e68: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x340e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_340e6c:
    // 0x340e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x340e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340e70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x340e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x340e74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x340e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340e78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x340e78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x340e7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x340e7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340e80: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x340e80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340e84: 0x3e00008  jr          $ra
    ctx->pc = 0x340E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340E84u;
        // 0x340e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340E8Cu;
    // 0x340e8c: 0x0  nop
    ctx->pc = 0x340e8cu;
    // NOP
    ctx->pc = 0x340e90u;
}
