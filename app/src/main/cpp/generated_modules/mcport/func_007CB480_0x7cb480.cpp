#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: func_007CB480
// Address: 0x7cb480 - 0x7cb4e8
void func_007CB480_0x7cb480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CB480_0x7cb480");
#endif

    switch (ctx->pc) {
        case 0x7cb4bcu: goto label_7cb4bc;
        default: break;
    }

    ctx->pc = 0x7cb480u;

    // 0x7cb480: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cb480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cb484: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7cb484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7cb488: 0x8c621948  lw          $v0, 0x1948($v1)
    ctx->pc = 0x7cb488u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D1948u));
    // 0x7cb48c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7cb48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7cb490: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x7cb490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x7cb494: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7CB494u;
    {
        const bool branch_taken_0x7cb494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB494u;
        // 0x7cb498: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb494) {
            ctx->pc = 0x7CB4CCu;
            goto label_7cb4cc;
        }
    }
    ctx->pc = 0x7CB49Cu;
    // 0x7cb49c: 0x3c11007d  lui         $s1, 0x7D
    ctx->pc = 0x7cb49cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)125 << 16));
    // 0x7cb4a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7cb4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cb4a4: 0x26301938  addiu       $s0, $s1, 0x1938
    ctx->pc = 0x7cb4a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6456));
    // 0x7cb4a8: 0xac621948  sw          $v0, 0x1948($v1)
    ctx->pc = 0x7cb4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6472), GPR_U32(ctx, 2));
    // 0x7cb4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cb4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cb4b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7cb4b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cb4b4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7CB4B4u;
    SET_GPR_U32(ctx, 31, 0x7CB4BCu);
    ctx->pc = 0x7CB4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CB4B4u;
    // 0x7cb4b8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7CB4B4u, 0x7CB4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CB4BCu;
label_7cb4bc:
    // 0x7cb4bc: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cb4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cb4c0: 0x24631950  addiu       $v1, $v1, 0x1950
    ctx->pc = 0x7cb4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6480));
    // 0x7cb4c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7CB4C4u;
    {
        const bool branch_taken_0x7cb4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB4C4u;
        // 0x7cb4c8: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cb4c4) {
            ctx->pc = 0x7CB4D0u;
            goto label_7cb4d0;
        }
    }
    ctx->pc = 0x7CB4CCu;
label_7cb4cc:
    // 0x7cb4cc: 0x3c11007d  lui         $s1, 0x7D
    ctx->pc = 0x7cb4ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)125 << 16));
label_7cb4d0:
    // 0x7cb4d0: 0x26221938  addiu       $v0, $s1, 0x1938
    ctx->pc = 0x7cb4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 6456));
    // 0x7cb4d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7cb4d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cb4d8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x7cb4d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cb4dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x7cb4dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cb4e0: 0x3e00008  jr          $ra
    ctx->pc = 0x7CB4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CB4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CB4E0u;
        // 0x7cb4e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CB4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CB4E8u;
}
} // namespace gh_mcport
