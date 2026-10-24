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

// Function: func_00331FA8
// Address: 0x331fa8 - 0x332020
void func_00331FA8_0x331fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331FA8_0x331fa8");
#endif

    switch (ctx->pc) {
        case 0x331fccu: goto label_331fcc;
        case 0x331fdcu: goto label_331fdc;
        case 0x331ff8u: goto label_331ff8;
        case 0x332000u: goto label_332000;
        default: break;
    }

    ctx->pc = 0x331fa8u;

    // 0x331fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x331fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x331fac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x331facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331fb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x331fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331fb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x331fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x331fb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x331fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331fbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x331fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x331fc0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x331fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x331fc4: 0xc0cc750  jal         func_331D40
    ctx->pc = 0x331FC4u;
    SET_GPR_U32(ctx, 31, 0x331FCCu);
    ctx->pc = 0x331FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331FC4u;
    // 0x331fc8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331D40u, 0x331FC4u, 0x331FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331FCCu;
label_331fcc:
    // 0x331fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x331fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331fd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x331fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331fd4: 0xc0ed21a  jal         func_3B4868
    ctx->pc = 0x331FD4u;
    SET_GPR_U32(ctx, 31, 0x331FDCu);
    ctx->pc = 0x331FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331FD4u;
    // 0x331fd8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4868u, 0x331FD4u, 0x331FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331FDCu;
label_331fdc:
    // 0x331fdc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x331fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x331fe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x331fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331fe4: 0x24844170  addiu       $a0, $a0, 0x4170
    ctx->pc = 0x331fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16752));
    // 0x331fe8: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x331FE8u;
    {
        const bool branch_taken_0x331fe8 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x331FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331FE8u;
        // 0x331fec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331fe8) {
            ctx->pc = 0x331FF8u;
            goto label_331ff8;
        }
    }
    ctx->pc = 0x331FF0u;
    // 0x331ff0: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x331FF0u;
    SET_GPR_U32(ctx, 31, 0x331FF8u);
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x331FF0u, 0x331FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331FF8u;
label_331ff8:
    // 0x331ff8: 0xc0cc75e  jal         func_331D78
    ctx->pc = 0x331FF8u;
    SET_GPR_U32(ctx, 31, 0x332000u);
    ctx->pc = 0x331D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331D78u, 0x331FF8u, 0x332000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332000u;
label_332000:
    // 0x332000: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x332000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332004: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x332004u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x332008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x332008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33200c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33200cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332010: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x332010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x332014: 0x3e00008  jr          $ra
    ctx->pc = 0x332014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332014u;
        // 0x332018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33201Cu;
    // 0x33201c: 0x0  nop
    ctx->pc = 0x33201cu;
    // NOP
    ctx->pc = 0x332020u;
}
