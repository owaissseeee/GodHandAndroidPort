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

// Function: func_0034B588
// Address: 0x34b588 - 0x34b618
void func_0034B588_0x34b588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034B588_0x34b588");
#endif

    switch (ctx->pc) {
        case 0x34b5a0u: goto label_34b5a0;
        case 0x34b5dcu: goto label_34b5dc;
        case 0x34b5e8u: goto label_34b5e8;
        default: break;
    }

    ctx->pc = 0x34b588u;

    // 0x34b588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b58c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34b58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34b590: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34b590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34b594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34b598: 0xc0d2d86  jal         func_34B618
    ctx->pc = 0x34B598u;
    SET_GPR_U32(ctx, 31, 0x34B5A0u);
    ctx->pc = 0x34B59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B598u;
    // 0x34b59c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34B618u, 0x34B598u, 0x34B5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B5A0u;
label_34b5a0:
    // 0x34b5a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x34b5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b5a4: 0x50c00017  beql        $a2, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x34B5A4u;
    {
        const bool branch_taken_0x34b5a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b5a4) {
            ctx->pc = 0x34B5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B5A4u;
            // 0x34b5a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B604u;
            goto label_34b604;
        }
    }
    ctx->pc = 0x34B5ACu;
    // 0x34b5ac: 0x8e102004  lw          $s0, 0x2004($s0)
    ctx->pc = 0x34b5acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8196)));
    // 0x34b5b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34b5b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b5b4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x34b5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x34b5b8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x34B5B8u;
    {
        const bool branch_taken_0x34b5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B5B8u;
        // 0x34b5bc: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b5b8) {
            ctx->pc = 0x34B600u;
            goto label_34b600;
        }
    }
    ctx->pc = 0x34B5C0u;
    // 0x34b5c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x34b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34b5c4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34B5C4u;
    {
        const bool branch_taken_0x34b5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B5C4u;
        // 0x34b5c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b5c4) {
            ctx->pc = 0x34B600u;
            goto label_34b600;
        }
    }
    ctx->pc = 0x34B5CCu;
    // 0x34b5cc: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x34b5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x34b5d0: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x34b5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x34b5d4: 0xc0ee758  jal         func_3B9D60
    ctx->pc = 0x34B5D4u;
    SET_GPR_U32(ctx, 31, 0x34B5DCu);
    ctx->pc = 0x34B5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B5D4u;
    // 0x34b5d8: 0x8cc60010  lw          $a2, 0x10($a2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9D60u, 0x34B5D4u, 0x34B5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B5DCu;
label_34b5dc:
    // 0x34b5dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34b5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b5e0: 0xc0cad86  jal         func_32B618
    ctx->pc = 0x34B5E0u;
    SET_GPR_U32(ctx, 31, 0x34B5E8u);
    ctx->pc = 0x34B5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B5E0u;
    // 0x34b5e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B618u, 0x34B5E0u, 0x34B5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B5E8u;
label_34b5e8:
    // 0x34b5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b5ec: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x34b5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
    // 0x34b5f0: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x34b5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x34b5f4: 0x2463a5e0  addiu       $v1, $v1, -0x5A20
    ctx->pc = 0x34b5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944224));
    // 0x34b5f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34b5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b5fc: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x34b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
label_34b600:
    // 0x34b600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34b600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34b604:
    // 0x34b604: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34b604u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34b608: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b60c: 0x3e00008  jr          $ra
    ctx->pc = 0x34B60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B60Cu;
        // 0x34b610: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B614u;
    // 0x34b614: 0x0  nop
    ctx->pc = 0x34b614u;
    // NOP
    ctx->pc = 0x34b618u;
}
