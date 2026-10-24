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

// Function: ForwardInitBuffer_313AD0
// Address: 0x313ad0 - 0x313b40
void ForwardInitBuffer_313AD0_0x313ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_313AD0_0x313ad0");
#endif

    switch (ctx->pc) {
        case 0x313b04u: goto label_313b04;
        case 0x313b1cu: goto label_313b1c;
        case 0x313b24u: goto label_313b24;
        default: break;
    }

    ctx->pc = 0x313ad0u;

    // 0x313ad0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313ad4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313ad8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x313adc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x313adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x313ae0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313ae4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313ae8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313AE8u;
    {
        const bool branch_taken_0x313ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313AE8u;
        // 0x313aec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ae8) {
            ctx->pc = 0x313B2Cu;
            goto label_313b2c;
        }
    }
    ctx->pc = 0x313AF0u;
    // 0x313af0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313af0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313af4: 0x240408a0  addiu       $a0, $zero, 0x8A0
    ctx->pc = 0x313af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2208));
    // 0x313af8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x313af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x313afc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313AFCu;
    SET_GPR_U32(ctx, 31, 0x313B04u);
    ctx->pc = 0x313B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313AFCu;
    // 0x313b00: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313AFCu, 0x313B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313B04u;
label_313b04:
    // 0x313b04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313b08: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313B08u;
    {
        const bool branch_taken_0x313b08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B08u;
        // 0x313b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b08) {
            ctx->pc = 0x313B2Cu;
            goto label_313b2c;
        }
    }
    ctx->pc = 0x313B10u;
    // 0x313b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313b14: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313B14u;
    SET_GPR_U32(ctx, 31, 0x313B1Cu);
    ctx->pc = 0x313B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313B14u;
    // 0x313b18: 0x240608a0  addiu       $a2, $zero, 0x8A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313B14u, 0x313B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313B1Cu;
label_313b1c:
    // 0x313b1c: 0xc061a66  jal         func_186998
    ctx->pc = 0x313B1Cu;
    SET_GPR_U32(ctx, 31, 0x313B24u);
    ctx->pc = 0x313B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313B1Cu;
    // 0x313b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186998u, 0x313B1Cu, 0x313B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313B24u;
label_313b24:
    // 0x313b24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313B24u;
    {
        const bool branch_taken_0x313b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B24u;
        // 0x313b28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b24) {
            ctx->pc = 0x313B34u;
            goto label_313b34;
        }
    }
    ctx->pc = 0x313B2Cu;
label_313b2c:
    // 0x313b2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313b30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313b30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313b34:
    // 0x313b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313b38: 0x3e00008  jr          $ra
    ctx->pc = 0x313B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B38u;
        // 0x313b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313B40u;
}
