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

// Function: AllocInitObj1835A0_317C70
// Address: 0x317c70 - 0x317ce0
void AllocInitObj1835A0_317C70_0x317c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocInitObj1835A0_317C70_0x317c70");
#endif

    switch (ctx->pc) {
        case 0x317ca4u: goto label_317ca4;
        case 0x317cbcu: goto label_317cbc;
        case 0x317cc4u: goto label_317cc4;
        default: break;
    }

    ctx->pc = 0x317c70u;

    // 0x317c70: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x317c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x317c74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x317c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x317c78: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x317c78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x317c7c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x317c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x317c80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x317c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x317c84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x317c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x317c88: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x317C88u;
    {
        const bool branch_taken_0x317c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317C88u;
        // 0x317c8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317c88) {
            ctx->pc = 0x317CCCu;
            goto label_317ccc;
        }
    }
    ctx->pc = 0x317C90u;
    // 0x317c90: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x317c90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x317c94: 0x24040680  addiu       $a0, $zero, 0x680
    ctx->pc = 0x317c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x317c98: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x317c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x317c9c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x317C9Cu;
    SET_GPR_U32(ctx, 31, 0x317CA4u);
    ctx->pc = 0x317CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317C9Cu;
    // 0x317ca0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x317C9Cu, 0x317CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317CA4u;
label_317ca4:
    // 0x317ca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x317ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317ca8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x317CA8u;
    {
        const bool branch_taken_0x317ca8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x317CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CA8u;
        // 0x317cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ca8) {
            ctx->pc = 0x317CCCu;
            goto label_317ccc;
        }
    }
    ctx->pc = 0x317CB0u;
    // 0x317cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x317cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317cb4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x317CB4u;
    SET_GPR_U32(ctx, 31, 0x317CBCu);
    ctx->pc = 0x317CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317CB4u;
    // 0x317cb8: 0x24060680  addiu       $a2, $zero, 0x680 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x317CB4u, 0x317CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317CBCu;
label_317cbc:
    // 0x317cbc: 0xc060d68  jal         func_1835A0
    ctx->pc = 0x317CBCu;
    SET_GPR_U32(ctx, 31, 0x317CC4u);
    ctx->pc = 0x317CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317CBCu;
    // 0x317cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1835A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1835A0u, 0x317CBCu, 0x317CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317CC4u;
label_317cc4:
    // 0x317cc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317CC4u;
    {
        const bool branch_taken_0x317cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CC4u;
        // 0x317cc8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317cc4) {
            ctx->pc = 0x317CD4u;
            goto label_317cd4;
        }
    }
    ctx->pc = 0x317CCCu;
label_317ccc:
    // 0x317ccc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x317cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317cd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317cd4:
    // 0x317cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x317CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317CD8u;
        // 0x317cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x317CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317CE0u;
}
