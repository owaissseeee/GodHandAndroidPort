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

// Function: func_003820C0
// Address: 0x3820c0 - 0x3821d8
void func_003820C0_0x3820c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003820C0_0x3820c0");
#endif

    switch (ctx->pc) {
        case 0x3820f8u: goto label_3820f8;
        case 0x382158u: goto label_382158;
        case 0x382178u: goto label_382178;
        case 0x3821a0u: goto label_3821a0;
        default: break;
    }

    ctx->pc = 0x3820c0u;

    // 0x3820c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3820c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3820c4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3820c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3820c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3820c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3820cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3820ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3820d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3820d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3820d4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3820d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3820d8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3820d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3820dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3820dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3820e0: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3820e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3820e4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3820E4u;
    {
        const bool branch_taken_0x3820e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3820E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3820E4u;
        // 0x3820e8: 0x26120030  addiu       $s2, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3820e4) {
            ctx->pc = 0x38211Cu;
            goto label_38211c;
        }
    }
    ctx->pc = 0x3820ECu;
    // 0x3820ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3820ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3820f0: 0x26050006  addiu       $a1, $s0, 0x6
    ctx->pc = 0x3820f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x3820f4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3820f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3820f8:
    // 0x3820f8: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x3820f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3820fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3820fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x382100: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x382100u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x382104: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x382104u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x382108: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x382108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x38210c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x38210cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x382110: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x382110u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x382114: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x382114u;
    {
        const bool branch_taken_0x382114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x382118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382114u;
        // 0x382118: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382114) {
            ctx->pc = 0x3820F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3820f8;
        }
    }
    ctx->pc = 0x38211Cu;
label_38211c:
    // 0x38211c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x38211cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x382120: 0x50800025  beql        $a0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x382120u;
    {
        const bool branch_taken_0x382120 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x382120) {
            ctx->pc = 0x382124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382120u;
            // 0x382124: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3821B8u;
            goto label_3821b8;
        }
    }
    ctx->pc = 0x382128u;
    // 0x382128: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x382128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x38212c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x38212Cu;
    {
        const bool branch_taken_0x38212c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38212Cu;
        // 0x382130: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38212c) {
            ctx->pc = 0x382160u;
            goto label_382160;
        }
    }
    ctx->pc = 0x382134u;
    // 0x382134: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x382134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x382138: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x382138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x38213c: 0x5460001e  bnel        $v1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x38213Cu;
    {
        const bool branch_taken_0x38213c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x38213c) {
            ctx->pc = 0x382140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38213Cu;
            // 0x382140: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3821B8u;
            goto label_3821b8;
        }
    }
    ctx->pc = 0x382144u;
    // 0x382144: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x382144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x382148: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x382148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x38214c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x38214cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x382150: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x382150u;
    SET_GPR_U32(ctx, 31, 0x382158u);
    ctx->pc = 0x382154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382150u;
    // 0x382154: 0x84460004  lh          $a2, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x382150u, 0x382158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382158u;
label_382158:
    // 0x382158: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x382158u;
    {
        const bool branch_taken_0x382158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382158u;
        // 0x38215c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382158) {
            ctx->pc = 0x3821B8u;
            goto label_3821b8;
        }
    }
    ctx->pc = 0x382160u;
label_382160:
    // 0x382160: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x382160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x382164: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x382164u;
    {
        const bool branch_taken_0x382164 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x382168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382164u;
        // 0x382168: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382164) {
            ctx->pc = 0x3821B4u;
            goto label_3821b4;
        }
    }
    ctx->pc = 0x38216Cu;
    // 0x38216c: 0x26540018  addiu       $s4, $s2, 0x18
    ctx->pc = 0x38216cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x382170: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x382170u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x382174: 0x24b10001  addiu       $s1, $a1, 0x1
    ctx->pc = 0x382174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_382178:
    // 0x382178: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x382178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x38217c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x38217cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x382180: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x382180u;
    {
        const bool branch_taken_0x382180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x382180) {
            ctx->pc = 0x382184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382180u;
            // 0x382184: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3821A4u;
            goto label_3821a4;
        }
    }
    ctx->pc = 0x382188u;
    // 0x382188: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x382188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x38218c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x38218cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x382190: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x382190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x382194: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x382194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x382198: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x382198u;
    SET_GPR_U32(ctx, 31, 0x3821A0u);
    ctx->pc = 0x38219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382198u;
    // 0x38219c: 0x84460000  lh          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x382198u, 0x3821A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3821A0u;
label_3821a0:
    // 0x3821a0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3821a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3821a4:
    // 0x3821a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3821a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3821a8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3821a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3821ac: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x3821ACu;
    {
        const bool branch_taken_0x3821ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3821B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821ACu;
        // 0x3821b0: 0x24b10001  addiu       $s1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3821ac) {
            ctx->pc = 0x382178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382178;
        }
    }
    ctx->pc = 0x3821B4u;
label_3821b4:
    // 0x3821b4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3821b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3821b8:
    // 0x3821b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3821b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3821bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3821bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3821c0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3821c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3821c4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3821c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3821c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3821c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3821cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3821CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3821D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3821CCu;
        // 0x3821d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3821CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3821D4u;
    // 0x3821d4: 0x0  nop
    ctx->pc = 0x3821d4u;
    // NOP
    ctx->pc = 0x3821d8u;
}
