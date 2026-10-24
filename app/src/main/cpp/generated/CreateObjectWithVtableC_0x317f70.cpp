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

// Function: CreateObjectWithVtableC
// Address: 0x317f70 - 0x317ff0
void CreateObjectWithVtableC_0x317f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreateObjectWithVtableC_0x317f70");
#endif

    switch (ctx->pc) {
        case 0x317fa4u: goto label_317fa4;
        case 0x317fbcu: goto label_317fbc;
        case 0x317fc4u: goto label_317fc4;
        default: break;
    }

    ctx->pc = 0x317f70u;

    // 0x317f70: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317f74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317f78: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317f78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x317f7c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x317f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317f80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317f84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317f88: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x317F88u;
    {
        const bool branch_taken_0x317f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317F88u;
        // 0x317f8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317f88) {
            ctx->pc = 0x317FD8u;
            goto label_317fd8;
        }
    }
    ctx->pc = 0x317F90u;
    // 0x317f90: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317f94: 0x240404d0  addiu       $a0, $zero, 0x4D0
    ctx->pc = 0x317f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
    // 0x317f98: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x317f9c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x317F9Cu;
    SET_GPR_U32(ctx, 31, 0x317FA4u);
    ctx->pc = 0x317FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317F9Cu;
    // 0x317fa0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x317F9Cu, 0x317FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317FA4u;
label_317fa4:
    // 0x317fa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317fa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317fa8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x317FA8u;
    {
        const bool branch_taken_0x317fa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x317FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FA8u;
        // 0x317fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317fa8) {
            ctx->pc = 0x317FD8u;
            goto label_317fd8;
        }
    }
    ctx->pc = 0x317FB0u;
    // 0x317fb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317fb4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317FB4u;
    SET_GPR_U32(ctx, 31, 0x317FBCu);
    ctx->pc = 0x317FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317FB4u;
    // 0x317fb8: 0x240604d0  addiu       $a2, $zero, 0x4D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317FB4u, 0x317FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317FBCu;
label_317fbc:
    // 0x317fbc: 0xc053a64  jal         func_14E990
    ctx->pc = 0x317FBCu;
    SET_GPR_U32(ctx, 31, 0x317FC4u);
    ctx->pc = 0x317FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317FBCu;
    // 0x317fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E990u, 0x317FBCu, 0x317FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317FC4u;
label_317fc4:
    // 0x317fc4: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x317fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x317fc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x317fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317fcc: 0x24630b28  addiu       $v1, $v1, 0xB28
    ctx->pc = 0x317fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2856));
    // 0x317fd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x317FD0u;
    {
        const bool branch_taken_0x317fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FD0u;
        // 0x317fd4: 0xae030214  sw          $v1, 0x214($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317fd0) {
            ctx->pc = 0x317FDCu;
            goto label_317fdc;
        }
    }
    ctx->pc = 0x317FD8u;
label_317fd8:
    // 0x317fd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x317fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317fdc:
    // 0x317fdc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x317FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317FE4u;
        // 0x317fe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317FECu;
    // 0x317fec: 0x0  nop
    ctx->pc = 0x317fecu;
    // NOP
    ctx->pc = 0x317ff0u;
}
