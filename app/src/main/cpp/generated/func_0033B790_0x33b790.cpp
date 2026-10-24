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

// Function: func_0033B790
// Address: 0x33b790 - 0x33b810
void func_0033B790_0x33b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033B790_0x33b790");
#endif

    switch (ctx->pc) {
        case 0x33b790u: goto label_33b790;
        case 0x33b794u: goto label_33b794;
        case 0x33b798u: goto label_33b798;
        case 0x33b79cu: goto label_33b79c;
        case 0x33b7a0u: goto label_33b7a0;
        case 0x33b7a4u: goto label_33b7a4;
        case 0x33b7a8u: goto label_33b7a8;
        case 0x33b7acu: goto label_33b7ac;
        case 0x33b7b0u: goto label_33b7b0;
        case 0x33b7b4u: goto label_33b7b4;
        case 0x33b7b8u: goto label_33b7b8;
        case 0x33b7bcu: goto label_33b7bc;
        case 0x33b7c0u: goto label_33b7c0;
        case 0x33b7c4u: goto label_33b7c4;
        case 0x33b7c8u: goto label_33b7c8;
        case 0x33b7ccu: goto label_33b7cc;
        case 0x33b7d0u: goto label_33b7d0;
        case 0x33b7d4u: goto label_33b7d4;
        case 0x33b7d8u: goto label_33b7d8;
        case 0x33b7dcu: goto label_33b7dc;
        case 0x33b7e0u: goto label_33b7e0;
        case 0x33b7e4u: goto label_33b7e4;
        case 0x33b7e8u: goto label_33b7e8;
        case 0x33b7ecu: goto label_33b7ec;
        case 0x33b7f0u: goto label_33b7f0;
        case 0x33b7f4u: goto label_33b7f4;
        case 0x33b7f8u: goto label_33b7f8;
        case 0x33b7fcu: goto label_33b7fc;
        case 0x33b800u: goto label_33b800;
        case 0x33b804u: goto label_33b804;
        case 0x33b808u: goto label_33b808;
        case 0x33b80cu: goto label_33b80c;
        default: break;
    }

    ctx->pc = 0x33b790u;

label_33b790:
    // 0x33b790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33b794:
    // 0x33b794: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33b794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33b798:
    // 0x33b798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33b798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33b79c:
    // 0x33b79c: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_33b7a0:
    if (ctx->pc == 0x33B7A0u) {
        ctx->pc = 0x33B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B79Cu;
        // 0x33b7a0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B7A4u;
        goto label_33b7a4;
    }
    ctx->pc = 0x33B79Cu;
    {
        const bool branch_taken_0x33b79c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B79Cu;
        // 0x33b7a0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b79c) {
            ctx->pc = 0x33B7C8u;
            goto label_33b7c8;
        }
    }
    ctx->pc = 0x33B7A4u;
label_33b7a4:
    // 0x33b7a4: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
label_33b7a8:
    // 0x33b7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33b7ac:
    // 0x33b7ac: 0x244288b0  addiu       $v0, $v0, -0x7750
    ctx->pc = 0x33b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936752));
label_33b7b0:
    // 0x33b7b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33b7b4:
    // 0x33b7b4: 0x60f809  jalr        $v1
label_33b7b8:
    if (ctx->pc == 0x33B7B8u) {
        ctx->pc = 0x33B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7B4u;
        // 0x33b7b8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B7BCu;
        goto label_33b7bc;
    }
    ctx->pc = 0x33B7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33B7BCu);
        ctx->pc = 0x33B7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7B4u;
        // 0x33b7b8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B7B4u, 0x33B7BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B7BCu;
label_33b7bc:
    // 0x33b7bc: 0x1000000f  b           . + 4 + (0xF << 2)
label_33b7c0:
    if (ctx->pc == 0x33B7C0u) {
        ctx->pc = 0x33B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7BCu;
        // 0x33b7c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B7C4u;
        goto label_33b7c4;
    }
    ctx->pc = 0x33B7BCu;
    {
        const bool branch_taken_0x33b7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7BCu;
        // 0x33b7c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b7bc) {
            ctx->pc = 0x33B7FCu;
            goto label_33b7fc;
        }
    }
    ctx->pc = 0x33B7C4u;
label_33b7c4:
    // 0x33b7c4: 0x0  nop
    ctx->pc = 0x33b7c4u;
    // NOP
label_33b7c8:
    // 0x33b7c8: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x33b7c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_33b7cc:
    // 0x33b7cc: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x33b7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_33b7d0:
    // 0x33b7d0: 0x26109990  addiu       $s0, $s0, -0x6670
    ctx->pc = 0x33b7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941072));
label_33b7d4:
    // 0x33b7d4: 0xc0e9768  jal         func_3A5DA0
label_33b7d8:
    if (ctx->pc == 0x33B7D8u) {
        ctx->pc = 0x33B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7D4u;
        // 0x33b7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B7DCu;
        goto label_33b7dc;
    }
    ctx->pc = 0x33B7D4u;
    SET_GPR_U32(ctx, 31, 0x33B7DCu);
    ctx->pc = 0x33B7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B7D4u;
    // 0x33b7d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x33B7D4u, 0x33B7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B7DCu;
label_33b7dc:
    // 0x33b7dc: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
label_33b7e0:
    // 0x33b7e0: 0x244288b0  addiu       $v0, $v0, -0x7750
    ctx->pc = 0x33b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936752));
label_33b7e4:
    // 0x33b7e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33b7e8:
    // 0x33b7e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_33b7ec:
    if (ctx->pc == 0x33B7ECu) {
        ctx->pc = 0x33B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7E8u;
        // 0x33b7ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B7F0u;
        goto label_33b7f0;
    }
    ctx->pc = 0x33B7E8u;
    {
        const bool branch_taken_0x33b7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7E8u;
        // 0x33b7ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b7e8) {
            ctx->pc = 0x33B7F8u;
            goto label_33b7f8;
        }
    }
    ctx->pc = 0x33B7F0u;
label_33b7f0:
    // 0x33b7f0: 0x60f809  jalr        $v1
label_33b7f4:
    if (ctx->pc == 0x33B7F4u) {
        ctx->pc = 0x33B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7F0u;
        // 0x33b7f4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B7F8u;
        goto label_33b7f8;
    }
    ctx->pc = 0x33B7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33B7F8u);
        ctx->pc = 0x33B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B7F0u;
        // 0x33b7f4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B7F0u, 0x33B7F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B7F8u;
label_33b7f8:
    // 0x33b7f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33b7f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33b7fc:
    // 0x33b7fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33b7fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33b800:
    // 0x33b800: 0x3e00008  jr          $ra
label_33b804:
    if (ctx->pc == 0x33B804u) {
        ctx->pc = 0x33B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B800u;
        // 0x33b804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B808u;
        goto label_33b808;
    }
    ctx->pc = 0x33B800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B800u;
        // 0x33b804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B808u;
label_33b808:
    // 0x33b808: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x33b808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_33b80c:
    // 0x33b80c: 0x0  nop
    ctx->pc = 0x33b80cu;
    // NOP
    ctx->pc = 0x33b810u;
}
