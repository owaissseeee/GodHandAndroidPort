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

// Function: cMovieTrack_start
// Address: 0x2d3ba8 - 0x2d3c78
void cMovieTrack_start_0x2d3ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMovieTrack_start_0x2d3ba8");
#endif

    switch (ctx->pc) {
        case 0x2d3bf4u: goto label_2d3bf4;
        case 0x2d3c00u: goto label_2d3c00;
        case 0x2d3c10u: goto label_2d3c10;
        case 0x2d3c2cu: goto label_2d3c2c;
        case 0x2d3c48u: goto label_2d3c48;
        case 0x2d3c58u: goto label_2d3c58;
        default: break;
    }

    ctx->pc = 0x2d3ba8u;

    // 0x2d3ba8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d3ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d3bac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d3bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d3bb0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d3bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d3bb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d3bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d3bbc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d3bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3bc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3bc8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3BC8u;
    {
        const bool branch_taken_0x2d3bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BC8u;
        // 0x2d3bcc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3bc8) {
            ctx->pc = 0x2D3BD4u;
            goto label_2d3bd4;
        }
    }
    ctx->pc = 0x2D3BD0u;
    // 0x2d3bd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d3bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d3bd4:
    // 0x2d3bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3bd8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3BD8u;
    {
        const bool branch_taken_0x2d3bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d3bd8) {
            ctx->pc = 0x2D3BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3BD8u;
            // 0x2d3bdc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3BE8u;
            goto label_2d3be8;
        }
    }
    ctx->pc = 0x2D3BE0u;
    // 0x2d3be0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2D3BE0u;
    {
        const bool branch_taken_0x2d3be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3BE0u;
        // 0x2d3be4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3be0) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3BE8u;
label_2d3be8:
    // 0x2d3be8: 0x26110064  addiu       $s1, $s0, 0x64
    ctx->pc = 0x2d3be8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2d3bec: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x2D3BECu;
    SET_GPR_U32(ctx, 31, 0x2D3BF4u);
    ctx->pc = 0x2D3BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3BECu;
    // 0x2d3bf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x2D3BECu, 0x2D3BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3BF4u;
label_2d3bf4:
    // 0x2d3bf4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d3bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3bf8: 0xc0b4f1e  jal         func_2D3C78
    ctx->pc = 0x2D3BF8u;
    SET_GPR_U32(ctx, 31, 0x2D3C00u);
    ctx->pc = 0x2D3BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3BF8u;
    // 0x2d3bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3C78u, 0x2D3BF8u, 0x2D3C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C00u;
label_2d3c00:
    // 0x2d3c00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3C00u;
    {
        const bool branch_taken_0x2d3c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C00u;
        // 0x2d3c04: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c00) {
            ctx->pc = 0x2D3C18u;
            goto label_2d3c18;
        }
    }
    ctx->pc = 0x2D3C08u;
    // 0x2d3c08: 0xc0b4dc4  jal         func_2D3710
    ctx->pc = 0x2D3C08u;
    SET_GPR_U32(ctx, 31, 0x2D3C10u);
    ctx->pc = 0x2D3C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C08u;
    // 0x2d3c0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3710u, 0x2D3C08u, 0x2D3C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C10u;
label_2d3c10:
    // 0x2d3c10: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2D3C10u;
    {
        const bool branch_taken_0x2d3c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C10u;
        // 0x2d3c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c10) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3C18u;
label_2d3c18:
    // 0x2d3c18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d3c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d3c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c20: 0x24840d40  addiu       $a0, $a0, 0xD40
    ctx->pc = 0x2d3c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    // 0x2d3c24: 0xc07fe70  jal         func_1FF9C0
    ctx->pc = 0x2D3C24u;
    SET_GPR_U32(ctx, 31, 0x2D3C2Cu);
    ctx->pc = 0x2D3C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C24u;
    // 0x2d3c28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9C0u, 0x2D3C24u, 0x2D3C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C2Cu;
label_2d3c2c:
    // 0x2d3c2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2d3c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3c30: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2d3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2d3c34: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2d3c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2d3c38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3C38u;
    {
        const bool branch_taken_0x2d3c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C38u;
        // 0x2d3c3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c38) {
            ctx->pc = 0x2D3C50u;
            goto label_2d3c50;
        }
    }
    ctx->pc = 0x2D3C40u;
    // 0x2d3c40: 0xc0d1ef0  jal         func_347BC0
    ctx->pc = 0x2D3C40u;
    SET_GPR_U32(ctx, 31, 0x2D3C48u);
    ctx->pc = 0x2D3C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C40u;
    // 0x2d3c44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347BC0u, 0x2D3C40u, 0x2D3C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C48u;
label_2d3c48:
    // 0x2d3c48: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3C48u;
    {
        const bool branch_taken_0x2d3c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C48u;
        // 0x2d3c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3c48) {
            ctx->pc = 0x2D3C5Cu;
            goto label_2d3c5c;
        }
    }
    ctx->pc = 0x2D3C50u;
label_2d3c50:
    // 0x2d3c50: 0xc0d181e  jal         func_346078
    ctx->pc = 0x2D3C50u;
    SET_GPR_U32(ctx, 31, 0x2D3C58u);
    ctx->pc = 0x2D3C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3C50u;
    // 0x2d3c54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346078u, 0x2D3C50u, 0x2D3C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3C58u;
label_2d3c58:
    // 0x2d3c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d3c5c:
    // 0x2d3c5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d3c5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3c60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d3c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3c64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d3c64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3C6Cu;
        // 0x2d3c70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3C74u;
    // 0x2d3c74: 0x0  nop
    ctx->pc = 0x2d3c74u;
    // NOP
    ctx->pc = 0x2d3c78u;
}
