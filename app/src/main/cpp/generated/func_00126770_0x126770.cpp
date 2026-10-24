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

// Function: func_00126770
// Address: 0x126770 - 0x1267f8
void func_00126770_0x126770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00126770_0x126770");
#endif

    switch (ctx->pc) {
        case 0x126798u: goto label_126798;
        case 0x1267acu: goto label_1267ac;
        case 0x1267dcu: goto label_1267dc;
        default: break;
    }

    ctx->pc = 0x126770u;

    // 0x126770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x126778: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x126778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x12677c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12677cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126784: 0x8e24165c  lw          $a0, 0x165C($s1)
    ctx->pc = 0x126784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5724)));
    // 0x126788: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x126788u;
    {
        const bool branch_taken_0x126788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126788u;
        // 0x12678c: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126788) {
            ctx->pc = 0x12679Cu;
            goto label_12679c;
        }
    }
    ctx->pc = 0x126790u;
    // 0x126790: 0xc07dbc4  jal         func_1F6F10
    ctx->pc = 0x126790u;
    SET_GPR_U32(ctx, 31, 0x126798u);
    ctx->pc = 0x1F6F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F6F10u, 0x126790u, 0x126798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126798u;
label_126798:
    // 0x126798: 0xae20165c  sw          $zero, 0x165C($s1)
    ctx->pc = 0x126798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5724), GPR_U32(ctx, 0));
label_12679c:
    // 0x12679c: 0x8e25161c  lw          $a1, 0x161C($s1)
    ctx->pc = 0x12679cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5660)));
    // 0x1267a0: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1267a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1267a4: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1267A4u;
    SET_GPR_U32(ctx, 31, 0x1267ACu);
    ctx->pc = 0x1267A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1267A4u;
    // 0x1267a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1267A4u, 0x1267ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1267ACu;
label_1267ac:
    // 0x1267ac: 0xae20161c  sw          $zero, 0x161C($s1)
    ctx->pc = 0x1267acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5660), GPR_U32(ctx, 0));
    // 0x1267b0: 0x3c05ffbf  lui         $a1, 0xFFBF
    ctx->pc = 0x1267b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65471 << 16));
    // 0x1267b4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1267b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1267b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1267b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1267bc: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x1267bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1267c0: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x1267c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1267c4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1267c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1267c8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1267c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1267cc: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x1267ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x1267d0: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x1267d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x1267d4: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1267D4u;
    SET_GPR_U32(ctx, 31, 0x1267DCu);
    ctx->pc = 0x1267D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1267D4u;
    // 0x1267d8: 0x8e251620  lw          $a1, 0x1620($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1267D4u, 0x1267DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1267DCu;
label_1267dc:
    // 0x1267dc: 0xae201620  sw          $zero, 0x1620($s1)
    ctx->pc = 0x1267dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5664), GPR_U32(ctx, 0));
    // 0x1267e0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1267e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1267e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1267e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1267e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1267e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1267ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1267ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1267F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1267ECu;
        // 0x1267f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1267ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1267F4u;
    // 0x1267f4: 0x0  nop
    ctx->pc = 0x1267f4u;
    // NOP
    ctx->pc = 0x1267f8u;
}
