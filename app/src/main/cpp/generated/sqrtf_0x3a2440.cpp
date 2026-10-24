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

// Function: sqrtf
// Address: 0x3a2440 - 0x3a2558
void sqrtf_0x3a2440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sqrtf_0x3a2440");
#endif

    switch (ctx->pc) {
        case 0x3a2464u: goto label_3a2464;
        case 0x3a247cu: goto label_3a247c;
        case 0x3a24b4u: goto label_3a24b4;
        case 0x3a24f0u: goto label_3a24f0;
        case 0x3a2500u: goto label_3a2500;
        case 0x3a251cu: goto label_3a251c;
        case 0x3a252cu: goto label_3a252c;
        default: break;
    }

    ctx->pc = 0x3a2440u;

    // 0x3a2440: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a2440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3a2444: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3a2444u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3a2448: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3a2448u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3a244c: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x3a244cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x3a2450: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3a2450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3a2454: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x3a2454u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3a2458: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a2458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3a245c: 0xc0e8ed2  jal         func_3A3B48
    ctx->pc = 0x3A245Cu;
    SET_GPR_U32(ctx, 31, 0x3A2464u);
    ctx->pc = 0x3A2460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A245Cu;
    // 0x3a2460: 0x3c110046  lui         $s1, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3B48u, 0x3A245Cu, 0x3A2464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2464u;
label_3a2464:
    // 0x3a2464: 0x8e30f024  lw          $s0, -0xFDC($s1)
    ctx->pc = 0x3a2464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963236)));
    // 0x3a2468: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a2468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a246c: 0x12020031  beq         $s0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3A246Cu;
    {
        const bool branch_taken_0x3a246c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A2470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A246Cu;
        // 0x3a2470: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a246c) {
            ctx->pc = 0x3A2534u;
            goto label_3a2534;
        }
    }
    ctx->pc = 0x3A2474u;
    // 0x3a2474: 0xc0e9380  jal         func_3A4E00
    ctx->pc = 0x3A2474u;
    SET_GPR_U32(ctx, 31, 0x3A247Cu);
    ctx->pc = 0x3A2478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2474u;
    // 0x3a2478: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E00u, 0x3A2474u, 0x3A247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A247Cu;
label_3a247c:
    // 0x3a247c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3A247Cu;
    {
        const bool branch_taken_0x3a247c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A247Cu;
        // 0x3a2480: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a247c) {
            ctx->pc = 0x3A2538u;
            goto label_3a2538;
        }
    }
    ctx->pc = 0x3A2484u;
    // 0x3a2484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a2484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2488: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3a2488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a248c: 0x0  nop
    ctx->pc = 0x3a248cu;
    // NOP
    // 0x3a2490: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3A2490u;
    {
        const bool branch_taken_0x3a2490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A2494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2490u;
        // 0x3a2494: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2490) {
            ctx->pc = 0x3A2534u;
            goto label_3a2534;
        }
    }
    ctx->pc = 0x3A2498u;
    // 0x3a2498: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a249c: 0x2442eab8  addiu       $v0, $v0, -0x1548
    ctx->pc = 0x3a249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961848));
    // 0x3a24a0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3a24a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3a24a4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3a24a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3a24a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a24a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a24ac: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A24ACu;
    SET_GPR_U32(ctx, 31, 0x3A24B4u);
    ctx->pc = 0x3A24B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A24ACu;
    // 0x3a24b0: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A24ACu, 0x3A24B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A24B4u;
label_3a24b4:
    // 0x3a24b4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3a24b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3a24b8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A24B8u;
    {
        const bool branch_taken_0x3a24b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24B8u;
        // 0x3a24bc: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a24b8) {
            ctx->pc = 0x3A24CCu;
            goto label_3a24cc;
        }
    }
    ctx->pc = 0x3A24C0u;
    // 0x3a24c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a24c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a24c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A24C4u;
    {
        const bool branch_taken_0x3a24c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A24C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24C4u;
        // 0x3a24c8: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a24c4) {
            ctx->pc = 0x3A24D8u;
            goto label_3a24d8;
        }
    }
    ctx->pc = 0x3A24CCu;
label_3a24cc:
    // 0x3a24cc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a24d0: 0xdc43eac0  ld          $v1, -0x1540($v0)
    ctx->pc = 0x3a24d0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x45EAC0u));
    // 0x3a24d4: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x3a24d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_3a24d8:
    // 0x3a24d8: 0x8e23f024  lw          $v1, -0xFDC($s1)
    ctx->pc = 0x3a24d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963236)));
    // 0x3a24dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a24e0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A24E0u;
    {
        const bool branch_taken_0x3a24e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a24e0) {
            ctx->pc = 0x3A24F8u;
            goto label_3a24f8;
        }
    }
    ctx->pc = 0x3A24E8u;
    // 0x3a24e8: 0xc0e92b2  jal         func_3A4AC8
    ctx->pc = 0x3A24E8u;
    SET_GPR_U32(ctx, 31, 0x3A24F0u);
    ctx->pc = 0x3A24ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A24E8u;
    // 0x3a24ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AC8u, 0x3A24E8u, 0x3A24F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A24F0u;
label_3a24f0:
    // 0x3a24f0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A24F0u;
    {
        const bool branch_taken_0x3a24f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A24F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24F0u;
        // 0x3a24f4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a24f0) {
            ctx->pc = 0x3A250Cu;
            goto label_3a250c;
        }
    }
    ctx->pc = 0x3A24F8u;
label_3a24f8:
    // 0x3a24f8: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3A24F8u;
    SET_GPR_U32(ctx, 31, 0x3A2500u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3A24F8u, 0x3A2500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2500u;
label_3a2500:
    // 0x3a2500: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x3a2500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3a2504: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a2504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3a2508: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3a2508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3a250c:
    // 0x3a250c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A250Cu;
    {
        const bool branch_taken_0x3a250c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a250c) {
            ctx->pc = 0x3A2524u;
            goto label_3a2524;
        }
    }
    ctx->pc = 0x3A2514u;
    // 0x3a2514: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3A2514u;
    SET_GPR_U32(ctx, 31, 0x3A251Cu);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3A2514u, 0x3A251Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A251Cu;
label_3a251c:
    // 0x3a251c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3a251cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a2520: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a2520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3a2524:
    // 0x3a2524: 0xc0c7ab8  jal         func_31EAE0
    ctx->pc = 0x3A2524u;
    SET_GPR_U32(ctx, 31, 0x3A252Cu);
    ctx->pc = 0x3A2528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2524u;
    // 0x3a2528: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAE0u, 0x3A2524u, 0x3A252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A252Cu;
label_3a252c:
    // 0x3a252c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A252Cu;
    {
        const bool branch_taken_0x3a252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A252Cu;
        // 0x3a2530: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a252c) {
            ctx->pc = 0x3A253Cu;
            goto label_3a253c;
        }
    }
    ctx->pc = 0x3A2534u;
label_3a2534:
    // 0x3a2534: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x3a2534u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_3a2538:
    // 0x3a2538: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a2538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3a253c:
    // 0x3a253c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x3a253cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a2540: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3a2540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a2544: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x3a2544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a2548: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3a2548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a254c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A254Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A254Cu;
        // 0x3a2550: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A254Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2554u;
    // 0x3a2554: 0x0  nop
    ctx->pc = 0x3a2554u;
    // NOP
    ctx->pc = 0x3a2558u;
}
