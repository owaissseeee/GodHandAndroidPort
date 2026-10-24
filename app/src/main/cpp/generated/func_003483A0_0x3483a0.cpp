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

// Function: func_003483A0
// Address: 0x3483a0 - 0x3483f8
void func_003483A0_0x3483a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003483A0_0x3483a0");
#endif

    switch (ctx->pc) {
        case 0x3483a0u: goto label_3483a0;
        case 0x3483a4u: goto label_3483a4;
        case 0x3483a8u: goto label_3483a8;
        case 0x3483acu: goto label_3483ac;
        case 0x3483b0u: goto label_3483b0;
        case 0x3483b4u: goto label_3483b4;
        case 0x3483b8u: goto label_3483b8;
        case 0x3483bcu: goto label_3483bc;
        case 0x3483c0u: goto label_3483c0;
        case 0x3483c4u: goto label_3483c4;
        case 0x3483c8u: goto label_3483c8;
        case 0x3483ccu: goto label_3483cc;
        case 0x3483d0u: goto label_3483d0;
        case 0x3483d4u: goto label_3483d4;
        case 0x3483d8u: goto label_3483d8;
        case 0x3483dcu: goto label_3483dc;
        case 0x3483e0u: goto label_3483e0;
        case 0x3483e4u: goto label_3483e4;
        case 0x3483e8u: goto label_3483e8;
        case 0x3483ecu: goto label_3483ec;
        case 0x3483f0u: goto label_3483f0;
        case 0x3483f4u: goto label_3483f4;
        default: break;
    }

    ctx->pc = 0x3483a0u;

label_3483a0:
    // 0x3483a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3483a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3483a4:
    // 0x3483a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3483a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3483a8:
    // 0x3483a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3483a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3483ac:
    // 0x3483ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3483acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3483b0:
    // 0x3483b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3483b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3483b4:
    // 0x3483b4: 0xc0d224e  jal         func_348938
label_3483b8:
    if (ctx->pc == 0x3483B8u) {
        ctx->pc = 0x3483B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483B4u;
        // 0x3483b8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3483BCu;
        goto label_3483bc;
    }
    ctx->pc = 0x3483B4u;
    SET_GPR_U32(ctx, 31, 0x3483BCu);
    ctx->pc = 0x3483B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3483B4u;
    // 0x3483b8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348938u, 0x3483B4u, 0x3483BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3483BCu;
label_3483bc:
    // 0x3483bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3483c0:
    if (ctx->pc == 0x3483C0u) {
        ctx->pc = 0x3483C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483BCu;
        // 0x3483c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3483C4u;
        goto label_3483c4;
    }
    ctx->pc = 0x3483BCu;
    {
        const bool branch_taken_0x3483bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3483C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483BCu;
        // 0x3483c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3483bc) {
            ctx->pc = 0x3483DCu;
            goto label_3483dc;
        }
    }
    ctx->pc = 0x3483C4u;
label_3483c4:
    // 0x3483c4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3483c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3483c8:
    // 0x3483c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3483cc:
    if (ctx->pc == 0x3483CCu) {
        ctx->pc = 0x3483CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483C8u;
        // 0x3483cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3483D0u;
        goto label_3483d0;
    }
    ctx->pc = 0x3483C8u;
    {
        const bool branch_taken_0x3483c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3483CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483C8u;
        // 0x3483cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3483c8) {
            ctx->pc = 0x3483DCu;
            goto label_3483dc;
        }
    }
    ctx->pc = 0x3483D0u;
label_3483d0:
    // 0x3483d0: 0x40f809  jalr        $v0
label_3483d4:
    if (ctx->pc == 0x3483D4u) {
        ctx->pc = 0x3483D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483D0u;
        // 0x3483d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3483D8u;
        goto label_3483d8;
    }
    ctx->pc = 0x3483D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3483D8u);
        ctx->pc = 0x3483D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483D0u;
        // 0x3483d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3483D0u, 0x3483D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3483D8u;
label_3483d8:
    // 0x3483d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3483d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3483dc:
    // 0x3483dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3483dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3483e0:
    // 0x3483e0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3483e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3483e4:
    // 0x3483e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3483e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3483e8:
    // 0x3483e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3483e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3483ec:
    // 0x3483ec: 0x3e00008  jr          $ra
label_3483f0:
    if (ctx->pc == 0x3483F0u) {
        ctx->pc = 0x3483F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483ECu;
        // 0x3483f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3483F4u;
        goto label_3483f4;
    }
    ctx->pc = 0x3483ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3483F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3483ECu;
        // 0x3483f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3483ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3483F4u;
label_3483f4:
    // 0x3483f4: 0x0  nop
    ctx->pc = 0x3483f4u;
    // NOP
    ctx->pc = 0x3483f8u;
}
