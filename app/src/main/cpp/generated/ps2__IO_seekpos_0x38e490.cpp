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

// Function: _IO_seekpos
// Address: 0x38e490 - 0x38e4f0
void ps2__IO_seekpos_0x38e490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_seekpos_0x38e490");
#endif

    switch (ctx->pc) {
        case 0x38e490u: goto label_38e490;
        case 0x38e494u: goto label_38e494;
        case 0x38e498u: goto label_38e498;
        case 0x38e49cu: goto label_38e49c;
        case 0x38e4a0u: goto label_38e4a0;
        case 0x38e4a4u: goto label_38e4a4;
        case 0x38e4a8u: goto label_38e4a8;
        case 0x38e4acu: goto label_38e4ac;
        case 0x38e4b0u: goto label_38e4b0;
        case 0x38e4b4u: goto label_38e4b4;
        case 0x38e4b8u: goto label_38e4b8;
        case 0x38e4bcu: goto label_38e4bc;
        case 0x38e4c0u: goto label_38e4c0;
        case 0x38e4c4u: goto label_38e4c4;
        case 0x38e4c8u: goto label_38e4c8;
        case 0x38e4ccu: goto label_38e4cc;
        case 0x38e4d0u: goto label_38e4d0;
        case 0x38e4d4u: goto label_38e4d4;
        case 0x38e4d8u: goto label_38e4d8;
        case 0x38e4dcu: goto label_38e4dc;
        case 0x38e4e0u: goto label_38e4e0;
        case 0x38e4e4u: goto label_38e4e4;
        case 0x38e4e8u: goto label_38e4e8;
        case 0x38e4ecu: goto label_38e4ec;
        default: break;
    }

    ctx->pc = 0x38e490u;

label_38e490:
    // 0x38e490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38e490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_38e494:
    // 0x38e494: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x38e494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_38e498:
    // 0x38e498: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38e498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_38e49c:
    // 0x38e49c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38e49cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38e4a0:
    // 0x38e4a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38e4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38e4a4:
    // 0x38e4a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38e4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38e4a8:
    // 0x38e4a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38e4a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e4ac:
    // 0x38e4ac: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x38e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_38e4b0:
    // 0x38e4b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_38e4b4:
    if (ctx->pc == 0x38E4B4u) {
        ctx->pc = 0x38E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4B0u;
        // 0x38e4b4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E4B8u;
        goto label_38e4b8;
    }
    ctx->pc = 0x38E4B0u;
    {
        const bool branch_taken_0x38e4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4B0u;
        // 0x38e4b4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e4b0) {
            ctx->pc = 0x38E4C0u;
            goto label_38e4c0;
        }
    }
    ctx->pc = 0x38E4B8u;
label_38e4b8:
    // 0x38e4b8: 0xc0e30e8  jal         func_38C3A0
label_38e4bc:
    if (ctx->pc == 0x38E4BCu) {
        ctx->pc = 0x38E4C0u;
        goto label_38e4c0;
    }
    ctx->pc = 0x38E4B8u;
    SET_GPR_U32(ctx, 31, 0x38E4C0u);
    ctx->pc = 0x38C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C3A0u, 0x38E4B8u, 0x38E4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E4C0u;
label_38e4c0:
    // 0x38e4c0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38e4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38e4c4:
    // 0x38e4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38e4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38e4c8:
    // 0x38e4c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38e4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38e4cc:
    // 0x38e4cc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x38e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_38e4d0:
    // 0x38e4d0: 0x40f809  jalr        $v0
label_38e4d4:
    if (ctx->pc == 0x38E4D4u) {
        ctx->pc = 0x38E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4D0u;
        // 0x38e4d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E4D8u;
        goto label_38e4d8;
    }
    ctx->pc = 0x38E4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E4D8u);
        ctx->pc = 0x38E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4D0u;
        // 0x38e4d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E4D0u, 0x38E4D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E4D8u;
label_38e4d8:
    // 0x38e4d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38e4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38e4dc:
    // 0x38e4dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38e4dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38e4e0:
    // 0x38e4e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38e4e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38e4e4:
    // 0x38e4e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38e4e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38e4e8:
    // 0x38e4e8: 0x3e00008  jr          $ra
label_38e4ec:
    if (ctx->pc == 0x38E4ECu) {
        ctx->pc = 0x38E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4E8u;
        // 0x38e4ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E4F0u;
        goto label_fallthrough_0x38e4e8;
    }
    ctx->pc = 0x38E4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4E8u;
        // 0x38e4ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38e4e8:
    ctx->pc = 0x38E4F0u;
}
