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

// Function: func_0031B560
// Address: 0x31b560 - 0x31bb08
void func_0031B560_0x31b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031B560_0x31b560");
#endif

    switch (ctx->pc) {
        case 0x31b594u: goto label_31b594;
        case 0x31b5bcu: goto label_31b5bc;
        case 0x31b68cu: goto label_31b68c;
        case 0x31b698u: goto label_31b698;
        case 0x31b71cu: goto label_31b71c;
        case 0x31b728u: goto label_31b728;
        case 0x31b92cu: goto label_31b92c;
        case 0x31b958u: goto label_31b958;
        case 0x31b9b0u: goto label_31b9b0;
        case 0x31b9bcu: goto label_31b9bc;
        case 0x31ba00u: goto label_31ba00;
        default: break;
    }

    ctx->pc = 0x31b560u;

    // 0x31b560: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x31b560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x31b564: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x31b564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x31b568: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x31b568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x31b56c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31b56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b570: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x31b570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x31b574: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31b574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b578: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x31b578u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b57c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x31b57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x31b580: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x31b580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x31b584: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31b584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b588: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31b588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b58c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x31B58Cu;
    SET_GPR_U32(ctx, 31, 0x31B594u);
    ctx->pc = 0x31B590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B58Cu;
    // 0x31b590: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x31B58Cu, 0x31B594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B594u;
label_31b594:
    // 0x31b594: 0x26510100  addiu       $s1, $s2, 0x100
    ctx->pc = 0x31b594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x31b598: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x31b598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31b59c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b5a0: 0xa3a20007  sb          $v0, 0x7($sp)
    ctx->pc = 0x31b5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b5a4: 0xa3a20004  sb          $v0, 0x4($sp)
    ctx->pc = 0x31b5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b5a8: 0xa3a20005  sb          $v0, 0x5($sp)
    ctx->pc = 0x31b5a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b5ac: 0x16630003  bne         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B5ACu;
    {
        const bool branch_taken_0x31b5ac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x31B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5ACu;
        // 0x31b5b0: 0xa3a20006  sb          $v0, 0x6($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5ac) {
            ctx->pc = 0x31B5BCu;
            goto label_31b5bc;
        }
    }
    ctx->pc = 0x31B5B4u;
    // 0x31b5b4: 0xc0c6f72  jal         func_31BDC8
    ctx->pc = 0x31B5B4u;
    SET_GPR_U32(ctx, 31, 0x31B5BCu);
    ctx->pc = 0x31B5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B5B4u;
    // 0x31b5b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BDC8u, 0x31B5B4u, 0x31B5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B5BCu;
label_31b5bc:
    // 0x31b5bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31b5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b5c0: 0x26430480  addiu       $v1, $s2, 0x480
    ctx->pc = 0x31b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1152));
    // 0x31b5c4: 0x3a620002  xori        $v0, $s3, 0x2
    ctx->pc = 0x31b5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)2);
    // 0x31b5c8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x31b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x31b5cc: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x31b5ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x31b5d0: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x31b5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x31b5d4: 0x3b3880a  movz        $s1, $sp, $s3
    ctx->pc = 0x31b5d4u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 29));
    // 0x31b5d8: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x31b5d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x31b5dc: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x31b5dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x31b5e0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x31b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x31b5e4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31b5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31b5e8: 0x10a00022  beqz        $a1, . + 4 + (0x22 << 2)
    ctx->pc = 0x31B5E8u;
    {
        const bool branch_taken_0x31b5e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B5E8u;
        // 0x31b5ec: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b5e8) {
            ctx->pc = 0x31B674u;
            goto label_31b674;
        }
    }
    ctx->pc = 0x31B5F0u;
    // 0x31b5f0: 0x3062a000  andi        $v0, $v1, 0xA000
    ctx->pc = 0x31b5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)40960);
    // 0x31b5f4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x31B5F4u;
    {
        const bool branch_taken_0x31b5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b5f4) {
            ctx->pc = 0x31B5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B5F4u;
            // 0x31b5f8: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B634u;
            goto label_31b634;
        }
    }
    ctx->pc = 0x31B5FCu;
    // 0x31b5fc: 0x92020062  lbu         $v0, 0x62($s0)
    ctx->pc = 0x31b5fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x31b600: 0x2c4200b1  sltiu       $v0, $v0, 0xB1
    ctx->pc = 0x31b600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)177) ? 1 : 0);
    // 0x31b604: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B604u;
    {
        const bool branch_taken_0x31b604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b604) {
            ctx->pc = 0x31B608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B604u;
            // 0x31b608: 0x92020062  lbu         $v0, 0x62($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B618u;
            goto label_31b618;
        }
    }
    ctx->pc = 0x31B60Cu;
    // 0x31b60c: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x31b60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x31b610: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31b610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x31b614: 0x92020062  lbu         $v0, 0x62($s0)
    ctx->pc = 0x31b614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
label_31b618:
    // 0x31b618: 0x2c420050  sltiu       $v0, $v0, 0x50
    ctx->pc = 0x31b618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x31b61c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B61Cu;
    {
        const bool branch_taken_0x31b61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b61c) {
            ctx->pc = 0x31B620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B61Cu;
            // 0x31b620: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B634u;
            goto label_31b634;
        }
    }
    ctx->pc = 0x31B624u;
    // 0x31b624: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31b624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b628: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x31b628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x31b62c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x31b630: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31b630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31b634:
    // 0x31b634: 0x30625000  andi        $v0, $v1, 0x5000
    ctx->pc = 0x31b634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)20480);
    // 0x31b638: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x31B638u;
    {
        const bool branch_taken_0x31b638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b638) {
            ctx->pc = 0x31B63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B638u;
            // 0x31b63c: 0x92220004  lbu         $v0, 0x4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B678u;
            goto label_31b678;
        }
    }
    ctx->pc = 0x31B640u;
    // 0x31b640: 0x92020063  lbu         $v0, 0x63($s0)
    ctx->pc = 0x31b640u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 99)));
    // 0x31b644: 0x2c4200b1  sltiu       $v0, $v0, 0xB1
    ctx->pc = 0x31b644u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)177) ? 1 : 0);
    // 0x31b648: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B648u;
    {
        const bool branch_taken_0x31b648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b648) {
            ctx->pc = 0x31B64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B648u;
            // 0x31b64c: 0x92020063  lbu         $v0, 0x63($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 99)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B65Cu;
            goto label_31b65c;
        }
    }
    ctx->pc = 0x31B650u;
    // 0x31b650: 0x34621000  ori         $v0, $v1, 0x1000
    ctx->pc = 0x31b650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x31b654: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31b654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x31b658: 0x92020063  lbu         $v0, 0x63($s0)
    ctx->pc = 0x31b658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 99)));
label_31b65c:
    // 0x31b65c: 0x2c420050  sltiu       $v0, $v0, 0x50
    ctx->pc = 0x31b65cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x31b660: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B660u;
    {
        const bool branch_taken_0x31b660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b660) {
            ctx->pc = 0x31B664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B660u;
            // 0x31b664: 0x92220004  lbu         $v0, 0x4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B678u;
            goto label_31b678;
        }
    }
    ctx->pc = 0x31B668u;
    // 0x31b668: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31b668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b66c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x31b66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x31b670: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31b670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_31b674:
    // 0x31b674: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x31b674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_31b678:
    // 0x31b678: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x31b678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31b67c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x31b67cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31b680: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x31b680u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x31b684: 0xc0c6bdc  jal         func_31AF70
    ctx->pc = 0x31B684u;
    SET_GPR_U32(ctx, 31, 0x31B68Cu);
    ctx->pc = 0x31B688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B684u;
    // 0x31b688: 0x42603  sra         $a0, $a0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AF70u, 0x31B684u, 0x31B68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B68Cu;
label_31b68c:
    // 0x31b68c: 0xa2020072  sb          $v0, 0x72($s0)
    ctx->pc = 0x31b68cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b690: 0xc0c6bdc  jal         func_31AF70
    ctx->pc = 0x31B690u;
    SET_GPR_U32(ctx, 31, 0x31B698u);
    ctx->pc = 0x31B694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B690u;
    // 0x31b694: 0x82240005  lb          $a0, 0x5($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AF70u, 0x31B690u, 0x31B698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B698u;
label_31b698:
    // 0x31b698: 0x82030072  lb          $v1, 0x72($s0)
    ctx->pc = 0x31b698u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
    // 0x31b69c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31b69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b6a0: 0x28620041  slti        $v0, $v1, 0x41
    ctx->pc = 0x31b6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x31b6a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B6A4u;
    {
        const bool branch_taken_0x31b6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B6A4u;
        // 0x31b6a8: 0xa2040073  sb          $a0, 0x73($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b6a4) {
            ctx->pc = 0x31B6B8u;
            goto label_31b6b8;
        }
    }
    ctx->pc = 0x31B6ACu;
    // 0x31b6ac: 0x2862ffc0  slti        $v0, $v1, -0x40
    ctx->pc = 0x31b6acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
    // 0x31b6b0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x31B6B0u;
    {
        const bool branch_taken_0x31b6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b6b0) {
            ctx->pc = 0x31B6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B6B0u;
            // 0x31b6b4: 0x92020073  lbu         $v0, 0x73($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 115)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B6D4u;
            goto label_31b6d4;
        }
    }
    ctx->pc = 0x31B6B8u;
label_31b6b8:
    // 0x31b6b8: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x31b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x31b6bc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B6BCu;
    {
        const bool branch_taken_0x31b6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b6bc) {
            ctx->pc = 0x31B6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B6BCu;
            // 0x31b6c0: 0x92020073  lbu         $v0, 0x73($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 115)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B6D4u;
            goto label_31b6d4;
        }
    }
    ctx->pc = 0x31B6C4u;
    // 0x31b6c4: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x31b6c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x31b6c8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x31b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x31b6cc: 0xa2020073  sb          $v0, 0x73($s0)
    ctx->pc = 0x31b6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b6d0: 0x92020073  lbu         $v0, 0x73($s0)
    ctx->pc = 0x31b6d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 115)));
label_31b6d4:
    // 0x31b6d4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x31b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x31b6d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31b6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x31b6dc: 0x2c420071  sltiu       $v0, $v0, 0x71
    ctx->pc = 0x31b6dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)113) ? 1 : 0);
    // 0x31b6e0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x31B6E0u;
    {
        const bool branch_taken_0x31b6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b6e0) {
            ctx->pc = 0x31B6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B6E0u;
            // 0x31b6e4: 0x92220006  lbu         $v0, 0x6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B708u;
            goto label_31b708;
        }
    }
    ctx->pc = 0x31B6E8u;
    // 0x31b6e8: 0x82020072  lb          $v0, 0x72($s0)
    ctx->pc = 0x31b6e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
    // 0x31b6ec: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B6ECu;
    {
        const bool branch_taken_0x31b6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b6ec) {
            ctx->pc = 0x31B6F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B6ECu;
            // 0x31b6f0: 0x92220006  lbu         $v0, 0x6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B708u;
            goto label_31b708;
        }
    }
    ctx->pc = 0x31B6F4u;
    // 0x31b6f4: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x31b6f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31b6f8: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x31b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x31b6fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x31b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b700: 0xa2020072  sb          $v0, 0x72($s0)
    ctx->pc = 0x31b700u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b704: 0x92220006  lbu         $v0, 0x6($s1)
    ctx->pc = 0x31b704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_31b708:
    // 0x31b708: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x31b708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31b70c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x31b70cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31b710: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x31b710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x31b714: 0xc0c6bdc  jal         func_31AF70
    ctx->pc = 0x31B714u;
    SET_GPR_U32(ctx, 31, 0x31B71Cu);
    ctx->pc = 0x31B718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B714u;
    // 0x31b718: 0x42603  sra         $a0, $a0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AF70u, 0x31B714u, 0x31B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B71Cu;
label_31b71c:
    // 0x31b71c: 0xa2020070  sb          $v0, 0x70($s0)
    ctx->pc = 0x31b71cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b720: 0xc0c6bdc  jal         func_31AF70
    ctx->pc = 0x31B720u;
    SET_GPR_U32(ctx, 31, 0x31B728u);
    ctx->pc = 0x31B724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B720u;
    // 0x31b724: 0x82240007  lb          $a0, 0x7($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AF70u, 0x31B720u, 0x31B728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B728u;
label_31b728:
    // 0x31b728: 0x82030070  lb          $v1, 0x70($s0)
    ctx->pc = 0x31b728u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x31b72c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31b72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b730: 0x28620041  slti        $v0, $v1, 0x41
    ctx->pc = 0x31b730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x31b734: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B734u;
    {
        const bool branch_taken_0x31b734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B734u;
        // 0x31b738: 0xa2040071  sb          $a0, 0x71($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b734) {
            ctx->pc = 0x31B748u;
            goto label_31b748;
        }
    }
    ctx->pc = 0x31B73Cu;
    // 0x31b73c: 0x2862ffc0  slti        $v0, $v1, -0x40
    ctx->pc = 0x31b73cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
    // 0x31b740: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x31B740u;
    {
        const bool branch_taken_0x31b740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b740) {
            ctx->pc = 0x31B744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B740u;
            // 0x31b744: 0x82030071  lb          $v1, 0x71($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B764u;
            goto label_31b764;
        }
    }
    ctx->pc = 0x31B748u;
label_31b748:
    // 0x31b748: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x31b748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x31b74c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31B74Cu;
    {
        const bool branch_taken_0x31b74c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b74c) {
            ctx->pc = 0x31B750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B74Cu;
            // 0x31b750: 0x82030071  lb          $v1, 0x71($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B764u;
            goto label_31b764;
        }
    }
    ctx->pc = 0x31B754u;
    // 0x31b754: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x31b754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x31b758: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x31b758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x31b75c: 0xa2020071  sb          $v0, 0x71($s0)
    ctx->pc = 0x31b75cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b760: 0x82030071  lb          $v1, 0x71($s0)
    ctx->pc = 0x31b760u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
label_31b764:
    // 0x31b764: 0x28620041  slti        $v0, $v1, 0x41
    ctx->pc = 0x31b764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x31b768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31B768u;
    {
        const bool branch_taken_0x31b768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B768u;
        // 0x31b76c: 0x2862ffc0  slti        $v0, $v1, -0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967232) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b768) {
            ctx->pc = 0x31B778u;
            goto label_31b778;
        }
    }
    ctx->pc = 0x31B770u;
    // 0x31b770: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x31B770u;
    {
        const bool branch_taken_0x31b770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31b770) {
            ctx->pc = 0x31B774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B770u;
            // 0x31b774: 0x82020070  lb          $v0, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B798u;
            goto label_31b798;
        }
    }
    ctx->pc = 0x31B778u;
label_31b778:
    // 0x31b778: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x31b778u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x31b77c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31B77Cu;
    {
        const bool branch_taken_0x31b77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B77Cu;
        // 0x31b780: 0x28420051  slti        $v0, $v0, 0x51 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)81) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b77c) {
            ctx->pc = 0x31B79Cu;
            goto label_31b79c;
        }
    }
    ctx->pc = 0x31B784u;
    // 0x31b784: 0x92230006  lbu         $v1, 0x6($s1)
    ctx->pc = 0x31b784u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x31b788: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x31b788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x31b78c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x31b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31b790: 0xa2020070  sb          $v0, 0x70($s0)
    ctx->pc = 0x31b790u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b794: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x31b794u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_31b798:
    // 0x31b798: 0x28420051  slti        $v0, $v0, 0x51
    ctx->pc = 0x31b798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)81) ? 1 : 0);
label_31b79c:
    // 0x31b79c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B79Cu;
    {
        const bool branch_taken_0x31b79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b79c) {
            ctx->pc = 0x31B7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B79Cu;
            // 0x31b7a0: 0x82020070  lb          $v0, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B7B8u;
            goto label_31b7b8;
        }
    }
    ctx->pc = 0x31B7A4u;
    // 0x31b7a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b7a8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x31b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x31b7ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31b7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31b7b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31b7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x31b7b4: 0x82020070  lb          $v0, 0x70($s0)
    ctx->pc = 0x31b7b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
label_31b7b8:
    // 0x31b7b8: 0x2842ffb0  slti        $v0, $v0, -0x50
    ctx->pc = 0x31b7b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967216) ? 1 : 0);
    // 0x31b7bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B7BCu;
    {
        const bool branch_taken_0x31b7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7BCu;
        // 0x31b7c0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7bc) {
            ctx->pc = 0x31B7D0u;
            goto label_31b7d0;
        }
    }
    ctx->pc = 0x31B7C4u;
    // 0x31b7c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b7c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31b7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31b7cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31b7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_31b7d0:
    // 0x31b7d0: 0x82020071  lb          $v0, 0x71($s0)
    ctx->pc = 0x31b7d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
    // 0x31b7d4: 0x28420051  slti        $v0, $v0, 0x51
    ctx->pc = 0x31b7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x31b7d8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B7D8u;
    {
        const bool branch_taken_0x31b7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b7d8) {
            ctx->pc = 0x31B7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B7D8u;
            // 0x31b7dc: 0x82020071  lb          $v0, 0x71($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B7F4u;
            goto label_31b7f4;
        }
    }
    ctx->pc = 0x31B7E0u;
    // 0x31b7e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b7e4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x31b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x31b7e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31b7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31b7ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31b7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x31b7f0: 0x82020071  lb          $v0, 0x71($s0)
    ctx->pc = 0x31b7f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
label_31b7f4:
    // 0x31b7f4: 0x2842ffb0  slti        $v0, $v0, -0x50
    ctx->pc = 0x31b7f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967216) ? 1 : 0);
    // 0x31b7f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B7F8u;
    {
        const bool branch_taken_0x31b7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B7F8u;
        // 0x31b7fc: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b7f8) {
            ctx->pc = 0x31B80Cu;
            goto label_31b80c;
        }
    }
    ctx->pc = 0x31B800u;
    // 0x31b800: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31b800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b804: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31b804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31b808: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31b808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_31b80c:
    // 0x31b80c: 0x82020072  lb          $v0, 0x72($s0)
    ctx->pc = 0x31b80cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
    // 0x31b810: 0x28420051  slti        $v0, $v0, 0x51
    ctx->pc = 0x31b810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x31b814: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B814u;
    {
        const bool branch_taken_0x31b814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b814) {
            ctx->pc = 0x31B818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B814u;
            // 0x31b818: 0x82020072  lb          $v0, 0x72($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B830u;
            goto label_31b830;
        }
    }
    ctx->pc = 0x31B81Cu;
    // 0x31b81c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b820: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x31b820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x31b824: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31b824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31b828: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31b828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x31b82c: 0x82020072  lb          $v0, 0x72($s0)
    ctx->pc = 0x31b82cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 114)));
label_31b830:
    // 0x31b830: 0x2842ffb0  slti        $v0, $v0, -0x50
    ctx->pc = 0x31b830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967216) ? 1 : 0);
    // 0x31b834: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B834u;
    {
        const bool branch_taken_0x31b834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B834u;
        // 0x31b838: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b834) {
            ctx->pc = 0x31B848u;
            goto label_31b848;
        }
    }
    ctx->pc = 0x31B83Cu;
    // 0x31b83c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b840: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31b840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31b844: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31b844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_31b848:
    // 0x31b848: 0x82020073  lb          $v0, 0x73($s0)
    ctx->pc = 0x31b848u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 115)));
    // 0x31b84c: 0x28420051  slti        $v0, $v0, 0x51
    ctx->pc = 0x31b84cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x31b850: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31B850u;
    {
        const bool branch_taken_0x31b850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b850) {
            ctx->pc = 0x31B854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B850u;
            // 0x31b854: 0x82020073  lb          $v0, 0x73($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 115)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B86Cu;
            goto label_31b86c;
        }
    }
    ctx->pc = 0x31B858u;
    // 0x31b858: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31b858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b85c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x31b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x31b860: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31b860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31b864: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31b864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x31b868: 0x82020073  lb          $v0, 0x73($s0)
    ctx->pc = 0x31b868u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 115)));
label_31b86c:
    // 0x31b86c: 0x2842ffb0  slti        $v0, $v0, -0x50
    ctx->pc = 0x31b86cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967216) ? 1 : 0);
    // 0x31b870: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31B870u;
    {
        const bool branch_taken_0x31b870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B870u;
        // 0x31b874: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b870) {
            ctx->pc = 0x31B884u;
            goto label_31b884;
        }
    }
    ctx->pc = 0x31B878u;
    // 0x31b878: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x31b878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b87c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31b87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31b880: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x31b880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_31b884:
    // 0x31b884: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x31b884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31b888: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31b888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b88c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x31b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x31b890: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x31b890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31b894: 0xc31026  xor         $v0, $a2, $v1
    ctx->pc = 0x31b894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x31b898: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x31b898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31b89c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x31b89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x31b8a0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x31b8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x31b8a4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x31b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x31b8a8: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x31b8a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x31b8ac: 0xa2020060  sb          $v0, 0x60($s0)
    ctx->pc = 0x31b8acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b8b0: 0x92230005  lbu         $v1, 0x5($s1)
    ctx->pc = 0x31b8b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x31b8b4: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x31b8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b8b8: 0x92220006  lbu         $v0, 0x6($s1)
    ctx->pc = 0x31b8b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x31b8bc: 0xa2020062  sb          $v0, 0x62($s0)
    ctx->pc = 0x31b8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b8c0: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x31b8c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x31b8c4: 0xa2030063  sb          $v1, 0x63($s0)
    ctx->pc = 0x31b8c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b8c8: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x31b8c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31b8cc: 0xa2020067  sb          $v0, 0x67($s0)
    ctx->pc = 0x31b8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b8d0: 0x92230009  lbu         $v1, 0x9($s1)
    ctx->pc = 0x31b8d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x31b8d4: 0xa2030066  sb          $v1, 0x66($s0)
    ctx->pc = 0x31b8d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b8d8: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x31b8d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x31b8dc: 0xa2020064  sb          $v0, 0x64($s0)
    ctx->pc = 0x31b8dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b8e0: 0x9223000b  lbu         $v1, 0xB($s1)
    ctx->pc = 0x31b8e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x31b8e4: 0xa2030065  sb          $v1, 0x65($s0)
    ctx->pc = 0x31b8e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b8e8: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x31b8e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x31b8ec: 0xa2020068  sb          $v0, 0x68($s0)
    ctx->pc = 0x31b8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b8f0: 0x9223000d  lbu         $v1, 0xD($s1)
    ctx->pc = 0x31b8f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x31b8f4: 0xa203006b  sb          $v1, 0x6B($s0)
    ctx->pc = 0x31b8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b8f8: 0x9222000e  lbu         $v0, 0xE($s1)
    ctx->pc = 0x31b8f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x31b8fc: 0xa2020069  sb          $v0, 0x69($s0)
    ctx->pc = 0x31b8fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b900: 0x9223000f  lbu         $v1, 0xF($s1)
    ctx->pc = 0x31b900u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x31b904: 0xa203006a  sb          $v1, 0x6A($s0)
    ctx->pc = 0x31b904u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b908: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x31b908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x31b90c: 0xa202006c  sb          $v0, 0x6C($s0)
    ctx->pc = 0x31b90cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 108), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b910: 0x92230011  lbu         $v1, 0x11($s1)
    ctx->pc = 0x31b910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x31b914: 0xa203006d  sb          $v1, 0x6D($s0)
    ctx->pc = 0x31b914u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 109), (uint8_t)GPR_U32(ctx, 3));
    // 0x31b918: 0x92220012  lbu         $v0, 0x12($s1)
    ctx->pc = 0x31b918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x31b91c: 0xa202006e  sb          $v0, 0x6E($s0)
    ctx->pc = 0x31b91cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 2));
    // 0x31b920: 0x92230013  lbu         $v1, 0x13($s1)
    ctx->pc = 0x31b920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
    // 0x31b924: 0xc0c6bd0  jal         func_31AF40
    ctx->pc = 0x31B924u;
    SET_GPR_U32(ctx, 31, 0x31B92Cu);
    ctx->pc = 0x31B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B924u;
    // 0x31b928: 0xa203006f  sb          $v1, 0x6F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 111), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AF40u, 0x31B924u, 0x31B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B92Cu;
label_31b92c:
    // 0x31b92c: 0x82030070  lb          $v1, 0x70($s0)
    ctx->pc = 0x31b92cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x31b930: 0x82040071  lb          $a0, 0x71($s0)
    ctx->pc = 0x31b930u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
    // 0x31b934: 0x31823  negu        $v1, $v1
    ctx->pc = 0x31b934u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x31b938: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x31b938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31b93c: 0x0  nop
    ctx->pc = 0x31b93cu;
    // NOP
    // 0x31b940: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x31b940u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x31b944: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x31b944u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x31b948: 0x0  nop
    ctx->pc = 0x31b948u;
    // NOP
    // 0x31b94c: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x31b94cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x31b950: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x31B950u;
    SET_GPR_U32(ctx, 31, 0x31B958u);
    ctx->pc = 0x31B954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B950u;
    // 0x31b954: 0xa2020014  sb          $v0, 0x14($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x31B950u, 0x31B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B958u;
label_31b958:
    // 0x31b958: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x31b958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x31b95c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x31b95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x31b960: 0x8c62aff0  lw          $v0, -0x5010($v1)
    ctx->pc = 0x31b960u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x31b964: 0x24440200  addiu       $a0, $v0, 0x200
    ctx->pc = 0x31b964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x31b968: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x31b968u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31b96c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x31b96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x31b970: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x31b970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x31b974: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x31b974u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31b978: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x31b978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x31b97c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x31b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x31b980: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x31b980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31b984: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x31b984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31b988: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x31b988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x31b98c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x31b98cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31b990: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x31b990u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31b994: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x31b994u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x31b998: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x31b998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x31b99c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x31b99cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31b9a0: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x31b9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x31b9a4: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x31b9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31b9a8: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x31B9A8u;
    SET_GPR_U32(ctx, 31, 0x31B9B0u);
    ctx->pc = 0x31B9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9A8u;
    // 0x31b9ac: 0xc7ad0048  lwc1        $f13, 0x48($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x31B9A8u, 0x31B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B9B0u;
label_31b9b0:
    // 0x31b9b0: 0xc60c0074  lwc1        $f12, 0x74($s0)
    ctx->pc = 0x31b9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x31b9b4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x31B9B4u;
    SET_GPR_U32(ctx, 31, 0x31B9BCu);
    ctx->pc = 0x31B9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B9B4u;
    // 0x31b9b8: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x31B9B4u, 0x31B9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B9BCu;
label_31b9bc:
    // 0x31b9bc: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x31b9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x31b9c0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x31b9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x31b9c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x31b9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31b9c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31b9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b9cc: 0x90827a09  lbu         $v0, 0x7A09($a0)
    ctx->pc = 0x31b9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x747A09u));
    // 0x31b9d0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x31b9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31b9d4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x31b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31b9d8: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x31b9d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31b9dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x31b9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x31b9e0: 0x2409001f  addiu       $t1, $zero, 0x1F
    ctx->pc = 0x31b9e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x31b9e4: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x31b9e4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x31b9e8: 0x2607005f  addiu       $a3, $s0, 0x5F
    ctx->pc = 0x31b9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 95));
    // 0x31b9ec: 0x646818  mult        $t5, $v1, $a0
    ctx->pc = 0x31b9ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x31b9f0: 0x666018  mult        $t4, $v1, $a2
    ctx->pc = 0x31b9f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x31b9f4: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x31b9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x31b9f8: 0x2605003f  addiu       $a1, $s0, 0x3F
    ctx->pc = 0x31b9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x31b9fc: 0x0  nop
    ctx->pc = 0x31b9fcu;
    // NOP
label_31ba00:
    // 0x31ba00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31ba00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31ba04: 0x12b1804  sllv        $v1, $t3, $t1
    ctx->pc = 0x31ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 9) & 0x1F));
    // 0x31ba08: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x31ba08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x31ba0c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x31ba0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x31ba10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31ba10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31ba14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31BA14u;
    {
        const bool branch_taken_0x31ba14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA14u;
        // 0x31ba18: 0x831024  and         $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba14) {
            ctx->pc = 0x31BA34u;
            goto label_31ba34;
        }
    }
    ctx->pc = 0x31BA1Cu;
    // 0x31ba1c: 0xa0ad0000  sb          $t5, 0x0($a1)
    ctx->pc = 0x31ba1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 13));
    // 0x31ba20: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x31ba20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x31ba24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31ba24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31ba28: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x31ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x31ba2c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x31BA2Cu;
    {
        const bool branch_taken_0x31ba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA2Cu;
        // 0x31ba30: 0xa0ec0000  sb          $t4, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba2c) {
            ctx->pc = 0x31BAA8u;
            goto label_31baa8;
        }
    }
    ctx->pc = 0x31BA34u;
label_31ba34:
    // 0x31ba34: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x31BA34u;
    {
        const bool branch_taken_0x31ba34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ba34) {
            ctx->pc = 0x31BA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31BA34u;
            // 0x31ba38: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31BAB8u;
            goto label_31bab8;
        }
    }
    ctx->pc = 0x31BA3Cu;
    // 0x31ba3c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x31ba3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31ba40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31BA40u;
    {
        const bool branch_taken_0x31ba40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA40u;
        // 0x31ba44: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba40) {
            ctx->pc = 0x31BA64u;
            goto label_31ba64;
        }
    }
    ctx->pc = 0x31BA48u;
    // 0x31ba48: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x31ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31ba4c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x31ba4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x31ba50: 0x32027  nor         $a0, $zero, $v1
    ctx->pc = 0x31ba50u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x31ba54: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x31ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x31ba58: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x31ba58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x31ba5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31BA5Cu;
    {
        const bool branch_taken_0x31ba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA5Cu;
        // 0x31ba60: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba5c) {
            ctx->pc = 0x31BA74u;
            goto label_31ba74;
        }
    }
    ctx->pc = 0x31BA64u;
label_31ba64:
    // 0x31ba64: 0xa0a60000  sb          $a2, 0x0($a1)
    ctx->pc = 0x31ba64u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x31ba68: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x31ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x31ba6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31ba6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31ba70: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x31ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_31ba74:
    // 0x31ba74: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x31ba74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31ba78: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31BA78u;
    {
        const bool branch_taken_0x31ba78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA78u;
        // 0x31ba7c: 0x90e30000  lbu         $v1, 0x0($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba78) {
            ctx->pc = 0x31BAA0u;
            goto label_31baa0;
        }
    }
    ctx->pc = 0x31BA80u;
    // 0x31ba80: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x31ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31ba84: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x31ba84u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x31ba88: 0x12b1804  sllv        $v1, $t3, $t1
    ctx->pc = 0x31ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 9) & 0x1F));
    // 0x31ba8c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x31ba8cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x31ba90: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x31ba94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31ba94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31ba98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x31BA98u;
    {
        const bool branch_taken_0x31ba98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BA98u;
        // 0x31ba9c: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ba98) {
            ctx->pc = 0x31BAD8u;
            goto label_31bad8;
        }
    }
    ctx->pc = 0x31BAA0u;
label_31baa0:
    // 0x31baa0: 0xa0e60000  sb          $a2, 0x0($a3)
    ctx->pc = 0x31baa0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x31baa4: 0x12b1804  sllv        $v1, $t3, $t1
    ctx->pc = 0x31baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 9) & 0x1F));
label_31baa8:
    // 0x31baa8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31baa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x31baac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31baacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31bab0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31BAB0u;
    {
        const bool branch_taken_0x31bab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAB0u;
        // 0x31bab4: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bab0) {
            ctx->pc = 0x31BAD8u;
            goto label_31bad8;
        }
    }
    ctx->pc = 0x31BAB8u;
label_31bab8:
    // 0x31bab8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x31bab8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x31babc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31babcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31bac0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x31bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x31bac4: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x31bac4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x31bac8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x31bacc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x31baccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31bad0: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31bad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x31bad4: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x31bad4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
label_31bad8:
    // 0x31bad8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x31bad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x31badc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x31badcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x31bae0: 0x521ffc7  bgez        $t1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x31BAE0u;
    {
        const bool branch_taken_0x31bae0 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x31BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAE0u;
        // 0x31bae4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bae0) {
            ctx->pc = 0x31BA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ba00;
        }
    }
    ctx->pc = 0x31BAE8u;
    // 0x31bae8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x31bae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x31baec: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x31baecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x31baf0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x31baf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31baf4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x31baf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31baf8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x31baf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x31bafc: 0x3e00008  jr          $ra
    ctx->pc = 0x31BAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BAFCu;
        // 0x31bb00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BB04u;
    // 0x31bb04: 0x0  nop
    ctx->pc = 0x31bb04u;
    // NOP
    ctx->pc = 0x31bb08u;
}
