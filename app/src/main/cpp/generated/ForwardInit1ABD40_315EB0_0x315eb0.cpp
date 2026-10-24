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

// Function: ForwardInit1ABD40_315EB0
// Address: 0x315eb0 - 0x315f20
void ForwardInit1ABD40_315EB0_0x315eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1ABD40_315EB0_0x315eb0");
#endif

    switch (ctx->pc) {
        case 0x315ee4u: goto label_315ee4;
        case 0x315efcu: goto label_315efc;
        case 0x315f04u: goto label_315f04;
        default: break;
    }

    ctx->pc = 0x315eb0u;

    // 0x315eb0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315eb4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315eb8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x315ebc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x315ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315ec0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315ec4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315ec8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315EC8u;
    {
        const bool branch_taken_0x315ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315EC8u;
        // 0x315ecc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ec8) {
            ctx->pc = 0x315F0Cu;
            goto label_315f0c;
        }
    }
    ctx->pc = 0x315ED0u;
    // 0x315ed0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315ed4: 0x240407a0  addiu       $a0, $zero, 0x7A0
    ctx->pc = 0x315ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1952));
    // 0x315ed8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x315edc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x315EDCu;
    SET_GPR_U32(ctx, 31, 0x315EE4u);
    ctx->pc = 0x315EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315EDCu;
    // 0x315ee0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x315EDCu, 0x315EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315EE4u;
label_315ee4:
    // 0x315ee4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ee8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315EE8u;
    {
        const bool branch_taken_0x315ee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315EE8u;
        // 0x315eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ee8) {
            ctx->pc = 0x315F0Cu;
            goto label_315f0c;
        }
    }
    ctx->pc = 0x315EF0u;
    // 0x315ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ef4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315EF4u;
    SET_GPR_U32(ctx, 31, 0x315EFCu);
    ctx->pc = 0x315EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315EF4u;
    // 0x315ef8: 0x240607a0  addiu       $a2, $zero, 0x7A0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315EF4u, 0x315EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315EFCu;
label_315efc:
    // 0x315efc: 0xc06af50  jal         func_1ABD40
    ctx->pc = 0x315EFCu;
    SET_GPR_U32(ctx, 31, 0x315F04u);
    ctx->pc = 0x315F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315EFCu;
    // 0x315f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD40u, 0x315EFCu, 0x315F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315F04u;
label_315f04:
    // 0x315f04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315F04u;
    {
        const bool branch_taken_0x315f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F04u;
        // 0x315f08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f04) {
            ctx->pc = 0x315F14u;
            goto label_315f14;
        }
    }
    ctx->pc = 0x315F0Cu;
label_315f0c:
    // 0x315f0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315f14:
    // 0x315f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315f18: 0x3e00008  jr          $ra
    ctx->pc = 0x315F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F18u;
        // 0x315f1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315F20u;
}
