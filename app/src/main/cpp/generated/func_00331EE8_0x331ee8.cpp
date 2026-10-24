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

// Function: func_00331EE8
// Address: 0x331ee8 - 0x331f50
void func_00331EE8_0x331ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331EE8_0x331ee8");
#endif

    switch (ctx->pc) {
        case 0x331f04u: goto label_331f04;
        case 0x331f10u: goto label_331f10;
        case 0x331f2cu: goto label_331f2c;
        case 0x331f34u: goto label_331f34;
        default: break;
    }

    ctx->pc = 0x331ee8u;

    // 0x331ee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x331ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x331eec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x331eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331ef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x331ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331ef4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x331ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x331ef8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x331ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x331efc: 0xc0cc750  jal         func_331D40
    ctx->pc = 0x331EFCu;
    SET_GPR_U32(ctx, 31, 0x331F04u);
    ctx->pc = 0x331F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331EFCu;
    // 0x331f00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331D40u, 0x331EFCu, 0x331F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F04u;
label_331f04:
    // 0x331f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x331f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f08: 0xc0ed088  jal         func_3B4220
    ctx->pc = 0x331F08u;
    SET_GPR_U32(ctx, 31, 0x331F10u);
    ctx->pc = 0x331F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331F08u;
    // 0x331f0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4220u, 0x331F08u, 0x331F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F10u;
label_331f10:
    // 0x331f10: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x331f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x331f14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x331f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f18: 0x24844130  addiu       $a0, $a0, 0x4130
    ctx->pc = 0x331f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16688));
    // 0x331f1c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x331F1Cu;
    {
        const bool branch_taken_0x331f1c = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x331F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331F1Cu;
        // 0x331f20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331f1c) {
            ctx->pc = 0x331F2Cu;
            goto label_331f2c;
        }
    }
    ctx->pc = 0x331F24u;
    // 0x331f24: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x331F24u;
    SET_GPR_U32(ctx, 31, 0x331F2Cu);
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x331F24u, 0x331F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F2Cu;
label_331f2c:
    // 0x331f2c: 0xc0cc75e  jal         func_331D78
    ctx->pc = 0x331F2Cu;
    SET_GPR_U32(ctx, 31, 0x331F34u);
    ctx->pc = 0x331D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331D78u, 0x331F2Cu, 0x331F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331F34u;
label_331f34:
    // 0x331f34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x331f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331f38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x331f38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x331f3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x331f3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331f40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x331f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331f44: 0x3e00008  jr          $ra
    ctx->pc = 0x331F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331F44u;
        // 0x331f48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331F4Cu;
    // 0x331f4c: 0x0  nop
    ctx->pc = 0x331f4cu;
    // NOP
    ctx->pc = 0x331f50u;
}
