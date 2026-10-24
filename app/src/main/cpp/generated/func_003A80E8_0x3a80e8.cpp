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

// Function: func_003A80E8
// Address: 0x3a80e8 - 0x3a8fe0
void func_003A80E8_0x3a80e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A80E8_0x3a80e8");
#endif

    switch (ctx->pc) {
        case 0x3a8130u: goto label_3a8130;
        case 0x3a8198u: goto label_3a8198;
        case 0x3a81f0u: goto label_3a81f0;
        case 0x3a8270u: goto label_3a8270;
        case 0x3a82a8u: goto label_3a82a8;
        case 0x3a82d0u: goto label_3a82d0;
        case 0x3a83f0u: goto label_3a83f0;
        case 0x3a8434u: goto label_3a8434;
        case 0x3a84d4u: goto label_3a84d4;
        case 0x3a84f4u: goto label_3a84f4;
        case 0x3a8524u: goto label_3a8524;
        case 0x3a8534u: goto label_3a8534;
        case 0x3a854cu: goto label_3a854c;
        case 0x3a8558u: goto label_3a8558;
        case 0x3a8564u: goto label_3a8564;
        case 0x3a85f0u: goto label_3a85f0;
        case 0x3a8610u: goto label_3a8610;
        case 0x3a864cu: goto label_3a864c;
        case 0x3a8684u: goto label_3a8684;
        case 0x3a86a0u: goto label_3a86a0;
        case 0x3a86a4u: goto label_3a86a4;
        case 0x3a86d8u: goto label_3a86d8;
        case 0x3a86f0u: goto label_3a86f0;
        case 0x3a873cu: goto label_3a873c;
        case 0x3a87d0u: goto label_3a87d0;
        case 0x3a8800u: goto label_3a8800;
        case 0x3a8818u: goto label_3a8818;
        case 0x3a8854u: goto label_3a8854;
        case 0x3a8864u: goto label_3a8864;
        case 0x3a8878u: goto label_3a8878;
        case 0x3a8884u: goto label_3a8884;
        case 0x3a8894u: goto label_3a8894;
        case 0x3a889cu: goto label_3a889c;
        case 0x3a88a0u: goto label_3a88a0;
        case 0x3a88b8u: goto label_3a88b8;
        case 0x3a88c0u: goto label_3a88c0;
        case 0x3a88ccu: goto label_3a88cc;
        case 0x3a88ecu: goto label_3a88ec;
        case 0x3a8910u: goto label_3a8910;
        case 0x3a891cu: goto label_3a891c;
        case 0x3a892cu: goto label_3a892c;
        case 0x3a893cu: goto label_3a893c;
        case 0x3a8a10u: goto label_3a8a10;
        case 0x3a8a1cu: goto label_3a8a1c;
        case 0x3a8a2cu: goto label_3a8a2c;
        case 0x3a8a44u: goto label_3a8a44;
        case 0x3a8a58u: goto label_3a8a58;
        case 0x3a8abcu: goto label_3a8abc;
        case 0x3a8ae4u: goto label_3a8ae4;
        case 0x3a8afcu: goto label_3a8afc;
        case 0x3a8b14u: goto label_3a8b14;
        case 0x3a8b60u: goto label_3a8b60;
        case 0x3a8b6cu: goto label_3a8b6c;
        case 0x3a8b78u: goto label_3a8b78;
        case 0x3a8c0cu: goto label_3a8c0c;
        case 0x3a8c24u: goto label_3a8c24;
        case 0x3a8c2cu: goto label_3a8c2c;
        case 0x3a8c34u: goto label_3a8c34;
        case 0x3a8c48u: goto label_3a8c48;
        case 0x3a8c54u: goto label_3a8c54;
        case 0x3a8c60u: goto label_3a8c60;
        case 0x3a8c6cu: goto label_3a8c6c;
        case 0x3a8c98u: goto label_3a8c98;
        case 0x3a8ca0u: goto label_3a8ca0;
        case 0x3a8cacu: goto label_3a8cac;
        case 0x3a8cecu: goto label_3a8cec;
        case 0x3a8d10u: goto label_3a8d10;
        case 0x3a8d44u: goto label_3a8d44;
        case 0x3a8d58u: goto label_3a8d58;
        case 0x3a8d64u: goto label_3a8d64;
        case 0x3a8d70u: goto label_3a8d70;
        case 0x3a8d7cu: goto label_3a8d7c;
        case 0x3a8d8cu: goto label_3a8d8c;
        case 0x3a8dacu: goto label_3a8dac;
        case 0x3a8dc0u: goto label_3a8dc0;
        case 0x3a8dd0u: goto label_3a8dd0;
        case 0x3a8e7cu: goto label_3a8e7c;
        case 0x3a8e90u: goto label_3a8e90;
        case 0x3a8ea0u: goto label_3a8ea0;
        case 0x3a8eb4u: goto label_3a8eb4;
        case 0x3a8eccu: goto label_3a8ecc;
        case 0x3a8ee4u: goto label_3a8ee4;
        case 0x3a8efcu: goto label_3a8efc;
        case 0x3a8f10u: goto label_3a8f10;
        case 0x3a8f28u: goto label_3a8f28;
        case 0x3a8f5cu: goto label_3a8f5c;
        case 0x3a8f68u: goto label_3a8f68;
        case 0x3a8f74u: goto label_3a8f74;
        case 0x3a8f80u: goto label_3a8f80;
        case 0x3a8f8cu: goto label_3a8f8c;
        case 0x3a8fb0u: goto label_3a8fb0;
        default: break;
    }

    ctx->pc = 0x3a80e8u;

    // 0x3a80e8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3a80e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3a80ec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a80ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80f0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3a80f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x3a80f4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x3a80f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x3a80f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a80f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a80fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3a80fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x3a8100: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3a8100u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8104: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x3a8104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x3a8108: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x3a8108u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a810c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3a810cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x3a8110: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a8110u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8114: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3a8114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x3a8118: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3a8118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x3a811c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3a811cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x3a8120: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3a8120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x3a8124: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x3a8124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x3a8128: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a8128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3a812c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3a812cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_3a8130:
    // 0x3a8130: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x3a8130u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3a8134: 0x2c62002e  sltiu       $v0, $v1, 0x2E
    ctx->pc = 0x3a8134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x3a8138: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3A8138u;
    {
        const bool branch_taken_0x3a8138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8138u;
        // 0x3a813c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8138) {
            ctx->pc = 0x3A8184u;
            goto label_3a8184;
        }
    }
    ctx->pc = 0x3A8140u;
    // 0x3a8140: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a8140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3a8144: 0x2442f630  addiu       $v0, $v0, -0x9D0
    ctx->pc = 0x3a8144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964784));
    // 0x3a8148: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a8148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a814c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a814cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a8150: 0x800008  jr          $a0
    ctx->pc = 0x3A8150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A8158u: goto label_3a8158;
            case 0x3A8160u: goto label_3a8160;
            case 0x3A8178u: goto label_3a8178;
            case 0x3A8180u: goto label_3a8180;
            case 0x3A839Cu: goto label_3a839c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8150u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A8158u;
label_3a8158:
    // 0x3a8158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a8158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a815c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x3a815cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_3a8160:
    // 0x3a8160: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3a8160u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3a8164: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x3a8164u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3a8168: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A8168u;
    {
        const bool branch_taken_0x3a8168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8168) {
            ctx->pc = 0x3A816Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8168u;
            // 0x3a816c: 0x82a30000  lb          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8184u;
            goto label_3a8184;
        }
    }
    ctx->pc = 0x3A8170u;
    // 0x3a8170: 0x10000386  b           . + 4 + (0x386 << 2)
    ctx->pc = 0x3A8170u;
    {
        const bool branch_taken_0x3a8170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8170u;
        // 0x3a8174: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8170) {
            ctx->pc = 0x3A8F8Cu;
            goto label_3a8f8c;
        }
    }
    ctx->pc = 0x3A8178u;
label_3a8178:
    // 0x3a8178: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x3A8178u;
    {
        const bool branch_taken_0x3a8178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8178u;
        // 0x3a817c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8178) {
            ctx->pc = 0x3A8130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8130;
        }
    }
    ctx->pc = 0x3A8180u;
label_3a8180:
    // 0x3a8180: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x3a8180u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_3a8184:
    // 0x3a8184: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3a8184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3a8188: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A8188u;
    {
        const bool branch_taken_0x3a8188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8188u;
        // 0x3a818c: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8188) {
            ctx->pc = 0x3A81B8u;
            goto label_3a81b8;
        }
    }
    ctx->pc = 0x3A8190u;
    // 0x3a8190: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3a8190u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8194: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x3a8194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3a8198:
    // 0x3a8198: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3a8198u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3a819c: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x3a819cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3a81a0: 0x0  nop
    ctx->pc = 0x3a81a0u;
    // NOP
    // 0x3a81a4: 0x0  nop
    ctx->pc = 0x3a81a4u;
    // NOP
    // 0x3a81a8: 0x1064fffb  beq         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A81A8u;
    {
        const bool branch_taken_0x3a81a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3A81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A81A8u;
        // 0x3a81ac: 0x92a20000  lbu         $v0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a81a8) {
            ctx->pc = 0x3A8198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8198;
        }
    }
    ctx->pc = 0x3A81B0u;
    // 0x3a81b0: 0x10600376  beqz        $v1, . + 4 + (0x376 << 2)
    ctx->pc = 0x3A81B0u;
    {
        const bool branch_taken_0x3a81b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A81B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A81B0u;
        // 0x3a81b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a81b0) {
            ctx->pc = 0x3A8F8Cu;
            goto label_3a8f8c;
        }
    }
    ctx->pc = 0x3A81B8u;
label_3a81b8:
    // 0x3a81b8: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x3a81b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3a81bc: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x3a81bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x3a81c0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x3a81c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a81c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a81c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a81c8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3a81c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x3a81cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a81ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a81d0: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x3a81d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x3a81d4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A81D4u;
    {
        const bool branch_taken_0x3a81d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A81D4u;
        // 0x3a81d8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a81d4) {
            ctx->pc = 0x3A8248u;
            goto label_3a8248;
        }
    }
    ctx->pc = 0x3A81DCu;
    // 0x3a81dc: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x3a81dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x3a81e0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A81E0u;
    {
        const bool branch_taken_0x3a81e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A81E0u;
        // 0x3a81e4: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a81e0) {
            ctx->pc = 0x3A824Cu;
            goto label_3a824c;
        }
    }
    ctx->pc = 0x3A81E8u;
    // 0x3a81e8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3a81e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a81ec: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x3a81ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
label_3a81f0:
    // 0x3a81f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A81F0u;
    {
        const bool branch_taken_0x3a81f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A81F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A81F0u;
        // 0x3a81f4: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a81f0) {
            ctx->pc = 0x3A820Cu;
            goto label_3a820c;
        }
    }
    ctx->pc = 0x3A81F8u;
    // 0x3a81f8: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x3a81f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x3a81fc: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x3a81fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3a8200: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x3a8200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x3a8204: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A8204u;
    {
        const bool branch_taken_0x3a8204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8204u;
        // 0x3a8208: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8204) {
            ctx->pc = 0x3A8228u;
            goto label_3a8228;
        }
    }
    ctx->pc = 0x3A820Cu;
label_3a820c:
    // 0x3a820c: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x3a820cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3a8210: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8210u;
    {
        const bool branch_taken_0x3a8210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8210u;
        // 0x3a8214: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8210) {
            ctx->pc = 0x3A8228u;
            goto label_3a8228;
        }
    }
    ctx->pc = 0x3A8218u;
    // 0x3a8218: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x3a8218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x3a821c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x3a821cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x3a8220: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x3a8220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3a8224: 0x6452ffd0  daddiu      $s2, $v0, -0x30
    ctx->pc = 0x3a8224u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
label_3a8228:
    // 0x3a8228: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3a8228u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3a822c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3a822cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3a8230: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x3a8230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x3a8234: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A8234u;
    {
        const bool branch_taken_0x3a8234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8234u;
        // 0x3a8238: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8234) {
            ctx->pc = 0x3A8248u;
            goto label_3a8248;
        }
    }
    ctx->pc = 0x3A823Cu;
    // 0x3a823c: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x3a823cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x3a8240: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3A8240u;
    {
        const bool branch_taken_0x3a8240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8240u;
        // 0x3a8244: 0x2a820009  slti        $v0, $s4, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8240) {
            ctx->pc = 0x3A81F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a81f0;
        }
    }
    ctx->pc = 0x3A8248u;
label_3a8248:
    // 0x3a8248: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x3a8248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_3a824c:
    // 0x3a824c: 0x14820047  bne         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x3A824Cu;
    {
        const bool branch_taken_0x3a824c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A8250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A824Cu;
        // 0x3a8250: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a824c) {
            ctx->pc = 0x3A836Cu;
            goto label_3a836c;
        }
    }
    ctx->pc = 0x3A8254u;
    // 0x3a8254: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3a8254u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3a8258: 0x16800040  bnez        $s4, . + 4 + (0x40 << 2)
    ctx->pc = 0x3A8258u;
    {
        const bool branch_taken_0x3a8258 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8258u;
        // 0x3a825c: 0x82a40000  lb          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8258) {
            ctx->pc = 0x3A835Cu;
            goto label_3a835c;
        }
    }
    ctx->pc = 0x3A8260u;
    // 0x3a8260: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3a8260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3a8264: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8264u;
    {
        const bool branch_taken_0x3a8264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a8264) {
            ctx->pc = 0x3A8268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8264u;
            // 0x3a8268: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A828Cu;
            goto label_3a828c;
        }
    }
    ctx->pc = 0x3A826Cu;
    // 0x3a826c: 0x0  nop
    ctx->pc = 0x3a826cu;
    // NOP
label_3a8270:
    // 0x3a8270: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3a8270u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3a8274: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3a8274u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3a8278: 0x0  nop
    ctx->pc = 0x3a8278u;
    // NOP
    // 0x3a827c: 0x0  nop
    ctx->pc = 0x3a827cu;
    // NOP
    // 0x3a8280: 0x1082fffb  beq         $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A8280u;
    {
        const bool branch_taken_0x3a8280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8280u;
        // 0x3a8284: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8280) {
            ctx->pc = 0x3A8270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8270;
        }
    }
    ctx->pc = 0x3A8288u;
    // 0x3a8288: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x3a8288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_3a828c:
    // 0x3a828c: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x3a828cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3a8290: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3A8290u;
    {
        const bool branch_taken_0x3a8290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8290u;
        // 0x3a8294: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8290) {
            ctx->pc = 0x3A8370u;
            goto label_3a8370;
        }
    }
    ctx->pc = 0x3A8298u;
    // 0x3a8298: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3a8298u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a829c: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x3a829cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x3a82a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a82a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a82a4: 0x26a80001  addiu       $t0, $s5, 0x1
    ctx->pc = 0x3a82a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3a82a8:
    // 0x3a82a8: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x3a82a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x3a82ac: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3A82ACu;
    {
        const bool branch_taken_0x3a82ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A82B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A82ACu;
        // 0x3a82b0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a82ac) {
            ctx->pc = 0x3A8354u;
            goto label_3a8354;
        }
    }
    ctx->pc = 0x3A82B4u;
    // 0x3a82b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a82b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a82b8: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x3a82b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3a82bc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A82BCu;
    {
        const bool branch_taken_0x3a82bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A82C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A82BCu;
        // 0x3a82c0: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a82bc) {
            ctx->pc = 0x3A830Cu;
            goto label_3a830c;
        }
    }
    ctx->pc = 0x3A82C4u;
    // 0x3a82c4: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x3a82c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3a82c8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3a82c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a82cc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3a82ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a82d0:
    // 0x3a82d0: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3a82d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3a82d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A82D4u;
    {
        const bool branch_taken_0x3a82d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A82D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A82D4u;
        // 0x3a82d8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a82d4) {
            ctx->pc = 0x3A82ECu;
            goto label_3a82ec;
        }
    }
    ctx->pc = 0x3A82DCu;
    // 0x3a82dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3a82dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a82e0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x3a82e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a82e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A82E4u;
    {
        const bool branch_taken_0x3a82e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A82E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A82E4u;
        // 0x3a82e8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a82e4) {
            ctx->pc = 0x3A8300u;
            goto label_3a8300;
        }
    }
    ctx->pc = 0x3A82ECu;
label_3a82ec:
    // 0x3a82ec: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x3a82ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3a82f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A82F0u;
    {
        const bool branch_taken_0x3a82f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A82F0u;
        // 0x3a82f4: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a82f0) {
            ctx->pc = 0x3A8300u;
            goto label_3a8300;
        }
    }
    ctx->pc = 0x3A82F8u;
    // 0x3a82f8: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x3a82f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x3a82fc: 0x29078  dsll        $s2, $v0, 1
    ctx->pc = 0x3a82fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 1);
label_3a8300:
    // 0x3a8300: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3a8300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3a8304: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A8304u;
    {
        const bool branch_taken_0x3a8304 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8304u;
        // 0x3a8308: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8304) {
            ctx->pc = 0x3A82D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a82d0;
        }
    }
    ctx->pc = 0x3A830Cu;
label_3a830c:
    // 0x3a830c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3a830cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8310: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3a8310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3a8314: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A8314u;
    {
        const bool branch_taken_0x3a8314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8314u;
        // 0x3a8318: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8314) {
            ctx->pc = 0x3A8338u;
            goto label_3a8338;
        }
    }
    ctx->pc = 0x3A831Cu;
    // 0x3a831c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3a831cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a8320: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3a8320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a8324: 0x800013  mtlo        $a0
    ctx->pc = 0x3a8324u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x3a8328: 0x70620000  madd        $zero, $v1, $v0
    ctx->pc = 0x3a8328u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x3a832c: 0x1812  mflo        $v1
    ctx->pc = 0x3a832cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3a8330: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3A8330u;
    {
        const bool branch_taken_0x3a8330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8330u;
        // 0x3a8334: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8330) {
            ctx->pc = 0x3A8350u;
            goto label_3a8350;
        }
    }
    ctx->pc = 0x3A8338u;
label_3a8338:
    // 0x3a8338: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x3a8338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3a833c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A833Cu;
    {
        const bool branch_taken_0x3a833c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A833Cu;
        // 0x3a8340: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a833c) {
            ctx->pc = 0x3A8350u;
            goto label_3a8350;
        }
    }
    ctx->pc = 0x3A8344u;
    // 0x3a8344: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x3a8344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x3a8348: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x3a8348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x3a834c: 0x82902d  daddu       $s2, $a0, $v0
    ctx->pc = 0x3a834cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_3a8350:
    // 0x3a8350: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a8350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a8354:
    // 0x3a8354: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3a8354u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8358: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3a8358u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_3a835c:
    // 0x3a835c: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x3a835cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x3a8360: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3a8360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3a8364: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3A8364u;
    {
        const bool branch_taken_0x3a8364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8364u;
        // 0x3a8368: 0x26a80001  addiu       $t0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8364) {
            ctx->pc = 0x3A82A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a82a8;
        }
    }
    ctx->pc = 0x3A836Cu;
label_3a836c:
    // 0x3a836c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x3a836cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_3a8370:
    // 0x3a8370: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A8370u;
    {
        const bool branch_taken_0x3a8370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8370u;
        // 0x3a8374: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8370) {
            ctx->pc = 0x3A8384u;
            goto label_3a8384;
        }
    }
    ctx->pc = 0x3A8378u;
    // 0x3a8378: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x3a8378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x3a837c: 0x14820047  bne         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x3A837Cu;
    {
        const bool branch_taken_0x3a837c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a837c) {
            ctx->pc = 0x3A849Cu;
            goto label_3a849c;
        }
    }
    ctx->pc = 0x3A8384u;
label_3a8384:
    // 0x3a8384: 0x56800007  bnel        $s4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A8384u;
    {
        const bool branch_taken_0x3a8384 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8384) {
            ctx->pc = 0x3A8388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8384u;
            // 0x3a8388: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A83A4u;
            goto label_3a83a4;
        }
    }
    ctx->pc = 0x3A838Cu;
    // 0x3a838c: 0x54c00005  bnel        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A838Cu;
    {
        const bool branch_taken_0x3a838c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a838c) {
            ctx->pc = 0x3A8390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A838Cu;
            // 0x3a8390: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A83A4u;
            goto label_3a83a4;
        }
    }
    ctx->pc = 0x3A8394u;
    // 0x3a8394: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A8394u;
    {
        const bool branch_taken_0x3a8394 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8394) {
            ctx->pc = 0x3A8398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8394u;
            // 0x3a8398: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A83A4u;
            goto label_3a83a4;
        }
    }
    ctx->pc = 0x3A839Cu;
label_3a839c:
    // 0x3a839c: 0x100002fb  b           . + 4 + (0x2FB << 2)
    ctx->pc = 0x3A839Cu;
    {
        const bool branch_taken_0x3a839c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A83A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A839Cu;
        // 0x3a83a0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a839c) {
            ctx->pc = 0x3A8F8Cu;
            goto label_3a8f8c;
        }
    }
    ctx->pc = 0x3A83A4u;
label_3a83a4:
    // 0x3a83a4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3a83a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3a83a8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x3a83a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3a83ac: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3a83acu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3a83b0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A83B0u;
    {
        const bool branch_taken_0x3a83b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A83B0u;
        // 0x3a83b4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a83b0) {
            ctx->pc = 0x3A83C8u;
            goto label_3a83c8;
        }
    }
    ctx->pc = 0x3A83B8u;
    // 0x3a83b8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3a83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3a83bc: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A83BCu;
    {
        const bool branch_taken_0x3a83bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A83C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A83BCu;
        // 0x3a83c0: 0x2482ffd0  addiu       $v0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a83bc) {
            ctx->pc = 0x3A83D4u;
            goto label_3a83d4;
        }
    }
    ctx->pc = 0x3A83C4u;
    // 0x3a83c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3a83c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a83c8:
    // 0x3a83c8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3a83c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3a83cc: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3a83ccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3a83d0: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x3a83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_3a83d4:
    // 0x3a83d4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x3a83d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3a83d8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3A83D8u;
    {
        const bool branch_taken_0x3a83d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A83DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A83D8u;
        // 0x3a83dc: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a83d8) {
            ctx->pc = 0x3A8498u;
            goto label_3a8498;
        }
    }
    ctx->pc = 0x3A83E0u;
    // 0x3a83e0: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A83E0u;
    {
        const bool branch_taken_0x3a83e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a83e0) {
            ctx->pc = 0x3A83E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A83E0u;
            // 0x3a83e4: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A840Cu;
            goto label_3a840c;
        }
    }
    ctx->pc = 0x3A83E8u;
    // 0x3a83e8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3a83e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3a83ec: 0x0  nop
    ctx->pc = 0x3a83ecu;
    // NOP
label_3a83f0:
    // 0x3a83f0: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3a83f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3a83f4: 0x0  nop
    ctx->pc = 0x3a83f4u;
    // NOP
    // 0x3a83f8: 0x0  nop
    ctx->pc = 0x3a83f8u;
    // NOP
    // 0x3a83fc: 0x0  nop
    ctx->pc = 0x3a83fcu;
    // NOP
    // 0x3a8400: 0x5082fffb  beql        $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A8400u;
    {
        const bool branch_taken_0x3a8400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a8400) {
            ctx->pc = 0x3A8404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8400u;
            // 0x3a8404: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A83F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a83f0;
        }
    }
    ctx->pc = 0x3A8408u;
    // 0x3a8408: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x3a8408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_3a840c:
    // 0x3a840c: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x3a840cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x3a8410: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A8410u;
    {
        const bool branch_taken_0x3a8410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8410u;
        // 0x3a8414: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8410) {
            ctx->pc = 0x3A8490u;
            goto label_3a8490;
        }
    }
    ctx->pc = 0x3A8418u;
    // 0x3a8418: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3a8418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a841c: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x3a841cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x3a8420: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3a8420u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3a8424: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3a8424u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3a8428: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x3a8428u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x3a842c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A842Cu;
    {
        const bool branch_taken_0x3a842c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A842Cu;
        // 0x3a8430: 0x2a71023  subu        $v0, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a842c) {
            ctx->pc = 0x3A846Cu;
            goto label_3a846c;
        }
    }
    ctx->pc = 0x3A8434u;
label_3a8434:
    // 0x3a8434: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x3a8434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x3a8438: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A8438u;
    {
        const bool branch_taken_0x3a8438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8438u;
        // 0x3a843c: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8438) {
            ctx->pc = 0x3A8468u;
            goto label_3a8468;
        }
    }
    ctx->pc = 0x3A8440u;
    // 0x3a8440: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3a8440u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3a8444: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x3a8444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
    // 0x3a8448: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3a8448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3a844c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x3a844cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x3a8450: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x3a8450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3a8454: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x3a8454u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3a8458: 0x6442ffd0  daddiu      $v0, $v0, -0x30
    ctx->pc = 0x3a8458u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
    // 0x3a845c: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x3a845cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x3a8460: 0x1060fff4  beqz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A8460u;
    {
        const bool branch_taken_0x3a8460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8460u;
        // 0x3a8464: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8460) {
            ctx->pc = 0x3A8434u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8434;
        }
    }
    ctx->pc = 0x3A8468u;
label_3a8468:
    // 0x3a8468: 0x2a71023  subu        $v0, $s5, $a3
    ctx->pc = 0x3a8468u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_3a846c:
    // 0x3a846c: 0x3c040098  lui         $a0, 0x98
    ctx->pc = 0x3a846cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)152 << 16));
    // 0x3a8470: 0x3484967f  ori         $a0, $a0, 0x967F
    ctx->pc = 0x3a8470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)38527);
    // 0x3a8474: 0xdfa70010  ld          $a3, 0x10($sp)
    ctx->pc = 0x3a8474u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a8478: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3a8478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3a847c: 0x82380a  movz        $a3, $a0, $v0
    ctx->pc = 0x3a847cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x3a8480: 0x7182f  dsubu       $v1, $zero, $a3
    ctx->pc = 0x3a8480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 7));
    // 0x3a8484: 0x68380b  movn        $a3, $v1, $t0
    ctx->pc = 0x3a8484u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x3a8488: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A8488u;
    {
        const bool branch_taken_0x3a8488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8488u;
        // 0x3a848c: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8488) {
            ctx->pc = 0x3A849Cu;
            goto label_3a849c;
        }
    }
    ctx->pc = 0x3A8490u;
label_3a8490:
    // 0x3a8490: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A8490u;
    {
        const bool branch_taken_0x3a8490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8490u;
        // 0x3a8494: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8490) {
            ctx->pc = 0x3A849Cu;
            goto label_3a849c;
        }
    }
    ctx->pc = 0x3A8498u;
label_3a8498:
    // 0x3a8498: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3a8498u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a849c:
    // 0x3a849c: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A849Cu;
    {
        const bool branch_taken_0x3a849c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A84A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A849Cu;
        // 0x3a84a0: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a849c) {
            ctx->pc = 0x3A84B0u;
            goto label_3a84b0;
        }
    }
    ctx->pc = 0x3A84A4u;
    // 0x3a84a4: 0x2aa280b  movn        $a1, $s5, $t2
    ctx->pc = 0x3a84a4u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x3a84a8: 0x100002b8  b           . + 4 + (0x2B8 << 2)
    ctx->pc = 0x3A84A8u;
    {
        const bool branch_taken_0x3a84a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A84A8u;
        // 0x3a84ac: 0xa6a80a  movz        $s5, $a1, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a84a8) {
            ctx->pc = 0x3A8F8Cu;
            goto label_3a8f8c;
        }
    }
    ctx->pc = 0x3A84B0u;
label_3a84b0:
    // 0x3a84b0: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x3a84b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3a84b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3a84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a84b8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x3a84b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a84bc: 0x69182f  dsubu       $v1, $v1, $t1
    ctx->pc = 0x3a84bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x3a84c0: 0x282980b  movn        $s3, $s4, $v0
    ctx->pc = 0x3a84c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 20));
    // 0x3a84c4: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x3a84c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3a84c8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3a84c8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3a84cc: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x3A84CCu;
    SET_GPR_U32(ctx, 31, 0x3A84D4u);
    ctx->pc = 0x3A84D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A84CCu;
    // 0x3a84d0: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x3A84CCu, 0x3A84D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A84D4u;
label_3a84d4:
    // 0x3a84d4: 0x29ef00a  movz        $fp, $s4, $fp
    ctx->pc = 0x3a84d4u;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 20));
    // 0x3a84d8: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x3a84d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a84dc: 0x4e10006  bgez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A84DCu;
    {
        const bool branch_taken_0x3a84dc = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x3A84E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A84DCu;
        // 0x3a84e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a84dc) {
            ctx->pc = 0x3A84F8u;
            goto label_3a84f8;
        }
    }
    ctx->pc = 0x3A84E4u;
    // 0x3a84e4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x3a84e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3a84e8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3a84e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3a84ec: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3A84ECu;
    SET_GPR_U32(ctx, 31, 0x3A84F4u);
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3A84ECu, 0x3A84F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A84F4u;
label_3a84f4:
    // 0x3a84f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a84f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a84f8:
    // 0x3a84f8: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x3a84f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3a84fc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3A84FCu;
    {
        const bool branch_taken_0x3a84fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A84FCu;
        // 0x3a8500: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a84fc) {
            ctx->pc = 0x3A8568u;
            goto label_3a8568;
        }
    }
    ctx->pc = 0x3A8504u;
    // 0x3a8504: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3a8504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3a8508: 0x2662fff7  addiu       $v0, $s3, -0x9
    ctx->pc = 0x3a8508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967287));
    // 0x3a850c: 0x2463fce8  addiu       $v1, $v1, -0x318
    ctx->pc = 0x3a850cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966504));
    // 0x3a8510: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3a8510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3a8514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a8514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a8518: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a8518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a851c: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A851Cu;
    SET_GPR_U32(ctx, 31, 0x3A8524u);
    ctx->pc = 0x3A8520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A851Cu;
    // 0x3a8520: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A851Cu, 0x3A8524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8524u;
label_3a8524:
    // 0x3a8524: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8524u;
    {
        const bool branch_taken_0x3a8524 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x3A8528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8524u;
        // 0x3a8528: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8524) {
            ctx->pc = 0x3A853Cu;
            goto label_3a853c;
        }
    }
    ctx->pc = 0x3A852Cu;
    // 0x3a852c: 0xc0c7726  jal         func_31DC98
    ctx->pc = 0x3A852Cu;
    SET_GPR_U32(ctx, 31, 0x3A8534u);
    ctx->pc = 0x3A8530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A852Cu;
    // 0x3a8530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DC98u, 0x3A852Cu, 0x3A8534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8534u;
label_3a8534:
    // 0x3a8534: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8534u;
    {
        const bool branch_taken_0x3a8534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8534u;
        // 0x3a8538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8534) {
            ctx->pc = 0x3A855Cu;
            goto label_3a855c;
        }
    }
    ctx->pc = 0x3A853Cu;
label_3a853c:
    // 0x3a853c: 0x12107a  dsrl        $v0, $s2, 1
    ctx->pc = 0x3a853cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 1);
    // 0x3a8540: 0x32440001  andi        $a0, $s2, 0x1
    ctx->pc = 0x3a8540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3a8544: 0xc0c7726  jal         func_31DC98
    ctx->pc = 0x3A8544u;
    SET_GPR_U32(ctx, 31, 0x3A854Cu);
    ctx->pc = 0x3A8548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8544u;
    // 0x3a8548: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DC98u, 0x3A8544u, 0x3A854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A854Cu;
label_3a854c:
    // 0x3a854c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a854cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8550: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3A8550u;
    SET_GPR_U32(ctx, 31, 0x3A8558u);
    ctx->pc = 0x3A8554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8550u;
    // 0x3a8554: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3A8550u, 0x3A8558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8558u;
label_3a8558:
    // 0x3a8558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a8558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a855c:
    // 0x3a855c: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3A855Cu;
    SET_GPR_U32(ctx, 31, 0x3A8564u);
    ctx->pc = 0x3A8560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A855Cu;
    // 0x3a8560: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3A855Cu, 0x3A8564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8564u;
label_3a8564:
    // 0x3a8564: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a8564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8568:
    // 0x3a8568: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x3a8568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3a856c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3A856Cu;
    {
        const bool branch_taken_0x3a856c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A856Cu;
        // 0x3a8570: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a856c) {
            ctx->pc = 0x3A8654u;
            goto label_3a8654;
        }
    }
    ctx->pc = 0x3A8574u;
    // 0x3a8574: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x3a8574u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a8578: 0x10400285  beqz        $v0, . + 4 + (0x285 << 2)
    ctx->pc = 0x3A8578u;
    {
        const bool branch_taken_0x3a8578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8578u;
        // 0x3a857c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8578) {
            ctx->pc = 0x3A8F90u;
            goto label_3a8f90;
        }
    }
    ctx->pc = 0x3A8580u;
    // 0x3a8580: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3A8580u;
    {
        const bool branch_taken_0x3a8580 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3A8584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8580u;
        // 0x3a8584: 0x28420017  slti        $v0, $v0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8580) {
            ctx->pc = 0x3A8618u;
            goto label_3a8618;
        }
    }
    ctx->pc = 0x3A8588u;
    // 0x3a8588: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8588u;
    {
        const bool branch_taken_0x3a8588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8588u;
        // 0x3a858c: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8588) {
            ctx->pc = 0x3A85B0u;
            goto label_3a85b0;
        }
    }
    ctx->pc = 0x3A8590u;
    // 0x3a8590: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a8590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a8594: 0x2442fce8  addiu       $v0, $v0, -0x318
    ctx->pc = 0x3a8594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966504));
    // 0x3a8598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a8598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a859c: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3a859cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3a85a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3a85a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3a85a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3a85a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3a85a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3A85A8u;
    {
        const bool branch_taken_0x3a85a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A85ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A85A8u;
        // 0x3a85ac: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a85a8) {
            ctx->pc = 0x3A8608u;
            goto label_3a8608;
        }
    }
    ctx->pc = 0x3A85B0u;
label_3a85b0:
    // 0x3a85b0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3a85b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3a85b4: 0x743823  subu        $a3, $v1, $s4
    ctx->pc = 0x3a85b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x3a85b8: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x3a85b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a85bc: 0x24e20016  addiu       $v0, $a3, 0x16
    ctx->pc = 0x3a85bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 22));
    // 0x3a85c0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3a85c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3a85c4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3A85C4u;
    {
        const bool branch_taken_0x3a85c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A85C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A85C4u;
        // 0x3a85c8: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a85c4) {
            ctx->pc = 0x3A8658u;
            goto label_3a8658;
        }
    }
    ctx->pc = 0x3A85CCu;
    // 0x3a85cc: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x3a85ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x3a85d0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x3a85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3a85d4: 0x2610fce8  addiu       $s0, $s0, -0x318
    ctx->pc = 0x3a85d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966504));
    // 0x3a85d8: 0x67182f  dsubu       $v1, $v1, $a3
    ctx->pc = 0x3a85d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
    // 0x3a85dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3a85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3a85e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a85e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a85e4: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x3a85e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a85e8: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A85E8u;
    SET_GPR_U32(ctx, 31, 0x3A85F0u);
    ctx->pc = 0x3A85ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A85E8u;
    // 0x3a85ec: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A85E8u, 0x3A85F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A85F0u;
label_3a85f0:
    // 0x3a85f0: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x3a85f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a85f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a85f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a85f8: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x3a85f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3a85fc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3a85fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3a8600: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3a8600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3a8604: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3a8604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3a8608:
    // 0x3a8608: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A8608u;
    SET_GPR_U32(ctx, 31, 0x3A8610u);
    ctx->pc = 0x3A860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8608u;
    // 0x3a860c: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A8608u, 0x3A8610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8610u;
label_3a8610:
    // 0x3a8610: 0x1000025e  b           . + 4 + (0x25E << 2)
    ctx->pc = 0x3A8610u;
    {
        const bool branch_taken_0x3a8610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8610u;
        // 0x3a8614: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8610) {
            ctx->pc = 0x3A8F8Cu;
            goto label_3a8f8c;
        }
    }
    ctx->pc = 0x3A8618u;
label_3a8618:
    // 0x3a8618: 0xdfa70010  ld          $a3, 0x10($sp)
    ctx->pc = 0x3a8618u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a861c: 0x28e2ffea  slti        $v0, $a3, -0x16
    ctx->pc = 0x3a861cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967274) ? 1 : 0);
    // 0x3a8620: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A8620u;
    {
        const bool branch_taken_0x3a8620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8620u;
        // 0x3a8624: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8620) {
            ctx->pc = 0x3A8658u;
            goto label_3a8658;
        }
    }
    ctx->pc = 0x3A8628u;
    // 0x3a8628: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x3a8628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3a862c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3a862cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3a8630: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a8630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a8634: 0x2442fce8  addiu       $v0, $v0, -0x318
    ctx->pc = 0x3a8634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966504));
    // 0x3a8638: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3a8638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3a863c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3a863cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a8640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a8640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8644: 0xc0c797c  jal         func_31E5F0
    ctx->pc = 0x3A8644u;
    SET_GPR_U32(ctx, 31, 0x3A864Cu);
    ctx->pc = 0x3A8648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8644u;
    // 0x3a8648: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E5F0u, 0x3A8644u, 0x3A864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A864Cu;
label_3a864c:
    // 0x3a864c: 0x1000024f  b           . + 4 + (0x24F << 2)
    ctx->pc = 0x3A864Cu;
    {
        const bool branch_taken_0x3a864c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A864Cu;
        // 0x3a8650: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a864c) {
            ctx->pc = 0x3A8F8Cu;
            goto label_3a8f8c;
        }
    }
    ctx->pc = 0x3A8654u;
label_3a8654:
    // 0x3a8654: 0x2931023  subu        $v0, $s4, $s3
    ctx->pc = 0x3a8654u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_3a8658:
    // 0x3a8658: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3a8658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a865c: 0x1a000050  blez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x3A865Cu;
    {
        const bool branch_taken_0x3a865c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3A8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A865Cu;
        // 0x3a8660: 0x3207000f  andi        $a3, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a865c) {
            ctx->pc = 0x3A87A0u;
            goto label_3a87a0;
        }
    }
    ctx->pc = 0x3A8664u;
    // 0x3a8664: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A8664u;
    {
        const bool branch_taken_0x3a8664 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8664u;
        // 0x3a8668: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8664) {
            ctx->pc = 0x3A8688u;
            goto label_3a8688;
        }
    }
    ctx->pc = 0x3A866Cu;
    // 0x3a866c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x3a866cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3a8670: 0x2442fce8  addiu       $v0, $v0, -0x318
    ctx->pc = 0x3a8670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966504));
    // 0x3a8674: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a8674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8678: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a8678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a867c: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A867Cu;
    SET_GPR_U32(ctx, 31, 0x3A8684u);
    ctx->pc = 0x3A8680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A867Cu;
    // 0x3a8680: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A867Cu, 0x3A8684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8684u;
label_3a8684:
    // 0x3a8684: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a8684u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8688:
    // 0x3a8688: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x3a8688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3a868c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3a868cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3a8690: 0x12000090  beqz        $s0, . + 4 + (0x90 << 2)
    ctx->pc = 0x3A8690u;
    {
        const bool branch_taken_0x3a8690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8690u;
        // 0x3a8694: 0x2a020135  slti        $v0, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8690) {
            ctx->pc = 0x3A88D4u;
            goto label_3a88d4;
        }
    }
    ctx->pc = 0x3A8698u;
    // 0x3a8698: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8698u;
    {
        const bool branch_taken_0x3a8698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8698) {
            ctx->pc = 0x3A869Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8698u;
            // 0x3a869c: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A86C0u;
            goto label_3a86c0;
        }
    }
    ctx->pc = 0x3A86A0u;
label_3a86a0:
    // 0x3a86a0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x3a86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_3a86a4:
    // 0x3a86a4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3a86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3a86a8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x3a86a8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x3a86ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3a86acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a86b0: 0x14400227  bnez        $v0, . + 4 + (0x227 << 2)
    ctx->pc = 0x3A86B0u;
    {
        const bool branch_taken_0x3a86b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A86B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A86B0u;
        // 0x3a86b4: 0xdc71fc88  ld          $s1, -0x378($v1) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294966408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a86b0) {
            ctx->pc = 0x3A8F50u;
            goto label_3a8f50;
        }
    }
    ctx->pc = 0x3A86B8u;
    // 0x3a86b8: 0x10000235  b           . + 4 + (0x235 << 2)
    ctx->pc = 0x3A86B8u;
    {
        const bool branch_taken_0x3a86b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A86BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A86B8u;
        // 0x3a86bc: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a86b8) {
            ctx->pc = 0x3A8F90u;
            goto label_3a8f90;
        }
    }
    ctx->pc = 0x3A86C0u;
label_3a86c0:
    // 0x3a86c0: 0x12000084  beqz        $s0, . + 4 + (0x84 << 2)
    ctx->pc = 0x3A86C0u;
    {
        const bool branch_taken_0x3a86c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A86C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A86C0u;
        // 0x3a86c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a86c0) {
            ctx->pc = 0x3A88D4u;
            goto label_3a88d4;
        }
    }
    ctx->pc = 0x3A86C8u;
    // 0x3a86c8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3a86c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a86cc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A86CCu;
    {
        const bool branch_taken_0x3a86cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A86CCu;
        // 0x3a86d0: 0x3c160046  lui         $s6, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a86cc) {
            ctx->pc = 0x3A8708u;
            goto label_3a8708;
        }
    }
    ctx->pc = 0x3A86D4u;
    // 0x3a86d4: 0x26d2fdb0  addiu       $s2, $s6, -0x250
    ctx->pc = 0x3a86d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966704));
label_3a86d8:
    // 0x3a86d8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3a86d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3a86dc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A86DCu;
    {
        const bool branch_taken_0x3a86dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a86dc) {
            ctx->pc = 0x3A86E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A86DCu;
            // 0x3a86e0: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A86F8u;
            goto label_3a86f8;
        }
    }
    ctx->pc = 0x3A86E4u;
    // 0x3a86e4: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x3a86e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a86e8: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A86E8u;
    SET_GPR_U32(ctx, 31, 0x3A86F0u);
    ctx->pc = 0x3A86ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A86E8u;
    // 0x3a86ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A86E8u, 0x3A86F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A86F0u;
label_3a86f0:
    // 0x3a86f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a86f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a86f4: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x3a86f4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_3a86f8:
    // 0x3a86f8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x3a86f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3a86fc: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3a86fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a8700: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3A8700u;
    {
        const bool branch_taken_0x3a8700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8700u;
        // 0x3a8704: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8700) {
            ctx->pc = 0x3A86D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a86d8;
        }
    }
    ctx->pc = 0x3A8708u;
label_3a8708:
    // 0x3a8708: 0x26c4fdb0  addiu       $a0, $s6, -0x250
    ctx->pc = 0x3a8708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966704));
    // 0x3a870c: 0x11283f  dsra32      $a1, $s1, 0
    ctx->pc = 0x3a870cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3a8710: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x3a8710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x3a8714: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x3a8714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3a8718: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a8718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3a871c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3a871cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3a8720: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x3a8720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a8724: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x3a8724u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x3a8728: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x3a8728u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a872c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3a872cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3a8730: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x3a8730u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x3a8734: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A8734u;
    SET_GPR_U32(ctx, 31, 0x3A873Cu);
    ctx->pc = 0x3A8738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8734u;
    // 0x3a8738: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A8734u, 0x3A873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A873Cu;
label_3a873c:
    // 0x3a873c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a873cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8740: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x3a8740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x3a8744: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x3a8744u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3a8748: 0x3c027ca0  lui         $v0, 0x7CA0
    ctx->pc = 0x3a8748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31904 << 16));
    // 0x3a874c: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x3a874cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a8750: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x3a8750u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3a8754: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x3A8754u;
    {
        const bool branch_taken_0x3a8754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8754u;
        // 0x3a8758: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8754) {
            ctx->pc = 0x3A86A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a86a4;
        }
    }
    ctx->pc = 0x3A875Cu;
    // 0x3a875c: 0x3c027c90  lui         $v0, 0x7C90
    ctx->pc = 0x3a875cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31888 << 16));
    // 0x3a8760: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x3a8760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3a8764: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8764u;
    {
        const bool branch_taken_0x3a8764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8764u;
        // 0x3a8768: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8764) {
            ctx->pc = 0x3A878Cu;
            goto label_3a878c;
        }
    }
    ctx->pc = 0x3A876Cu;
    // 0x3a876c: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x3a876cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x3a8770: 0x3402ffdf  ori         $v0, $zero, 0xFFDF
    ctx->pc = 0x3a8770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x3a8774: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a8774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3a8778: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x3a8778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x3a877c: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x3a877cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x3a8780: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3a8780u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3a8784: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x3A8784u;
    {
        const bool branch_taken_0x3a8784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8784u;
        // 0x3a8788: 0x2308825  or          $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8784) {
            ctx->pc = 0x3A88D4u;
            goto label_3a88d4;
        }
    }
    ctx->pc = 0x3A878Cu;
label_3a878c:
    // 0x3a878c: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x3a878cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x3a8790: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3a8790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a8794: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a8794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a8798: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x3A8798u;
    {
        const bool branch_taken_0x3a8798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8798u;
        // 0x3a879c: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8798) {
            ctx->pc = 0x3A88D4u;
            goto label_3a88d4;
        }
    }
    ctx->pc = 0x3A87A0u;
label_3a87a0:
    // 0x3a87a0: 0x601004d  bgez        $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x3A87A0u;
    {
        const bool branch_taken_0x3a87a0 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3A87A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87A0u;
        // 0x3a87a4: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a87a0) {
            ctx->pc = 0x3A88D8u;
            goto label_3a88d8;
        }
    }
    ctx->pc = 0x3A87A8u;
    // 0x3a87a8: 0x108023  negu        $s0, $s0
    ctx->pc = 0x3a87a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x3a87ac: 0x3207000f  andi        $a3, $s0, 0xF
    ctx->pc = 0x3a87acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x3a87b0: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A87B0u;
    {
        const bool branch_taken_0x3a87b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A87B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87B0u;
        // 0x3a87b4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a87b0) {
            ctx->pc = 0x3A87D4u;
            goto label_3a87d4;
        }
    }
    ctx->pc = 0x3A87B8u;
    // 0x3a87b8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x3a87b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x3a87bc: 0x2442fce8  addiu       $v0, $v0, -0x318
    ctx->pc = 0x3a87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966504));
    // 0x3a87c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a87c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a87c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a87c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a87c8: 0xc0c797c  jal         func_31E5F0
    ctx->pc = 0x3A87C8u;
    SET_GPR_U32(ctx, 31, 0x3A87D0u);
    ctx->pc = 0x3A87CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A87C8u;
    // 0x3a87cc: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E5F0u, 0x3A87C8u, 0x3A87D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A87D0u;
label_3a87d0:
    // 0x3a87d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a87d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a87d4:
    // 0x3a87d4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x3a87d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3a87d8: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3a87d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3a87dc: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3A87DCu;
    {
        const bool branch_taken_0x3a87dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A87E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87DCu;
        // 0x3a87e0: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a87dc) {
            ctx->pc = 0x3A88D4u;
            goto label_3a88d4;
        }
    }
    ctx->pc = 0x3A87E4u;
    // 0x3a87e4: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x3a87e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3a87e8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x3A87E8u;
    {
        const bool branch_taken_0x3a87e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A87ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87E8u;
        // 0x3a87ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a87e8) {
            ctx->pc = 0x3A889Cu;
            goto label_3a889c;
        }
    }
    ctx->pc = 0x3A87F0u;
    // 0x3a87f0: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3a87f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a87f4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A87F4u;
    {
        const bool branch_taken_0x3a87f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A87F4u;
        // 0x3a87f8: 0x3c160046  lui         $s6, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a87f4) {
            ctx->pc = 0x3A8830u;
            goto label_3a8830;
        }
    }
    ctx->pc = 0x3A87FCu;
    // 0x3a87fc: 0x26d2fdd8  addiu       $s2, $s6, -0x228
    ctx->pc = 0x3a87fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966744));
label_3a8800:
    // 0x3a8800: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x3a8800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3a8804: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A8804u;
    {
        const bool branch_taken_0x3a8804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8804) {
            ctx->pc = 0x3A8808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8804u;
            // 0x3a8808: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8820u;
            goto label_3a8820;
        }
    }
    ctx->pc = 0x3A880Cu;
    // 0x3a880c: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x3a880cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a8810: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A8810u;
    SET_GPR_U32(ctx, 31, 0x3A8818u);
    ctx->pc = 0x3A8814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8810u;
    // 0x3a8814: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A8810u, 0x3A8818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8818u;
label_3a8818:
    // 0x3a8818: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a8818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a881c: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x3a881cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_3a8820:
    // 0x3a8820: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x3a8820u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x3a8824: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x3a8824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a8828: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3A8828u;
    {
        const bool branch_taken_0x3a8828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8828u;
        // 0x3a882c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8828) {
            ctx->pc = 0x3A8800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8800;
        }
    }
    ctx->pc = 0x3A8830u;
label_3a8830:
    // 0x3a8830: 0x26c2fdd8  addiu       $v0, $s6, -0x228
    ctx->pc = 0x3a8830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966744));
    // 0x3a8834: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x3a8834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3a8838: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a8838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a883c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a883cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8840: 0xdc700000  ld          $s0, 0x0($v1)
    ctx->pc = 0x3a8840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a8844: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x3a8844u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8848: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a8848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a884c: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A884Cu;
    SET_GPR_U32(ctx, 31, 0x3A8854u);
    ctx->pc = 0x3A8850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A884Cu;
    // 0x3a8850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A884Cu, 0x3A8854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8854u;
label_3a8854:
    // 0x3a8854: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a8854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a8858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a885c: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A885Cu;
    SET_GPR_U32(ctx, 31, 0x3A8864u);
    ctx->pc = 0x3A8860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A885Cu;
    // 0x3a8860: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A885Cu, 0x3A8864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8864u;
label_3a8864:
    // 0x3a8864: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A8864u;
    {
        const bool branch_taken_0x3a8864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8864u;
        // 0x3a8868: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8864) {
            ctx->pc = 0x3A88D8u;
            goto label_3a88d8;
        }
    }
    ctx->pc = 0x3A886Cu;
    // 0x3a886c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3a886cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8870: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3A8870u;
    SET_GPR_U32(ctx, 31, 0x3A8878u);
    ctx->pc = 0x3A8874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8870u;
    // 0x3a8874: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3A8870u, 0x3A8878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8878u;
label_3a8878:
    // 0x3a8878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a8878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a887c: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A887Cu;
    SET_GPR_U32(ctx, 31, 0x3A8884u);
    ctx->pc = 0x3A8880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A887Cu;
    // 0x3a8880: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A887Cu, 0x3A8884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8884u;
label_3a8884:
    // 0x3a8884: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a8884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a8888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a888c: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A888Cu;
    SET_GPR_U32(ctx, 31, 0x3A8894u);
    ctx->pc = 0x3A8890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A888Cu;
    // 0x3a8890: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A888Cu, 0x3A8894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8894u;
label_3a8894:
    // 0x3a8894: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A8894u;
    {
        const bool branch_taken_0x3a8894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8894u;
        // 0x3a8898: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8894) {
            ctx->pc = 0x3A88D4u;
            goto label_3a88d4;
        }
    }
    ctx->pc = 0x3A889Cu;
label_3a889c:
    // 0x3a889c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x3a889cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_3a88a0:
    // 0x3a88a0: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x3a88a0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x3a88a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3a88a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a88a8: 0x146001a9  bnez        $v1, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x3A88A8u;
    {
        const bool branch_taken_0x3a88a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A88ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A88A8u;
        // 0x3a88ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a88a8) {
            ctx->pc = 0x3A8F50u;
            goto label_3a8f50;
        }
    }
    ctx->pc = 0x3A88B0u;
    // 0x3a88b0: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x3A88B0u;
    {
        const bool branch_taken_0x3a88b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A88B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A88B0u;
        // 0x3a88b4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a88b0) {
            ctx->pc = 0x3A8F90u;
            goto label_3a8f90;
        }
    }
    ctx->pc = 0x3A88B8u;
label_3a88b8:
    // 0x3a88b8: 0xc0ebcc4  jal         func_3AF310
    ctx->pc = 0x3A88B8u;
    SET_GPR_U32(ctx, 31, 0x3A88C0u);
    ctx->pc = 0x3A88BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A88B8u;
    // 0x3a88bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF310u, 0x3A88B8u, 0x3A88C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A88C0u;
label_3a88c0:
    // 0x3a88c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a88c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a88c4: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3A88C4u;
    SET_GPR_U32(ctx, 31, 0x3A88CCu);
    ctx->pc = 0x3A88C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A88C4u;
    // 0x3a88c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3A88C4u, 0x3A88CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A88CCu;
label_3a88cc:
    // 0x3a88cc: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x3A88CCu;
    {
        const bool branch_taken_0x3a88cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A88D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A88CCu;
        // 0x3a88d0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a88cc) {
            ctx->pc = 0x3A8F50u;
            goto label_3a8f50;
        }
    }
    ctx->pc = 0x3A88D4u;
label_3a88d4:
    // 0x3a88d4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x3a88d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3a88d8:
    // 0x3a88d8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3a88d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a88dc: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x3a88dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a88e0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3a88e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a88e4: 0xc0eba80  jal         func_3AEA00
    ctx->pc = 0x3A88E4u;
    SET_GPR_U32(ctx, 31, 0x3A88ECu);
    ctx->pc = 0x3A88E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A88E4u;
    // 0x3a88e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEA00u, 0x3A88E4u, 0x3A88ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A88ECu;
label_3a88ec:
    // 0x3a88ec: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x3a88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x3a88f0: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x3a88f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a88f4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3a88f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3a88f8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3a88f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3a88fc: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x3a88fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3a8900: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x3a8900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x3a8904: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x3A8904u;
    {
        const bool branch_taken_0x3a8904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8904u;
        // 0x3a8908: 0xafa70048  sw          $a3, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8904) {
            ctx->pc = 0x3A8D7Cu;
            goto label_3a8d7c;
        }
    }
    ctx->pc = 0x3A890Cu;
    // 0x3a890c: 0x0  nop
    ctx->pc = 0x3a890cu;
    // NOP
label_3a8910:
    // 0x3a8910: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3a8910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8914: 0xc0ebbf0  jal         func_3AEFC0
    ctx->pc = 0x3A8914u;
    SET_GPR_U32(ctx, 31, 0x3A891Cu);
    ctx->pc = 0x3A8918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8914u;
    // 0x3a8918: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEFC0u, 0x3A8914u, 0x3A891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A891Cu;
label_3a891c:
    // 0x3a891c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x3a891cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x3a8920: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x3a8920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3a8924: 0xc0ebc46  jal         func_3AF118
    ctx->pc = 0x3A8924u;
    SET_GPR_U32(ctx, 31, 0x3A892Cu);
    ctx->pc = 0x3A8928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8924u;
    // 0x3a8928: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF118u, 0x3A8924u, 0x3A892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A892Cu;
label_3a892c:
    // 0x3a892c: 0x1c40001e  bgtz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A892Cu;
    {
        const bool branch_taken_0x3a892c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3A8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A892Cu;
        // 0x3a8930: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a892c) {
            ctx->pc = 0x3A89A8u;
            goto label_3a89a8;
        }
    }
    ctx->pc = 0x3A8934u;
    // 0x3a8934: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x3A8934u;
    {
        const bool branch_taken_0x3a8934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8934) {
            ctx->pc = 0x3A8F54u;
            goto label_3a8f54;
        }
    }
    ctx->pc = 0x3A893Cu;
label_3a893c:
    // 0x3a893c: 0x14e0003f  bnez        $a3, . + 4 + (0x3F << 2)
    ctx->pc = 0x3A893Cu;
    {
        const bool branch_taken_0x3a893c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A893Cu;
        // 0x3a8940: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a893c) {
            ctx->pc = 0x3A8A3Cu;
            goto label_3a8a3c;
        }
    }
    ctx->pc = 0x3A8944u;
    // 0x3a8944: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A8944u;
    {
        const bool branch_taken_0x3a8944 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8944) {
            ctx->pc = 0x3A8994u;
            goto label_3a8994;
        }
    }
    ctx->pc = 0x3A894Cu;
    // 0x3a894c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a894cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a8950: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x3a8950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x3a8954: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x3a8954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x3a8958: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3A8958u;
    {
        const bool branch_taken_0x3a8958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8958u;
        // 0x3a895c: 0x3c037ff0  lui         $v1, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8958) {
            ctx->pc = 0x3A89ECu;
            goto label_3a89ec;
        }
    }
    ctx->pc = 0x3A8960u;
    // 0x3a8960: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x3a8960u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3a8964: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a8964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a8968: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x3a8968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x3a896c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a896cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a8970: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3a8970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3a8974: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x3a8974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3a8978: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x3a8978u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x3a897c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a897cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a8980: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3a8980u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3a8984: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a8984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a8988: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3a8988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3a898c: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x3A898Cu;
    {
        const bool branch_taken_0x3a898c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A898Cu;
        // 0x3a8990: 0x2238824  and         $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a898c) {
            ctx->pc = 0x3A8F50u;
            goto label_3a8f50;
        }
    }
    ctx->pc = 0x3A8994u;
label_3a8994:
    // 0x3a8994: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a8994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a8998: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x3a8998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x3a899c: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x3a899cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x3a89a0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3A89A0u;
    {
        const bool branch_taken_0x3a89a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a89a0) {
            ctx->pc = 0x3A89ECu;
            goto label_3a89ec;
        }
    }
    ctx->pc = 0x3A89A8u;
label_3a89a8:
    // 0x3a89a8: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x3a89a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3a89ac: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x3a89acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x3a89b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a89b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a89b4: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x3a89b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x3a89b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3a89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3a89bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3a89bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a89c0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x3a89c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3a89c4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a89c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a89c8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3a89c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3a89cc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3a89ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3a89d0: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3a89d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3a89d4: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x3a89d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x3a89d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a89d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3a89dc: 0x2258824  and         $s1, $s1, $a1
    ctx->pc = 0x3a89dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 5));
    // 0x3a89e0: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x3a89e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x3a89e4: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x3A89E4u;
    {
        const bool branch_taken_0x3a89e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A89E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89E4u;
        // 0x3a89e8: 0x2258825  or          $s1, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a89e4) {
            ctx->pc = 0x3A8F50u;
            goto label_3a8f50;
        }
    }
    ctx->pc = 0x3A89ECu;
label_3a89ec:
    // 0x3a89ec: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x3a89ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3a89f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a89f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3a89f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a89f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3a89f8: 0x10400156  beqz        $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x3A89F8u;
    {
        const bool branch_taken_0x3a89f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A89FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A89F8u;
        // 0x3a89fc: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a89f8) {
            ctx->pc = 0x3A8F54u;
            goto label_3a8f54;
        }
    }
    ctx->pc = 0x3A8A00u;
    // 0x3a8a00: 0x1680ffad  bnez        $s4, . + 4 + (-0x53 << 2)
    ctx->pc = 0x3A8A00u;
    {
        const bool branch_taken_0x3a8a00 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8a00) {
            ctx->pc = 0x3A88B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a88b8;
        }
    }
    ctx->pc = 0x3A8A08u;
    // 0x3a8a08: 0xc0ebcc4  jal         func_3AF310
    ctx->pc = 0x3A8A08u;
    SET_GPR_U32(ctx, 31, 0x3A8A10u);
    ctx->pc = 0x3A8A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A08u;
    // 0x3a8a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF310u, 0x3A8A08u, 0x3A8A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A10u;
label_3a8a10:
    // 0x3a8a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a8a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8a14: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3A8A14u;
    SET_GPR_U32(ctx, 31, 0x3A8A1Cu);
    ctx->pc = 0x3A8A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A14u;
    // 0x3a8a18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3A8A14u, 0x3A8A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A1Cu;
label_3a8a1c:
    // 0x3a8a1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a8a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8a20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a8a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8a24: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A8A24u;
    SET_GPR_U32(ctx, 31, 0x3A8A2Cu);
    ctx->pc = 0x3A8A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A24u;
    // 0x3a8a28: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A8A24u, 0x3A8A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A2Cu;
label_3a8a2c:
    // 0x3a8a2c: 0x1040ff9b  beqz        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x3A8A2Cu;
    {
        const bool branch_taken_0x3a8a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A2Cu;
        // 0x3a8a30: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8a2c) {
            ctx->pc = 0x3A889Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a889c;
        }
    }
    ctx->pc = 0x3A8A34u;
    // 0x3a8a34: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x3A8A34u;
    {
        const bool branch_taken_0x3a8a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8a34) {
            ctx->pc = 0x3A8F54u;
            goto label_3a8f54;
        }
    }
    ctx->pc = 0x3A8A3Cu;
label_3a8a3c:
    // 0x3a8a3c: 0xc0ebdbc  jal         func_3AF6F0
    ctx->pc = 0x3A8A3Cu;
    SET_GPR_U32(ctx, 31, 0x3A8A44u);
    ctx->pc = 0x3A8A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A3Cu;
    // 0x3a8a40: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF6F0u, 0x3A8A3Cu, 0x3A8A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A44u;
label_3a8a44:
    // 0x3a8a44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a8a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8a48: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3a8a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3a8a4c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3a8a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3a8a50: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A8A50u;
    SET_GPR_U32(ctx, 31, 0x3A8A58u);
    ctx->pc = 0x3A8A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8A50u;
    // 0x3a8a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A8A50u, 0x3A8A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8A58u;
label_3a8a58:
    // 0x3a8a58: 0x1c400024  bgtz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3A8A58u;
    {
        const bool branch_taken_0x3a8a58 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3a8a58) {
            ctx->pc = 0x3A8AECu;
            goto label_3a8aec;
        }
    }
    ctx->pc = 0x3A8A60u;
    // 0x3a8a60: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8A60u;
    {
        const bool branch_taken_0x3a8a60 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8a60) {
            ctx->pc = 0x3A8A78u;
            goto label_3a8a78;
        }
    }
    ctx->pc = 0x3A8A68u;
    // 0x3a8a68: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x3a8a68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3a8a6c: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x3a8a6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x3a8a70: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3A8A70u;
    {
        const bool branch_taken_0x3a8a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A70u;
        // 0x3a8a74: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8a70) {
            ctx->pc = 0x3A8B18u;
            goto label_3a8b18;
        }
    }
    ctx->pc = 0x3A8A78u;
label_3a8a78:
    // 0x3a8a78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a8a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a8a7c: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x3a8a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x3a8a80: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x3a8a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x3a8a84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8A84u;
    {
        const bool branch_taken_0x3a8a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A84u;
        // 0x3a8a88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8a84) {
            ctx->pc = 0x3A8AACu;
            goto label_3a8aac;
        }
    }
    ctx->pc = 0x3A8A8Cu;
    // 0x3a8a8c: 0x1222ff84  beq         $s1, $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x3A8A8Cu;
    {
        const bool branch_taken_0x3a8a8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8A8Cu;
        // 0x3a8a90: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8a8c) {
            ctx->pc = 0x3A88A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a88a0;
        }
    }
    ctx->pc = 0x3A8A94u;
    // 0x3a8a94: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x3a8a94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3a8a98: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x3a8a98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x3a8a9c: 0x3412bff0  ori         $s2, $zero, 0xBFF0
    ctx->pc = 0x3a8a9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x3a8aa0: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x3a8aa0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x3a8aa4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3A8AA4u;
    {
        const bool branch_taken_0x3a8aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8aa4) {
            ctx->pc = 0x3A8B18u;
            goto label_3a8b18;
        }
    }
    ctx->pc = 0x3A8AACu;
label_3a8aac:
    // 0x3a8aac: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3a8aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3a8ab0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3a8ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3a8ab4: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A8AB4u;
    SET_GPR_U32(ctx, 31, 0x3A8ABCu);
    ctx->pc = 0x3A8AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8AB4u;
    // 0x3a8ab8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A8AB4u, 0x3A8ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8ABCu;
label_3a8abc:
    // 0x3a8abc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8ABCu;
    {
        const bool branch_taken_0x3a8abc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3A8AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8ABCu;
        // 0x3a8ac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8abc) {
            ctx->pc = 0x3A8AD4u;
            goto label_3a8ad4;
        }
    }
    ctx->pc = 0x3A8AC4u;
    // 0x3a8ac4: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x3a8ac4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3a8ac8: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x3a8ac8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x3a8acc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3A8ACCu;
    {
        const bool branch_taken_0x3a8acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8acc) {
            ctx->pc = 0x3A8B0Cu;
            goto label_3a8b0c;
        }
    }
    ctx->pc = 0x3A8AD4u;
label_3a8ad4:
    // 0x3a8ad4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3a8ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3a8ad8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3a8ad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3a8adc: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A8ADCu;
    SET_GPR_U32(ctx, 31, 0x3A8AE4u);
    ctx->pc = 0x3A8AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8ADCu;
    // 0x3a8ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A8ADCu, 0x3A8AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8AE4u;
label_3a8ae4:
    // 0x3a8ae4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A8AE4u;
    {
        const bool branch_taken_0x3a8ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8AE4u;
        // 0x3a8ae8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ae4) {
            ctx->pc = 0x3A8B08u;
            goto label_3a8b08;
        }
    }
    ctx->pc = 0x3A8AECu;
label_3a8aec:
    // 0x3a8aec: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3a8aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3a8af0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3a8af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3a8af4: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A8AF4u;
    SET_GPR_U32(ctx, 31, 0x3A8AFCu);
    ctx->pc = 0x3A8AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8AF4u;
    // 0x3a8af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A8AF4u, 0x3A8AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8AFCu;
label_3a8afc:
    // 0x3a8afc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a8afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8b00: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8B00u;
    {
        const bool branch_taken_0x3a8b00 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B00u;
        // 0x3a8b04: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b00) {
            ctx->pc = 0x3A8B18u;
            goto label_3a8b18;
        }
    }
    ctx->pc = 0x3A8B08u;
label_3a8b08:
    // 0x3a8b08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a8b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a8b0c:
    // 0x3a8b0c: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3A8B0Cu;
    SET_GPR_U32(ctx, 31, 0x3A8B14u);
    ctx->pc = 0x3A8B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8B0Cu;
    // 0x3a8b10: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3A8B0Cu, 0x3A8B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8B14u;
label_3a8b14:
    // 0x3a8b14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a8b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8b18:
    // 0x3a8b18: 0x11183f  dsra32      $v1, $s1, 0
    ctx->pc = 0x3a8b18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3a8b1c: 0x3c1e7ff0  lui         $fp, 0x7FF0
    ctx->pc = 0x3a8b1cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32752 << 16));
    // 0x3a8b20: 0x7e1024  and         $v0, $v1, $fp
    ctx->pc = 0x3a8b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x3a8b24: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3a8b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x3a8b28: 0x3c027fe0  lui         $v0, 0x7FE0
    ctx->pc = 0x3a8b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32736 << 16));
    // 0x3a8b2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3a8b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a8b30: 0x1482002e  bne         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3A8B30u;
    {
        const bool branch_taken_0x3a8b30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B30u;
        // 0x3a8b34: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b30) {
            ctx->pc = 0x3A8BECu;
            goto label_3a8bec;
        }
    }
    ctx->pc = 0x3A8B38u;
    // 0x3a8b38: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x3a8b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x3a8b3c: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x3a8b3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8b40: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3a8b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3a8b44: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x3a8b44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a8b48: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x3a8b48u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x3a8b4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a8b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a8b50: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x3a8b50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x3a8b54: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3a8b54u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3a8b58: 0xc0ebcc4  jal         func_3AF310
    ctx->pc = 0x3A8B58u;
    SET_GPR_U32(ctx, 31, 0x3A8B60u);
    ctx->pc = 0x3A8B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8B58u;
    // 0x3a8b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF310u, 0x3A8B58u, 0x3A8B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8B60u;
label_3a8b60:
    // 0x3a8b60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a8b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8b64: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A8B64u;
    SET_GPR_U32(ctx, 31, 0x3A8B6Cu);
    ctx->pc = 0x3A8B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8B64u;
    // 0x3a8b68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A8B64u, 0x3A8B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8B6Cu;
label_3a8b6c:
    // 0x3a8b6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a8b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8b70: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3A8B70u;
    SET_GPR_U32(ctx, 31, 0x3A8B78u);
    ctx->pc = 0x3A8B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8B70u;
    // 0x3a8b74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3A8B70u, 0x3A8B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8B78u;
label_3a8b78:
    // 0x3a8b78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a8b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8b7c: 0x3c037c9f  lui         $v1, 0x7C9F
    ctx->pc = 0x3a8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31903 << 16));
    // 0x3a8b80: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x3a8b80u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3a8b84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a8b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a8b88: 0x9e1024  and         $v0, $a0, $fp
    ctx->pc = 0x3a8b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
    // 0x3a8b8c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3a8b8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3a8b90: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A8B90u;
    {
        const bool branch_taken_0x3a8b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8B90u;
        // 0x3a8b94: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8b90) {
            ctx->pc = 0x3A8BD8u;
            goto label_3a8bd8;
        }
    }
    ctx->pc = 0x3A8B98u;
    // 0x3a8b98: 0x3402ffdf  ori         $v0, $zero, 0xFFDF
    ctx->pc = 0x3a8b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x3a8b9c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a8b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3a8ba0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a8ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a8ba4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a8ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3a8ba8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a8ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a8bac: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x3a8bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x3a8bb0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x3a8bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x3a8bb4: 0x12c2feba  beq         $s6, $v0, . + 4 + (-0x146 << 2)
    ctx->pc = 0x3A8BB4u;
    {
        const bool branch_taken_0x3a8bb4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BB4u;
        // 0x3a8bb8: 0x2338824  and         $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8bb4) {
            ctx->pc = 0x3A86A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a86a0;
        }
    }
    ctx->pc = 0x3A8BBCu;
    // 0x3a8bbc: 0x3402ffdf  ori         $v0, $zero, 0xFFDF
    ctx->pc = 0x3a8bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x3a8bc0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3a8bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3a8bc4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x3a8bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x3a8bc8: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x3a8bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x3a8bcc: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x3a8bccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3a8bd0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x3A8BD0u;
    {
        const bool branch_taken_0x3a8bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BD0u;
        // 0x3a8bd4: 0x2338825  or          $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8bd0) {
            ctx->pc = 0x3A8D4Cu;
            goto label_3a8d4c;
        }
    }
    ctx->pc = 0x3A8BD8u;
label_3a8bd8:
    // 0x3a8bd8: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x3a8bd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x3a8bdc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3a8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a8be0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a8be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a8be4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x3A8BE4u;
    {
        const bool branch_taken_0x3a8be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BE4u;
        // 0x3a8be8: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8be4) {
            ctx->pc = 0x3A8C70u;
            goto label_3a8c70;
        }
    }
    ctx->pc = 0x3A8BECu;
label_3a8bec:
    // 0x3a8bec: 0x3c020340  lui         $v0, 0x340
    ctx->pc = 0x3a8becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)832 << 16));
    // 0x3a8bf0: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x3a8bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3a8bf4: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A8BF4u;
    {
        const bool branch_taken_0x3a8bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8bf4) {
            ctx->pc = 0x3A8C4Cu;
            goto label_3a8c4c;
        }
    }
    ctx->pc = 0x3A8BFCu;
    // 0x3a8bfc: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3a8bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3a8c00: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3a8c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3a8c04: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A8C04u;
    SET_GPR_U32(ctx, 31, 0x3A8C0Cu);
    ctx->pc = 0x3A8C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8C04u;
    // 0x3a8c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A8C04u, 0x3A8C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8C0Cu;
label_3a8c0c:
    // 0x3a8c0c: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A8C0Cu;
    {
        const bool branch_taken_0x3a8c0c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3a8c0c) {
            ctx->pc = 0x3A8C4Cu;
            goto label_3a8c4c;
        }
    }
    ctx->pc = 0x3A8C14u;
    // 0x3a8c14: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3a8c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3a8c18: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3a8c18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3a8c1c: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3A8C1Cu;
    SET_GPR_U32(ctx, 31, 0x3A8C24u);
    ctx->pc = 0x3A8C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8C1Cu;
    // 0x3a8c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3A8C1Cu, 0x3A8C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8C24u;
label_3a8c24:
    // 0x3a8c24: 0xc0c7a5e  jal         func_31E978
    ctx->pc = 0x3A8C24u;
    SET_GPR_U32(ctx, 31, 0x3A8C2Cu);
    ctx->pc = 0x3A8C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8C24u;
    // 0x3a8c28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E978u, 0x3A8C24u, 0x3A8C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8C2Cu;
label_3a8c2c:
    // 0x3a8c2c: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x3A8C2Cu;
    SET_GPR_U32(ctx, 31, 0x3A8C34u);
    ctx->pc = 0x3A8C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8C2Cu;
    // 0x3a8c30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x3A8C2Cu, 0x3A8C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8C34u;
label_3a8c34:
    // 0x3a8c34: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8C34u;
    {
        const bool branch_taken_0x3a8c34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C34u;
        // 0x3a8c38: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8c34) {
            ctx->pc = 0x3A8C4Cu;
            goto label_3a8c4c;
        }
    }
    ctx->pc = 0x3A8C3Cu;
    // 0x3a8c3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a8c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8c40: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3A8C40u;
    SET_GPR_U32(ctx, 31, 0x3A8C48u);
    ctx->pc = 0x3A8C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8C40u;
    // 0x3a8c44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3A8C40u, 0x3A8C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8C48u;
label_3a8c48:
    // 0x3a8c48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a8c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8c4c:
    // 0x3a8c4c: 0xc0ebcc4  jal         func_3AF310
    ctx->pc = 0x3A8C4Cu;
    SET_GPR_U32(ctx, 31, 0x3A8C54u);
    ctx->pc = 0x3A8C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8C4Cu;
    // 0x3a8c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF310u, 0x3A8C4Cu, 0x3A8C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8C54u;
label_3a8c54:
    // 0x3a8c54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a8c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8c58: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A8C58u;
    SET_GPR_U32(ctx, 31, 0x3A8C60u);
    ctx->pc = 0x3A8C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8C58u;
    // 0x3a8c5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A8C58u, 0x3A8C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8C60u;
label_3a8c60:
    // 0x3a8c60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a8c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8c64: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3A8C64u;
    SET_GPR_U32(ctx, 31, 0x3A8C6Cu);
    ctx->pc = 0x3A8C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8C64u;
    // 0x3a8c68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3A8C64u, 0x3A8C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8C6Cu;
label_3a8c6c:
    // 0x3a8c6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a8c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a8c70:
    // 0x3a8c70: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3a8c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a8c74: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x3a8c74u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x3a8c78: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x3a8c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3a8c7c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x3a8c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x3a8c80: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3a8c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3a8c84: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x3a8c84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a8c88: 0x14520031  bne         $v0, $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x3A8C88u;
    {
        const bool branch_taken_0x3a8c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x3A8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C88u;
        // 0x3a8c8c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8c88) {
            ctx->pc = 0x3A8D50u;
            goto label_3a8d50;
        }
    }
    ctx->pc = 0x3A8C90u;
    // 0x3a8c90: 0xc0ee1b4  jal         func_3B86D0
    ctx->pc = 0x3A8C90u;
    SET_GPR_U32(ctx, 31, 0x3A8C98u);
    ctx->pc = 0x3A8C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8C90u;
    // 0x3a8c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B86D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B86D0u, 0x3A8C90u, 0x3A8C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8C98u;
label_3a8c98:
    // 0x3a8c98: 0xc0c7726  jal         func_31DC98
    ctx->pc = 0x3A8C98u;
    SET_GPR_U32(ctx, 31, 0x3A8CA0u);
    ctx->pc = 0x3A8C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8C98u;
    // 0x3a8c9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DC98u, 0x3A8C98u, 0x3A8CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8CA0u;
label_3a8ca0:
    // 0x3a8ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a8ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8ca4: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3A8CA4u;
    SET_GPR_U32(ctx, 31, 0x3A8CACu);
    ctx->pc = 0x3A8CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8CA4u;
    // 0x3a8ca8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3A8CA4u, 0x3A8CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8CACu;
label_3a8cac:
    // 0x3a8cac: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A8CACu;
    {
        const bool branch_taken_0x3a8cac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8CACu;
        // 0x3a8cb0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8cac) {
            ctx->pc = 0x3A8CC8u;
            goto label_3a8cc8;
        }
    }
    ctx->pc = 0x3A8CB4u;
    // 0x3a8cb4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a8cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a8cb8: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x3a8cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x3a8cbc: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x3a8cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x3a8cc0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3A8CC0u;
    {
        const bool branch_taken_0x3a8cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8cc0) {
            ctx->pc = 0x3A8D20u;
            goto label_3a8d20;
        }
    }
    ctx->pc = 0x3A8CC8u;
label_3a8cc8:
    // 0x3a8cc8: 0x3405ff7f  ori         $a1, $zero, 0xFF7F
    ctx->pc = 0x3a8cc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65407);
    // 0x3a8ccc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3a8cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3a8cd0: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x3a8cd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x3a8cd4: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3a8cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3a8cd8: 0x34a5a501  ori         $a1, $a1, 0xA501
    ctx->pc = 0x3a8cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42241);
    // 0x3a8cdc: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3a8cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3a8ce0: 0x34a51595  ori         $a1, $a1, 0x1595
    ctx->pc = 0x3a8ce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5525);
    // 0x3a8ce4: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A8CE4u;
    SET_GPR_U32(ctx, 31, 0x3A8CECu);
    ctx->pc = 0x3A8CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8CE4u;
    // 0x3a8ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A8CE4u, 0x3A8CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8CECu;
label_3a8cec:
    // 0x3a8cec: 0x4400099  bltz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x3A8CECu;
    {
        const bool branch_taken_0x3a8cec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3A8CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8CECu;
        // 0x3a8cf0: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8cec) {
            ctx->pc = 0x3A8F54u;
            goto label_3a8f54;
        }
    }
    ctx->pc = 0x3A8CF4u;
    // 0x3a8cf4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3a8cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3a8cf8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3a8cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3a8cfc: 0x34a5d6bf  ori         $a1, $a1, 0xD6BF
    ctx->pc = 0x3a8cfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54975);
    // 0x3a8d00: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x3a8d00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x3a8d04: 0x34a52535  ori         $a1, $a1, 0x2535
    ctx->pc = 0x3a8d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9525);
    // 0x3a8d08: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A8D08u;
    SET_GPR_U32(ctx, 31, 0x3A8D10u);
    ctx->pc = 0x3A8D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8D08u;
    // 0x3a8d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A8D08u, 0x3A8D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8D10u;
label_3a8d10:
    // 0x3a8d10: 0x1c40008f  bgtz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x3A8D10u;
    {
        const bool branch_taken_0x3a8d10 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3A8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8D10u;
        // 0x3a8d14: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8d10) {
            ctx->pc = 0x3A8F50u;
            goto label_3a8f50;
        }
    }
    ctx->pc = 0x3A8D18u;
    // 0x3a8d18: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3A8D18u;
    {
        const bool branch_taken_0x3a8d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8d18) {
            ctx->pc = 0x3A8D50u;
            goto label_3a8d50;
        }
    }
    ctx->pc = 0x3A8D20u;
label_3a8d20:
    // 0x3a8d20: 0x3405ff3f  ori         $a1, $zero, 0xFF3F
    ctx->pc = 0x3a8d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65343);
    // 0x3a8d24: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3a8d24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3a8d28: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x3a8d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x3a8d2c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3a8d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3a8d30: 0x34a5a501  ori         $a1, $a1, 0xA501
    ctx->pc = 0x3a8d30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42241);
    // 0x3a8d34: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3a8d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3a8d38: 0x34a51595  ori         $a1, $a1, 0x1595
    ctx->pc = 0x3a8d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5525);
    // 0x3a8d3c: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A8D3Cu;
    SET_GPR_U32(ctx, 31, 0x3A8D44u);
    ctx->pc = 0x3A8D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8D3Cu;
    // 0x3a8d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A8D3Cu, 0x3A8D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8D44u;
label_3a8d44:
    // 0x3a8d44: 0x4420083  bltzl       $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x3A8D44u;
    {
        const bool branch_taken_0x3a8d44 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3a8d44) {
            ctx->pc = 0x3A8D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8D44u;
            // 0x3a8d48: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8F54u;
            goto label_3a8f54;
        }
    }
    ctx->pc = 0x3A8D4Cu;
label_3a8d4c:
    // 0x3a8d4c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3a8d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3a8d50:
    // 0x3a8d50: 0xc0eba30  jal         func_3AE8C0
    ctx->pc = 0x3A8D50u;
    SET_GPR_U32(ctx, 31, 0x3A8D58u);
    ctx->pc = 0x3A8D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8D50u;
    // 0x3a8d54: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8C0u, 0x3A8D50u, 0x3A8D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8D58u;
label_3a8d58:
    // 0x3a8d58: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x3a8d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3a8d5c: 0xc0eba30  jal         func_3AE8C0
    ctx->pc = 0x3A8D5Cu;
    SET_GPR_U32(ctx, 31, 0x3A8D64u);
    ctx->pc = 0x3A8D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8D5Cu;
    // 0x3a8d60: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8C0u, 0x3A8D5Cu, 0x3A8D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8D64u;
label_3a8d64:
    // 0x3a8d64: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x3a8d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3a8d68: 0xc0eba30  jal         func_3AE8C0
    ctx->pc = 0x3A8D68u;
    SET_GPR_U32(ctx, 31, 0x3A8D70u);
    ctx->pc = 0x3A8D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8D68u;
    // 0x3a8d6c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8C0u, 0x3A8D68u, 0x3A8D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8D70u;
label_3a8d70:
    // 0x3a8d70: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x3a8d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a8d74: 0xc0eba30  jal         func_3AE8C0
    ctx->pc = 0x3A8D74u;
    SET_GPR_U32(ctx, 31, 0x3A8D7Cu);
    ctx->pc = 0x3A8D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8D74u;
    // 0x3a8d78: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8C0u, 0x3A8D74u, 0x3A8D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8D7Cu;
label_3a8d7c:
    // 0x3a8d7c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3a8d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a8d80: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3a8d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a8d84: 0xc0eba06  jal         func_3AE818
    ctx->pc = 0x3A8D84u;
    SET_GPR_U32(ctx, 31, 0x3A8D8Cu);
    ctx->pc = 0x3A8D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8D84u;
    // 0x3a8d88: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE818u, 0x3A8D84u, 0x3A8D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8D8Cu;
label_3a8d8c:
    // 0x3a8d8c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x3a8d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a8d90: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x3a8d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3a8d94: 0x24e5000c  addiu       $a1, $a3, 0xC
    ctx->pc = 0x3a8d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x3a8d98: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3a8d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x3a8d9c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3a8d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3a8da0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x3a8da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3a8da4: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x3A8DA4u;
    SET_GPR_U32(ctx, 31, 0x3A8DACu);
    ctx->pc = 0x3A8DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8DA4u;
    // 0x3a8da8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x3A8DA4u, 0x3A8DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8DACu;
label_3a8dac:
    // 0x3a8dac: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x3a8dacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3a8db0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3a8db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8db4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a8db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8db8: 0xc0ebd5c  jal         func_3AF570
    ctx->pc = 0x3A8DB8u;
    SET_GPR_U32(ctx, 31, 0x3A8DC0u);
    ctx->pc = 0x3A8DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8DB8u;
    // 0x3a8dbc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF570u, 0x3A8DB8u, 0x3A8DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8DC0u;
label_3a8dc0:
    // 0x3a8dc0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3a8dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x3a8dc4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3a8dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8dc8: 0xc0ebb20  jal         func_3AEC80
    ctx->pc = 0x3A8DC8u;
    SET_GPR_U32(ctx, 31, 0x3A8DD0u);
    ctx->pc = 0x3A8DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8DC8u;
    // 0x3a8dcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEC80u, 0x3A8DC8u, 0x3A8DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8DD0u;
label_3a8dd0:
    // 0x3a8dd0: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x3a8dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x3a8dd4: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x3a8dd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a8dd8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8DD8u;
    {
        const bool branch_taken_0x3a8dd8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3A8DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8DD8u;
        // 0x3a8ddc: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8dd8) {
            ctx->pc = 0x3A8DF0u;
            goto label_3a8df0;
        }
    }
    ctx->pc = 0x3A8DE0u;
    // 0x3a8de0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a8de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8de4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a8de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8de8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A8DE8u;
    {
        const bool branch_taken_0x3a8de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8DE8u;
        // 0x3a8dec: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8de8) {
            ctx->pc = 0x3A8E04u;
            goto label_3a8e04;
        }
    }
    ctx->pc = 0x3A8DF0u;
label_3a8df0:
    // 0x3a8df0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3a8df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x3a8df4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3a8df4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8df8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a8df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8dfc: 0x39023  negu        $s2, $v1
    ctx->pc = 0x3a8dfcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3a8e00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a8e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a8e04:
    // 0x3a8e04: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3a8e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a8e08: 0x4820002  bltzl       $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A8E08u;
    {
        const bool branch_taken_0x3a8e08 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x3a8e08) {
            ctx->pc = 0x3A8E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8E08u;
            // 0x3a8e0c: 0x2048023  subu        $s0, $s0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8E14u;
            goto label_3a8e14;
        }
    }
    ctx->pc = 0x3A8E10u;
    // 0x3a8e10: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x3a8e10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3a8e14:
    // 0x3a8e14: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3a8e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a8e18: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x3a8e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a8e1c: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x3a8e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a8e20: 0x28e3fc02  slti        $v1, $a3, -0x3FE
    ctx->pc = 0x3a8e20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x3a8e24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A8E24u;
    {
        const bool branch_taken_0x3a8e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E24u;
        // 0x3a8e28: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8e24) {
            ctx->pc = 0x3A8E34u;
            goto label_3a8e34;
        }
    }
    ctx->pc = 0x3A8E2Cu;
    // 0x3a8e2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A8E2Cu;
    {
        const bool branch_taken_0x3a8e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E2Cu;
        // 0x3a8e30: 0x24930433  addiu       $s3, $a0, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8e2c) {
            ctx->pc = 0x3A8E3Cu;
            goto label_3a8e3c;
        }
    }
    ctx->pc = 0x3A8E34u;
label_3a8e34:
    // 0x3a8e34: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x3a8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x3a8e38: 0x459823  subu        $s3, $v0, $a1
    ctx->pc = 0x3a8e38u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3a8e3c:
    // 0x3a8e3c: 0x2133821  addu        $a3, $s0, $s3
    ctx->pc = 0x3a8e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x3a8e40: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x3a8e40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3a8e44: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3a8e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8e48: 0x247102a  slt         $v0, $s2, $a3
    ctx->pc = 0x3a8e48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3a8e4c: 0x242380b  movn        $a3, $s2, $v0
    ctx->pc = 0x3a8e4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
    // 0x3a8e50: 0x287182a  slt         $v1, $s4, $a3
    ctx->pc = 0x3a8e50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3a8e54: 0x283380b  movn        $a3, $s4, $v1
    ctx->pc = 0x3a8e54u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 20));
    // 0x3a8e58: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A8E58u;
    {
        const bool branch_taken_0x3a8e58 = (GPR_S64(ctx, 7) <= 0);
        if (branch_taken_0x3a8e58) {
            ctx->pc = 0x3A8E6Cu;
            goto label_3a8e6c;
        }
    }
    ctx->pc = 0x3A8E60u;
    // 0x3a8e60: 0x287a023  subu        $s4, $s4, $a3
    ctx->pc = 0x3a8e60u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x3a8e64: 0x2479023  subu        $s2, $s2, $a3
    ctx->pc = 0x3a8e64u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x3a8e68: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x3a8e68u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_3a8e6c:
    // 0x3a8e6c: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x3A8E6Cu;
    {
        const bool branch_taken_0x3a8e6c = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x3A8E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E6Cu;
        // 0x3a8e70: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8e6c) {
            ctx->pc = 0x3A8EA0u;
            goto label_3a8ea0;
        }
    }
    ctx->pc = 0x3A8E74u;
    // 0x3a8e74: 0xc0ebbb0  jal         func_3AEEC0
    ctx->pc = 0x3A8E74u;
    SET_GPR_U32(ctx, 31, 0x3A8E7Cu);
    ctx->pc = 0x3A8E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8E74u;
    // 0x3a8e78: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEEC0u, 0x3A8E74u, 0x3A8E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8E7Cu;
label_3a8e7c:
    // 0x3a8e7c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x3a8e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x3a8e80: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3a8e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8e84: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x3a8e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a8e88: 0xc0ebb2e  jal         func_3AECB8
    ctx->pc = 0x3A8E88u;
    SET_GPR_U32(ctx, 31, 0x3A8E90u);
    ctx->pc = 0x3A8E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8E88u;
    // 0x3a8e8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AECB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AECB8u, 0x3A8E88u, 0x3A8E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8E90u;
label_3a8e90:
    // 0x3a8e90: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3a8e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a8e94: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3a8e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8e98: 0xc0eba30  jal         func_3AE8C0
    ctx->pc = 0x3A8E98u;
    SET_GPR_U32(ctx, 31, 0x3A8EA0u);
    ctx->pc = 0x3A8E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8E98u;
    // 0x3a8e9c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8C0u, 0x3A8E98u, 0x3A8EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8EA0u;
label_3a8ea0:
    // 0x3a8ea0: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8EA0u;
    {
        const bool branch_taken_0x3a8ea0 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x3A8EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8EA0u;
        // 0x3a8ea4: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ea0) {
            ctx->pc = 0x3A8EB8u;
            goto label_3a8eb8;
        }
    }
    ctx->pc = 0x3A8EA8u;
    // 0x3a8ea8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a8ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8eac: 0xc0ebbf0  jal         func_3AEFC0
    ctx->pc = 0x3A8EACu;
    SET_GPR_U32(ctx, 31, 0x3A8EB4u);
    ctx->pc = 0x3A8EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8EACu;
    // 0x3a8eb0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEFC0u, 0x3A8EACu, 0x3A8EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8EB4u;
label_3a8eb4:
    // 0x3a8eb4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x3a8eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_3a8eb8:
    // 0x3a8eb8: 0x1ac00005  blez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8EB8u;
    {
        const bool branch_taken_0x3a8eb8 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x3A8EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8EB8u;
        // 0x3a8ebc: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8eb8) {
            ctx->pc = 0x3A8ED0u;
            goto label_3a8ed0;
        }
    }
    ctx->pc = 0x3A8EC0u;
    // 0x3a8ec0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3a8ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8ec4: 0xc0ebbb0  jal         func_3AEEC0
    ctx->pc = 0x3A8EC4u;
    SET_GPR_U32(ctx, 31, 0x3A8ECCu);
    ctx->pc = 0x3A8EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8EC4u;
    // 0x3a8ec8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEEC0u, 0x3A8EC4u, 0x3A8ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8ECCu;
label_3a8ecc:
    // 0x3a8ecc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3a8eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_3a8ed0:
    // 0x3a8ed0: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8ED0u;
    {
        const bool branch_taken_0x3a8ed0 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3A8ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8ED0u;
        // 0x3a8ed4: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ed0) {
            ctx->pc = 0x3A8EE8u;
            goto label_3a8ee8;
        }
    }
    ctx->pc = 0x3A8ED8u;
    // 0x3a8ed8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a8ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8edc: 0xc0ebbf0  jal         func_3AEFC0
    ctx->pc = 0x3A8EDCu;
    SET_GPR_U32(ctx, 31, 0x3A8EE4u);
    ctx->pc = 0x3A8EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8EDCu;
    // 0x3a8ee0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEFC0u, 0x3A8EDCu, 0x3A8EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8EE4u;
label_3a8ee4:
    // 0x3a8ee4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3a8ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_3a8ee8:
    // 0x3a8ee8: 0x1a800005  blez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A8EE8u;
    {
        const bool branch_taken_0x3a8ee8 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x3A8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8EE8u;
        // 0x3a8eec: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ee8) {
            ctx->pc = 0x3A8F00u;
            goto label_3a8f00;
        }
    }
    ctx->pc = 0x3A8EF0u;
    // 0x3a8ef0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a8ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8ef4: 0xc0ebbf0  jal         func_3AEFC0
    ctx->pc = 0x3A8EF4u;
    SET_GPR_U32(ctx, 31, 0x3A8EFCu);
    ctx->pc = 0x3A8EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8EF4u;
    // 0x3a8ef8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEFC0u, 0x3A8EF4u, 0x3A8EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8EFCu;
label_3a8efc:
    // 0x3a8efc: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x3a8efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_3a8f00:
    // 0x3a8f00: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3a8f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a8f04: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3a8f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8f08: 0xc0ebc60  jal         func_3AF180
    ctx->pc = 0x3A8F08u;
    SET_GPR_U32(ctx, 31, 0x3A8F10u);
    ctx->pc = 0x3A8F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F08u;
    // 0x3a8f0c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF180u, 0x3A8F08u, 0x3A8F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F10u;
label_3a8f10:
    // 0x3a8f10: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x3a8f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x3a8f14: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x3a8f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3a8f18: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x3a8f18u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3a8f1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a8f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8f20: 0xc0ebc46  jal         func_3AF118
    ctx->pc = 0x3A8F20u;
    SET_GPR_U32(ctx, 31, 0x3A8F28u);
    ctx->pc = 0x3A8F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F20u;
    // 0x3a8f24: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF118u, 0x3A8F20u, 0x3A8F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F28u;
label_3a8f28:
    // 0x3a8f28: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3a8f28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8f2c: 0x4e1fe83  bgez        $a3, . + 4 + (-0x17D << 2)
    ctx->pc = 0x3A8F2Cu;
    {
        const bool branch_taken_0x3a8f2c = (GPR_S64(ctx, 7) >= 0);
        if (branch_taken_0x3a8f2c) {
            ctx->pc = 0x3A893Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a893c;
        }
    }
    ctx->pc = 0x3A8F34u;
    // 0x3a8f34: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A8F34u;
    {
        const bool branch_taken_0x3a8f34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F34u;
        // 0x3a8f38: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8f34) {
            ctx->pc = 0x3A8F54u;
            goto label_3a8f54;
        }
    }
    ctx->pc = 0x3A8F3Cu;
    // 0x3a8f3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a8f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a8f40: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x3a8f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x3a8f44: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x3a8f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x3a8f48: 0x1040fe71  beqz        $v0, . + 4 + (-0x18F << 2)
    ctx->pc = 0x3A8F48u;
    {
        const bool branch_taken_0x3a8f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F48u;
        // 0x3a8f4c: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8f48) {
            ctx->pc = 0x3A8910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8910;
        }
    }
    ctx->pc = 0x3A8F50u;
label_3a8f50:
    // 0x3a8f50: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3a8f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3a8f54:
    // 0x3a8f54: 0xc0eba30  jal         func_3AE8C0
    ctx->pc = 0x3A8F54u;
    SET_GPR_U32(ctx, 31, 0x3A8F5Cu);
    ctx->pc = 0x3A8F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F54u;
    // 0x3a8f58: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8C0u, 0x3A8F54u, 0x3A8F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F5Cu;
label_3a8f5c:
    // 0x3a8f5c: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x3a8f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3a8f60: 0xc0eba30  jal         func_3AE8C0
    ctx->pc = 0x3A8F60u;
    SET_GPR_U32(ctx, 31, 0x3A8F68u);
    ctx->pc = 0x3A8F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F60u;
    // 0x3a8f64: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8C0u, 0x3A8F60u, 0x3A8F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F68u;
label_3a8f68:
    // 0x3a8f68: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x3a8f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3a8f6c: 0xc0eba30  jal         func_3AE8C0
    ctx->pc = 0x3A8F6Cu;
    SET_GPR_U32(ctx, 31, 0x3A8F74u);
    ctx->pc = 0x3A8F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F6Cu;
    // 0x3a8f70: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8C0u, 0x3A8F6Cu, 0x3A8F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F74u;
label_3a8f74:
    // 0x3a8f74: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x3a8f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a8f78: 0xc0eba30  jal         func_3AE8C0
    ctx->pc = 0x3A8F78u;
    SET_GPR_U32(ctx, 31, 0x3A8F80u);
    ctx->pc = 0x3A8F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F78u;
    // 0x3a8f7c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8C0u, 0x3A8F78u, 0x3A8F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F80u;
label_3a8f80:
    // 0x3a8f80: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x3a8f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a8f84: 0xc0eba30  jal         func_3AE8C0
    ctx->pc = 0x3A8F84u;
    SET_GPR_U32(ctx, 31, 0x3A8F8Cu);
    ctx->pc = 0x3A8F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F84u;
    // 0x3a8f88: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE8C0u, 0x3A8F84u, 0x3A8F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F8Cu;
label_3a8f8c:
    // 0x3a8f8c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x3a8f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3a8f90:
    // 0x3a8f90: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3A8F90u;
    {
        const bool branch_taken_0x3a8f90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a8f90) {
            ctx->pc = 0x3A8F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8F90u;
            // 0x3a8f94: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8F98u;
            goto label_3a8f98;
        }
    }
    ctx->pc = 0x3A8F98u;
label_3a8f98:
    // 0x3a8f98: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x3a8f98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3a8f9c: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A8F9Cu;
    {
        const bool branch_taken_0x3a8f9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F9Cu;
        // 0x3a8fa0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8f9c) {
            ctx->pc = 0x3A8FB0u;
            goto label_3a8fb0;
        }
    }
    ctx->pc = 0x3A8FA4u;
    // 0x3a8fa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a8fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8fa8: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3A8FA8u;
    SET_GPR_U32(ctx, 31, 0x3A8FB0u);
    ctx->pc = 0x3A8FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8FA8u;
    // 0x3a8fac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3A8FA8u, 0x3A8FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8FB0u;
label_3a8fb0:
    // 0x3a8fb0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3a8fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3a8fb4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3a8fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3a8fb8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3a8fb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3a8fbc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3a8fbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3a8fc0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3a8fc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a8fc4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x3a8fc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a8fc8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3a8fc8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a8fcc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3a8fccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a8fd0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x3a8fd0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a8fd4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a8fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a8fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8FD8u;
        // 0x3a8fdc: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8FE0u;
}
