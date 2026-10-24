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

// Function: Ring_spawnPiecesB
// Address: 0x1f16d8 - 0x1f17d0
void Ring_spawnPiecesB_0x1f16d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ring_spawnPiecesB_0x1f16d8");
#endif

    switch (ctx->pc) {
        case 0x1f1738u: goto label_1f1738;
        case 0x1f1754u: goto label_1f1754;
        case 0x1f1760u: goto label_1f1760;
        case 0x1f176cu: goto label_1f176c;
        case 0x1f1794u: goto label_1f1794;
        default: break;
    }

    ctx->pc = 0x1f16d8u;

    // 0x1f16d8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f16d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f16dc: 0xe7ba0070  swc1        $f26, 0x70($sp)
    ctx->pc = 0x1f16dcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f16e0: 0xe7b90068  swc1        $f25, 0x68($sp)
    ctx->pc = 0x1f16e0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1f16e4: 0xe7b80060  swc1        $f24, 0x60($sp)
    ctx->pc = 0x1f16e4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f16e8: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x1f16e8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f16ec: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x1f16ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f16f0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1f16f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1f16f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1f16f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1f16f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f16f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f16fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f16fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f1700: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f1700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1704: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1f1704u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1f1708: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1f1708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f170c: 0x3c014290  lui         $at, 0x4290
    ctx->pc = 0x1f170cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17040 << 16));
    // 0x1f1710: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1f1710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1f1714: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1f1714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1f1718: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1f1718u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1f171c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1f171cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1f1720: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1f1720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1f1724: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f1724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f1728: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f1728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f172c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1f172cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1f1730: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1f1730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1f1734: 0x0  nop
    ctx->pc = 0x1f1734u;
    // NOP
label_1f1738:
    // 0x1f1738: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1f1738u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f173c: 0x0  nop
    ctx->pc = 0x1f173cu;
    // NOP
    // 0x1f1740: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f1740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f1744: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f1744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f1748: 0x461a6302  mul.s       $f12, $f12, $f26
    ctx->pc = 0x1f1748u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[26]);
    // 0x1f174c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x1F174Cu;
    SET_GPR_U32(ctx, 31, 0x1F1754u);
    ctx->pc = 0x1F1750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F174Cu;
    // 0x1f1750: 0x46196302  mul.s       $f12, $f12, $f25 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x1F174Cu, 0x1F1754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1754u;
label_1f1754:
    // 0x1f1754: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1f1754u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1f1758: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x1F1758u;
    SET_GPR_U32(ctx, 31, 0x1F1760u);
    ctx->pc = 0x1F175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1758u;
    // 0x1f175c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x1F1758u, 0x1F1760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1760u;
label_1f1760:
    // 0x1f1760: 0x46160542  mul.s       $f21, $f0, $f22
    ctx->pc = 0x1f1760u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1f1764: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x1F1764u;
    SET_GPR_U32(ctx, 31, 0x1F176Cu);
    ctx->pc = 0x1F1768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1764u;
    // 0x1f1768: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x1F1764u, 0x1F176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F176Cu;
label_1f176c:
    // 0x1f176c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1f176cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1f1770: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f1770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1f1774: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1f1774u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f1778: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f177c: 0xe7b8000c  swc1        $f24, 0xC($sp)
    ctx->pc = 0x1f177cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f1780: 0x240503ed  addiu       $a1, $zero, 0x3ED
    ctx->pc = 0x1f1780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
    // 0x1f1784: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f1784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f1788: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f1788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f178c: 0xc07c126  jal         func_1F0498
    ctx->pc = 0x1F178Cu;
    SET_GPR_U32(ctx, 31, 0x1F1794u);
    ctx->pc = 0x1F1790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F178Cu;
    // 0x1f1790: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0498u, 0x1F178Cu, 0x1F1794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1794u;
label_1f1794:
    // 0x1f1794: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x1f1794u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f1798: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1F1798u;
    {
        const bool branch_taken_0x1f1798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1798u;
        // 0x1f179c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1798) {
            ctx->pc = 0x1F1738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1738;
        }
    }
    ctx->pc = 0x1F17A0u;
    // 0x1f17a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1f17a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f17a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1f17a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f17a8: 0xc7ba0070  lwc1        $f26, 0x70($sp)
    ctx->pc = 0x1f17a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1f17ac: 0xc7b90068  lwc1        $f25, 0x68($sp)
    ctx->pc = 0x1f17acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f17b0: 0xc7b80060  lwc1        $f24, 0x60($sp)
    ctx->pc = 0x1f17b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f17b4: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x1f17b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f17b8: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x1f17b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f17bc: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1f17bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f17c0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1f17c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f17c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F17C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F17C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F17C4u;
        // 0x1f17c8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F17C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F17CCu;
    // 0x1f17cc: 0x0  nop
    ctx->pc = 0x1f17ccu;
    // NOP
    ctx->pc = 0x1f17d0u;
}
