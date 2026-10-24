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

// Function: GetOrInitGlobal785798_1C3BE8
// Address: 0x1c3be8 - 0x1c3c58
void GetOrInitGlobal785798_1C3BE8_0x1c3be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitGlobal785798_1C3BE8_0x1c3be8");
#endif

    switch (ctx->pc) {
        case 0x1c3c0cu: goto label_1c3c0c;
        case 0x1c3c24u: goto label_1c3c24;
        default: break;
    }

    ctx->pc = 0x1c3be8u;

    // 0x1c3be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c3be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c3bec: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1c3becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1c3bf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c3bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c3bf4: 0x8c625798  lw          $v0, 0x5798($v1)
    ctx->pc = 0x1c3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785798u));
    // 0x1c3bf8: 0x24705798  addiu       $s0, $v1, 0x5798
    ctx->pc = 0x1c3bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22424));
    // 0x1c3bfc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3BFCu;
    {
        const bool branch_taken_0x1c3bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BFCu;
        // 0x1c3c00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bfc) {
            ctx->pc = 0x1C3C24u;
            goto label_1c3c24;
        }
    }
    ctx->pc = 0x1C3C04u;
    // 0x1c3c04: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1C3C04u;
    SET_GPR_U32(ctx, 31, 0x1C3C0Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1C3C04u, 0x1C3C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C0Cu;
label_1c3c0c:
    // 0x1c3c0c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1c3c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1c3c10: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1c3c10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1c3c14: 0x24a59d50  addiu       $a1, $a1, -0x62B0
    ctx->pc = 0x1c3c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942032));
    // 0x1c3c18: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1c3c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1c3c1c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1C3C1Cu;
    SET_GPR_U32(ctx, 31, 0x1C3C24u);
    ctx->pc = 0x1C3C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3C1Cu;
    // 0x1c3c20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1C3C1Cu, 0x1C3C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3C24u;
label_1c3c24:
    // 0x1c3c24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c3c24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3c28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3c2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c3c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3c30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C30u;
        // 0x1c3c34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3C38u;
    // 0x1c3c38: 0xac850608  sw          $a1, 0x608($a0)
    ctx->pc = 0x1c3c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1544), GPR_U32(ctx, 5));
    // 0x1c3c3c: 0x0  nop
    ctx->pc = 0x1c3c3cu;
    // NOP
    // 0x1c3c40: 0xac8705f0  sw          $a3, 0x5F0($a0)
    ctx->pc = 0x1c3c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 7));
    // 0x1c3c44: 0x0  nop
    ctx->pc = 0x1c3c44u;
    // NOP
    // 0x1c3c48: 0xac8005f0  sw          $zero, 0x5F0($a0)
    ctx->pc = 0x1c3c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1520), GPR_U32(ctx, 0));
    // 0x1c3c4c: 0x0  nop
    ctx->pc = 0x1c3c4cu;
    // NOP
    // 0x1c3c50: 0xa48505f4  sh          $a1, 0x5F4($a0)
    ctx->pc = 0x1c3c50u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1524), (uint16_t)GPR_U32(ctx, 5));
    // 0x1c3c54: 0x0  nop
    ctx->pc = 0x1c3c54u;
    // NOP
    ctx->pc = 0x1c3c58u;
}
