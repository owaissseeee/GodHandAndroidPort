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

// Function: ForwardInitBuffer_314FD0
// Address: 0x314fd0 - 0x315040
void ForwardInitBuffer_314FD0_0x314fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314FD0_0x314fd0");
#endif

    switch (ctx->pc) {
        case 0x315004u: goto label_315004;
        case 0x31501cu: goto label_31501c;
        case 0x315024u: goto label_315024;
        default: break;
    }

    ctx->pc = 0x314fd0u;

    // 0x314fd0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314fd4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314fd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314fd8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x314fdc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x314fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314fe0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314fe4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314fe8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314FE8u;
    {
        const bool branch_taken_0x314fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314FE8u;
        // 0x314fec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314fe8) {
            ctx->pc = 0x31502Cu;
            goto label_31502c;
        }
    }
    ctx->pc = 0x314FF0u;
    // 0x314ff0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314ff4: 0x240408f0  addiu       $a0, $zero, 0x8F0
    ctx->pc = 0x314ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2288));
    // 0x314ff8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x314ffc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x314FFCu;
    SET_GPR_U32(ctx, 31, 0x315004u);
    ctx->pc = 0x315000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314FFCu;
    // 0x315000: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x314FFCu, 0x315004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315004u;
label_315004:
    // 0x315004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315008: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315008u;
    {
        const bool branch_taken_0x315008 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315008u;
        // 0x31500c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315008) {
            ctx->pc = 0x31502Cu;
            goto label_31502c;
        }
    }
    ctx->pc = 0x315010u;
    // 0x315010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315014: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315014u;
    SET_GPR_U32(ctx, 31, 0x31501Cu);
    ctx->pc = 0x315018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315014u;
    // 0x315018: 0x240608f0  addiu       $a2, $zero, 0x8F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315014u, 0x31501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31501Cu;
label_31501c:
    // 0x31501c: 0xc0674d0  jal         func_19D340
    ctx->pc = 0x31501Cu;
    SET_GPR_U32(ctx, 31, 0x315024u);
    ctx->pc = 0x315020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31501Cu;
    // 0x315020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D340u, 0x31501Cu, 0x315024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315024u;
label_315024:
    // 0x315024: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315024u;
    {
        const bool branch_taken_0x315024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315024u;
        // 0x315028: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315024) {
            ctx->pc = 0x315034u;
            goto label_315034;
        }
    }
    ctx->pc = 0x31502Cu;
label_31502c:
    // 0x31502c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31502cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315030: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315034:
    // 0x315034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315038: 0x3e00008  jr          $ra
    ctx->pc = 0x315038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315038u;
        // 0x31503c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315040u;
}
