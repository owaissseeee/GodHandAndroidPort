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

// Function: func_00312E88
// Address: 0x312e88 - 0x312f00
void func_00312E88_0x312e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00312E88_0x312e88");
#endif

    switch (ctx->pc) {
        case 0x312ea8u: goto label_312ea8;
        case 0x312ec0u: goto label_312ec0;
        case 0x312ec8u: goto label_312ec8;
        default: break;
    }

    ctx->pc = 0x312e88u;

    // 0x312e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x312e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x312e8c: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x312e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x312e90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x312e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x312e94: 0x24040360  addiu       $a0, $zero, 0x360
    ctx->pc = 0x312e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x312e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x312e9c: 0x24c64c20  addiu       $a2, $a2, 0x4C20
    ctx->pc = 0x312e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19488));
    // 0x312ea0: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x312EA0u;
    SET_GPR_U32(ctx, 31, 0x312EA8u);
    ctx->pc = 0x312EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312EA0u;
    // 0x312ea4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x312EA0u, 0x312EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312EA8u;
label_312ea8:
    // 0x312ea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x312ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312eac: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x312EACu;
    {
        const bool branch_taken_0x312eac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x312EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EACu;
        // 0x312eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312eac) {
            ctx->pc = 0x312EE8u;
            goto label_312ee8;
        }
    }
    ctx->pc = 0x312EB4u;
    // 0x312eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x312eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312eb8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x312EB8u;
    SET_GPR_U32(ctx, 31, 0x312EC0u);
    ctx->pc = 0x312EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312EB8u;
    // 0x312ebc: 0x24060360  addiu       $a2, $zero, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x312EB8u, 0x312EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312EC0u;
label_312ec0:
    // 0x312ec0: 0xc053966  jal         func_14E598
    ctx->pc = 0x312EC0u;
    SET_GPR_U32(ctx, 31, 0x312EC8u);
    ctx->pc = 0x312EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312EC0u;
    // 0x312ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E598u, 0x312EC0u, 0x312EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312EC8u;
label_312ec8:
    // 0x312ec8: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x312ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x312ecc: 0x24630ce8  addiu       $v1, $v1, 0xCE8
    ctx->pc = 0x312eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3304));
    // 0x312ed0: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x312ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x312ed4: 0xfa000310  sqc2        $vf0, 0x310($s0)
    ctx->pc = 0x312ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 784), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x312ed8: 0xa200032c  sb          $zero, 0x32C($s0)
    ctx->pc = 0x312ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 812), (uint8_t)GPR_U32(ctx, 0));
    // 0x312edc: 0xfa000340  sqc2        $vf0, 0x340($s0)
    ctx->pc = 0x312edcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 832), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x312ee0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x312EE0u;
    {
        const bool branch_taken_0x312ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EE0u;
        // 0x312ee4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ee0) {
            ctx->pc = 0x312EECu;
            goto label_312eec;
        }
    }
    ctx->pc = 0x312EE8u;
label_312ee8:
    // 0x312ee8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x312ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312eec:
    // 0x312eec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x312eecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x312EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EF4u;
        // 0x312ef8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312EFCu;
    // 0x312efc: 0x0  nop
    ctx->pc = 0x312efcu;
    // NOP
    ctx->pc = 0x312f00u;
}
