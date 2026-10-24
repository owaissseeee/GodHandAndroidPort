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

// Function: MPS_SetErrFn
// Address: 0x368f18 - 0x368fb0
void MPS_SetErrFn_0x368f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MPS_SetErrFn_0x368f18");
#endif

    switch (ctx->pc) {
        case 0x368f48u: goto label_368f48;
        case 0x368f58u: goto label_368f58;
        case 0x368f90u: goto label_368f90;
        default: break;
    }

    ctx->pc = 0x368f18u;

    // 0x368f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x368f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x368f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368f20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x368f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x368f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x368f28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x368f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x368f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x368f30: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x368f30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f34: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x368F34u;
    {
        const bool branch_taken_0x368f34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x368F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F34u;
        // 0x368f38: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368f34) {
            ctx->pc = 0x368F50u;
            goto label_368f50;
        }
    }
    ctx->pc = 0x368F3Cu;
    // 0x368f3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x368f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x368f40: 0xc0da3ec  jal         func_368FB0
    ctx->pc = 0x368F40u;
    SET_GPR_U32(ctx, 31, 0x368F48u);
    ctx->pc = 0x368F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F40u;
    // 0x368f44: 0x8c441a98  lw          $a0, 0x1A98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368FB0u, 0x368F40u, 0x368F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F48u;
label_368f48:
    // 0x368f48: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x368F48u;
    {
        const bool branch_taken_0x368f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x368F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F48u;
        // 0x368f4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368f48) {
            ctx->pc = 0x368F94u;
            goto label_368f94;
        }
    }
    ctx->pc = 0x368F50u;
label_368f50:
    // 0x368f50: 0xc0da3f0  jal         func_368FC0
    ctx->pc = 0x368F50u;
    SET_GPR_U32(ctx, 31, 0x368F58u);
    ctx->pc = 0x368FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368FC0u, 0x368F50u, 0x368F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F58u;
label_368f58:
    // 0x368f58: 0x3c05ff02  lui         $a1, 0xFF02
    ctx->pc = 0x368f58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65282 << 16));
    // 0x368f5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x368F5Cu;
    {
        const bool branch_taken_0x368f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x368F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368F5Cu;
        // 0x368f60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368f5c) {
            ctx->pc = 0x368F80u;
            goto label_368f80;
        }
    }
    ctx->pc = 0x368F64u;
    // 0x368f64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x368f68: 0x34a50101  ori         $a1, $a1, 0x101
    ctx->pc = 0x368f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)257);
    // 0x368f6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x368f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x368f70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x368f70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368f74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x368f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368f78: 0x80da3a4  j           func_368E90
    ctx->pc = 0x368F78u;
    ctx->pc = 0x368F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F78u;
    // 0x368f7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368E90u, 0x368F78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x368F80u;
label_368f80:
    // 0x368f80: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x368f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x368f84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x368f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f88: 0xc0da3ec  jal         func_368FB0
    ctx->pc = 0x368F88u;
    SET_GPR_U32(ctx, 31, 0x368F90u);
    ctx->pc = 0x368F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368F88u;
    // 0x368f8c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368FB0u, 0x368F88u, 0x368F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368F90u;
label_368f90:
    // 0x368f90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_368f94:
    // 0x368f94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368f98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x368f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x368f9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x368f9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368fa0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x368fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x368fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x368FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368FA4u;
        // 0x368fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368FACu;
    // 0x368fac: 0x0  nop
    ctx->pc = 0x368facu;
    // NOP
    ctx->pc = 0x368fb0u;
}
