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

// Function: LoadDisplayText_297450
// Address: 0x297450 - 0x2974f0
void LoadDisplayText_297450_0x297450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadDisplayText_297450_0x297450");
#endif

    switch (ctx->pc) {
        case 0x297498u: goto label_297498;
        case 0x2974b8u: goto label_2974b8;
        case 0x2974d4u: goto label_2974d4;
        default: break;
    }

    ctx->pc = 0x297450u;

    // 0x297450: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x297450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x297454: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x297454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x297458: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x297458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29745c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29745cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297460: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x297460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x297464: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x297464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x297468: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x297468u;
    {
        const bool branch_taken_0x297468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297468) {
            ctx->pc = 0x29746Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297468u;
            // 0x29746c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2974E4u;
            goto label_2974e4;
        }
    }
    ctx->pc = 0x297470u;
    // 0x297470: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x297470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x297474: 0x8c627a30  lw          $v0, 0x7A30($v1)
    ctx->pc = 0x297474u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A30u));
    // 0x297478: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x297478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x29747c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29747Cu;
    {
        const bool branch_taken_0x29747c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29747Cu;
        // 0x297480: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29747c) {
            ctx->pc = 0x2974A0u;
            goto label_2974a0;
        }
    }
    ctx->pc = 0x297484u;
    // 0x297484: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x297484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x297488: 0x24a5a920  addiu       $a1, $a1, -0x56E0
    ctx->pc = 0x297488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945056));
    // 0x29748c: 0x24c6a940  addiu       $a2, $a2, -0x56C0
    ctx->pc = 0x29748cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945088));
    // 0x297490: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x297490u;
    SET_GPR_U32(ctx, 31, 0x297498u);
    ctx->pc = 0x297494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297490u;
    // 0x297494: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x297490u, 0x297498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297498u;
label_297498:
    // 0x297498: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x297498u;
    {
        const bool branch_taken_0x297498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297498u;
        // 0x29749c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297498) {
            ctx->pc = 0x2974BCu;
            goto label_2974bc;
        }
    }
    ctx->pc = 0x2974A0u;
label_2974a0:
    // 0x2974a0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2974a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2974a4: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x2974a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x2974a8: 0x24a5a958  addiu       $a1, $a1, -0x56A8
    ctx->pc = 0x2974a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945112));
    // 0x2974ac: 0x24c6a940  addiu       $a2, $a2, -0x56C0
    ctx->pc = 0x2974acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945088));
    // 0x2974b0: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2974B0u;
    SET_GPR_U32(ctx, 31, 0x2974B8u);
    ctx->pc = 0x2974B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2974B0u;
    // 0x2974b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2974B0u, 0x2974B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974B8u;
label_2974b8:
    // 0x2974b8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2974b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2974bc:
    // 0x2974bc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2974BCu;
    {
        const bool branch_taken_0x2974bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2974C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974BCu;
        // 0x2974c0: 0x3c04005f  lui         $a0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2974bc) {
            ctx->pc = 0x2974E0u;
            goto label_2974e0;
        }
    }
    ctx->pc = 0x2974C4u;
    // 0x2974c4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2974c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2974c8: 0x24848640  addiu       $a0, $a0, -0x79C0
    ctx->pc = 0x2974c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936128));
    // 0x2974cc: 0xc0afa24  jal         func_2BE890
    ctx->pc = 0x2974CCu;
    SET_GPR_U32(ctx, 31, 0x2974D4u);
    ctx->pc = 0x2974D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2974CCu;
    // 0x2974d0: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE890u, 0x2974CCu, 0x2974D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2974D4u;
label_2974d4:
    // 0x2974d4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2974d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2974d8: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x2974d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x2974dc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2974dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_2974e0:
    // 0x2974e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2974e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2974e4:
    // 0x2974e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2974e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2974e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2974E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2974ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2974E8u;
        // 0x2974ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2974E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2974F0u;
}
