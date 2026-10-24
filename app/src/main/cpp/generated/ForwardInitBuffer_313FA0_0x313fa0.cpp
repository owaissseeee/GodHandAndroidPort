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

// Function: ForwardInitBuffer_313FA0
// Address: 0x313fa0 - 0x314010
void ForwardInitBuffer_313FA0_0x313fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_313FA0_0x313fa0");
#endif

    switch (ctx->pc) {
        case 0x313fd4u: goto label_313fd4;
        case 0x313fecu: goto label_313fec;
        case 0x313ff4u: goto label_313ff4;
        default: break;
    }

    ctx->pc = 0x313fa0u;

    // 0x313fa0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313fa4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313fa8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x313fac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x313facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x313fb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313fb4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313fb8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313FB8u;
    {
        const bool branch_taken_0x313fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313FB8u;
        // 0x313fbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313fb8) {
            ctx->pc = 0x313FFCu;
            goto label_313ffc;
        }
    }
    ctx->pc = 0x313FC0u;
    // 0x313fc0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313fc4: 0x240408a0  addiu       $a0, $zero, 0x8A0
    ctx->pc = 0x313fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2208));
    // 0x313fc8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x313fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x313fcc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313FCCu;
    SET_GPR_U32(ctx, 31, 0x313FD4u);
    ctx->pc = 0x313FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313FCCu;
    // 0x313fd0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313FCCu, 0x313FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313FD4u;
label_313fd4:
    // 0x313fd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313fd8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313FD8u;
    {
        const bool branch_taken_0x313fd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313FD8u;
        // 0x313fdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313fd8) {
            ctx->pc = 0x313FFCu;
            goto label_313ffc;
        }
    }
    ctx->pc = 0x313FE0u;
    // 0x313fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313fe4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313FE4u;
    SET_GPR_U32(ctx, 31, 0x313FECu);
    ctx->pc = 0x313FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313FE4u;
    // 0x313fe8: 0x240608a0  addiu       $a2, $zero, 0x8A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313FE4u, 0x313FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313FECu;
label_313fec:
    // 0x313fec: 0xc063716  jal         func_18DC58
    ctx->pc = 0x313FECu;
    SET_GPR_U32(ctx, 31, 0x313FF4u);
    ctx->pc = 0x313FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313FECu;
    // 0x313ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC58u, 0x313FECu, 0x313FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313FF4u;
label_313ff4:
    // 0x313ff4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313FF4u;
    {
        const bool branch_taken_0x313ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313FF4u;
        // 0x313ff8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ff4) {
            ctx->pc = 0x314004u;
            goto label_314004;
        }
    }
    ctx->pc = 0x313FFCu;
label_313ffc:
    // 0x313ffc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313ffcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314000: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314004:
    // 0x314004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314008: 0x3e00008  jr          $ra
    ctx->pc = 0x314008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314008u;
        // 0x31400c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314010u;
}
