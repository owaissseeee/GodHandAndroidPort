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

// Function: func_00381EA0
// Address: 0x381ea0 - 0x381f18
void func_00381EA0_0x381ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00381EA0_0x381ea0");
#endif

    switch (ctx->pc) {
        case 0x381ee8u: goto label_381ee8;
        case 0x381ef8u: goto label_381ef8;
        case 0x381f08u: goto label_381f08;
        default: break;
    }

    ctx->pc = 0x381ea0u;

    // 0x381ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x381ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x381ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x381ea8: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x381ea8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x381eac: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x381eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x381eb0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x381EB0u;
    {
        const bool branch_taken_0x381eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381eb0) {
            ctx->pc = 0x381EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381EB0u;
            // 0x381eb4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381ED0u;
            goto label_381ed0;
        }
    }
    ctx->pc = 0x381EB8u;
    // 0x381eb8: 0x54c0000d  bnel        $a2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x381EB8u;
    {
        const bool branch_taken_0x381eb8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x381eb8) {
            ctx->pc = 0x381EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381EB8u;
            // 0x381ebc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381EF0u;
            goto label_381ef0;
        }
    }
    ctx->pc = 0x381EC0u;
    // 0x381ec0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x381EC0u;
    {
        const bool branch_taken_0x381ec0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x381EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381EC0u;
        // 0x381ec4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381ec0) {
            ctx->pc = 0x381EE0u;
            goto label_381ee0;
        }
    }
    ctx->pc = 0x381EC8u;
    // 0x381ec8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x381EC8u;
    {
        const bool branch_taken_0x381ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x381ec8) {
            ctx->pc = 0x381F0Cu;
            goto label_381f0c;
        }
    }
    ctx->pc = 0x381ED0u;
label_381ed0:
    // 0x381ed0: 0x10c2000b  beq         $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x381ED0u;
    {
        const bool branch_taken_0x381ed0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x381ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381ED0u;
        // 0x381ed4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381ed0) {
            ctx->pc = 0x381F00u;
            goto label_381f00;
        }
    }
    ctx->pc = 0x381ED8u;
    // 0x381ed8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x381ED8u;
    {
        const bool branch_taken_0x381ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x381ed8) {
            ctx->pc = 0x381F0Cu;
            goto label_381f0c;
        }
    }
    ctx->pc = 0x381EE0u;
label_381ee0:
    // 0x381ee0: 0xc0e07c6  jal         func_381F18
    ctx->pc = 0x381EE0u;
    SET_GPR_U32(ctx, 31, 0x381EE8u);
    ctx->pc = 0x381F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381F18u, 0x381EE0u, 0x381EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381EE8u;
label_381ee8:
    // 0x381ee8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x381EE8u;
    {
        const bool branch_taken_0x381ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381EE8u;
        // 0x381eec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381ee8) {
            ctx->pc = 0x381F0Cu;
            goto label_381f0c;
        }
    }
    ctx->pc = 0x381EF0u;
label_381ef0:
    // 0x381ef0: 0xc0e08b4  jal         func_3822D0
    ctx->pc = 0x381EF0u;
    SET_GPR_U32(ctx, 31, 0x381EF8u);
    ctx->pc = 0x381EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381EF0u;
    // 0x381ef4: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3822D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3822D0u, 0x381EF0u, 0x381EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381EF8u;
label_381ef8:
    // 0x381ef8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x381EF8u;
    {
        const bool branch_taken_0x381ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381EF8u;
        // 0x381efc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381ef8) {
            ctx->pc = 0x381F0Cu;
            goto label_381f0c;
        }
    }
    ctx->pc = 0x381F00u;
label_381f00:
    // 0x381f00: 0xc0e0998  jal         func_382660
    ctx->pc = 0x381F00u;
    SET_GPR_U32(ctx, 31, 0x381F08u);
    ctx->pc = 0x382660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382660u, 0x381F00u, 0x381F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381F08u;
label_381f08:
    // 0x381f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_381f0c:
    // 0x381f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x381F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381F0Cu;
        // 0x381f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381F14u;
    // 0x381f14: 0x0  nop
    ctx->pc = 0x381f14u;
    // NOP
    ctx->pc = 0x381f18u;
}
