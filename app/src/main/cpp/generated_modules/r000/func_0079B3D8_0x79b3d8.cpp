#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: func_0079B3D8
// Address: 0x79b3d8 - 0x79b4e8
void func_0079B3D8_0x79b3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B3D8_0x79b3d8");
#endif

    switch (ctx->pc) {
        case 0x79b40cu: goto label_79b40c;
        case 0x79b434u: goto label_79b434;
        case 0x79b43cu: goto label_79b43c;
        case 0x79b464u: goto label_79b464;
        case 0x79b470u: goto label_79b470;
        case 0x79b47cu: goto label_79b47c;
        case 0x79b488u: goto label_79b488;
        case 0x79b4acu: goto label_79b4ac;
        case 0x79b4b4u: goto label_79b4b4;
        case 0x79b4c0u: goto label_79b4c0;
        case 0x79b4ccu: goto label_79b4cc;
        default: break;
    }

    ctx->pc = 0x79b3d8u;

    // 0x79b3d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79b3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79b3dc: 0x2405101c  addiu       $a1, $zero, 0x101C
    ctx->pc = 0x79b3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4124));
    // 0x79b3e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79b3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79b3e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b3e8: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79b3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79b3ec: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79b3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79b3f0: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b3f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b3f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b3f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79b3fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b3fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b404: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79B404u;
    SET_GPR_U32(ctx, 31, 0x79B40Cu);
    ctx->pc = 0x79B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B404u;
    // 0x79b408: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79B404u, 0x79B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B40Cu;
label_79b40c:
    // 0x79b40c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79b410: 0x8c4323a4  lw          $v1, 0x23A4($v0)
    ctx->pc = 0x79b410u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x79b414: 0x84640bec  lh          $a0, 0xBEC($v1)
    ctx->pc = 0x79b414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 3052)));
    // 0x79b418: 0x14800029  bnez        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x79B418u;
    {
        const bool branch_taken_0x79b418 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B418u;
        // 0x79b41c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b418) {
            ctx->pc = 0x79B4C0u;
            goto label_79b4c0;
        }
    }
    ctx->pc = 0x79B420u;
    // 0x79b420: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x79b420u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x79b424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b428: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x79b428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x79b42c: 0xc07f0e2  jal         func_1FC388
    ctx->pc = 0x79B42Cu;
    SET_GPR_U32(ctx, 31, 0x79B434u);
    ctx->pc = 0x79B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B42Cu;
    // 0x79b430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC388u, 0x79B42Cu, 0x79B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B434u;
label_79b434:
    // 0x79b434: 0xc07f0f4  jal         func_1FC3D0
    ctx->pc = 0x79B434u;
    SET_GPR_U32(ctx, 31, 0x79B43Cu);
    ctx->pc = 0x79B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B434u;
    // 0x79b438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3D0u, 0x79B434u, 0x79B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B43Cu;
label_79b43c:
    // 0x79b43c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79b43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79b440: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x79b440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x79b444: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x79b444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956776)));
    // 0x79b448: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x79b448u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x79b44c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79b44cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79b450: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x79b450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x79b454: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79b454u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x79b458: 0xac821a10  sw          $v0, 0x1A10($a0)
    ctx->pc = 0x79b458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6672), GPR_U32(ctx, 2));
    // 0x79b45c: 0xc0b0c46  jal         func_2C3118
    ctx->pc = 0x79B45Cu;
    SET_GPR_U32(ctx, 31, 0x79B464u);
    ctx->pc = 0x79B460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B45Cu;
    // 0x79b460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x79B45Cu, 0x79B464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B464u;
label_79b464:
    // 0x79b464: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79b464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b468: 0xc0b0a02  jal         func_2C2808
    ctx->pc = 0x79B468u;
    SET_GPR_U32(ctx, 31, 0x79B470u);
    ctx->pc = 0x79B46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B468u;
    // 0x79b46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2808u, 0x79B468u, 0x79B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B470u;
label_79b470:
    // 0x79b470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b474: 0xc0b0c46  jal         func_2C3118
    ctx->pc = 0x79B474u;
    SET_GPR_U32(ctx, 31, 0x79B47Cu);
    ctx->pc = 0x79B478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B474u;
    // 0x79b478: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3118u, 0x79B474u, 0x79B47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B47Cu;
label_79b47c:
    // 0x79b47c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79b47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b480: 0xc0b0a02  jal         func_2C2808
    ctx->pc = 0x79B480u;
    SET_GPR_U32(ctx, 31, 0x79B488u);
    ctx->pc = 0x79B484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B480u;
    // 0x79b484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2808u, 0x79B480u, 0x79B488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B488u;
label_79b488:
    // 0x79b488: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x79b488u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x79b48c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b490: 0x26103ec0  addiu       $s0, $s0, 0x3EC0
    ctx->pc = 0x79b490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16064));
    // 0x79b494: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79b498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b49c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x79b49cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b4a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79b4a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b4a4: 0xc080132  jal         func_2004C8
    ctx->pc = 0x79B4A4u;
    SET_GPR_U32(ctx, 31, 0x79B4ACu);
    ctx->pc = 0x79B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4A4u;
    // 0x79b4a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2004C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2004C8u, 0x79B4A4u, 0x79B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4ACu;
label_79b4ac:
    // 0x79b4ac: 0xc07ffe0  jal         func_1FFF80
    ctx->pc = 0x79B4ACu;
    SET_GPR_U32(ctx, 31, 0x79B4B4u);
    ctx->pc = 0x79B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4ACu;
    // 0x79b4b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF80u, 0x79B4ACu, 0x79B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4B4u;
label_79b4b4:
    // 0x79b4b4: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79b4b8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B4B8u;
    SET_GPR_U32(ctx, 31, 0x79B4C0u);
    ctx->pc = 0x79B4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4B8u;
    // 0x79b4bc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B4B8u, 0x79B4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4C0u;
label_79b4c0:
    // 0x79b4c0: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b4c4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B4C4u;
    SET_GPR_U32(ctx, 31, 0x79B4CCu);
    ctx->pc = 0x79B4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B4C4u;
    // 0x79b4c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B4C4u, 0x79B4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B4CCu;
label_79b4cc:
    // 0x79b4cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79b4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b4d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79b4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b4d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79b4d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b4d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x79B4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B4DCu;
        // 0x79b4e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B4E4u;
    // 0x79b4e4: 0x0  nop
    ctx->pc = 0x79b4e4u;
    // NOP
    ctx->pc = 0x79b4e8u;
}
} // namespace gh_r000
