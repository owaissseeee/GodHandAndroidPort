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

// Function: func_0030B698
// Address: 0x30b698 - 0x30b728
void func_0030B698_0x30b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030B698_0x30b698");
#endif

    switch (ctx->pc) {
        case 0x30b6c0u: goto label_30b6c0;
        case 0x30b6ccu: goto label_30b6cc;
        case 0x30b6e8u: goto label_30b6e8;
        case 0x30b6f8u: goto label_30b6f8;
        case 0x30b708u: goto label_30b708;
        case 0x30b710u: goto label_30b710;
        case 0x30b718u: goto label_30b718;
        default: break;
    }

    ctx->pc = 0x30b698u;

    // 0x30b698: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x30b698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30b69c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30b69cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30b6a0: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x30b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x30b6a4: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30b6a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x30b6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x30b6ac: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x30b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x30b6b0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x30b6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30b6b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30b6b8: 0xc0c683a  jal         func_31A0E8
    ctx->pc = 0x30B6B8u;
    SET_GPR_U32(ctx, 31, 0x30B6C0u);
    ctx->pc = 0x30B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B6B8u;
    // 0x30b6bc: 0xac627a24  sw          $v0, 0x7A24($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 31268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A0E8u, 0x30B6B8u, 0x30B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B6C0u;
label_30b6c0:
    // 0x30b6c0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30b6c4: 0xc0b0ca0  jal         func_2C3280
    ctx->pc = 0x30B6C4u;
    SET_GPR_U32(ctx, 31, 0x30B6CCu);
    ctx->pc = 0x30B6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B6C4u;
    // 0x30b6c8: 0x8c442f84  lw          $a0, 0x2F84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3280u, 0x30B6C4u, 0x30B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B6CCu;
label_30b6cc:
    // 0x30b6cc: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x30b6ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x30b6d0: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x30b6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30b6d4: 0x26102c00  addiu       $s0, $s0, 0x2C00
    ctx->pc = 0x30b6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11264));
    // 0x30b6d8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x30b6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30b6dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b6e0: 0xc0b543a  jal         func_2D50E8
    ctx->pc = 0x30B6E0u;
    SET_GPR_U32(ctx, 31, 0x30B6E8u);
    ctx->pc = 0x30B6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B6E0u;
    // 0x30b6e4: 0x24063000  addiu       $a2, $zero, 0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D50E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D50E8u, 0x30B6E0u, 0x30B6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B6E8u;
label_30b6e8:
    // 0x30b6e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30b6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b6f0: 0xc0b5470  jal         func_2D51C0
    ctx->pc = 0x30B6F0u;
    SET_GPR_U32(ctx, 31, 0x30B6F8u);
    ctx->pc = 0x30B6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B6F0u;
    // 0x30b6f4: 0x34068000  ori         $a2, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D51C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D51C0u, 0x30B6F0u, 0x30B6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B6F8u;
label_30b6f8:
    // 0x30b6f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30b6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b6fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30b6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30b700: 0xc0b5470  jal         func_2D51C0
    ctx->pc = 0x30B700u;
    SET_GPR_U32(ctx, 31, 0x30B708u);
    ctx->pc = 0x30B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B700u;
    // 0x30b704: 0x34068000  ori         $a2, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D51C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D51C0u, 0x30B700u, 0x30B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B708u;
label_30b708:
    // 0x30b708: 0xc0b547c  jal         func_2D51F0
    ctx->pc = 0x30B708u;
    SET_GPR_U32(ctx, 31, 0x30B710u);
    ctx->pc = 0x30B70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B708u;
    // 0x30b70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D51F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D51F0u, 0x30B708u, 0x30B710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B710u;
label_30b710:
    // 0x30b710: 0xc0b84d2  jal         func_2E1348
    ctx->pc = 0x30B710u;
    SET_GPR_U32(ctx, 31, 0x30B718u);
    ctx->pc = 0x2E1348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1348u, 0x30B710u, 0x30B718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B718u;
label_30b718:
    // 0x30b718: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x30b718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b71c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b720: 0x3e00008  jr          $ra
    ctx->pc = 0x30B720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B720u;
        // 0x30b724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B728u;
}
