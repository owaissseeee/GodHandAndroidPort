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

// Function: pl00_reset
// Address: 0x12c418 - 0x12c4f0
void pl00_reset_0x12c418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl00_reset_0x12c418");
#endif

    switch (ctx->pc) {
        case 0x12c434u: goto label_12c434;
        case 0x12c43cu: goto label_12c43c;
        case 0x12c478u: goto label_12c478;
        case 0x12c480u: goto label_12c480;
        case 0x12c488u: goto label_12c488;
        case 0x12c494u: goto label_12c494;
        case 0x12c49cu: goto label_12c49c;
        case 0x12c4b0u: goto label_12c4b0;
        case 0x12c4b8u: goto label_12c4b8;
        case 0x12c4dcu: goto label_12c4dc;
        default: break;
    }

    ctx->pc = 0x12c418u;

    // 0x12c418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c41c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c420: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12c420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12c424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12c424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c42c: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x12C42Cu;
    SET_GPR_U32(ctx, 31, 0x12C434u);
    ctx->pc = 0x12C430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C42Cu;
    // 0x12c430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x12C42Cu, 0x12C434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C434u;
label_12c434:
    // 0x12c434: 0xc0499dc  jal         func_126770
    ctx->pc = 0x12C434u;
    SET_GPR_U32(ctx, 31, 0x12C43Cu);
    ctx->pc = 0x12C438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C434u;
    // 0x12c438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126770u, 0x12C434u, 0x12C43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C43Cu;
label_12c43c:
    // 0x12c43c: 0x8e060304  lw          $a2, 0x304($s0)
    ctx->pc = 0x12c43cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x12c440: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12c440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c444: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x12c444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c448: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x12c448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c44c: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x12c44cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c450: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12c450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c454: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x12c454u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12c458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c45c: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x12c45cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c460: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x12c460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12c464: 0x8cc50028  lw          $a1, 0x28($a2)
    ctx->pc = 0x12c464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x12c468: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x12c468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x12c46c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x12c46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x12c470: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x12C470u;
    SET_GPR_U32(ctx, 31, 0x12C478u);
    ctx->pc = 0x12C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C470u;
    // 0x12c474: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x12C470u, 0x12C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C478u;
label_12c478:
    // 0x12c478: 0xc055f06  jal         func_157C18
    ctx->pc = 0x12C478u;
    SET_GPR_U32(ctx, 31, 0x12C480u);
    ctx->pc = 0x12C47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C478u;
    // 0x12c47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x12C478u, 0x12C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C480u;
label_12c480:
    // 0x12c480: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x12C480u;
    SET_GPR_U32(ctx, 31, 0x12C488u);
    ctx->pc = 0x12C484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C480u;
    // 0x12c484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x12C480u, 0x12C488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C488u;
label_12c488:
    // 0x12c488: 0x26040448  addiu       $a0, $s0, 0x448
    ctx->pc = 0x12c488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1096));
    // 0x12c48c: 0xc054a88  jal         func_152A20
    ctx->pc = 0x12C48Cu;
    SET_GPR_U32(ctx, 31, 0x12C494u);
    ctx->pc = 0x12C490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C48Cu;
    // 0x12c490: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x12C48Cu, 0x12C494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C494u;
label_12c494:
    // 0x12c494: 0xc05280e  jal         func_14A038
    ctx->pc = 0x12C494u;
    SET_GPR_U32(ctx, 31, 0x12C49Cu);
    ctx->pc = 0x12C498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C494u;
    // 0x12c498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x12C494u, 0x12C49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C49Cu;
label_12c49c:
    // 0x12c49c: 0x8e0406a8  lw          $a0, 0x6A8($s0)
    ctx->pc = 0x12c49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
    // 0x12c4a0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C4A0u;
    {
        const bool branch_taken_0x12c4a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c4a0) {
            ctx->pc = 0x12C4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C4A0u;
            // 0x12c4a4: 0x8e0215f4  lw          $v0, 0x15F4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C4BCu;
            goto label_12c4bc;
        }
    }
    ctx->pc = 0x12C4A8u;
    // 0x12c4a8: 0xc073cea  jal         func_1CF3A8
    ctx->pc = 0x12C4A8u;
    SET_GPR_U32(ctx, 31, 0x12C4B0u);
    ctx->pc = 0x1CF3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF3A8u, 0x12C4A8u, 0x12C4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4B0u;
label_12c4b0:
    // 0x12c4b0: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x12C4B0u;
    SET_GPR_U32(ctx, 31, 0x12C4B8u);
    ctx->pc = 0x12C4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4B0u;
    // 0x12c4b4: 0x8e0406a8  lw          $a0, 0x6A8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x12C4B0u, 0x12C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4B8u;
label_12c4b8:
    // 0x12c4b8: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x12c4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
label_12c4bc:
    // 0x12c4bc: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x12c4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x12c4c0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x12c4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x12c4c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12c4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12c4cc: 0x2484b000  addiu       $a0, $a0, -0x5000
    ctx->pc = 0x12c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
    // 0x12c4d0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x12c4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x12c4d4: 0xc0aa732  jal         func_2A9CC8
    ctx->pc = 0x12C4D4u;
    SET_GPR_U32(ctx, 31, 0x12C4DCu);
    ctx->pc = 0x12C4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4D4u;
    // 0x12c4d8: 0xae0215f4  sw          $v0, 0x15F4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9CC8u, 0x12C4D4u, 0x12C4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4DCu;
label_12c4dc:
    // 0x12c4dc: 0xae000640  sw          $zero, 0x640($s0)
    ctx->pc = 0x12c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1600), GPR_U32(ctx, 0));
    // 0x12c4e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12c4e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c4e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x12C4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C4E8u;
        // 0x12c4ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C4F0u;
}
