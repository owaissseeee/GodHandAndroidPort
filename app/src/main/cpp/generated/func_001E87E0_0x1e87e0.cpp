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

// Function: func_001E87E0
// Address: 0x1e87e0 - 0x1e8830
void func_001E87E0_0x1e87e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E87E0_0x1e87e0");
#endif

    switch (ctx->pc) {
        case 0x1e8810u: goto label_1e8810;
        default: break;
    }

    ctx->pc = 0x1e87e0u;

    // 0x1e87e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e87e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e87e4: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x1e87e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1e87e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e87e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e87ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e87ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e87f0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E87F0u;
    {
        const bool branch_taken_0x1e87f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E87F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E87F0u;
        // 0x1e87f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e87f0) {
            ctx->pc = 0x1E881Cu;
            goto label_1e881c;
        }
    }
    ctx->pc = 0x1E87F8u;
    // 0x1e87f8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E87F8u;
    {
        const bool branch_taken_0x1e87f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E87FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E87F8u;
        // 0x1e87fc: 0x2ce20016  sltiu       $v0, $a3, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e87f8) {
            ctx->pc = 0x1E881Cu;
            goto label_1e881c;
        }
    }
    ctx->pc = 0x1E8800u;
    // 0x1e8800: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E8800u;
    {
        const bool branch_taken_0x1e8800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8800) {
            ctx->pc = 0x1E8804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E8800u;
            // 0x1e8804: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8820u;
            goto label_1e8820;
        }
    }
    ctx->pc = 0x1E8808u;
    // 0x1e8808: 0xc07a37c  jal         func_1E8DF0
    ctx->pc = 0x1E8808u;
    SET_GPR_U32(ctx, 31, 0x1E8810u);
    ctx->pc = 0x1E8DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8DF0u, 0x1E8808u, 0x1E8810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8810u;
label_1e8810:
    // 0x1e8810: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e8810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e8814: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e8814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e8818: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e8818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e881c:
    // 0x1e881c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e881cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e8820:
    // 0x1e8820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e8820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8824: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8824u;
        // 0x1e8828: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E882Cu;
    // 0x1e882c: 0x0  nop
    ctx->pc = 0x1e882cu;
    // NOP
    ctx->pc = 0x1e8830u;
}
