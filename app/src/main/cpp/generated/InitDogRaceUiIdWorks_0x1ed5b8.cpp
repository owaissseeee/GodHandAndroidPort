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

// Function: InitDogRaceUiIdWorks
// Address: 0x1ed5b8 - 0x1ed660
void InitDogRaceUiIdWorks_0x1ed5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitDogRaceUiIdWorks_0x1ed5b8");
#endif

    switch (ctx->pc) {
        case 0x1ed5ecu: goto label_1ed5ec;
        case 0x1ed5f8u: goto label_1ed5f8;
        case 0x1ed604u: goto label_1ed604;
        case 0x1ed614u: goto label_1ed614;
        case 0x1ed628u: goto label_1ed628;
        case 0x1ed634u: goto label_1ed634;
        case 0x1ed644u: goto label_1ed644;
        default: break;
    }

    ctx->pc = 0x1ed5b8u;

    // 0x1ed5b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ed5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ed5bc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1ed5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ed5c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ed5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ed5c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ed5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ed5c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ed5c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed5cc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ed5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ed5d0: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x1ed5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1ed5d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ed5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ed5d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ed5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ed5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ed5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed5e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed5e4: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1ED5E4u;
    SET_GPR_U32(ctx, 31, 0x1ED5ECu);
    ctx->pc = 0x1ED5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED5E4u;
    // 0x1ed5e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1ED5E4u, 0x1ED5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED5ECu;
label_1ed5ec:
    // 0x1ed5ec: 0x26510060  addiu       $s1, $s2, 0x60
    ctx->pc = 0x1ed5ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1ed5f0: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x1ED5F0u;
    SET_GPR_U32(ctx, 31, 0x1ED5F8u);
    ctx->pc = 0x1ED5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED5F0u;
    // 0x1ed5f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x1ED5F0u, 0x1ED5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED5F8u;
label_1ed5f8:
    // 0x1ed5f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ed5f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed5fc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1ED5FCu;
    SET_GPR_U32(ctx, 31, 0x1ED604u);
    ctx->pc = 0x1ED600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED5FCu;
    // 0x1ed600: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1ED5FCu, 0x1ED604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED604u;
label_1ed604:
    // 0x1ed604: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ed604u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ed608: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ed608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed60c: 0xc0b576a  jal         func_2D5DA8
    ctx->pc = 0x1ED60Cu;
    SET_GPR_U32(ctx, 31, 0x1ED614u);
    ctx->pc = 0x1ED610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED60Cu;
    // 0x1ed610: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DA8u, 0x1ED60Cu, 0x1ED614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED614u;
label_1ed614:
    // 0x1ed614: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x1ed614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ed618: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1ED618u;
    {
        const bool branch_taken_0x1ed618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED618u;
        // 0x1ed61c: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed618) {
            ctx->pc = 0x1ED5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed5f8;
        }
    }
    ctx->pc = 0x1ED620u;
    // 0x1ed620: 0xc07b5f8  jal         func_1ED7E0
    ctx->pc = 0x1ED620u;
    SET_GPR_U32(ctx, 31, 0x1ED628u);
    ctx->pc = 0x1ED624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED620u;
    // 0x1ed624: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED7E0u, 0x1ED620u, 0x1ED628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED628u;
label_1ed628:
    // 0x1ed628: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ed628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed62c: 0xc07b70a  jal         func_1EDC28
    ctx->pc = 0x1ED62Cu;
    SET_GPR_U32(ctx, 31, 0x1ED634u);
    ctx->pc = 0x1ED630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED62Cu;
    // 0x1ed630: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDC28u, 0x1ED62Cu, 0x1ED634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED634u;
label_1ed634:
    // 0x1ed634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ed634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed638: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ed638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ed63c: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1ED63Cu;
    SET_GPR_U32(ctx, 31, 0x1ED644u);
    ctx->pc = 0x1ED640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED63Cu;
    // 0x1ed640: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1ED63Cu, 0x1ED644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED644u;
label_1ed644:
    // 0x1ed644: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ed644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed648: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ed648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed64c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ed64cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed650: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ed650u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed658: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED658u;
        // 0x1ed65c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED660u;
}
