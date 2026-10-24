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

// Function: cOmBase_setDispModeLayers2E
// Address: 0x185f50 - 0x186038
void cOmBase_setDispModeLayers2E_0x185f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_setDispModeLayers2E_0x185f50");
#endif

    switch (ctx->pc) {
        case 0x185f74u: goto label_185f74;
        case 0x185f84u: goto label_185f84;
        case 0x185fd4u: goto label_185fd4;
        case 0x185ffcu: goto label_185ffc;
        case 0x186024u: goto label_186024;
        default: break;
    }

    ctx->pc = 0x185f50u;

    // 0x185f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x185f54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x185f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x185f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x185f5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x185f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x185f60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x185f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x185f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185f6c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185F6Cu;
    SET_GPR_U32(ctx, 31, 0x185F74u);
    ctx->pc = 0x185F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F6Cu;
    // 0x185f70: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185F6Cu, 0x185F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F74u;
label_185f74:
    // 0x185f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185f78: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x185f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x185f7c: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185F7Cu;
    SET_GPR_U32(ctx, 31, 0x185F84u);
    ctx->pc = 0x185F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185F7Cu;
    // 0x185f80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185F7Cu, 0x185F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F84u;
label_185f84:
    // 0x185f84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185f88: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x185F88u;
    {
        const bool branch_taken_0x185f88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x185F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F88u;
        // 0x185f8c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f88) {
            ctx->pc = 0x185FC4u;
            goto label_185fc4;
        }
    }
    ctx->pc = 0x185F90u;
    // 0x185f90: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x185F90u;
    {
        const bool branch_taken_0x185f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f90) {
            ctx->pc = 0x185F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185F90u;
            // 0x185f94: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185FA8u;
            goto label_185fa8;
        }
    }
    ctx->pc = 0x185F98u;
    // 0x185f98: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x185F98u;
    {
        const bool branch_taken_0x185f98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F98u;
        // 0x185f9c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f98) {
            ctx->pc = 0x185FB8u;
            goto label_185fb8;
        }
    }
    ctx->pc = 0x185FA0u;
    // 0x185fa0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x185FA0u;
    {
        const bool branch_taken_0x185fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FA0u;
        // 0x185fa4: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fa0) {
            ctx->pc = 0x18602Cu;
            goto label_18602c;
        }
    }
    ctx->pc = 0x185FA8u;
label_185fa8:
    // 0x185fa8: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x185FA8u;
    {
        const bool branch_taken_0x185fa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x185FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FA8u;
        // 0x185fac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fa8) {
            ctx->pc = 0x185FDCu;
            goto label_185fdc;
        }
    }
    ctx->pc = 0x185FB0u;
    // 0x185fb0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x185FB0u;
    {
        const bool branch_taken_0x185fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FB0u;
        // 0x185fb4: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fb0) {
            ctx->pc = 0x18602Cu;
            goto label_18602c;
        }
    }
    ctx->pc = 0x185FB8u;
label_185fb8:
    // 0x185fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185fbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185FBCu;
    {
        const bool branch_taken_0x185fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FBCu;
        // 0x185fc0: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fbc) {
            ctx->pc = 0x185FCCu;
            goto label_185fcc;
        }
    }
    ctx->pc = 0x185FC4u;
label_185fc4:
    // 0x185fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185fc8: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x185fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_185fcc:
    // 0x185fcc: 0xc06dca0  jal         func_1B7280
    ctx->pc = 0x185FCCu;
    SET_GPR_U32(ctx, 31, 0x185FD4u);
    ctx->pc = 0x185FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FCCu;
    // 0x185fd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7280u, 0x185FCCu, 0x185FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FD4u;
label_185fd4:
    // 0x185fd4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x185FD4u;
    {
        const bool branch_taken_0x185fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185FD4u;
        // 0x185fd8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185fd4) {
            ctx->pc = 0x186028u;
            goto label_186028;
        }
    }
    ctx->pc = 0x185FDCu;
label_185fdc:
    // 0x185fdc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x185fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x185fe0: 0x24040298  addiu       $a0, $zero, 0x298
    ctx->pc = 0x185fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 664));
    // 0x185fe4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x185fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x185fe8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x185fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185fec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x185fecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185ff0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x185ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x185ff4: 0xc0c194a  jal         func_306528
    ctx->pc = 0x185FF4u;
    SET_GPR_U32(ctx, 31, 0x185FFCu);
    ctx->pc = 0x185FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185FF4u;
    // 0x185ff8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x185FF4u, 0x185FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FFCu;
label_185ffc:
    // 0x185ffc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x185ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x186000: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x186000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186004: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x186004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x186008: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x186008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18600c: 0x24060113  addiu       $a2, $zero, 0x113
    ctx->pc = 0x18600cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    // 0x186010: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x186010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186014: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x186014u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186018: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x186018u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18601c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x18601Cu;
    SET_GPR_U32(ctx, 31, 0x186024u);
    ctx->pc = 0x186020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18601Cu;
    // 0x186020: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x18601Cu, 0x186024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186024u;
label_186024:
    // 0x186024: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x186024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_186028:
    // 0x186028: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x186028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18602c:
    // 0x18602c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18602cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186030: 0x3e00008  jr          $ra
    ctx->pc = 0x186030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186030u;
        // 0x186034: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186038u;
}
