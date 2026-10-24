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

// Function: func_0031D2F8
// Address: 0x31d2f8 - 0x31d3d0
void func_0031D2F8_0x31d2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031D2F8_0x31d2f8");
#endif

    switch (ctx->pc) {
        case 0x31d344u: goto label_31d344;
        case 0x31d350u: goto label_31d350;
        case 0x31d374u: goto label_31d374;
        case 0x31d398u: goto label_31d398;
        case 0x31d3a8u: goto label_31d3a8;
        case 0x31d3b4u: goto label_31d3b4;
        default: break;
    }

    ctx->pc = 0x31d2f8u;

    // 0x31d2f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x31d2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x31d2fc: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x31d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x31d300: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31d300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31d304: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x31d304u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31d308: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x31d308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x31d30c: 0x244258a8  addiu       $v0, $v0, 0x58A8
    ctx->pc = 0x31d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22696));
    // 0x31d310: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x31d310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x31d314: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x31d314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x31d318: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31d318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31d31c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x31d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31d320: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x31d320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x31d324: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31d324u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d328: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x31d328u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31d32c: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x31D32Cu;
    {
        const bool branch_taken_0x31d32c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D32Cu;
        // 0x31d330: 0x8c520004  lw          $s2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d32c) {
            ctx->pc = 0x31D3B4u;
            goto label_31d3b4;
        }
    }
    ctx->pc = 0x31D334u;
    // 0x31d334: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x31D334u;
    {
        const bool branch_taken_0x31d334 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D334u;
        // 0x31d338: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d334) {
            ctx->pc = 0x31D3B8u;
            goto label_31d3b8;
        }
    }
    ctx->pc = 0x31D33Cu;
    // 0x31d33c: 0xc0524c4  jal         func_149310
    ctx->pc = 0x31D33Cu;
    SET_GPR_U32(ctx, 31, 0x31D344u);
    ctx->pc = 0x149310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149310u, 0x31D33Cu, 0x31D344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D344u;
label_31d344:
    // 0x31d344: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d348: 0xc07e290  jal         func_1F8A40
    ctx->pc = 0x31D348u;
    SET_GPR_U32(ctx, 31, 0x31D350u);
    ctx->pc = 0x31D34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D348u;
    // 0x31d34c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A40u, 0x31D348u, 0x31D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D350u;
label_31d350:
    // 0x31d350: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x31d350u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x31d354: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x31d354u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d35c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31d35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d360: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31d360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d364: 0x34e71000  ori         $a3, $a3, 0x1000
    ctx->pc = 0x31d364u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4096);
    // 0x31d368: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x31d368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d36c: 0xc052108  jal         func_148420
    ctx->pc = 0x31D36Cu;
    SET_GPR_U32(ctx, 31, 0x31D374u);
    ctx->pc = 0x31D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D36Cu;
    // 0x31d370: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148420u, 0x31D36Cu, 0x31D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D374u;
label_31d374:
    // 0x31d374: 0x8e6a0288  lw          $t2, 0x288($s3)
    ctx->pc = 0x31d374u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 648)));
    // 0x31d378: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x31d378u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x31d37c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31d37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d380: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x31d380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31d384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d388: 0x34e71000  ori         $a3, $a3, 0x1000
    ctx->pc = 0x31d388u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)4096);
    // 0x31d38c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x31d38cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d390: 0xc052168  jal         func_1485A0
    ctx->pc = 0x31D390u;
    SET_GPR_U32(ctx, 31, 0x31D398u);
    ctx->pc = 0x31D394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D390u;
    // 0x31d394: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1485A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1485A0u, 0x31D390u, 0x31D398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D398u;
label_31d398:
    // 0x31d398: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31d398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d39c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31d39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d3a0: 0xc052d90  jal         func_14B640
    ctx->pc = 0x31D3A0u;
    SET_GPR_U32(ctx, 31, 0x31D3A8u);
    ctx->pc = 0x31D3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D3A0u;
    // 0x31d3a4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B640u, 0x31D3A0u, 0x31D3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D3A8u;
label_31d3a8:
    // 0x31d3a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31d3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d3ac: 0xc07e298  jal         func_1F8A60
    ctx->pc = 0x31D3ACu;
    SET_GPR_U32(ctx, 31, 0x31D3B4u);
    ctx->pc = 0x31D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D3ACu;
    // 0x31d3b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A60u, 0x31D3ACu, 0x31D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D3B4u;
label_31d3b4:
    // 0x31d3b4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x31d3b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31d3b8:
    // 0x31d3b8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x31d3b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31d3bc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x31d3bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31d3c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31d3c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31d3c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31d3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31d3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x31D3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D3C8u;
        // 0x31d3cc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D3C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D3D0u;
}
