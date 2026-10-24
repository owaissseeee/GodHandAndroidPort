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

// Function: ForwardInit1A7788_315BA0
// Address: 0x315ba0 - 0x315c10
void ForwardInit1A7788_315BA0_0x315ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1A7788_315BA0_0x315ba0");
#endif

    switch (ctx->pc) {
        case 0x315bd4u: goto label_315bd4;
        case 0x315becu: goto label_315bec;
        case 0x315bf4u: goto label_315bf4;
        default: break;
    }

    ctx->pc = 0x315ba0u;

    // 0x315ba0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315ba4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315ba4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315ba8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x315bac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x315bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315bb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315bb4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315bb8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315BB8u;
    {
        const bool branch_taken_0x315bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BB8u;
        // 0x315bbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bb8) {
            ctx->pc = 0x315BFCu;
            goto label_315bfc;
        }
    }
    ctx->pc = 0x315BC0u;
    // 0x315bc0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315bc4: 0x24040630  addiu       $a0, $zero, 0x630
    ctx->pc = 0x315bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1584));
    // 0x315bc8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x315bcc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x315BCCu;
    SET_GPR_U32(ctx, 31, 0x315BD4u);
    ctx->pc = 0x315BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315BCCu;
    // 0x315bd0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x315BCCu, 0x315BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315BD4u;
label_315bd4:
    // 0x315bd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315bd8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315BD8u;
    {
        const bool branch_taken_0x315bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BD8u;
        // 0x315bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bd8) {
            ctx->pc = 0x315BFCu;
            goto label_315bfc;
        }
    }
    ctx->pc = 0x315BE0u;
    // 0x315be0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315be4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315BE4u;
    SET_GPR_U32(ctx, 31, 0x315BECu);
    ctx->pc = 0x315BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315BE4u;
    // 0x315be8: 0x24060630  addiu       $a2, $zero, 0x630 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315BE4u, 0x315BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315BECu;
label_315bec:
    // 0x315bec: 0xc069de2  jal         func_1A7788
    ctx->pc = 0x315BECu;
    SET_GPR_U32(ctx, 31, 0x315BF4u);
    ctx->pc = 0x315BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315BECu;
    // 0x315bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7788u, 0x315BECu, 0x315BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315BF4u;
label_315bf4:
    // 0x315bf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315BF4u;
    {
        const bool branch_taken_0x315bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BF4u;
        // 0x315bf8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bf4) {
            ctx->pc = 0x315C04u;
            goto label_315c04;
        }
    }
    ctx->pc = 0x315BFCu;
label_315bfc:
    // 0x315bfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315c00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315c00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315c04:
    // 0x315c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315c08: 0x3e00008  jr          $ra
    ctx->pc = 0x315C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C08u;
        // 0x315c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315C10u;
}
