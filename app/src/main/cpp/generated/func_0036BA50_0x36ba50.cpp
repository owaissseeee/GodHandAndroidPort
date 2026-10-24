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

// Function: func_0036BA50
// Address: 0x36ba50 - 0x36bb78
void func_0036BA50_0x36ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036BA50_0x36ba50");
#endif

    switch (ctx->pc) {
        case 0x36baa0u: goto label_36baa0;
        case 0x36bab4u: goto label_36bab4;
        case 0x36bac4u: goto label_36bac4;
        case 0x36bae0u: goto label_36bae0;
        case 0x36baf0u: goto label_36baf0;
        case 0x36bafcu: goto label_36bafc;
        case 0x36bb08u: goto label_36bb08;
        case 0x36bb14u: goto label_36bb14;
        default: break;
    }

    ctx->pc = 0x36ba50u;

    // 0x36ba50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36ba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36ba54: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36ba54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x36ba58: 0x24d3fffc  addiu       $s3, $a2, -0x4
    ctx->pc = 0x36ba58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x36ba5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36ba5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36ba60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36ba60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36ba64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36ba68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36ba68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba6c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x36ba6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x36ba70: 0x24b40004  addiu       $s4, $a1, 0x4
    ctx->pc = 0x36ba70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x36ba74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ba78: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x36ba78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x36ba7c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x36ba7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x36ba80: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x36ba80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x36ba84: 0x1a600027  blez        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x36BA84u;
    {
        const bool branch_taken_0x36ba84 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x36BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BA84u;
        // 0x36ba88: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ba84) {
            ctx->pc = 0x36BB24u;
            goto label_36bb24;
        }
    }
    ctx->pc = 0x36BA8Cu;
    // 0x36ba8c: 0x3c170046  lui         $s7, 0x46
    ctx->pc = 0x36ba8cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)70 << 16));
    // 0x36ba90: 0x3c160046  lui         $s6, 0x46
    ctx->pc = 0x36ba90u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
    // 0x36ba94: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x36ba94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36ba98: 0x2928021  addu        $s0, $s4, $s2
    ctx->pc = 0x36ba98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x36ba9c: 0x0  nop
    ctx->pc = 0x36ba9cu;
    // NOP
label_36baa0:
    // 0x36baa0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x36baa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36baa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36baa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36baa8: 0x26e5a3c0  addiu       $a1, $s7, -0x5C40
    ctx->pc = 0x36baa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294943680));
    // 0x36baac: 0xc0e96f6  jal         func_3A5BD8
    ctx->pc = 0x36BAACu;
    SET_GPR_U32(ctx, 31, 0x36BAB4u);
    ctx->pc = 0x36BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BAACu;
    // 0x36bab0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5BD8u, 0x36BAACu, 0x36BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BAB4u;
label_36bab4:
    // 0x36bab4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36BAB4u;
    {
        const bool branch_taken_0x36bab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BAB4u;
        // 0x36bab8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bab4) {
            ctx->pc = 0x36BAD0u;
            goto label_36bad0;
        }
    }
    ctx->pc = 0x36BABCu;
    // 0x36babc: 0xc0e9f12  jal         func_3A7C48
    ctx->pc = 0x36BABCu;
    SET_GPR_U32(ctx, 31, 0x36BAC4u);
    ctx->pc = 0x3A7C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C48u, 0x36BABCu, 0x36BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BAC4u;
label_36bac4:
    // 0x36bac4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x36bac4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bac8: 0x2a2180b  movn        $v1, $s5, $v0
    ctx->pc = 0x36bac8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 21));
    // 0x36bacc: 0xae230398  sw          $v1, 0x398($s1)
    ctx->pc = 0x36baccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 920), GPR_U32(ctx, 3));
label_36bad0:
    // 0x36bad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36bad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bad4: 0x26c5a3c8  addiu       $a1, $s6, -0x5C38
    ctx->pc = 0x36bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294943688));
    // 0x36bad8: 0xc0e96f6  jal         func_3A5BD8
    ctx->pc = 0x36BAD8u;
    SET_GPR_U32(ctx, 31, 0x36BAE0u);
    ctx->pc = 0x36BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BAD8u;
    // 0x36badc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5BD8u, 0x36BAD8u, 0x36BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BAE0u;
label_36bae0:
    // 0x36bae0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x36BAE0u;
    {
        const bool branch_taken_0x36bae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BAE0u;
        // 0x36bae4: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bae0) {
            ctx->pc = 0x36BB0Cu;
            goto label_36bb0c;
        }
    }
    ctx->pc = 0x36BAE8u;
    // 0x36bae8: 0xc0e9f12  jal         func_3A7C48
    ctx->pc = 0x36BAE8u;
    SET_GPR_U32(ctx, 31, 0x36BAF0u);
    ctx->pc = 0x3A7C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C48u, 0x36BAE8u, 0x36BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BAF0u;
label_36baf0:
    // 0x36baf0: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x36baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x36baf4: 0xc0e9f12  jal         func_3A7C48
    ctx->pc = 0x36BAF4u;
    SET_GPR_U32(ctx, 31, 0x36BAFCu);
    ctx->pc = 0x36BAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BAF4u;
    // 0x36baf8: 0xae220360  sw          $v0, 0x360($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C48u, 0x36BAF4u, 0x36BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BAFCu;
label_36bafc:
    // 0x36bafc: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x36bafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x36bb00: 0xc0e9f12  jal         func_3A7C48
    ctx->pc = 0x36BB00u;
    SET_GPR_U32(ctx, 31, 0x36BB08u);
    ctx->pc = 0x36BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BB00u;
    // 0x36bb04: 0xae220364  sw          $v0, 0x364($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C48u, 0x36BB00u, 0x36BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BB08u;
label_36bb08:
    // 0x36bb08: 0xae220368  sw          $v0, 0x368($s1)
    ctx->pc = 0x36bb08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 872), GPR_U32(ctx, 2));
label_36bb0c:
    // 0x36bb0c: 0xc0da476  jal         func_3691D8
    ctx->pc = 0x36BB0Cu;
    SET_GPR_U32(ctx, 31, 0x36BB14u);
    ctx->pc = 0x36BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BB0Cu;
    // 0x36bb10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3691D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3691D8u, 0x36BB0Cu, 0x36BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BB14u;
label_36bb14:
    // 0x36bb14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36BB14u;
    {
        const bool branch_taken_0x36bb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB14u;
        // 0x36bb18: 0x253182a  slt         $v1, $s2, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bb14) {
            ctx->pc = 0x36BB24u;
            goto label_36bb24;
        }
    }
    ctx->pc = 0x36BB1Cu;
    // 0x36bb1c: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x36BB1Cu;
    {
        const bool branch_taken_0x36bb1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB1Cu;
        // 0x36bb20: 0x2928021  addu        $s0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bb1c) {
            ctx->pc = 0x36BAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36baa0;
        }
    }
    ctx->pc = 0x36BB24u;
label_36bb24:
    // 0x36bb24: 0x8e230360  lw          $v1, 0x360($s1)
    ctx->pc = 0x36bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 864)));
    // 0x36bb28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x36bb28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36bb2c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x36bb2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bb30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36bb30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36bb34: 0x38640008  xori        $a0, $v1, 0x8
    ctx->pc = 0x36bb34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
    // 0x36bb38: 0x38630009  xori        $v1, $v1, 0x9
    ctx->pc = 0x36bb38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)9);
    // 0x36bb3c: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x36bb3cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x36bb40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36bb40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36bb44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36bb44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36bb48: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x36bb48u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x36bb4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x36bb4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36bb50: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x36bb50u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36bb54: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x36bb54u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36bb58: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x36bb58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36bb5c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x36bb5cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36bb60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36bb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36bb64: 0x3e00008  jr          $ra
    ctx->pc = 0x36BB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BB64u;
        // 0x36bb68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BB6Cu;
    // 0x36bb6c: 0x0  nop
    ctx->pc = 0x36bb6cu;
    // NOP
    // 0x36bb70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x36bb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36bb74: 0x0  nop
    ctx->pc = 0x36bb74u;
    // NOP
    ctx->pc = 0x36bb78u;
}
