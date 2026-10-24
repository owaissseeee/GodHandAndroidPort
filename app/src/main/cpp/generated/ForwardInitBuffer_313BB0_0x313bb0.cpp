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

// Function: ForwardInitBuffer_313BB0
// Address: 0x313bb0 - 0x313c20
void ForwardInitBuffer_313BB0_0x313bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_313BB0_0x313bb0");
#endif

    switch (ctx->pc) {
        case 0x313be4u: goto label_313be4;
        case 0x313bfcu: goto label_313bfc;
        case 0x313c04u: goto label_313c04;
        default: break;
    }

    ctx->pc = 0x313bb0u;

    // 0x313bb0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313bb4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313bb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313bb8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x313bbc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x313bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x313bc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313bc4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313bc8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313BC8u;
    {
        const bool branch_taken_0x313bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BC8u;
        // 0x313bcc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313bc8) {
            ctx->pc = 0x313C0Cu;
            goto label_313c0c;
        }
    }
    ctx->pc = 0x313BD0u;
    // 0x313bd0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313bd4: 0x240409e0  addiu       $a0, $zero, 0x9E0
    ctx->pc = 0x313bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2528));
    // 0x313bd8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x313bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x313bdc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313BDCu;
    SET_GPR_U32(ctx, 31, 0x313BE4u);
    ctx->pc = 0x313BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313BDCu;
    // 0x313be0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313BDCu, 0x313BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313BE4u;
label_313be4:
    // 0x313be4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313be4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313be8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313BE8u;
    {
        const bool branch_taken_0x313be8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BE8u;
        // 0x313bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313be8) {
            ctx->pc = 0x313C0Cu;
            goto label_313c0c;
        }
    }
    ctx->pc = 0x313BF0u;
    // 0x313bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313bf4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313BF4u;
    SET_GPR_U32(ctx, 31, 0x313BFCu);
    ctx->pc = 0x313BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313BF4u;
    // 0x313bf8: 0x240609e0  addiu       $a2, $zero, 0x9E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313BF4u, 0x313BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313BFCu;
label_313bfc:
    // 0x313bfc: 0xc061e72  jal         func_1879C8
    ctx->pc = 0x313BFCu;
    SET_GPR_U32(ctx, 31, 0x313C04u);
    ctx->pc = 0x313C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313BFCu;
    // 0x313c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1879C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1879C8u, 0x313BFCu, 0x313C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313C04u;
label_313c04:
    // 0x313c04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313C04u;
    {
        const bool branch_taken_0x313c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C04u;
        // 0x313c08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313c04) {
            ctx->pc = 0x313C14u;
            goto label_313c14;
        }
    }
    ctx->pc = 0x313C0Cu;
label_313c0c:
    // 0x313c0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313c0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313c10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313c10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313c14:
    // 0x313c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313c18: 0x3e00008  jr          $ra
    ctx->pc = 0x313C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C18u;
        // 0x313c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313C20u;
}
