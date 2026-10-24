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

// Function: func_003491D0
// Address: 0x3491d0 - 0x349238
void func_003491D0_0x3491d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003491D0_0x3491d0");
#endif

    switch (ctx->pc) {
        case 0x3491f4u: goto label_3491f4;
        case 0x349214u: goto label_349214;
        default: break;
    }

    ctx->pc = 0x3491d0u;

    // 0x3491d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3491d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3491d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3491d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3491d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3491d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3491dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3491dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3491e0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x3491e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3491e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3491E4u;
    {
        const bool branch_taken_0x3491e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3491E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3491E4u;
        // 0x3491e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3491e4) {
            ctx->pc = 0x349200u;
            goto label_349200;
        }
    }
    ctx->pc = 0x3491ECu;
    // 0x3491ec: 0xc0d2690  jal         func_349A40
    ctx->pc = 0x3491ECu;
    SET_GPR_U32(ctx, 31, 0x3491F4u);
    ctx->pc = 0x349A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349A40u, 0x3491ECu, 0x3491F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3491F4u;
label_3491f4:
    // 0x3491f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3491F4u;
    {
        const bool branch_taken_0x3491f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3491F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3491F4u;
        // 0x3491f8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3491f4) {
            ctx->pc = 0x349200u;
            goto label_349200;
        }
    }
    ctx->pc = 0x3491FCu;
    // 0x3491fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3491fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_349200:
    // 0x349200: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x349200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x349204: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x349204u;
    {
        const bool branch_taken_0x349204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x349204) {
            ctx->pc = 0x349208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349204u;
            // 0x349208: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34922Cu;
            goto label_34922c;
        }
    }
    ctx->pc = 0x34920Cu;
    // 0x34920c: 0xc0d1f7e  jal         func_347DF8
    ctx->pc = 0x34920Cu;
    SET_GPR_U32(ctx, 31, 0x349214u);
    ctx->pc = 0x347DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347DF8u, 0x34920Cu, 0x349214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349214u;
label_349214:
    // 0x349214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x349214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349218: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x349218u;
    {
        const bool branch_taken_0x349218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x349218) {
            ctx->pc = 0x34921Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349218u;
            // 0x34921c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34922Cu;
            goto label_34922c;
        }
    }
    ctx->pc = 0x349220u;
    // 0x349220: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x349220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x349224: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x349224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x349228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34922c:
    // 0x34922c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34922cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x349230: 0x3e00008  jr          $ra
    ctx->pc = 0x349230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349230u;
        // 0x349234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349238u;
}
