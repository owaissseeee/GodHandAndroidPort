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

// Function: addDevName
// Address: 0x330f10 - 0x330fb8
void addDevName_0x330f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("addDevName_0x330f10");
#endif

    switch (ctx->pc) {
        case 0x330f38u: goto label_330f38;
        case 0x330f44u: goto label_330f44;
        case 0x330f64u: goto label_330f64;
        default: break;
    }

    ctx->pc = 0x330f10u;

    // 0x330f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x330f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x330f14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x330f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x330f18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x330f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x330f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x330f20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x330f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x330f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x330f28: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x330F28u;
    {
        const bool branch_taken_0x330f28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x330F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F28u;
        // 0x330f2c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f28) {
            ctx->pc = 0x330F3Cu;
            goto label_330f3c;
        }
    }
    ctx->pc = 0x330F30u;
    // 0x330f30: 0xc0cc1b2  jal         func_3306C8
    ctx->pc = 0x330F30u;
    SET_GPR_U32(ctx, 31, 0x330F38u);
    ctx->pc = 0x3306C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3306C8u, 0x330F30u, 0x330F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F38u;
label_330f38:
    // 0x330f38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x330f38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_330f3c:
    // 0x330f3c: 0xc0cc3b0  jal         func_330EC0
    ctx->pc = 0x330F3Cu;
    SET_GPR_U32(ctx, 31, 0x330F44u);
    ctx->pc = 0x330F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330F3Cu;
    // 0x330f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330EC0u, 0x330F3Cu, 0x330F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F44u;
label_330f44:
    // 0x330f44: 0x3c030075  lui         $v1, 0x75
    ctx->pc = 0x330f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)117 << 16));
    // 0x330f48: 0x24726090  addiu       $s2, $v1, 0x6090
    ctx->pc = 0x330f48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 24720));
    // 0x330f4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x330f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330f50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x330f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f54: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x330F54u;
    {
        const bool branch_taken_0x330f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x330F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330F54u;
        // 0x330f58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330f54) {
            ctx->pc = 0x330F90u;
            goto label_330f90;
        }
    }
    ctx->pc = 0x330F5Cu;
    // 0x330f5c: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x330F5Cu;
    SET_GPR_U32(ctx, 31, 0x330F64u);
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x330F5Cu, 0x330F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330F64u;
label_330f64:
    // 0x330f64: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x330f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x330f68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x330f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x330f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x330f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x330f78: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x330f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330f7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x330f7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330f80: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x330f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x330f84: 0x24a53d80  addiu       $a1, $a1, 0x3D80
    ctx->pc = 0x330f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15744));
    // 0x330f88: 0x80e9b16  j           func_3A6C58
    ctx->pc = 0x330F88u;
    ctx->pc = 0x330F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330F88u;
    // 0x330f8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x330F88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330F90u;
label_330f90:
    // 0x330f90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330f94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x330f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x330f98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x330f98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330f9c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x330f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x330fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x330FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330FA0u;
        // 0x330fa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330FA8u;
    // 0x330fa8: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x330fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x330fac: 0x0  nop
    ctx->pc = 0x330facu;
    // NOP
    // 0x330fb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x330fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x330fb4: 0x0  nop
    ctx->pc = 0x330fb4u;
    // NOP
    ctx->pc = 0x330fb8u;
}
