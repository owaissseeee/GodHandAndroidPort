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

// Function: func_0037C720
// Address: 0x37c720 - 0x37c930
void func_0037C720_0x37c720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037C720_0x37c720");
#endif

    switch (ctx->pc) {
        case 0x37c778u: goto label_37c778;
        case 0x37c78cu: goto label_37c78c;
        case 0x37c7c0u: goto label_37c7c0;
        case 0x37c7e4u: goto label_37c7e4;
        case 0x37c81cu: goto label_37c81c;
        case 0x37c840u: goto label_37c840;
        case 0x37c86cu: goto label_37c86c;
        case 0x37c8a4u: goto label_37c8a4;
        case 0x37c8e4u: goto label_37c8e4;
        default: break;
    }

    ctx->pc = 0x37c720u;

    // 0x37c720: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x37c720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x37c724: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37c724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37c728: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x37c728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x37c72c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x37c72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x37c730: 0x24100084  addiu       $s0, $zero, 0x84
    ctx->pc = 0x37c730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x37c734: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x37c734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x37c738: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37c738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c73c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37c73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x37c740: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37c740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c744: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x37c744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x37c748: 0x2453a600  addiu       $s3, $v0, -0x5A00
    ctx->pc = 0x37c748u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944256));
    // 0x37c74c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x37c74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x37c750: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x37c750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x37c754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c758: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x37c758u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x37c75c: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x37c75cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x37c760: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x37c760u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x37c764: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x37c764u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x37c768: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x37c768u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x37c76c: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x37c76cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x37c770: 0xc0dce9a  jal         func_373A68
    ctx->pc = 0x37C770u;
    SET_GPR_U32(ctx, 31, 0x37C778u);
    ctx->pc = 0x37C774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C770u;
    // 0x37c774: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A68u, 0x37C770u, 0x37C778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C778u;
label_37c778:
    // 0x37c778: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x37c778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x37c77c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x37c77cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c780: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x37c780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37c784: 0xc0dceda  jal         func_373B68
    ctx->pc = 0x37C784u;
    SET_GPR_U32(ctx, 31, 0x37C78Cu);
    ctx->pc = 0x37C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C784u;
    // 0x37c788: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B68u, 0x37C784u, 0x37C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C78Cu;
label_37c78c:
    // 0x37c78c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x37c78cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c790: 0x1a800058  blez        $s4, . + 4 + (0x58 << 2)
    ctx->pc = 0x37C790u;
    {
        const bool branch_taken_0x37c790 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x37C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C790u;
        // 0x37c794: 0x3c020077  lui         $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c790) {
            ctx->pc = 0x37C8F4u;
            goto label_37c8f4;
        }
    }
    ctx->pc = 0x37C798u;
    // 0x37c798: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x37c798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x37c79c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x37c79cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x37c7a0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x37c7a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x37c7a4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x37c7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x37c7a8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x37c7a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x37c7ac: 0x2456a790  addiu       $s6, $v0, -0x5870
    ctx->pc = 0x37c7acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
    // 0x37c7b0: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x37c7b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x37c7b4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x37c7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x37c7b8: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x37c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x37c7bc: 0x0  nop
    ctx->pc = 0x37c7bcu;
    // NOP
label_37c7c0:
    // 0x37c7c0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37C7C0u;
    {
        const bool branch_taken_0x37c7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c7c0) {
            ctx->pc = 0x37C7F4u;
            goto label_37c7f4;
        }
    }
    ctx->pc = 0x37C7C8u;
    // 0x37c7c8: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x37C7C8u;
    {
        const bool branch_taken_0x37c7c8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C7C8u;
        // 0x37c7cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c7c8) {
            ctx->pc = 0x37C7ECu;
            goto label_37c7ec;
        }
    }
    ctx->pc = 0x37C7D0u;
    // 0x37c7d0: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x37c7d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x37c7d4: 0x2406ff81  addiu       $a2, $zero, -0x7F
    ctx->pc = 0x37c7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967169));
    // 0x37c7d8: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x37c7d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37c7dc: 0xc0dcdc2  jal         func_373708
    ctx->pc = 0x37C7DCu;
    SET_GPR_U32(ctx, 31, 0x37C7E4u);
    ctx->pc = 0x37C7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C7DCu;
    // 0x37c7e0: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373708u, 0x37C7DCu, 0x37C7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C7E4u;
label_37c7e4:
    // 0x37c7e4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x37C7E4u;
    {
        const bool branch_taken_0x37c7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C7E4u;
        // 0x37c7e8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c7e4) {
            ctx->pc = 0x37C8E8u;
            goto label_37c8e8;
        }
    }
    ctx->pc = 0x37C7ECu;
label_37c7ec:
    // 0x37c7ec: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x37C7ECu;
    {
        const bool branch_taken_0x37c7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C7ECu;
        // 0x37c7f0: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c7ec) {
            ctx->pc = 0x37C894u;
            goto label_37c894;
        }
    }
    ctx->pc = 0x37C7F4u;
label_37c7f4:
    // 0x37c7f4: 0x12a0001f  beqz        $s5, . + 4 + (0x1F << 2)
    ctx->pc = 0x37C7F4u;
    {
        const bool branch_taken_0x37c7f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C7F4u;
        // 0x37c7f8: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c7f4) {
            ctx->pc = 0x37C874u;
            goto label_37c874;
        }
    }
    ctx->pc = 0x37C7FCu;
    // 0x37c7fc: 0x86220042  lh          $v0, 0x42($s1)
    ctx->pc = 0x37c7fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x37c800: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37c800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37c804: 0x0  nop
    ctx->pc = 0x37c804u;
    // NOP
    // 0x37c808: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x37c808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x37c80c: 0x46176302  mul.s       $f12, $f12, $f23
    ctx->pc = 0x37c80cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
    // 0x37c810: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x37c810u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[22]);
    // 0x37c814: 0xc0e863c  jal         func_3A18F0
    ctx->pc = 0x37C814u;
    SET_GPR_U32(ctx, 31, 0x37C81Cu);
    ctx->pc = 0x37C818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C814u;
    // 0x37c818: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18F0u, 0x37C814u, 0x37C81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C81Cu;
label_37c81c:
    // 0x37c81c: 0x86220042  lh          $v0, 0x42($s1)
    ctx->pc = 0x37c81cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x37c820: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x37c820u;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
    // 0x37c824: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37c824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37c828: 0x0  nop
    ctx->pc = 0x37c828u;
    // NOP
    // 0x37c82c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x37c82cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x37c830: 0x46176302  mul.s       $f12, $f12, $f23
    ctx->pc = 0x37c830u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[23]);
    // 0x37c834: 0x46166303  div.s       $f12, $f12, $f22
    ctx->pc = 0x37c834u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[22]);
    // 0x37c838: 0xc0e867e  jal         func_3A19F8
    ctx->pc = 0x37C838u;
    SET_GPR_U32(ctx, 31, 0x37C840u);
    ctx->pc = 0x37C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C838u;
    // 0x37c83c: 0x4615a502  mul.s       $f20, $f20, $f21 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A19F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A19F8u, 0x37C838u, 0x37C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C840u;
label_37c840:
    // 0x37c840: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x37c840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x37c844: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x37c844u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x37c848: 0x4600a064  .word       0x4600A064                   # cvt.w.s     $f1, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37c848u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37c84c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x37c84cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x37c850: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x37c850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37c854: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x37c854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x37c858: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x37c858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x37c85c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37c85cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x37c860: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x37c860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x37c864: 0xc0dcdc2  jal         func_373708
    ctx->pc = 0x37C864u;
    SET_GPR_U32(ctx, 31, 0x37C86Cu);
    ctx->pc = 0x373708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373708u, 0x37C864u, 0x37C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C86Cu;
label_37c86c:
    // 0x37c86c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x37C86Cu;
    {
        const bool branch_taken_0x37c86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C86Cu;
        // 0x37c870: 0x254102a  slt         $v0, $s2, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c86c) {
            ctx->pc = 0x37C8ECu;
            goto label_37c8ec;
        }
    }
    ctx->pc = 0x37C874u;
label_37c874:
    // 0x37c874: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x37C874u;
    {
        const bool branch_taken_0x37c874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c874) {
            ctx->pc = 0x37C878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C874u;
            // 0x37c878: 0x86240040  lh          $a0, 0x40($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C8ACu;
            goto label_37c8ac;
        }
    }
    ctx->pc = 0x37C87Cu;
    // 0x37c87c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x37C87Cu;
    {
        const bool branch_taken_0x37c87c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x37C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C87Cu;
        // 0x37c880: 0x86240002  lh          $a0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c87c) {
            ctx->pc = 0x37C890u;
            goto label_37c890;
        }
    }
    ctx->pc = 0x37C884u;
    // 0x37c884: 0x2405fff1  addiu       $a1, $zero, -0xF
    ctx->pc = 0x37c884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x37c888: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37C888u;
    {
        const bool branch_taken_0x37c888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C888u;
        // 0x37c88c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c888) {
            ctx->pc = 0x37C898u;
            goto label_37c898;
        }
    }
    ctx->pc = 0x37C890u;
label_37c890:
    // 0x37c890: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x37c890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_37c894:
    // 0x37c894: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37c894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37c898:
    // 0x37c898: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x37c898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37c89c: 0xc0dcda4  jal         func_373690
    ctx->pc = 0x37C89Cu;
    SET_GPR_U32(ctx, 31, 0x37C8A4u);
    ctx->pc = 0x37C8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C89Cu;
    // 0x37c8a0: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373690u, 0x37C89Cu, 0x37C8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C8A4u;
label_37c8a4:
    // 0x37c8a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x37C8A4u;
    {
        const bool branch_taken_0x37c8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C8A4u;
        // 0x37c8a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c8a4) {
            ctx->pc = 0x37C8E8u;
            goto label_37c8e8;
        }
    }
    ctx->pc = 0x37C8ACu;
label_37c8ac:
    // 0x37c8ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x37c8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37c8b0: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x37c8b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x37c8b4: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x37c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x37c8b8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x37c8b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x37c8bc: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x37c8bcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
    // 0x37c8c0: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x37c8c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x37c8c4: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x37C8C4u;
    {
        const bool branch_taken_0x37c8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c8c4) {
            ctx->pc = 0x37C8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C8C4u;
            // 0x37c8c8: 0x24a5fff1  addiu       $a1, $a1, -0xF (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967281));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C8D0u;
            goto label_37c8d0;
        }
    }
    ctx->pc = 0x37C8CCu;
    // 0x37c8cc: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x37c8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_37c8d0:
    // 0x37c8d0: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x37c8d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x37c8d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37c8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c8d8: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x37c8d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37c8dc: 0xc0dcda4  jal         func_373690
    ctx->pc = 0x37C8DCu;
    SET_GPR_U32(ctx, 31, 0x37C8E4u);
    ctx->pc = 0x37C8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C8DCu;
    // 0x37c8e0: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373690u, 0x37C8DCu, 0x37C8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C8E4u;
label_37c8e4:
    // 0x37c8e4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x37c8e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_37c8e8:
    // 0x37c8e8: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x37c8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_37c8ec:
    // 0x37c8ec: 0x5440ffb4  bnel        $v0, $zero, . + 4 + (-0x4C << 2)
    ctx->pc = 0x37C8ECu;
    {
        const bool branch_taken_0x37c8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37c8ec) {
            ctx->pc = 0x37C8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C8ECu;
            // 0x37c8f0: 0x8ec20014  lw          $v0, 0x14($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37C7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37c7c0;
        }
    }
    ctx->pc = 0x37C8F4u;
label_37c8f4:
    // 0x37c8f4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x37c8f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37c8f8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x37c8f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37c8fc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x37c8fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37c900: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37c900u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37c904: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x37c904u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37c908: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x37c908u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c90c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x37c90cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c914: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x37c914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x37c918: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x37c918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x37c91c: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x37c91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x37c920: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x37c920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37c924: 0x3e00008  jr          $ra
    ctx->pc = 0x37C924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C924u;
        // 0x37c928: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C92Cu;
    // 0x37c92c: 0x0  nop
    ctx->pc = 0x37c92cu;
    // NOP
    ctx->pc = 0x37c930u;
}
